/* Copyright (C) 2024 Free Software Foundation, Inc.
   Contributed by Alibaba Damo Academy Xuantie Team.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GCC is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

#define IN_TARGET_CODE 1

#include "attribs.h"
#include "config.h"
#include "coretypes.h"
#include "diagnostic-core.h"
#include "expmed.h"
#include "expr.h"
#include "gimple-expr.h"
#include "langhooks.h"
#include "memmodel.h"
#include "optabs.h"
#include "profile-count.h"
#include "recog.h"
#include "regs.h"
#include "rtl.h"
#include "stor-layout.h"
#include "stringpool.h"
#include "system.h"
#include "tm.h"
#include "tree.h"

#include "function.h"
#include "riscv-protos.h"
#include "tree-pretty-print.h"
#include "xregex.h"

#define RVM_TYPE_ATTR_NAME "RVM type"

/* If TYPE is an ABI-defined RVM type, return its attribute descriptor,
   otherwise return null.  */

struct pragma_intrinsic_flags
{
  int intrinsic_riscv_xt_subext;
};

static void
xt_pragma_intrinsic_flags_pollute (struct pragma_intrinsic_flags *flags)
{
  /* We already defer the required extension checking to expantion time, so we
     only need to pollute those flags that might affect the type registration.
   */
  flags->intrinsic_riscv_xt_subext = riscv_xt_subext;

  riscv_xt_subext = riscv_xt_subext | MASK_XTHEADMATRIX;
}

static void
xt_pragma_intrinsic_flags_restore (struct pragma_intrinsic_flags *flags)
{
  riscv_xt_subext = flags->intrinsic_riscv_xt_subext;
}

/* RAII class for enabling enough RVM features to define the built-in
   types and implement the thead_matrix.h pragma.

   Note: According to 'TYPE_MODE' macro implementation, we need set
   have_regs_of_mode[mode] to be true if we want to get the exact mode
   from 'TYPE_MODE'. However, have_regs_of_mode has not been set yet in
   targetm.init_builtins (). We need rvm_switcher to set have_regs_of_mode
   before targetm.init_builtins () and recover back have_regs_of_mode
   after targetm.init_builtins ().  */
class rvm_switcher
{
public:
  rvm_switcher (bool pollute_flags = true);
  ~rvm_switcher ();

private:
  bool m_old_have_regs_of_mode[MAX_MACHINE_MODE];
  struct pragma_intrinsic_flags backup_flags;
  bool m_pollute_flags;
};

static void xt_rvm_register_builtin_matrix_types_on_null ();

rvm_switcher::rvm_switcher (bool pollute_flags)
    : m_pollute_flags (pollute_flags)
{
  if (m_pollute_flags)
    {
      xt_pragma_intrinsic_flags_pollute (&backup_flags);
      riscv_option_override ();
    }

  /* Set have_regs_of_mode before targetm.init_builtins ().  */
  memcpy (m_old_have_regs_of_mode, have_regs_of_mode,
	  sizeof (have_regs_of_mode));
  for (int i = 0; i < NUM_MACHINE_MODES; ++i)
    if (riscv_v_ext_vector_mode_p ((machine_mode)i))
      have_regs_of_mode[i] = true;

  /* Not necessary to adjust mode and register type if we don't pollute
     flags.  */
  if (m_pollute_flags)
    {
      init_adjust_machine_modes ();

      xt_rvm_register_builtin_matrix_types_on_null ();
    }
}

rvm_switcher::~rvm_switcher ()
{
  /* Recover back have_regs_of_mode.  */
  memcpy (have_regs_of_mode, m_old_have_regs_of_mode,
	  sizeof (have_regs_of_mode));

  if (m_pollute_flags)
    {
      xt_pragma_intrinsic_flags_restore (&backup_flags);

      /* Re-initialize after the flags are restored.  */
      riscv_option_override ();
      init_adjust_machine_modes ();
    }
}

tree
xt_rvm_lookup_matrix_type_attribute (const_tree type)
{
  if (type == error_mark_node)
    return NULL_TREE;
  return lookup_attribute (RVM_TYPE_ATTR_NAME, TYPE_ATTRIBUTES (type));
}

/*
 * Add type attributes to builtin type tree, currently only the mangled name.
 */
static void
xt_rvm_add_matrix_type_attribute (tree type, const char *mangled_name)
{
  tree mangled_name_tree = get_identifier (mangled_name);
  tree value = tree_cons (NULL_TREE, mangled_name_tree, NULL_TREE);
  TYPE_ATTRIBUTES (type) = tree_cons (get_identifier (RVM_TYPE_ATTR_NAME),
				      value, TYPE_ATTRIBUTES (type));
}

/* Force TYPE to be a sizeless type.  */
static void
xt_rvm_make_matrix_type_sizeless (tree type)
{
  TYPE_ATTRIBUTES (type) = tree_cons (get_identifier ("RVM sizeless type"),
				      NULL_TREE, TYPE_ATTRIBUTES (type));
}

/* Return true if TYPE is a sizeless type.  */
bool
xt_rvm_sizeless_matrix_type_p (const_tree type)
{
  if (type == error_mark_node)
    return NULL_TREE;
  return lookup_attribute ("RVM sizeless type", TYPE_ATTRIBUTES (type));
}

/* If TYPE is a built-in type defined by the RVM ABI, return the mangled name,
   otherwise return NULL.  */
const char *
xt_rvm_mangle_builtin_type (const_tree type)
{
  if (TYPE_NAME (type) && TREE_CODE (TYPE_NAME (type)) == TYPE_DECL)
    type = TREE_TYPE (TYPE_NAME (type));
  if (tree attr = xt_rvm_lookup_matrix_type_attribute (type))
    if (tree id = TREE_VALUE (chain_index (0, TREE_VALUE (attr))))
      return IDENTIFIER_POINTER (id);
  return NULL;
}

bool
check_imm_in_range_p (tree arg, int low, int high)
{
  if (!tree_fits_uhwi_p (arg))
    return false;

  if (!IN_RANGE (tree_to_uhwi (arg), low, high))
    return false;

  return true;
}

bool
report_imm_in_range_p (location_t location, tree fndecl, unsigned int nargs,
		       tree *args, unsigned int idx, int low, int high)
{
  if (nargs < idx)
    return true;

  if (!tree_fits_uhwi_p (args[idx]))
    {
      error_at (location,
		"argument %d of %qE must be an integer constant"
		" expression",
		idx + 1, fndecl);
      return true;
    }

  if (!check_imm_in_range_p (args[idx], low, high))
    {
      error_at (location,
		"passing %wd to argument %d of %qE, which expects"
		" a value in the range [%wd, %wd]",
		tree_to_uhwi (args[idx]), idx + 1, fndecl, low, high);
      return true;
    }
  return false;
}

/* Static information about each matrix type.  */
struct matrix_type_info
{
  /* The name of the type as declared by riscv_matrix.h
     which is recommend to use. For example: 'vint32m1_t'.  */
  const char *name;

  /* ABI name of matrix type. The type is always available
     under this name, even when riscv_matrix.h isn't included.
     For example:  '__rvm_int32m1_t'.  */
  const char *abi_name;

  /* The C++ mangling of ABI_NAME.  */
  const char *mangled_name;
};

/* Static information about each RVM type.  */
static CONSTEXPR const matrix_type_info matrix_types[] = {
#define DEF_RVM_TYPE(NAME, NCHARS, ABI_NAME, ARGS...)                         \
  { #NAME, #ABI_NAME, "u" #NCHARS #ABI_NAME },
#include "xuantie-ext-builtins-matrix.def"
};

class xt_registered_function;
class xt_function_base;
class xt_function_builder;

static GTY (()) vec<xt_registered_function *, va_gc> *xt_registered_functions;

enum rvm_base_type
{
#define DEF_RVM_TYPE(NAME, ARGS...) RVM_BASE_##NAME,
#define DEF_RVM_BASE_TYPE(NAME, ARGS...) RVM_BASE_##NAME,
#include "xuantie-ext-builtins-matrix.def"
  NUM_BASE_TYPES
};

enum rvm_type_index
{
#define DEF_RVM_TYPE(NAME, ...) RVM_TYPE_##NAME,
#include "xuantie-ext-builtins-matrix.def"
  NUM_RVM_TYPE,
  NUM_RVM_INVALID = NUM_RVM_TYPE
};

/* Builtin types that are used to register RVM intrinsics.  */
struct GTY (()) rvm_builtin_types_t
{
  tree matrix;
  tree scalar;
  tree matrix_ptr;
  tree scalar_ptr;
  tree scalar_const_ptr;
};

rvm_builtin_types_t builtin_types[NUM_RVM_TYPE + 1];

machine_mode
xt_rvm_get_matrix_mode (rvm_type_index type_index)
{
  switch (type_index)
    {
#define DEF_RVM_TYPE(NAME, NCHARS, ABI_NAME, SCALAR_TYPE, MATRIX_MODE,        \
		     SUFFIX, SCALAR_SUFFIX)                                   \
  case RVM_TYPE_##NAME:                                                       \
    return MATRIX_MODE##mode;
#include "xuantie-ext-builtins-matrix.def"
    default:
      break;
    }
  return VOIDmode;
}

struct rvm_arg_type_info
{
  CONSTEXPR
  rvm_arg_type_info (rvm_base_type base_type_in) : base_type (base_type_in) {}
  enum rvm_base_type base_type;

  tree get_tree_type (rvm_type_index) const;
};

const char *
xt_rvm_get_index_suffix (rvm_type_index type_index)
{
  switch (type_index)
    {
#define DEF_RVM_TYPE(NAME, NCHARS, ABI_NAME, SCALAR_TYPE, MATRIX_MODE,        \
		     SUFFIX, SCALAR_SUFFIX)                                   \
  case RVM_TYPE_##NAME:                                                       \
    return #SUFFIX;
#include "xuantie-ext-builtins-matrix.def"
    default:
      break;
    }
  return "";
}

tree
rvm_arg_type_info::get_tree_type (rvm_type_index type_index) const
{
  switch (base_type)
    {
#define DEF_RVM_BASE_TYPE(NAME, TYPE)                                         \
  case RVM_BASE_##NAME:                                                       \
    return TYPE;

#define DEF_RVM_TYPE(NAME, ARGS...)                                           \
  case RVM_BASE_##NAME:                                                       \
    return builtin_types[RVM_TYPE_##NAME].matrix;
#include "xuantie-ext-builtins-matrix.def"
    default:
      gcc_unreachable ();
    }
  gcc_unreachable ();
}

/* Enumerates the RVM operand types.  */
enum operand_type_index
{
  OP_TYPE_none,
#define DEF_RVM_OP_TYPE(NAME) OP_TYPE_##NAME,
#include "xuantie-ext-builtins-matrix.def"
  NUM_OP_TYPES
};

/* Static information about operand suffix for each RVM type.  */
const char *const operand_suffixes[NUM_OP_TYPES] = {
  "", /* OP_TYPE_none.  */
#define DEF_RVM_OP_TYPE(NAME) "_" #NAME,
#include "xuantie-ext-builtins-matrix.def"
};

struct rvm_type_info
{
  enum rvm_type_index index;
  uint64_t required_extensions;
};

struct rvm_op_info
{
  const rvm_type_info *types;
  const operand_type_index op;
  rvm_arg_type_info ret;
  const rvm_arg_type_info *args;
};

static const rvm_type_info all_ops[] = {
#define DEF_RVM_I_OPS(TYPE, REQUIRE) { RVM_TYPE_##TYPE, REQUIRE },
#define DEF_RVM_U_OPS(TYPE, REQUIRE) { RVM_TYPE_##TYPE, REQUIRE },
#define DEF_RVM_F_OPS(TYPE, REQUIRE) { RVM_TYPE_##TYPE, REQUIRE },
#define DEF_RVM_M2_OPS(TYPE, REQUIRE) { RVM_TYPE_##TYPE, REQUIRE },
#include "xuantie-ext-builtins-matrix.def"
  { NUM_RVM_TYPE, 0 }
};

static const rvm_type_info all_m1_ops[] = {
#define DEF_RVM_I_OPS(TYPE, REQUIRE) { RVM_TYPE_##TYPE, REQUIRE },
#define DEF_RVM_U_OPS(TYPE, REQUIRE) { RVM_TYPE_##TYPE, REQUIRE },
#define DEF_RVM_F_OPS(TYPE, REQUIRE) { RVM_TYPE_##TYPE, REQUIRE },
#include "xuantie-ext-builtins-matrix.def"
  { NUM_RVM_TYPE, 0 }
};

static const rvm_type_info all_m1_scalar_ops[] = {
#define DEF_RVM_I_OPS(TYPE, REQUIRE) { RVM_TYPE_##TYPE, REQUIRE },
#define DEF_RVM_U_OPS(TYPE, REQUIRE) { RVM_TYPE_##TYPE, REQUIRE },
#define DEF_RVM_F_OPS(TYPE, REQUIRE) { RVM_TYPE_##TYPE, REQUIRE },
#include "xuantie-ext-builtins-matrix.def"
  { NUM_RVM_TYPE, 0 }
};

static const rvm_type_info all_m2_ops[] = {
#define DEF_RVM_M2_OPS(TYPE, REQUIRE) { RVM_TYPE_##TYPE, REQUIRE },
#include "xuantie-ext-builtins-matrix.def"
  { NUM_RVM_TYPE, 0 }
};

static const rvm_type_info iu_ops[] = {
#define DEF_RVM_I_OPS(TYPE, REQUIRE) { RVM_TYPE_##TYPE, REQUIRE },
#define DEF_RVM_U_OPS(TYPE, REQUIRE) { RVM_TYPE_##TYPE, REQUIRE },
#include "xuantie-ext-builtins-matrix.def"
  { NUM_RVM_TYPE, 0 }
};

static const rvm_type_info si_ops[] = {
#define DEF_RVM_SI_OPS(TYPE, REQUIRE) { RVM_TYPE_##TYPE, REQUIRE },
#include "xuantie-ext-builtins-matrix.def"
  { NUM_RVM_TYPE, 0 }
};

static CONSTEXPR const rvm_arg_type_info rvm_arg_type_info_end
    = rvm_arg_type_info (NUM_BASE_TYPES);

static CONSTEXPR const rvm_arg_type_info one_args[][2] = {
#define DEF_RVM_TYPE(NAME, ...)                                               \
  { rvm_arg_type_info (RVM_BASE_##NAME), rvm_arg_type_info_end },
#include "xuantie-ext-builtins-matrix.def"
};

/* A list of args for size_t func () function.  */
static CONSTEXPR const rvm_arg_type_info void_args[]
    = { rvm_arg_type_info_end };

/* A list of args for size_t func () function.  */

static CONSTEXPR const rvm_arg_type_info size_args[]
    = { rvm_arg_type_info (RVM_BASE_size_t), rvm_arg_type_info_end };

static CONSTEXPR const rvm_op_info size_size_ops
    = { si_ops,                              /* Types  */
	OP_TYPE_none,                        /* Suffix */
	rvm_arg_type_info (RVM_BASE_size_t), /* Return type  */
	size_args /* Args */ };

static CONSTEXPR const rvm_op_info void_void_ops
    = { si_ops,                            /* Types  */
	OP_TYPE_none,                      /* Suffix */
	rvm_arg_type_info (RVM_BASE_void), /* Return type  */
	void_args /* Args */ };

static CONSTEXPR const rvm_op_info size_void_ops
    = { si_ops,                              /* Types  */
	OP_TYPE_none,                        /* Suffix */
	rvm_arg_type_info (RVM_BASE_size_t), /* Return type  */
	void_args /* Args */ };

static CONSTEXPR const rvm_arg_type_info cptr_long_args[]
    = { rvm_arg_type_info (RVM_BASE_scalar_const_ptr),
	rvm_arg_type_info (RVM_BASE_size_t), rvm_arg_type_info_end };

static CONSTEXPR const rvm_op_info m_cptr_long_ops
    = { all_m1_scalar_ops,                   /* Types  */
	OP_TYPE_none,                        /* Suffix */
	rvm_arg_type_info (RVM_BASE_matrix), /* Return type  */
	cptr_long_args /* Args */ };

static CONSTEXPR const rvm_arg_type_info cptr_long_m_args[]
    = { rvm_arg_type_info (RVM_BASE_scalar_const_ptr),
	rvm_arg_type_info (RVM_BASE_size_t),
	rvm_arg_type_info (RVM_BASE_matrix), rvm_arg_type_info_end };

static CONSTEXPR const rvm_op_info void_cptr_long_m_ops
    = { all_m1_scalar_ops,                 /* Types  */
	OP_TYPE_none,                      /* Suffix */
	rvm_arg_type_info (RVM_BASE_void), /* Return type  */
	cptr_long_m_args /* Args */ };

static CONSTEXPR const rvm_arg_type_info m_size_args[]
    = { rvm_arg_type_info (RVM_BASE_matrix),
	rvm_arg_type_info (RVM_BASE_size_t), rvm_arg_type_info_end };

static CONSTEXPR const rvm_op_info all_m1_m_mv_ops
    = { all_m1_ops,                          /* Types  */
	OP_TYPE_mv,                          /* Suffix */
	rvm_arg_type_info (RVM_BASE_matrix), /* Return type  */
	m_size_args /* Args */ };

static CONSTEXPR const rvm_arg_type_info scalar_args[]
    = { rvm_arg_type_info (RVM_BASE_scalar), rvm_arg_type_info_end };

static CONSTEXPR const rvm_op_info iu_m_scalar_ops
    = { iu_ops,                              /* Types  */
	OP_TYPE_m_x,                         /* Suffix */
	rvm_arg_type_info (RVM_BASE_matrix), /* Return type  */
	scalar_args /* Args */ };

static CONSTEXPR const rvm_arg_type_info m_scalar_size_args[]
    = { rvm_arg_type_info (RVM_BASE_matrix),
	rvm_arg_type_info (RVM_BASE_scalar),
	rvm_arg_type_info (RVM_BASE_size_t), rvm_arg_type_info_end };

static CONSTEXPR const rvm_op_info iu_m_m_scalar_size_ops
    = { iu_ops,                              /* Types  */
	OP_TYPE_m_x,                         /* Suffix */
	rvm_arg_type_info (RVM_BASE_matrix), /* Return type  */
	m_scalar_size_args /* Args */ };

static CONSTEXPR const rvm_op_info iu_scalar_m_size_ops
    = { iu_ops,                              /* Types  */
	OP_TYPE_x_m,                         /* Suffix */
	rvm_arg_type_info (RVM_BASE_scalar), /* Return type  */
	m_size_args /* Args */ };

static CONSTEXPR const rvm_op_info m_void_ops
    = { all_ops,                             /* Types  */
	OP_TYPE_none,                        /* Suffix */
	rvm_arg_type_info (RVM_BASE_matrix), /* Return type  */
	void_args /* Args */ };

static CONSTEXPR const rvm_op_info all_void_ops
    = { all_ops,                             /* Types  */
	OP_TYPE_none,                        /* Suffix */
	rvm_arg_type_info (RVM_BASE_matrix), /* Return type  */
	void_args /* Args */ };

static CONSTEXPR const rvm_arg_type_info m_size_mtrunc_args[]
    = { rvm_arg_type_info (RVM_BASE_matrix),
	rvm_arg_type_info (RVM_BASE_size_t),
	rvm_arg_type_info (RVM_BASE_mtrunc), rvm_arg_type_info_end };

static CONSTEXPR const rvm_op_info allm2_m_m_size_mtrunc_ops
    = { all_m2_ops,                          /* Types  */
	OP_TYPE_none,                        /* Suffix */
	rvm_arg_type_info (RVM_BASE_matrix), /* Return type  */
	m_size_mtrunc_args /* Args */ };

static CONSTEXPR const rvm_op_info allm2_mtrunc_m_size__ops
    = { all_m2_ops,                          /* Types  */
	OP_TYPE_none,                        /* Suffix */
	rvm_arg_type_info (RVM_BASE_mtrunc), /* Return type  */
	m_size_args /* Args */ };

#define DEF_RVM_FUNCTION_BY_LIST0(DEF, NAME, RET_TYPE)                        \
  static CONSTEXPR const rvm_op_info NAME##RET_TYPE##_ops                     \
      = { si_ops, OP_TYPE_none, rvm_arg_type_info (RVM_BASE_RET_TYPE),        \
	  void_args };

#define DEF_RVM_FUNCTION_BY_LIST1(DEF, NAME, RET_TYPE, ARGS0)                 \
  static CONSTEXPR const rvm_arg_type_info                                    \
      NAME##DEF##RET_TYPE##ARGS0##_args[]                                     \
      = { rvm_arg_type_info (RVM_BASE_##ARGS0), rvm_arg_type_info_end };      \
  static CONSTEXPR const rvm_op_info NAME##DEF##RET_TYPE##ARGS0##_ops         \
      = { si_ops, OP_TYPE_none, rvm_arg_type_info (RVM_BASE_##RET_TYPE),      \
	  NAME##DEF##RET_TYPE##ARGS0##_args };

#define DEF_RVM_FUNCTION_BY_LIST2(DEF, NAME, RET_TYPE, ARGS0, ARGS1)          \
  static CONSTEXPR const rvm_arg_type_info                                    \
      NAME##DEF##RET_TYPE##ARGS0##ARGS1##_args[]                              \
      = { rvm_arg_type_info (RVM_BASE_##ARGS0),                               \
	  rvm_arg_type_info (RVM_BASE_##ARGS1), rvm_arg_type_info_end };      \
  static CONSTEXPR const rvm_op_info NAME##DEF##RET_TYPE##ARGS0##ARGS1##_ops  \
      = { si_ops, OP_TYPE_none, rvm_arg_type_info (RVM_BASE_##RET_TYPE),      \
	  NAME##DEF##RET_TYPE##ARGS0##ARGS1##_args };

#define DEF_RVM_FUNCTION_BY_LIST3(DEF, NAME, RET_TYPE, ARGS0, ARGS1, ARGS2)   \
  static CONSTEXPR const rvm_arg_type_info                                    \
      NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##_args[]                       \
      = { rvm_arg_type_info (RVM_BASE_##ARGS0),                               \
	  rvm_arg_type_info (RVM_BASE_##ARGS1),                               \
	  rvm_arg_type_info (RVM_BASE_##ARGS2), rvm_arg_type_info_end };      \
  static CONSTEXPR const rvm_op_info                                          \
      NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##_ops                          \
      = { si_ops, OP_TYPE_none, rvm_arg_type_info (RVM_BASE_##RET_TYPE),      \
	  NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##_args };

#define DEF_RVM_FUNCTION_BY_LIST4(DEF, NAME, RET_TYPE, ARGS0, ARGS1, ARGS2,   \
				  ARGS3)                                      \
  static CONSTEXPR const rvm_arg_type_info                                    \
      NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##_args[]                \
      = { rvm_arg_type_info (RVM_BASE_##ARGS0),                               \
	  rvm_arg_type_info (RVM_BASE_##ARGS1),                               \
	  rvm_arg_type_info (RVM_BASE_##ARGS2),                               \
	  rvm_arg_type_info (RVM_BASE_##ARGS3), rvm_arg_type_info_end };      \
  static CONSTEXPR const rvm_op_info                                          \
      NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##_ops                   \
      = { si_ops, OP_TYPE_none, rvm_arg_type_info (RVM_BASE_##RET_TYPE),      \
	  NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##_args };

#define DEF_RVM_FUNCTION_BY_LIST5(DEF, NAME, RET_TYPE, ARGS0, ARGS1, ARGS2,   \
				  ARGS3, ARGS4)                               \
  static CONSTEXPR const rvm_arg_type_info                                    \
      NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##ARGS4##_args[]         \
      = { rvm_arg_type_info (RVM_BASE_##ARGS0),                               \
	  rvm_arg_type_info (RVM_BASE_##ARGS1),                               \
	  rvm_arg_type_info (RVM_BASE_##ARGS2),                               \
	  rvm_arg_type_info (RVM_BASE_##ARGS3),                               \
	  rvm_arg_type_info (RVM_BASE_##ARGS4),                               \
	  rvm_arg_type_info_end };                                            \
  static CONSTEXPR const rvm_op_info                                          \
      NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##ARGS4##_ops            \
      = { si_ops, OP_TYPE_none, rvm_arg_type_info (RVM_BASE_##RET_TYPE),      \
	  NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##ARGS4##_args };

#define DEF_RVM_FUNCTION_BY_LIST6(DEF, NAME, RET_TYPE, ARGS0, ARGS1, ARGS2,    \
				  ARGS3, ARGS4, ARGS5)                         \
  static CONSTEXPR const rvm_arg_type_info                                     \
      NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##ARGS4##ARGS5##_args[]   \
      = { rvm_arg_type_info (RVM_BASE_##ARGS0),                                \
	  rvm_arg_type_info (RVM_BASE_##ARGS1),                                \
	  rvm_arg_type_info (RVM_BASE_##ARGS2),                                \
	  rvm_arg_type_info (RVM_BASE_##ARGS3),                                \
	  rvm_arg_type_info (RVM_BASE_##ARGS4),                                \
	  rvm_arg_type_info (RVM_BASE_##ARGS5),                                \
	  rvm_arg_type_info_end };                                             \
  static CONSTEXPR const rvm_op_info                                           \
      NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##ARGS4##ARGS5##_ops      \
      = {                                                                      \
	  si_ops, OP_TYPE_none, rvm_arg_type_info (RVM_BASE_##RET_TYPE),       \
	  NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##ARGS4##ARGS5##_args \
	};

#define DEF_RVM_FUNCTION_BY_LIST(NARGS, LIST...)                              \
  DEF_RVM_FUNCTION_BY_LIST##NARGS (LIST)
#include "xuantie-ext-builtins-matrix.def"

enum required_ext
{
  XTHEADMATRIX0P3_EXT
};

static inline const char *
reqired_ext_to_isa_name (enum required_ext)
{
  return "xtheadmatrix0p3";
}

static inline bool
required_extensions_specified (enum required_ext)
{
  return TARGET_XTHEADMATRIX0P3;
}

/* Static information about a set of functions.  */
struct function_group_info
{
  /* The base name, as a string.  */
  const char *base_name;

  /* Describes the behavior associated with the function base name.  */
  const xt_function_base *const *base;
  const rvm_op_info ops_infos;

  required_ext required_extensions;
};

class GTY ((user)) xt_function_instance
{
public:
  xt_function_instance (const char *, const xt_function_base *, rvm_type_info,
			const rvm_op_info *);

  bool operator== (const xt_function_instance &) const;
  bool operator!= (const xt_function_instance &) const;

  /* Return true if return type or arguments are floating point type.  */
  bool any_type_float_p () const;

  tree get_return_type () const;
  tree get_arg_type (unsigned opno) const;

  /* The properties of the function.  (The explicit "enum"s are required
     for gengtype.)  */
  const char *base_name;
  const xt_function_base *base;
  rvm_type_info type;
  const rvm_op_info *op_info;
};

xt_function_instance::xt_function_instance (const char *base_name_in,
					    const xt_function_base *base_in,
					    rvm_type_info type_in,
					    const rvm_op_info *op_info_in)
    : base_name (base_name_in), base (base_in), type (type_in),
      op_info (op_info_in)
{
}

bool
xt_function_instance::operator== (const xt_function_instance &other) const
{
  for (unsigned int i = 0; op_info->args[i].base_type != NUM_BASE_TYPES; ++i)
    if (op_info->args[i].base_type != other.op_info->args[i].base_type)
      return false;
  return (base == other.base && type.index == other.type.index
	  && op_info->op == other.op_info->op
	  && op_info->ret.base_type == other.op_info->ret.base_type);
}

bool
xt_function_instance::any_type_float_p () const
{
  if (FLOAT_MODE_P (TYPE_MODE (get_return_type ())))
    return true;

  for (int i = 0; op_info->args[i].base_type != NUM_BASE_TYPES; ++i)
    if (FLOAT_MODE_P (TYPE_MODE (get_arg_type (i))))
      return true;

  return false;
}

tree
xt_function_instance::get_return_type () const
{
  return op_info->ret.get_tree_type (type.index);
}

tree
xt_function_instance::get_arg_type (unsigned opno) const
{
  return op_info->args[opno].get_tree_type (type.index);
}

class xt_function_base
{
public:
  /* Shape the function name according to xt_function_instance.  */
  virtual char *get_name (xt_function_builder &b ATTRIBUTE_UNUSED,
			  const xt_function_instance &,
			  bool overloaded_p ATTRIBUTE_UNUSED) const
      = 0;

  /* Define all functions associated with the given group.  */
  virtual void build (xt_function_builder &, const function_group_info &) const
      = 0;

  /* Define all functions associated with the given group.  */
  virtual insn_code
  get_insn_code (xt_function_builder &b ATTRIBUTE_UNUSED,
		 const xt_function_instance &instance ATTRIBUTE_UNUSED) const
      = 0;

  virtual bool has_target_p (tree return_type) const = 0;

  virtual unsigned int get_mcfg_num () const = 0;

  virtual bool can_be_overloaded_p () const = 0;

  virtual bool check (const xt_function_instance &instance ATTRIBUTE_UNUSED,
		      location_t location, tree fndecl, unsigned int nargs,
		      tree *args) const
      = 0;
};

/* Describes a function decl.  */
class GTY ((user)) xt_registered_function
{
public:
  xt_function_instance GTY ((skip)) instance;

  /* The decl itself.  */
  tree decl;

  insn_code icode;
  bool has_target_p;
  /* The overload hash of non-overloaded intrinsic is determined by
     the overload name and argument list.  */
  const char *overload_name;

  /* The argument list part of the hash value. Add the unsigned/signed type
     and machine mode of each argument to the hash value. */
  vec<tree> GTY ((skip)) argument_types;

  /* True if the decl represents an overloaded function that needs to be
     resolved. */
  bool overloaded_p;

  /* The hash value to indicate the non-overloaded function. Generate hash
     value based on overload_name and argument_types. */
  hashval_t overloaded_hash () const;

  /* Generate hash value based on the overload_name and the argument list
     passed by the user when calling. */
  hashval_t overloaded_hash (const vec<tree, va_gc> &);

  /* The reqired extension for the register function.  */
  enum required_ext required;
};

hashval_t
xt_registered_function::overloaded_hash () const
{
  inchash::hash h;
  tree type;
  unsigned int unsigned_p, mode_p;
  h.add (overload_name, strlen (overload_name));
  h.add_int (argument_types.length ());

  /* For __riscv_th_mdup_m_x, only the first argument is used to generate the
   * hash.  */
  if (argument_types.length () == 1
      && !(POINTER_TYPE_P (argument_types[0])
	   || AGGREGATE_TYPE_P (argument_types[0])))
    {
      h.add_int (TYPE_UNSIGNED (argument_types[0]));
      h.add_int (TYPE_MODE (argument_types[0]));
      return h.end ();
    }

  for (unsigned int i = 0; i < argument_types.length (); i++)
    {
      type = argument_types[i];
      bool addr_p = (POINTER_TYPE_P (type) || AGGREGATE_TYPE_P (type));
      unsigned_p
	  = addr_p ? TYPE_UNSIGNED (TREE_TYPE (type)) : TYPE_UNSIGNED (type);
      mode_p = addr_p ? TYPE_MODE (TREE_TYPE (type)) : TYPE_MODE (type);

      if (addr_p || xt_rvm_lookup_matrix_type_attribute (type))
	{
	  h.add_int (unsigned_p);
	  h.add_int (mode_p);
	}
    }

  return h.end ();
}

hashval_t
xt_registered_function::overloaded_hash (const vec<tree, va_gc> &arglist)
{
  argument_types = vNULL;
  unsigned int len = arglist.length ();

  for (unsigned int i = 0; i < len; i++)
    argument_types.safe_push (TREE_TYPE (arglist[i]));

  return overloaded_hash ();
}

/* Hash traits for overload xt_registered_function. */
struct non_overloaded_registered_function_hasher
    : nofree_ptr_hash<xt_registered_function>
{
  static hashval_t hash (value_type);
  static bool equal (value_type, const compare_type &);
};

/* All registered function decls, hashed on overload_name and argument list
   of the xt_registered_function.  This is used for looking up implementations
   of non-overloaded functions. */
static hash_table<non_overloaded_registered_function_hasher>
    *non_overloaded_function_table;

inline hashval_t
non_overloaded_registered_function_hasher::hash (value_type value)
{
  return value->overloaded_hash ();
}

inline bool
non_overloaded_registered_function_hasher::equal (value_type value,
						  const compare_type &key)
{
  return ((strcmp (value->overload_name, key->overload_name) == 0)
	  && value->overloaded_hash () == key->overloaded_hash ());
}

class xt_function_builder
{
public:
  xt_function_builder ();
  ~xt_function_builder ();

  void allocate_argument_types (const xt_function_instance &instance,
				vec<tree> &) const;
  void add_overloaded_function (const xt_function_instance &instance,
				enum required_ext required);
  void add_unique_function (const xt_function_instance &instance,
			    tree return_type, vec<tree> &argument_types,
			    enum required_ext required);
  void register_function_group (const function_group_info &);
  void append_name (const char *);
  void append_base_name (const char *);
  char *finish_name ();

private:
  xt_registered_function &add_function (const xt_function_instance &,
					const char *, tree, tree, const char *,
					const vec<tree> &, bool, insn_code,
					bool, enum required_ext);
  /* Used for building up function names.  */
  obstack m_string_obstack;
};

static bool
check_type (tree return_type, vec<tree> &argument_types)
{
  tree arg;
  unsigned i;

  if (!return_type)
    return false;

  FOR_EACH_VEC_ELT (argument_types, i, arg)
    if (!arg)
      return false;

  return true;
}

/* Add a function called NAME with type FNTYPE and attributes ATTRS.
   INSTANCE describes what the function does.  */
xt_registered_function &
xt_function_builder::add_function (const xt_function_instance &instance,
				   const char *name, tree fntype, tree attrs,
				   const char *overload_name,
				   const vec<tree> &argument_types,
				   bool overloaded_p, insn_code icode,
				   bool has_target_p,
				   enum required_ext required)
{
  unsigned int code = vec_safe_length (xt_registered_functions);
  code = ((code) << RISCV_BUILTIN_SHIFT) + RISCV_BUILTIN_MATRIX;
  /* We need to be able to generate placeholders to enusre that we have a
     consistent numbering scheme for function codes between the C and C++
     frontends, so that everything ties up in LTO.

     Currently, tree-streamer-in.c:unpack_ts_function_decl_value_fields
     validates that tree nodes returned by TARGET_BUILTIN_DECL are non-NULL and
     some node other than error_mark_node. This is a holdover from when builtin
     decls were streamed by code rather than by value.

     Ultimately, we should be able to remove this validation of BUILT_IN_MD
     nodes and remove the target hook. For now, however, we need to appease the
     validation and return a non-NULL, non-error_mark_node node, so we
     arbitrarily choose integer_zero_node.  */
  tree decl = simulate_builtin_function_decl (input_location, name, fntype,
					      code, NULL, attrs);

  /* If the code of DECL is ERROR_MARK or invalid code, usually "ggc_freed", we
     use integer_zero_node instead of it. This will be very helpful for the
     ggc_free.  */
  if (TREE_CODE (decl) == ERROR_MARK || TREE_CODE (decl) >= MAX_TREE_CODES)
    decl = integer_zero_node;
  xt_registered_function &rfn = *ggc_alloc<xt_registered_function> ();
  rfn.instance = instance;
  rfn.decl = decl;
  rfn.overload_name = overload_name ? xstrdup (overload_name) : NULL;
  rfn.argument_types = argument_types;
  rfn.overloaded_p = overloaded_p;
  rfn.required = required;

  rfn.icode = icode;
  rfn.has_target_p = has_target_p;
  vec_safe_push (xt_registered_functions, &rfn);

  return rfn;
}

/* Add a built-in function for INSTANCE, with the argument types given
   by ARGUMENT_TYPES and the return type given by RETURN_TYPE. NAME is
   the "full" name for C function. OVERLOAD_NAME is the "short" name for
   C++ overloaded function. OVERLOAD_NAME can be nullptr because some
   instance doesn't have C++ overloaded function.  */
void
xt_function_builder::add_unique_function (const xt_function_instance &instance,
					  tree return_type,
					  vec<tree> &argument_types,
					  enum required_ext required)
{
  /* Also add the function under its overloaded alias, if we want
     a separate decl for each instance of an overloaded function.  */
  char *overload_name = instance.base->get_name (*this, instance, true);

  /* Add the function under its full (unique) name.  */
  char *name = instance.base->get_name (*this, instance, false);
  insn_code icode = instance.base->get_insn_code (*this, instance);

  bool has_target_p = instance.base->has_target_p (return_type);
  bool can_be_overloaded_p = instance.base->can_be_overloaded_p ();
  tree fntype = build_function_type_array (
      return_type, argument_types.length (), argument_types.address ());
  xt_registered_function &rfn = add_function (
      instance, name, fntype, NULL_TREE, overload_name, argument_types.copy (),
      can_be_overloaded_p, icode, has_target_p, required);

  if (can_be_overloaded_p)
    {
      /* Enter the function into the non-overloaded hash table.  */
      hashval_t hash = rfn.overloaded_hash ();
      xt_registered_function **rfn_slot
	  = non_overloaded_function_table->find_slot_with_hash (&rfn, hash,
								INSERT);
      *rfn_slot = &rfn;
    }
  obstack_free (&m_string_obstack, name);
}

/* Add overloaded function for gcc. */
void
xt_function_builder::add_overloaded_function (
    const xt_function_instance &instance, enum required_ext required)
{
  unsigned i;
  xt_registered_function *fn;

  bool can_be_overloaded_p = instance.base->can_be_overloaded_p ();
  if (can_be_overloaded_p)
    {
      char *name = instance.base->get_name (*this, instance, true);

      if (vec_safe_length (xt_registered_functions) > 0)
	FOR_EACH_VEC_ELT (*xt_registered_functions, i, fn)
	  if (strcmp (fn->overload_name, name) == 0)
	    return;

      tree fntype = build_function_type (void_type_node, void_list_node);
      add_function (instance, name, fntype, NULL_TREE, name, vNULL, 1,
		    (insn_code)0, 0, required);
      obstack_free (&m_string_obstack, name);
    }
}

xt_function_builder::xt_function_builder ()
{
  gcc_obstack_init (&m_string_obstack);
}

xt_function_builder::~xt_function_builder ()
{
  obstack_free (&m_string_obstack, NULL);
}

/* Add NAME to the end of the function name being built.  */
void
xt_function_builder::append_name (const char *name)
{
  obstack_grow (&m_string_obstack, name, strlen (name));
}

/* Add "__riscv_" and "name".  */
void
xt_function_builder::append_base_name (const char *name)
{
  append_name ("__riscv_th_");
  append_name (name);
}

/* Zero-terminate and complete the function name being built.  */
char *
xt_function_builder::finish_name ()
{
  obstack_1grow (&m_string_obstack, 0);
  return (char *)obstack_finish (&m_string_obstack);
}

static void
build_one (xt_function_builder &b, const function_group_info &group,
	   unsigned int vec_type_idx)
{
  /* Byte forms of non-tuple vlxusegei take 21 arguments.  */
  auto_vec<tree, 21> argument_types;

  xt_function_instance instance (group.base_name, *group.base,
				 group.ops_infos.types[vec_type_idx],
				 &group.ops_infos);

  tree return_type = group.ops_infos.ret.get_tree_type (
      group.ops_infos.types[vec_type_idx].index);
  b.allocate_argument_types (instance, argument_types);

  if (TARGET_XTHEADMATRIX && !check_type (return_type, argument_types))
    return;

  b.add_overloaded_function (instance, group.required_extensions);

  b.add_unique_function (instance, return_type, argument_types,
			 group.required_extensions);
}

/* Add a function instance for every operand && predicate && args
   combination in GROUP.  Take the function base name from GROUP && operand
   suffix from operand_suffixes && mode suffix from type_suffixes &&
   predication suffix from predication_suffixes. Use apply_predication to add
   in the predicate.  */

template <int UNSPEC> class def_base : public xt_function_base
{
  char *
  get_name (xt_function_builder &b ATTRIBUTE_UNUSED,
	    const xt_function_instance &instance ATTRIBUTE_UNUSED,
	    bool overloaded_p ATTRIBUTE_UNUSED) const override
  {
    b.append_base_name (instance.base_name);

    if (!overloaded_p)
      {
	b.append_name (operand_suffixes[instance.op_info->op]);
	b.append_name (xt_rvm_get_index_suffix (instance.type.index));
      }

    return b.finish_name ();
  }

  void
  build (xt_function_builder &b,
	 const function_group_info &group) const override
  {

    for (unsigned int vec_type_idx = 0;
	 group.ops_infos.types[vec_type_idx].index != NUM_RVM_TYPE;
	 ++vec_type_idx)
      build_one (b, group, vec_type_idx);
  }

  bool
  has_target_p (tree return_type) const override
  {
    return return_type != void_type_node;
  }

  unsigned int
  get_mcfg_num () const override
  {
    return 0;
  }

  bool
  can_be_overloaded_p () const override
  {
    return true;
  }

  bool
  check (const xt_function_instance &instance ATTRIBUTE_UNUSED,
	 location_t location ATTRIBUTE_UNUSED, tree fndecl ATTRIBUTE_UNUSED,
	 unsigned int nargs ATTRIBUTE_UNUSED,
	 tree *args ATTRIBUTE_UNUSED) const override
  {
    return true;
  }
};

template <int UNSPEC> class mload_mstore_def : public def_base<UNSPEC>
{
  insn_code
  get_insn_code (xt_function_builder &b ATTRIBUTE_UNUSED,
		 const xt_function_instance &instance
		     ATTRIBUTE_UNUSED) const override
  {
    return code_for_rvm (UNSPEC, xt_rvm_get_matrix_mode (instance.type.index),
			 Pmode);
  }

  unsigned int
  get_mcfg_num () const override
  {
    return 2;
  }
};

template <int UNSPEC> class mzero_def : public def_base<UNSPEC>
{
  insn_code
  get_insn_code (xt_function_builder &b ATTRIBUTE_UNUSED,
		 const xt_function_instance &instance
		     ATTRIBUTE_UNUSED) const override
  {
    return code_for_rvm_mzero (xt_rvm_get_matrix_mode (instance.type.index));
  }

  bool
  can_be_overloaded_p () const override
  {
    return false;
  }
};

template <int UNSPEC>

class mrelease_def : public def_base<UNSPEC>
{
  insn_code
  get_insn_code (xt_function_builder &b ATTRIBUTE_UNUSED,
		 const xt_function_instance &instance
		     ATTRIBUTE_UNUSED) const override
  {
    return CODE_FOR_rvm_mrelease;
  }

  bool
  can_be_overloaded_p () const override
  {
    return false;
  }
};

template <int UNSPEC> class mcfg_def : public def_base<UNSPEC>
{
  insn_code
  get_insn_code (xt_function_builder &b ATTRIBUTE_UNUSED,
		 const xt_function_instance &instance
		     ATTRIBUTE_UNUSED) const override
  {
    if (UNSPEC == UNSPEC_XT_MCFGM)
      return code_for_rvm_legacy_mcfgm (Pmode);
    if (UNSPEC == UNSPEC_XT_MCFGN)
      return code_for_rvm_legacy_mcfgn (Pmode);
    if (UNSPEC == UNSPEC_XT_MCFGK)
      return code_for_rvm_legacy_mcfgk (Pmode);
    gcc_unreachable ();
  }

  bool
  can_be_overloaded_p () const override
  {
    return false;
  }
};

template <int UNSPEC> class mcsr_def : public def_base<UNSPEC>
{
  char *
  get_name (xt_function_builder &b ATTRIBUTE_UNUSED,
	    const xt_function_instance &instance ATTRIBUTE_UNUSED,
	    bool overloaded_p ATTRIBUTE_UNUSED) const override
  {
    b.append_base_name (instance.base_name);

    return b.finish_name ();
  }

  insn_code
  get_insn_code (xt_function_builder &b ATTRIBUTE_UNUSED,
		 const xt_function_instance &instance
		     ATTRIBUTE_UNUSED) const override
  {
    if (UNSPEC == UNSPEC_XT_MREAD_XMLENB)
      return code_for_rvm_read_xmlenb (Pmode);

    return code_for_rvm_read (UNSPEC, Pmode);
  }

  bool
  can_be_overloaded_p () const override
  {
    return false;
  }
};

template <int UNSPEC> class mundefined_def : public def_base<UNSPEC>
{
  insn_code
  get_insn_code (xt_function_builder &b ATTRIBUTE_UNUSED,
		 const xt_function_instance &instance
		     ATTRIBUTE_UNUSED) const override
  {
    return code_for_rvm_mundefined (
	xt_rvm_get_matrix_mode (instance.type.index));
  }

  bool
  can_be_overloaded_p () const override
  {
    return false;
  }
};

template <int UNSPEC> class mmov_def : public def_base<UNSPEC>
{
  char *
  get_name (xt_function_builder &b ATTRIBUTE_UNUSED,
	    const xt_function_instance &instance ATTRIBUTE_UNUSED,
	    bool overloaded_p ATTRIBUTE_UNUSED) const override
  {
    b.append_base_name (instance.base_name);

    if (!overloaded_p)
      b.append_name (xt_rvm_get_index_suffix (instance.type.index));

    return b.finish_name ();
  }

  insn_code
  get_insn_code (xt_function_builder &b ATTRIBUTE_UNUSED,
		 const xt_function_instance &instance
		     ATTRIBUTE_UNUSED) const override
  {
    if (UNSPEC == UNSPEC_XT_MDUP)
      return code_for_rvm_mdup_m_x (
	  xt_rvm_get_matrix_mode (instance.type.index));

    switch (instance.op_info->op)
      {
      case OP_TYPE_m_x:
	return code_for_rvm_mmov_m_x (
	    xt_rvm_get_matrix_mode (instance.type.index), Pmode);
      case OP_TYPE_mv:
	return code_for_rvm_mmov_mv (
	    xt_rvm_get_matrix_mode (instance.type.index), Pmode);
      case OP_TYPE_x_m:
	return code_for_rvm_mmov_x_m (
	    xt_rvm_get_matrix_mode (instance.type.index), Pmode);
      default:
	gcc_unreachable ();
      }
    gcc_unreachable ();
  }

  bool
  check (const xt_function_instance &instance ATTRIBUTE_UNUSED,
	 location_t location, tree fndecl, unsigned int nargs,
	 tree *args) const override
  {
    return true;
  }
};

template <int UNSPEC> class tuple_def : public def_base<UNSPEC>
{
  insn_code
  get_insn_code (xt_function_builder &b ATTRIBUTE_UNUSED,
		 const xt_function_instance &instance
		     ATTRIBUTE_UNUSED) const override
  {
    if (UNSPEC == UNSPEC_XT_MSET)
      return code_for_rvm_mset (xt_rvm_get_matrix_mode (instance.type.index));
    else
      return code_for_rvm_mget (xt_rvm_get_matrix_mode (instance.type.index));
  }

  bool
  check (const xt_function_instance &instance ATTRIBUTE_UNUSED,
	 location_t location, tree fndecl, unsigned int nargs,
	 tree *args) const override
  {
    return !report_imm_in_range_p (location, fndecl, nargs, args, 1, 0, 1);
  }
};

template <int UNSPEC> class mreinterpret_def : public def_base<UNSPEC>
{
  char *
  get_name (xt_function_builder &b ATTRIBUTE_UNUSED,
	    const xt_function_instance &instance ATTRIBUTE_UNUSED,
	    bool overloaded_p ATTRIBUTE_UNUSED) const override
  {
    b.append_base_name (instance.base_name);
    b.append_name (xt_rvm_get_index_suffix (instance.type.index));
    if (!overloaded_p)
      b.append_name (xt_rvm_get_index_suffix (
	  (enum rvm_type_index)instance.op_info->args[0].base_type));

    return b.finish_name ();
  }

  void
  build (xt_function_builder &b,
	 const function_group_info &group) const override
  {
    for (unsigned int vec_type_idx = 0;
	 group.ops_infos.types[vec_type_idx].index != NUM_RVM_TYPE;
	 ++vec_type_idx)
      {
	rvm_type_info type_info = group.ops_infos.types[vec_type_idx];
	for (unsigned int args_vec_type_idx = 0;
	     args_vec_type_idx != NUM_RVM_TYPE; ++args_vec_type_idx)
	  {
	    if (type_info.index == args_vec_type_idx
		|| xt_rvm_get_lmul (xt_rvm_get_matrix_mode (type_info.index))
		       != xt_rvm_get_lmul (xt_rvm_get_matrix_mode (
			   (enum rvm_type_index)args_vec_type_idx)))
	      continue;

	    /* Byte forms of non-tuple vlxusegei take 21 arguments.  */
	    auto_vec<tree, 21> argument_types;

	    struct rvm_op_info new_ops_info = group.ops_infos;
	    new_ops_info.args
		= (const rvm_arg_type_info *)&(one_args[args_vec_type_idx]);
	    xt_function_instance instance (group.base_name, *group.base,
					   type_info, &new_ops_info);

	    tree return_type
		= group.ops_infos.ret.get_tree_type (type_info.index);
	    argument_types.quick_push (
		builtin_types[args_vec_type_idx].matrix);

	    if (TARGET_XTHEADMATRIX
		&& !check_type (return_type, argument_types))
	      continue;

	    b.add_overloaded_function (instance, group.required_extensions);

	    b.add_unique_function (instance, return_type, argument_types,
				   group.required_extensions);
	  }
      }
  }

  insn_code
  get_insn_code (xt_function_builder &b ATTRIBUTE_UNUSED,
		 const xt_function_instance &instance
		     ATTRIBUTE_UNUSED) const override
  {
    return code_for_rvm_mreinterpret (
	xt_rvm_get_matrix_mode (instance.type.index));
  }
};

template <int UNSPEC> class def_funclist : public def_base<UNSPEC>
{
  char *
  get_name (xt_function_builder &b ATTRIBUTE_UNUSED,
	    const xt_function_instance &instance ATTRIBUTE_UNUSED,
	    bool overloaded_p ATTRIBUTE_UNUSED) const override
  {
    rvm_base_type base_type;
    b.append_base_name (instance.base_name);

    if (!overloaded_p)
      {
	for (unsigned int i = 0;
	     (base_type = instance.op_info->args[i].base_type)
	     != NUM_BASE_TYPES;
	     ++i)
	  b.append_name (
	      xt_rvm_get_index_suffix ((enum rvm_type_index)base_type));
      }

    return b.finish_name ();
  }
};

template <int UNSPEC> class mmacc_def : public def_funclist<UNSPEC>
{
  insn_code
  get_insn_code (xt_function_builder &,
		 const xt_function_instance &) const override
  {
    if (UNSPEC == UNSPEC_XT_FMMACC)
      return code_for_rvm_fmmacc (Pmode);
    return code_for_rvm (UNSPEC, Pmode, RVMM1QImode);
  }

  unsigned int
  get_mcfg_num () const override
  {
    return 3;
  }
};

static CONSTEXPR const mload_mstore_def<UNSPEC_XT_MLD> mld_obj;

static CONSTEXPR const mload_mstore_def<UNSPEC_XT_MSLD> msld_obj;

static CONSTEXPR const mload_mstore_def<UNSPEC_XT_MST> mst_obj;

static CONSTEXPR const mload_mstore_def<UNSPEC_XT_MSST> msst_obj;

static CONSTEXPR const mmov_def<UNSPEC_XT_MMOV> mmov_obj;
static CONSTEXPR const mmov_def<UNSPEC_XT_MDUP> mdup_obj;
static CONSTEXPR const mzero_def<UNSPEC_XT_MZERO> mzero_obj;
static CONSTEXPR const mundefined_def<UNSPEC_XT_MUNDEF> mundefined_obj;

static CONSTEXPR const tuple_def<UNSPEC_XT_MSET> mset_obj;
static CONSTEXPR const tuple_def<UNSPEC_XT_MGET> mget_obj;

static CONSTEXPR const mrelease_def<UNSPEC_XT_MRELEASE> mrelease_obj;
static CONSTEXPR const mcfg_def<UNSPEC_XT_MCFGM> msetmrow_m_obj;
static CONSTEXPR const mcfg_def<UNSPEC_XT_MCFGN> msetmrow_n_obj;
static CONSTEXPR const mcfg_def<UNSPEC_XT_MCFGK> msetmcol_obj;
static CONSTEXPR const mcsr_def<UNSPEC_XT_MREAD_XMLENB> xmlenb_obj;
static CONSTEXPR const mcsr_def<UNSPEC_XT_MREAD_XRLENB> xrlenb_obj;
static CONSTEXPR const mcsr_def<UNSPEC_XT_MREAD_XMSIZE> xmsize_obj;

static CONSTEXPR const mreinterpret_def<UNSPEC_XT_MREINTERPRET>
    mreinterpret_obj;

static CONSTEXPR const mmacc_def<UNSPEC_XT_FMMACC> fmmacc_obj;

static CONSTEXPR const mmacc_def<UNSPEC_XT_MMACC> mmacc_obj;

static CONSTEXPR const mmacc_def<UNSPEC_XT_MMACCU> mmaccu_obj;

static CONSTEXPR const mmacc_def<UNSPEC_XT_MMACCUS> mmaccus_obj;

static CONSTEXPR const mmacc_def<UNSPEC_XT_MMACCSU> mmaccsu_obj;

static CONSTEXPR const mmacc_def<UNSPEC_XT_PMMAQA> pmmaqa_obj;
static CONSTEXPR const mmacc_def<UNSPEC_XT_PMMAQAU> pmmaqau_obj;
static CONSTEXPR const mmacc_def<UNSPEC_XT_PMMAQAUS> pmmaqaus_obj;
static CONSTEXPR const mmacc_def<UNSPEC_XT_PMMAQASU> pmmaqasu_obj;

#define DEF_RVM_FUNCTION(NAME, DEF, OPS_INFO)                                 \
  const xt_function_base *const NAME##DEF##OPS_INFO##_builtin = &DEF##_obj;
#define DEF_RVM_FUNCTION_BY_LIST0(DEF, NAME, RET_TYPE)                        \
  const xt_function_base *const NAME##DEF##RET_TYPE##_builtin = &DEF##_obj;
#define DEF_RVM_FUNCTION_BY_LIST1(DEF, NAME, RET_TYPE, ARGS0)                 \
  const xt_function_base *const NAME##DEF##RET_TYPE##ARGS0##_builtin          \
      = &DEF##_obj;
#define DEF_RVM_FUNCTION_BY_LIST2(DEF, NAME, RET_TYPE, ARGS0, ARGS1)          \
  const xt_function_base *const NAME##DEF##RET_TYPE##ARGS0##ARGS1##_builtin   \
      = &DEF##_obj;
#define DEF_RVM_FUNCTION_BY_LIST3(DEF, NAME, RET_TYPE, ARGS0, ARGS1, ARGS2)   \
  const xt_function_base                                                      \
      *const NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##_builtin               \
      = &DEF##_obj;
#define DEF_RVM_FUNCTION_BY_LIST4(DEF, NAME, RET_TYPE, ARGS0, ARGS1, ARGS2,   \
				  ARGS3)                                      \
  const xt_function_base                                                      \
      *const NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##_builtin        \
      = &DEF##_obj;
#define DEF_RVM_FUNCTION_BY_LIST5(DEF, NAME, RET_TYPE, ARGS0, ARGS1, ARGS2,   \
				  ARGS3, ARGS4)                               \
  const xt_function_base                                                      \
      *const NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##ARGS4##_builtin \
      = &DEF##_obj;
#define DEF_RVM_FUNCTION_BY_LIST6(DEF, NAME, RET_TYPE, ARGS0, ARGS1, ARGS2,   \
				  ARGS3, ARGS4, ARGS5)                        \
  const xt_function_base *const                                               \
      NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##ARGS4##ARGS5##_builtin \
      = &DEF##_obj;
#define DEF_RVM_FUNCTION_BY_LIST(NARGS, LIST...)                              \
  DEF_RVM_FUNCTION_BY_LIST##NARGS (LIST)
#include "xuantie-ext-builtins-matrix.def"

/* A list of all RVM intrinsic functions.  */
static function_group_info function_groups[] = {
#define DEF_RVM_FUNCTION(NAME, DEF, OPS_INFO)                                 \
  { #NAME, &NAME##DEF##OPS_INFO##_builtin, OPS_INFO, REQUIRED_EXTENSIONS },
#define DEF_RVM_FUNCTION_BY_LIST0(DEF, NAME, RET_TYPE)                        \
  { #NAME, &NAME##DEF##RET_TYPE##_builtin, NAME##DEF##RET_TYPE##_ops,         \
    REQUIRED_EXTENSIONS },
#define DEF_RVM_FUNCTION_BY_LIST1(DEF, NAME, RET_TYPE, ARGS0)                 \
  { #NAME, &NAME##DEF##RET_TYPE##ARGS0##_builtin,                             \
    NAME##DEF##RET_TYPE##ARGS0##_ops, REQUIRED_EXTENSIONS },
#define DEF_RVM_FUNCTION_BY_LIST2(DEF, NAME, RET_TYPE, ARGS0, ARGS1)          \
  { #NAME, &NAME##DEF##RET_TYPE##ARGS0##ARGS1##_builtin,                      \
    NAME##DEF##RET_TYPE##ARGS0##ARGS1##_ops, REQUIRED_EXTENSIONS },
#define DEF_RVM_FUNCTION_BY_LIST3(DEF, NAME, RET_TYPE, ARGS0, ARGS1, ARGS2)   \
  { #NAME, &NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##_builtin,               \
    NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##_ops, REQUIRED_EXTENSIONS },
#define DEF_RVM_FUNCTION_BY_LIST4(DEF, NAME, RET_TYPE, ARGS0, ARGS1, ARGS2,   \
				  ARGS3)                                      \
  { #NAME, &NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##_builtin,        \
    NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##_ops,                    \
    REQUIRED_EXTENSIONS },
#define DEF_RVM_FUNCTION_BY_LIST5(DEF, NAME, RET_TYPE, ARGS0, ARGS1, ARGS2,   \
				  ARGS3, ARGS4)                               \
  { #NAME, &NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##ARGS4##_builtin, \
    NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##ARGS4##_ops,             \
    REQUIRED_EXTENSIONS },
#define DEF_RVM_FUNCTION_BY_LIST6(DEF, NAME, RET_TYPE, ARGS0, ARGS1, ARGS2,   \
				  ARGS3, ARGS4, ARGS5)                        \
  { #NAME,                                                                    \
    &NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##ARGS4##ARGS5##_builtin, \
    NAME##DEF##RET_TYPE##ARGS0##ARGS1##ARGS2##ARGS3##ARGS4##ARGS5##_ops,      \
    REQUIRED_EXTENSIONS },
#define DEF_RVM_FUNCTION_BY_LIST(NARGS, LIST...)                              \
  DEF_RVM_FUNCTION_BY_LIST##NARGS (LIST)
#include "xuantie-ext-builtins-matrix.def"
};

/* Allocate arguments of the function.  */
void
xt_function_builder::allocate_argument_types (
    const xt_function_instance &instance, vec<tree> &argument_types) const
{
  for (unsigned int i = 0;
       instance.op_info->args[i].base_type != NUM_BASE_TYPES; ++i)
    argument_types.quick_push (
	instance.op_info->args[i].get_tree_type (instance.type.index));

  for (unsigned int i = 0; i < instance.base->get_mcfg_num (); ++i)
    argument_types.quick_push (size_type_node);
}

/* Register all the functions in GROUP.  */
void
xt_function_builder::register_function_group (const function_group_info &group)
{
  (*group.base)->build (*this, group);
}

static rtx
xt_rvm_expand_builtins (unsigned int code, tree exp, rtx target)
{
  xt_registered_function &rfn = *(*xt_registered_functions)[code];

  if (!required_extensions_specified (rfn.required))
    {
      error_at (EXPR_LOCATION (exp),
		"built-in function %qE requires the %qs ISA extension(s)", exp,
		reqired_ext_to_isa_name (rfn.required));
      return target;
    }

  return riscv_expand_builtin_direct (rfn.icode, target, exp,
				      rfn.has_target_p);
}

bool
xt_rvm_check_builtin_call (location_t location, vec<location_t>,
			   unsigned int code, tree fndecl, unsigned int nargs,
			   tree *args)
{
  const xt_registered_function &rfn = *(*xt_registered_functions)[code];
  return rfn.instance.base->check (rfn.instance, location, fndecl, nargs,
				   args);
}

tree
xt_rvm_resolve_overloaded_builtin (location_t loc, unsigned int code,
				   tree fndecl, vec<tree, va_gc> *arglist)
{
  if (code >= vec_safe_length (xt_registered_functions))
    return NULL_TREE;

  xt_registered_function *rfun = (*xt_registered_functions)[code];

  if (!rfun || !rfun->overloaded_p)
    return NULL_TREE;

  /* According to the rvm intrinisc doc, we have no such overloaded function
     with empty args.  Unfortunately, we register the empty args function as
     overloaded for avoiding conflict.  Thus, there will actual one register
     function after return NULL_TREE back to the middle-end, and finally result
     in ICE when expanding.

     Here we report error when overloaded function with empty args.  */
  if (rfun->overloaded_p && arglist->length () == 0)
    error_at (loc, "no matching function call to %qE with empty arguments",
	      fndecl);

  hashval_t hash = rfun->overloaded_hash (*arglist);
  xt_registered_function *rfn
      = non_overloaded_function_table->find_with_hash (rfun, hash);

  return rfn ? rfn->decl : NULL_TREE;
}

/* Helper function for register a single built-in RVM ABI type.  */
static void
xt_rvm_register_builtin_type (rvm_type_index type, tree eltype,
			      machine_mode mode)
{
  builtin_types[type].scalar = eltype;
  builtin_types[type].scalar_ptr = build_pointer_type (eltype);
  builtin_types[type].scalar_const_ptr
      = build_pointer_type (build_qualified_type (eltype, TYPE_QUAL_CONST));

  if (!xt_rvm_mode_p (mode))
    return;

  tree vectype = build_vector_type_for_mode (eltype, mode);

  vectype = build_distinct_type_copy (vectype);
  gcc_assert (vectype == TYPE_MAIN_VARIANT (vectype));
  SET_TYPE_STRUCTURAL_EQUALITY (vectype);
  TYPE_ARTIFICIAL (vectype) = 1;
  TYPE_INDIVISIBLE_P (vectype) = 1;
  xt_rvm_add_matrix_type_attribute (vectype, matrix_types[type].mangled_name);
  xt_rvm_make_matrix_type_sizeless (vectype);
  lang_hooks.types.register_builtin_type (vectype, matrix_types[type].name);

  if (!vectype)
    return;

  builtin_types[type].matrix = vectype;
  builtin_types[type].matrix_ptr = build_pointer_type (vectype);
}

/* Register the built-in RVM ABI types.  */
static void
xt_rvm_register_builtin_matrix_types ()
{
  /* Don't pollute flags at this stage to make sure we only register type with
     what we want so far, we will register all type if necessary later.   */
  rvm_switcher rvm (/* pollute_flags */ false);
  xt_rvm_register_builtin_matrix_types_on_null ();
}

static void
xt_rvm_register_builtin_matrix_types_on_null ()
{
  /* Get type node from get_typenode_from_name to prevent we have different
     type node define in different target libraries, e.g. int32_t defined as
     `long` in RV32/newlib-stdint, but `int` for RV32/glibc-stdint.h.
     NOTE: uint[16|32|64]_type_node already defined in tree.h.  */
  tree int8_type_node = get_typenode_from_name (INT8_TYPE);
  tree uint8_type_node = get_typenode_from_name (UINT8_TYPE);
  tree int16_type_node = get_typenode_from_name (INT16_TYPE);
  tree int32_type_node = get_typenode_from_name (INT32_TYPE);
  tree int64_type_node = get_typenode_from_name (INT64_TYPE);

  machine_mode mode;
#define DEF_RVM_TYPE(NAME, NCHARS, ABI_NAME, SCALAR_TYPE, MATRIX_MODE,        \
		     ARGS...)                                                 \
  mode = MATRIX_MODE##mode;                                                   \
  if (builtin_types[RVM_TYPE_##NAME].matrix == NULL_TREE)                     \
    xt_rvm_register_builtin_type (RVM_TYPE_##NAME, SCALAR_TYPE##_type_node,   \
				  mode);
#include "xuantie-ext-builtins-matrix.def"
}

void
xt_rvm_handle_pragma_xtheadmatrix ()
{
  if (non_overloaded_function_table)
    {
      error ("duplicate definition of %qs", "thead_matrix.h");
      return;
    }
  rvm_switcher rvm;

  non_overloaded_function_table
      = new hash_table<non_overloaded_registered_function_hasher> (1023);

  xt_function_builder builder;
  for (unsigned int i = 0; i < ARRAY_SIZE (function_groups); ++i)
    builder.register_function_group (function_groups[i]);
}

static void
xt_rvm_init_builtins ()
{
  if (in_lto_p)
    /* "pragma xtheadmatrix" will register type during the process. */
    xt_rvm_handle_pragma_xtheadmatrix ();
  else
    {
      if (!TARGET_XTHEADMATRIX)
	return;
      xt_rvm_register_builtin_matrix_types ();
    }
}

static void
xt_init_builtins ()
{
  if (!maybe_get_identifier ("__bf16"))
    lang_hooks.types.register_builtin_type (riscv_bfloat16_type_node,
					    "__bf16");

  if (!maybe_get_identifier ("__fp16"))
    lang_hooks.types.register_builtin_type (riscv_float16_type_node, "__fp16");

  xt_rvm_init_builtins ();
}

static tree
xt_builtin_decl (unsigned int code, bool)
{
  if (code >= vec_safe_length (xt_registered_functions))
    return error_mark_node;

  return (*xt_registered_functions)[code]->decl;
}

inline void
gt_ggc_mx (xt_registered_function *)
{
}

inline void
gt_pch_nx (xt_registered_function *)
{
}

inline void
gt_pch_nx (xt_registered_function *, gt_pointer_operator, void *)
{
}

#include "gt-xuantie-ext-builtins.h"