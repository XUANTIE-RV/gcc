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

#ifdef XUANTIE_VECTOR_BUILTINS_SHAPES_H
extern const function_shape *const th_maqa;

extern const function_shape *const th_seg_loadb;
extern const function_shape *const th_seg_loadbu;
extern const function_shape *const th_seg_loadh;
extern const function_shape *const th_seg_loadhu;
extern const function_shape *const th_seg_loadw;
extern const function_shape *const th_seg_loadwu;
extern const function_shape *const th_seg_storeb;
extern const function_shape *const th_seg_storeh;
extern const function_shape *const th_seg_storew;
extern const function_shape *const th_seg_strideloadb;
extern const function_shape *const th_seg_strideloadbu;
extern const function_shape *const th_seg_strideloadh;
extern const function_shape *const th_seg_strideloadhu;
extern const function_shape *const th_seg_strideloadw;
extern const function_shape *const th_seg_strideloadwu;
extern const function_shape *const th_seg_stridestoreb;
extern const function_shape *const th_seg_stridestoreh;
extern const function_shape *const th_seg_stridestorew;
extern const function_shape *const th_seg_indexed_loadb;
extern const function_shape *const th_seg_indexed_loadbu;
extern const function_shape *const th_seg_indexed_loadh;
extern const function_shape *const th_seg_indexed_loadhu;
extern const function_shape *const th_seg_indexed_loadw;
extern const function_shape *const th_seg_indexed_loadwu;
extern const function_shape *const th_seg_indexed_storeb;
extern const function_shape *const th_seg_indexed_storeh;
extern const function_shape *const th_seg_indexed_storew;
extern const function_shape *const xtheadcv;
extern const function_shape *const xtheadcvwn;
extern const function_shape *const xtheadcvwn_narrow;
extern const function_shape *const xtheadcvwn_vd;
extern const function_shape *const xtheadvcpml;
extern const function_shape *const th_alu;
extern const function_shape *const th_alu_u;
extern const function_shape *const th_alu_frm;
#endif

#ifdef XUANTIE_VECTOR_BUILTINS_SHAPES_CC
/* maqa_def class.  */
struct th_maqa_def : public alu_def
{
  void build (function_builder &b,
	      const function_group_info &group) const override
  {
    build_all (b, group);
  }
};

/* th_seg_loadb_def class.  */
struct th_seg_loadb_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>b.  */
    b.append_name ("b");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_loadbu_def class.  */
struct th_seg_loadbu_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>b.  */
    b.append_name ("bu");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_loadh_def class.  */
struct th_seg_loadh_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>b.  */
    b.append_name ("h");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_loadhu_def class.  */
struct th_seg_loadhu_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>b.  */
    b.append_name ("hu");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_loadw_def class.  */
struct th_seg_loadw_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>b.  */
    b.append_name ("w");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_loadwu_def class.  */
struct th_seg_loadwu_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>w.  */
    b.append_name ("wu");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_storeb_def class.  */
struct th_seg_storeb_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vsseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>b.  */
    b.append_name ("b");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_storeb_def class.  */
struct th_seg_storeh_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vsseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>b.  */
    b.append_name ("h");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_storew_def class.  */
struct th_seg_storew_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vsseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>b.  */
    b.append_name ("w");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_strideloadb_def class.  */
struct th_seg_strideloadb_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlsseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>b.  */
    b.append_name ("b");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_strideloadbu_def class.  */
struct th_seg_strideloadbu_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlsseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>b.  */
    b.append_name ("bu");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_strideloadh_def class.  */
struct th_seg_strideloadh_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlsseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>h.  */
    b.append_name ("h");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_strideloadhu_def class.  */
struct th_seg_strideloadhu_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlsseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>h.  */
    b.append_name ("hu");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_strideloadw_def class.  */
struct th_seg_strideloadw_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlsseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>w.  */
    b.append_name ("w");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_strideloadwu_def class.  */
struct th_seg_strideloadwu_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlsseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>w.  */
    b.append_name ("wu");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_stridestoreb_def class.  */
struct th_seg_stridestoreb_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vssseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>b.  */
    b.append_name ("b");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_stridestoreh_def class.  */
struct th_seg_stridestoreh_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vssseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>h.  */
    b.append_name ("h");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_stridestorew_def class.  */
struct th_seg_stridestorew_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vssseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>w.  */
    b.append_name ("w");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_indexed_loadb_def class.  */
struct th_seg_indexed_loadb_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlxseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>b.  */
    b.append_name ("b");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_indexed_loadbu_def class.  */
struct th_seg_indexed_loadbu_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlxseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>b.  */
    b.append_name ("bu");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_indexed_loadh_def class.  */
struct th_seg_indexed_loadh_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlxseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>h.  */
    b.append_name ("h");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_indexed_loadhu_def class.  */
struct th_seg_indexed_loadhu_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlxseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>h.  */
    b.append_name ("hu");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_indexed_loadw_def class.  */
struct th_seg_indexed_loadw_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlxseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>w.  */
    b.append_name ("w");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_indexed_loadwu_def class.  */
struct th_seg_indexed_loadwu_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vlxseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>w.  */
    b.append_name ("wu");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_indexed_storeb_def class.  */
struct th_seg_indexed_storeb_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vsxseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>b.  */
    b.append_name ("b");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_indexed_storeh_def class.  */
struct th_seg_indexed_storeh_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vsxseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>h.  */
    b.append_name ("h");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_seg_indexed_storew_def class.  */
struct th_seg_indexed_storew_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_name ("__riscv_th_vsxseg");

    tree type = builtin_types[instance.type.index].vector;
    machine_mode mode = TYPE_MODE (type);

    int nf = get_nf (mode);
    /* vop --> vop<nf>.  */
    b.append_nf (nf);

    /* vop<nf> --> vop<nf>w.  */
    b.append_name ("w");

    if (!overloaded_p)
      {
	/* vop<nf>b --> vop<nf>b_v.  */
	b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop<nf>b_v --> vop<nf>b_v_<type>.  */
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

SHAPE(th_maqa, th_maqa)

SHAPE(th_seg_loadb, th_seg_loadb)
SHAPE(th_seg_loadbu, th_seg_loadbu)
SHAPE(th_seg_loadh, th_seg_loadh)
SHAPE(th_seg_loadhu, th_seg_loadhu)
SHAPE(th_seg_loadw, th_seg_loadw)
SHAPE(th_seg_loadwu, th_seg_loadwu)
SHAPE(th_seg_storeb, th_seg_storeb)
SHAPE(th_seg_storeh, th_seg_storeh)
SHAPE(th_seg_storew, th_seg_storew)
SHAPE(th_seg_strideloadb, th_seg_strideloadb)
SHAPE(th_seg_strideloadbu, th_seg_strideloadbu)
SHAPE(th_seg_strideloadh, th_seg_strideloadh)
SHAPE(th_seg_strideloadhu, th_seg_strideloadhu)
SHAPE(th_seg_strideloadw, th_seg_strideloadw)
SHAPE(th_seg_strideloadwu, th_seg_strideloadwu)
SHAPE(th_seg_stridestoreb, th_seg_stridestoreb)
SHAPE(th_seg_stridestoreh, th_seg_stridestoreh)
SHAPE(th_seg_stridestorew, th_seg_stridestorew)
SHAPE(th_seg_indexed_loadb, th_seg_indexed_loadb)
SHAPE(th_seg_indexed_loadbu, th_seg_indexed_loadbu)
SHAPE(th_seg_indexed_loadh, th_seg_indexed_loadh)
SHAPE(th_seg_indexed_loadhu, th_seg_indexed_loadhu)
SHAPE(th_seg_indexed_loadw, th_seg_indexed_loadw)
SHAPE(th_seg_indexed_loadwu, th_seg_indexed_loadwu)
SHAPE(th_seg_indexed_storeb, th_seg_indexed_storeb)
SHAPE(th_seg_indexed_storeh, th_seg_indexed_storeh)
SHAPE(th_seg_indexed_storew, th_seg_indexed_storew)

/* xtheadcv_def class.  */
struct xtheadcv_def : public build_base
{
  /* Normalize vcpx<N>_rm to vcpx<N>.  */
  static void normalize_base_name (char *to, const char *from, int limit)
  {
    strncpy (to, from, limit - 1);
    char *suffix = strstr (to, "_rm");

    if (suffix)
      *suffix = '\0';

    to[limit - 1] = '\0';
  }

  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    char base_name[BASE_NAME_MAX_LEN] = {};

    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    normalize_base_name (base_name, instance.base_name, sizeof (base_name));

    b.append_base_name (base_name);

    /* vcpx<N> --> vcpx<N>_<type>.  */
    if (!overloaded_p)
      {
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    if (!overloaded_p && instance.base->has_rounding_mode_operand_p())
      b.append_name ("_rm");

    /* According to Xuantie coprocessor intrinsic document, it does not add
       "_mu" suffix for vcpx<N>_mu overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_mu)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }

  bool check (function_checker &c) const override
  {
    if (c.base->has_rounding_mode_operand_p ())
      {
	unsigned int rm_num = c.arg_num () - 1;

	/* Currently, vxrm has the same range as frm, which is [0, 4]. */
	return c.require_immediate (rm_num, FRM_STATIC_MIN, FRM_STATIC_MAX);
      }

    return true;
  }
};

SHAPE(xtheadcv, xtheadcv)

/* xtheadvcpml_def class.  */
struct xtheadvcpml_def : public build_base
{
  /* Normalize vcpx<N>_rm to vcpx<N>.  */
  static void normalize_base_name (char *to, const char *from, int limit)
  {
    strncpy (to, from, limit - 1);
    char *suffix = strstr (to, "_rm");

    if (suffix)
      *suffix = '\0';

    to[limit - 1] = '\0';
  }

  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    char base_name[BASE_NAME_MAX_LEN * 2] = {};

    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    normalize_base_name (base_name, instance.base_name, sizeof (base_name));

    b.append_base_name (base_name);

    /* vcpx<N> --> vcpx<N>_<type>.  */
    if (!overloaded_p)
      {
	b.append_name (type_suffixes[instance.type.index].vector);
      }

    if (!overloaded_p && instance.base->has_rounding_mode_operand_p())
      b.append_name ("_rm");

    /* According to Xuantie coprocessor intrinsic document, it does not add
       "_mu" suffix for vcpx<N>_mu overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_mu)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }

  bool check (function_checker &c) const override
  {
    if (c.base->has_rounding_mode_operand_p ())
      {
	unsigned int rm_num = c.arg_num () - 2;

	/* Currently, vxrm has the same range as frm, which is [0, 4]. */
	return c.require_immediate (rm_num, FRM_STATIC_MIN, FRM_STATIC_MAX);
      }

    return true;
  }
};

SHAPE(xtheadvcpml, xtheadvcpml)

/* xtheadcvwn_def class.  */
struct xtheadcvwn_def : public build_base
{
  /* Normalize v(w/wq)cpx<N>_rm to v(w/wq)cpx<N>.  */
  static void normalize_base_name (char *to, const char *from, int limit)
  {
    strncpy (to, from, limit - 1);
    char *suffix = strstr (to, "_rm");

    if (suffix)
      *suffix = '\0';

    to[limit - 1] = '\0';
  }

  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    char base_name[BASE_NAME_MAX_LEN] = {};

    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    normalize_base_name (base_name, instance.base_name, sizeof (base_name));

    b.append_base_name (base_name);

    /* v(w/wq/fwq)cpx<N> --> v(w/wq/fwq)cpx<N>_<type_input>_<type>.  */
    if (!overloaded_p)
      {
	b.append_name (operand_suffixes[instance.op_info->op]);

        vector_type_index arg_type_idx
	  = instance.op_info->args[0].get_function_type_index (
	    instance.type.index);
	b.append_name (type_suffixes[arg_type_idx].vector);
        b.append_name (type_suffixes[instance.type.index].vector);
      }

    if (!overloaded_p && instance.base->has_rounding_mode_operand_p ())
      b.append_name ("_rm");

    /* According to Xuantie coprocessor intrinsic document, it does not add
       "_m" suffix for v(w/wq)cpx<N>_m overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_mu)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }

  bool check (function_checker &c) const override
  {
    bool roundmode_p = true;
    bool idx_p = true;
    if (c.base->has_rounding_mode_operand_p ())
      {
	unsigned int rm_num = c.arg_num () - 1
                                - (c.base->apply_vl_p () ? 1 : 0);
	/* Currently, vxrm has the same range as frm, which is [0, 4]. */
	roundmode_p = c.require_immediate (rm_num, FRM_STATIC_MIN, FRM_STATIC_MAX);
      }

    return roundmode_p && idx_p;
  }
};

SHAPE(xtheadcvwn, xtheadcvwn)

/* xtheadcvwn_narrow_def class.  */
struct xtheadcvwn_narrow_def : public build_base
{
  /* Normalize v(n/nq)cpx<N>_rm to v(n/nq)cpx<N>.  */
  static void normalize_base_name (char *to, const char *from, int limit)
  {
    strncpy (to, from, limit - 1);
    char *suffix = strstr (to, "_rm");

    if (suffix)
      *suffix = '\0';

    to[limit - 1] = '\0';
  }

  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    char base_name[BASE_NAME_MAX_LEN] = {};

    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    normalize_base_name (base_name, instance.base_name, sizeof (base_name));

    b.append_base_name (base_name);

    /* v(n/nq)cpx<N> --> v(n/nq)cpx<N>_<type>.  */
    if (!overloaded_p)
      {
	b.append_name (operand_suffixes[instance.op_info->op]);
	b.append_name (type_suffixes[instance.type.index].vector);
      } else {
        b.append_name (type_suffixes[instance.type.index].scalar);
      }

    if (!overloaded_p && instance.base->has_rounding_mode_operand_p ())
      b.append_name ("_rm");

    /* According to Xuantie coprocessor intrinsic document, it does not add
       "_m" suffix for v(n/nq)cpx<N>_m overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_mu)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }

  bool check (function_checker &c) const override
  {
    bool roundmode_p = true;
    bool idx_p = true;
    if (c.base->has_rounding_mode_operand_p ())
      {
	unsigned int rm_num = c.arg_num () - 1
			       - (c.base->apply_vl_p () ? 1 : 0);
	/* Currently, vxrm has the same range as frm, which is [0, 4]. */
	roundmode_p = c.require_immediate (rm_num, FRM_STATIC_MIN, FRM_STATIC_MAX);
      }

    return roundmode_p && idx_p;
  }
};

SHAPE(xtheadcvwn_narrow, xtheadcvwn_narrow)

/* xtheadcvwn_vd_def class.  */
struct xtheadcvwn_vd_def : public build_base
{
  /* Normalize v(w/fwq)cpx<N>_rm to v(w/fwq)cpx<N>.  */
  static void normalize_base_name (char *to, const char *from, int limit)
  {
    strncpy (to, from, limit - 1);
    char *suffix = strstr (to, "_rm");

    if (suffix)
      *suffix = '\0';

    to[limit - 1] = '\0';
  }

  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    char base_name[BASE_NAME_MAX_LEN] = {};

    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    normalize_base_name (base_name, instance.base_name, sizeof (base_name));

    b.append_base_name (base_name);

    /* v(w/fwq)cpx<N> --> v(w/fwq)cpx<N>_<type_input>_<type>.  */
    if (!overloaded_p)
      {
	b.append_name (operand_suffixes[instance.op_info->op]);

        vector_type_index arg_type_idx
	  = instance.op_info->args[1].get_function_type_index (
	    instance.type.index);
	b.append_name (type_suffixes[arg_type_idx].vector);
        b.append_name (type_suffixes[instance.type.index].vector);
      }

    if (!overloaded_p && instance.base->has_rounding_mode_operand_p ())
      b.append_name ("_rm");

    /* According to Xuantie coprocessor intrinsic document, it does not add
       "_m" suffix for v(w/fwq)cpx<N>_m overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_mu)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }

  bool check (function_checker &c) const override
  {
    bool roundmode_p = true;
    bool idx_p = true;
    if (c.base->has_rounding_mode_operand_p ())
      {
	unsigned int rm_num = c.arg_num () - 1
			       - (c.base->apply_vl_p () ? 1 : 0);
	/* Currently, vxrm has the same range as frm, which is [0, 4]. */
	roundmode_p = c.require_immediate (rm_num, FRM_STATIC_MIN, FRM_STATIC_MAX);
      }

    return roundmode_p && idx_p;
  }
};

SHAPE(xtheadcvwn_vd, xtheadcvwn_vd)

/* th_alu_def class.  */
struct th_alu_def : public build_base
{
  bool check (function_checker &c) const override
  {
    bool retsat_p = true;
    bool retvlen_p = true;

    if (c.base->may_require_saturation_mode_p ())
      {
	unsigned int sat_num = c.arg_num () - 1
			       - (c.base->apply_vl_p () ? 1 : 0);
	retsat_p = c.require_immediate (sat_num, UTNMODE_OFF, UTNMODE_ON);
      }

    if (c.base->xt_is_vred_p ())
      retvlen_p = c.require_vlen_xuantievreduction (c.arg_mode (0),
						    c.base->xt_is_vred64_p ());

    return retsat_p && retvlen_p;
  }

  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_base_name (instance.base_name);

    if (!overloaded_p)
      {
	/* vop --> vop_<op>.  */
	// b.append_name (operand_suffixes[instance.op_info->op]);
	/* vop_<op> --> vop_<op>_<type>.  */
	vector_type_index ret_type_idx
	  = instance.op_info->ret.get_function_type_index (instance.type.index);
	b.append_name (type_suffixes[ret_type_idx].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }
};

/* th_alu_u_def class.  */
struct th_alu_u_def : public build_base
{
  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    b.append_base_name (instance.base_name);

    /* vop<sew>_<op> --> vop<sew>_<op>_<type>.  */
    if (!overloaded_p)
      {
	b.append_name (operand_suffixes[instance.op_info->op]);
	b.append_name (type_suffixes[instance.type.index + 1].vector);
      }

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();
    b.append_name (predication_suffixes[instance.pred]);
    return b.finish_name ();
  }

  bool check (function_checker &c) const override
  {
    /* Check whether rounding mode argument is a valid immediate.  */
    if (c.base->has_rounding_mode_operand_p ())
      {
	/* Some invalid overload intrinsic like below will have zero for
	   c.arg_num ().  Thus, make sure arg_num is big enough here.
	   __riscv_vaadd () will make c.arg_num () == 0.  */
	if (!c.any_type_float_p () && c.arg_num () >= 2)
	  return c.require_immediate (c.arg_num () - 2, VXRM_RNU, VXRM_NONE);
	/* TODO: We will support floating-point intrinsic modeling
	   rounding mode in the future.  */
      }
    return true;
  }
};


/* th_alu_frm_def class.  */
struct th_alu_frm_def : public build_base
{
  /* Normalize vf<op>_frm to vf<op>.  */
  static void normalize_base_name (char *to, const char *from, int limit)
  {
    strncpy (to, from, limit - 1);
    char *suffix = strstr (to, "_frm");

    if (suffix)
      *suffix = '\0';

    to[limit - 1] = '\0';
  }

  bool check (function_checker &c) const override
  {
    bool retfrm_p = true;
    bool retsat_p = true;
    bool retvlen_p = true;

    if (c.base->has_rounding_mode_operand_p ())
      {
	unsigned int frm_num = c.arg_num () - 1
			       - (c.base->apply_vl_p () ? 1 : 0);
	retfrm_p = c.require_immediate (frm_num,
					FRM_STATIC_MIN, FRM_STATIC_MAX);
      }

    if (c.base->may_require_saturation_mode_p ())
      {
	unsigned int sat_num = c.arg_num () - 1
			       - (c.base->has_rounding_mode_operand_p ()
			       	  ? 1 : 0)
			       - (c.base->apply_vl_p () ? 1 : 0);
	retsat_p = c.require_immediate (sat_num, UTNMODE_OFF, UTNMODE_ON);
      }

    if (c.base->xt_is_vred_p ())
      retvlen_p = c.require_vlen_xuantievreduction (c.arg_mode (0),
						    c.base->xt_is_vred64_p ());

    return retfrm_p && retsat_p && retvlen_p;
  }

  char *get_name (function_builder &b, const function_instance &instance,
		  bool overloaded_p) const override
  {
    char base_name[BASE_NAME_MAX_LEN * 2] = {};

    /* Return nullptr if it can not be overloaded.  */
    if (overloaded_p && !instance.base->can_be_overloaded_p (instance.pred))
      return nullptr;

    normalize_base_name (base_name, instance.base_name, strlen (instance.base_name) + 1);

    b.append_base_name (base_name);

    /* vop<sew>_<op> --> vop<sew>_<op>_<type>.  */
    if (!overloaded_p)
      {
        vector_type_index ret_type_idx
          = instance.op_info->ret.get_function_type_index (instance.type.index);
        b.append_name (type_suffixes[ret_type_idx].vector);
      }

    if (!overloaded_p && instance.base->has_rounding_mode_operand_p())
      b.append_name ("_rm");

    /* According to rvv-intrinsic-doc, it does not add "_m" suffix
       for vop_m C++ overloaded API.  */
    if (overloaded_p && instance.pred == PRED_TYPE_m)
      return b.finish_name ();

    b.append_name (predication_suffixes[instance.pred]);

    return b.finish_name ();
  }
};

SHAPE(th_alu, th_alu)
SHAPE(th_alu_u, th_alu_u)
SHAPE(th_alu_frm, th_alu_frm)

#endif

#ifdef XUANTIE_VECTOR_BUILTINS_BASES_H
extern const function_base *const th_vpnclip;
extern const function_base *const th_vpnclipu;
extern const function_base *const th_vpwadd;
extern const function_base *const th_vpwaddu;
extern const function_base *const th_vmaqa;
extern const function_base *const th_vmaqau;
extern const function_base *const th_vmaqasu;
extern const function_base *const th_vmaqaus;
extern const function_base *const th_vpmaqa;
extern const function_base *const th_vpmaqau;
extern const function_base *const th_vpmaqasu;
extern const function_base *const th_vpmaqaus;

extern const function_base *const th_vlsegb;
extern const function_base *const th_vlsegbu;
extern const function_base *const th_vlsegh;
extern const function_base *const th_vlseghu;
extern const function_base *const th_vlsegw;
extern const function_base *const th_vlsegwu;
extern const function_base *const th_vssegb;
extern const function_base *const th_vssegh;
extern const function_base *const th_vssegw;
extern const function_base *const th_vlssegb;
extern const function_base *const th_vlssegbu;
extern const function_base *const th_vlssegh;
extern const function_base *const th_vlsseghu;
extern const function_base *const th_vlssegw;
extern const function_base *const th_vlssegwu;
extern const function_base *const th_vsssegb;
extern const function_base *const th_vsssegh;
extern const function_base *const th_vsssegw;
extern const function_base *const th_vlxsegb;
extern const function_base *const th_vlxsegbu;
extern const function_base *const th_vlxsegh;
extern const function_base *const th_vlxseghu;
extern const function_base *const th_vlxsegw;
extern const function_base *const th_vlxsegwu;
extern const function_base *const th_vsxsegb;
extern const function_base *const th_vsxsegh;
extern const function_base *const th_vsxsegw;

extern const function_base *const th_vcpx0;
extern const function_base *const th_vcpx0_rm;
extern const function_base *const th_vcpx1;
extern const function_base *const th_vcpx1_rm;
extern const function_base *const th_vcpx2;
extern const function_base *const th_vcpx2_rm;
extern const function_base *const th_vcpx3;
extern const function_base *const th_vcpx3_rm;
extern const function_base *const th_vcpx4;
extern const function_base *const th_vcpx4_rm;
extern const function_base *const th_vcpx5;
extern const function_base *const th_vcpx5_rm;
extern const function_base *const th_vcpx6;
extern const function_base *const th_vcpx6_rm;
extern const function_base *const th_vcpx7;
extern const function_base *const th_vcpx7_rm;
extern const function_base *const th_vcpx8;
extern const function_base *const th_vcpx8_rm;
extern const function_base *const th_vcpx9;
extern const function_base *const th_vcpx9_rm;
extern const function_base *const th_vcpx10;
extern const function_base *const th_vcpx10_rm;

extern const function_base *const th_vcpml_vcpx0;
extern const function_base *const th_vcpml_vcpx0_rm;
extern const function_base *const th_vcpml_vcpx1;
extern const function_base *const th_vcpml_vcpx1_rm;
extern const function_base *const th_vcpml_vcpx2;
extern const function_base *const th_vcpml_vcpx2_rm;
extern const function_base *const th_vcpml_vcpx3;
extern const function_base *const th_vcpml_vcpx3_rm;
extern const function_base *const th_vcpml_vcpx4;
extern const function_base *const th_vcpml_vcpx4_rm;
extern const function_base *const th_vcpml_vcpx5;
extern const function_base *const th_vcpml_vcpx5_rm;
extern const function_base *const th_vcpml_vcpx6;
extern const function_base *const th_vcpml_vcpx6_rm;
extern const function_base *const th_vcpml_vcpx7;
extern const function_base *const th_vcpml_vcpx7_rm;
extern const function_base *const th_vcpml_vcpx8;
extern const function_base *const th_vcpml_vcpx8_rm;
extern const function_base *const th_vcpml_vcpx9;
extern const function_base *const th_vcpml_vcpx9_rm;
extern const function_base *const th_vcpml_vcpx10;
extern const function_base *const th_vcpml_vcpx10_rm;

extern const function_base *const th_vwcpx0;
extern const function_base *const th_vwcpx0_rm;
extern const function_base *const th_vwcpx1;
extern const function_base *const th_vwcpx1_rm;
extern const function_base *const th_vwcpx2;
extern const function_base *const th_vwcpx2_rm;
extern const function_base *const th_vwcpx3;
extern const function_base *const th_vwcpx3_rm;
extern const function_base *const th_vncpx4;
extern const function_base *const th_vncpx4_rm;
extern const function_base *const th_vncpx5;
extern const function_base *const th_vncpx5_rm;
extern const function_base *const th_vfwqcpx6;
extern const function_base *const th_vfwqcpx6_rm;
extern const function_base *const th_vfwqcpx7;
extern const function_base *const th_vfwqcpx7_rm;
extern const function_base *const th_vwqcpx8;
extern const function_base *const th_vwqcpx8_rm;
extern const function_base *const th_vwqcpx9;
extern const function_base *const th_vwqcpx9_rm;
extern const function_base *const th_vnqcpx10;
extern const function_base *const th_vnqcpx10_rm;
extern const function_base *const th_vnqcpx11;
extern const function_base *const th_vnqcpx11_rm;
extern const function_base *const th_vwcpx12;
extern const function_base *const th_vwcpx12_rm;
extern const function_base *const th_vwcpx13;
extern const function_base *const th_vwcpx13_rm;
extern const function_base *const th_vncpx14;
extern const function_base *const th_vncpx14_rm;
extern const function_base *const th_vnqcpx15;
extern const function_base *const th_vnqcpx15_rm;
extern const function_base *const th_vncpx16;
extern const function_base *const th_vncpx16_rm;
extern const function_base *const th_vnqcpx17;
extern const function_base *const th_vnqcpx17_rm;

extern const function_base *const th_vfexp2;
extern const function_base *const th_vfexp2_frm;
extern const function_base *const th_vftanh;
extern const function_base *const th_vftanh_frm;
extern const function_base *const th_vfsig;
extern const function_base *const th_vfsig_frm;
extern const function_base *const th_vfrec;
extern const function_base *const th_vfrec_frm;
extern const function_base *const th_vfsqrt;
extern const function_base *const th_vfsqrt_frm;
extern const function_base *const th_vfrsqrt;
extern const function_base *const th_vfrsqrt_frm;
extern const function_base *const th_vflog2;
extern const function_base *const th_vflog2_frm;
extern const function_base *const th_vfsin;
extern const function_base *const th_vfsin_frm;
extern const function_base *const th_vfcos;
extern const function_base *const th_vfcos_frm;

extern const function_base *const th_vmacc54l_vv;
extern const function_base *const th_vmacc54l_vs;
extern const function_base *const th_vmacc54h_vv;
extern const function_base *const th_vmacc54h_vs;

extern const function_base *const th_vabd;
extern const function_base *const th_vabdu;
extern const function_base *const th_vaba;
extern const function_base *const th_vabau;
extern const function_base *const th_vfabd;
extern const function_base *const th_vfabd_frm;
extern const function_base *const th_vwabd;
extern const function_base *const th_vwabdu;
extern const function_base *const th_vwaba;
extern const function_base *const th_vwabau;
extern const function_base *const th_vabsmax;

extern const function_base *const th_vgmulxor;
extern const function_base *const th_vilo;
extern const function_base *const th_vile;
extern const function_base *const th_vcrcfoldr;
extern const function_base *const th_vcrcfoldn;

extern const function_base *const th_vfncvt_e4_h;
extern const function_base *const th_vfncvt_e4_h_frm;
extern const function_base *const th_vfncvt_e5_h;
extern const function_base *const th_vfncvt_e5_h_frm;
extern const function_base *const th_vfncvt_e4_bf16;
extern const function_base *const th_vfncvt_e4_bf16_frm;
extern const function_base *const th_vfncvt_e5_bf16;
extern const function_base *const th_vfncvt_e5_bf16_frm;
extern const function_base *const th_vfncvt_rod_bf16_s;
extern const function_base *const th_vfwcvt_h_e4;
extern const function_base *const th_vfwcvt_h_e4_frm;
extern const function_base *const th_vfwcvt_h_e5;
extern const function_base *const th_vfwcvt_h_e5_frm;
extern const function_base *const th_vfwcvt_bf16_e4;
extern const function_base *const th_vfwcvt_bf16_e4_frm;
extern const function_base *const th_vfwcvt_bf16_e5;
extern const function_base *const th_vfwcvt_bf16_e5_frm;
extern const function_base *const th_vfredsum_dup_32;
extern const function_base *const th_vfredsum_dup_32_frm;
extern const function_base *const th_vbfredsum_dup_32;
extern const function_base *const th_vbfredsum_dup_32_frm;
extern const function_base *const th_vfredsum_dup_64;
extern const function_base *const th_vfredsum_dup_64_frm;
extern const function_base *const th_vbfredsum_dup_64;
extern const function_base *const th_vbfredsum_dup_64_frm;
extern const function_base *const th_vfredsum_c_32;
extern const function_base *const th_vfredsum_c_32_frm;
extern const function_base *const th_vbfredsum_c_32;
extern const function_base *const th_vbfredsum_c_32_frm;
extern const function_base *const th_vfredsum_c_64;
extern const function_base *const th_vfredsum_c_64_frm;
extern const function_base *const th_vbfredsum_c_64;
extern const function_base *const th_vbfredsum_c_64_frm;
extern const function_base *const th_vfredmax_dup_32;
extern const function_base *const th_vfredmax_dup_32_frm;
extern const function_base *const th_vbfredmax_dup_32;
extern const function_base *const th_vbfredmax_dup_32_frm;
extern const function_base *const th_vfredmax_dup_64;
extern const function_base *const th_vfredmax_dup_64_frm;
extern const function_base *const th_vbfredmax_dup_64;
extern const function_base *const th_vbfredmax_dup_64_frm;
extern const function_base *const th_vfredmax_c_32;
extern const function_base *const th_vfredmax_c_32_frm;
extern const function_base *const th_vbfredmax_c_32;
extern const function_base *const th_vbfredmax_c_32_frm;
extern const function_base *const th_vfredmax_c_64;
extern const function_base *const th_vfredmax_c_64_frm;
extern const function_base *const th_vbfredmax_c_64;
extern const function_base *const th_vbfredmax_c_64_frm;
extern const function_base *const th_vfredmin_dup_32;
extern const function_base *const th_vfredmin_dup_32_frm;
extern const function_base *const th_vbfredmin_dup_32;
extern const function_base *const th_vbfredmin_dup_32_frm;
extern const function_base *const th_vfredmin_dup_64;
extern const function_base *const th_vfredmin_dup_64_frm;
extern const function_base *const th_vbfredmin_dup_64;
extern const function_base *const th_vbfredmin_dup_64_frm;
extern const function_base *const th_vfredmin_c_32;
extern const function_base *const th_vfredmin_c_32_frm;
extern const function_base *const th_vbfredmin_c_32;
extern const function_base *const th_vbfredmin_c_32_frm;
extern const function_base *const th_vfredmin_c_64;
extern const function_base *const th_vfredmin_c_64_frm;
extern const function_base *const th_vbfredmin_c_64;
extern const function_base *const th_vbfredmin_c_64_frm;
extern const function_base *const th_vary_dup_32;
extern const function_base *const th_vary_dup_32_frm;
extern const function_base *const th_vary_dup_64;
extern const function_base *const th_vary_dup_64_frm;
#endif

#ifdef XUANTIE_VECTOR_BUILTINS_BASES_CC

enum rm_op_type
{
  NO_RM,
  HAS_RM,
};

/* Implements th_vpnclip/th_vpnclipu.  */
template<int UNSPEC>
class th_vpnclip : public function_base
{
public:
  bool has_rounding_mode_operand_p () const override { return false; }

  rtx expand (function_expander &e) const override
  {
    if (!TARGET_XTHEADVDOT)
      error_at (e.location,"%qE requires 'xtheadvdot' for march", e.fndecl);

    switch (e.op_info->op)
      {
      case OP_TYPE_wx:
	return e.use_exact_insn (
	  code_for_pred_narrow_vpnclip_scalar (UNSPEC, e.vector_mode ()));
      case OP_TYPE_wv:
	return e.use_exact_insn (
	  code_for_pred_narrow_vpnclip (UNSPEC, e.vector_mode ()));
      default:
	gcc_unreachable ();
      }
  }
};

/* Implements th_vpwadd/th_vpwaddu.  */
template<int UNSPEC>
class th_vpwadd : public function_base
{
public:
  rtx expand (function_expander &e) const override
  {
    if (!TARGET_XTHEADVDOT)
      error_at (e.location,"%qE requires 'xtheadvdot' for march", e.fndecl);

    switch (e.op_info->op)
      {
      case OP_TYPE_vx:
	return e.use_exact_insn (
	  code_for_pred_vpwadd_scalar (UNSPEC, e.vector_mode ()));
      case OP_TYPE_vv:
	return e.use_exact_insn (
	  code_for_pred_vpwadd (UNSPEC, e.vector_mode ()));
      default:
	gcc_unreachable ();
      }
  }
};

/* Implements th_vmaqa/th_vmaqau/th_vmaqasu/th_vmaqaus/th_vpmaqa/th_vpmaqau/th_vpmaqasu/th_vpmaqaus.  */
template<int UNSPEC>
class th_maqa : public function_base
{
public:
  bool has_merge_operand_p () const override { return false; }

  rvv_base_type get_mask_type () const override { return RVV_BASE_xt_maqa_mask; }

  rtx expand (function_expander &e) const override
  {
    if (!TARGET_XTHEADVDOT)
      error_at (e.location,"%qE requires 'xtheadvdot' for march", e.fndecl);

    switch (e.op_info->op)
      {
      case OP_TYPE_vx:
	return e.use_exact_insn (
	  code_for_pred_maqa_scalar (UNSPEC, UNSPEC, e.vector_mode ()));
      case OP_TYPE_vv:
	return e.use_exact_insn (
	  code_for_pred_maqa (UNSPEC, UNSPEC, e.vector_mode ()));
      default:
	gcc_unreachable ();
      }
  }
};

/* Implements vlsegb.v.  */
template<int UNSPEC>
class th_vlsegb : public function_base
{
public:
  unsigned int call_properties (const function_instance &) const override
  {
    return CP_READ_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index pred) const override
  {
    return pred != PRED_TYPE_none;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_unit_seg_load (UNSPEC, e.vector_mode ()));
  }
};

/* Implements vlsegh.v.  */
template<int UNSPEC>
class th_vlsegh : public function_base
{
public:
  unsigned int call_properties (const function_instance &) const override
  {
    return CP_READ_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index pred) const override
  {
    return pred != PRED_TYPE_none;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_unit_seg_load (UNSPEC, e.vector_mode ()));
  }
};

/* Implements vlsegw.v.  */
template<int UNSPEC>
class th_vlsegw : public function_base
{
public:
  unsigned int call_properties (const function_instance &) const override
  {
    return CP_READ_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index pred) const override
  {
    return pred != PRED_TYPE_none;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_unit_seg_load (UNSPEC, e.vector_mode ()));
  }
};

/* Implements vssegb.v.  */
template<int UNSPEC>
class th_vssegb : public function_base
{
public:
  bool apply_tail_policy_p () const override { return false; }
  bool apply_mask_policy_p () const override { return false; }

  unsigned int call_properties (const function_instance &) const override
  {
    return CP_WRITE_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_unit_seg_store (UNSPEC, e.vector_mode ()));
  }
};

/* Implements vssegh.v.  */
template<int UNSPEC>
class th_vssegh : public function_base
{
public:
  bool apply_tail_policy_p () const override { return false; }
  bool apply_mask_policy_p () const override { return false; }

  unsigned int call_properties (const function_instance &) const override
  {
    return CP_WRITE_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_unit_seg_store (UNSPEC, e.vector_mode ()));
  }
};

/* Implements vssegw.v.  */
template<int UNSPEC>
class th_vssegw : public function_base
{
public:
  bool apply_tail_policy_p () const override { return false; }
  bool apply_mask_policy_p () const override { return false; }

  unsigned int call_properties (const function_instance &) const override
  {
    return CP_WRITE_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_unit_seg_store (UNSPEC, e.vector_mode ()));
  }
};

/* Implements vlssegb.v.  */
template<int UNSPEC>
class th_vlssegb : public function_base
{
public:
  unsigned int call_properties (const function_instance &) const override
  {
    return CP_READ_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index pred) const override
  {
    return pred != PRED_TYPE_none;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_strided_load (UNSPEC, e.vector_mode ()));
  }
};

/* Implements vlssegh.v.  */
template<int UNSPEC>
class th_vlssegh : public function_base
{
public:
  unsigned int call_properties (const function_instance &) const override
  {
    return CP_READ_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index pred) const override
  {
    return pred != PRED_TYPE_none;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_strided_load (UNSPEC, e.vector_mode ()));
  }
};

/* Implements vlssegw.v.  */
template<int UNSPEC>
class th_vlssegw : public function_base
{
public:
  unsigned int call_properties (const function_instance &) const override
  {
    return CP_READ_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index pred) const override
  {
    return pred != PRED_TYPE_none;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_strided_load (UNSPEC, e.vector_mode ()));
  }
};

/* Implements vsssegb.v.  */
template<int UNSPEC>
class th_vsssegb : public function_base
{
public:
  bool apply_tail_policy_p () const override { return false; }
  bool apply_mask_policy_p () const override { return false; }

  unsigned int call_properties (const function_instance &) const override
  {
    return CP_WRITE_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_strided_store (UNSPEC, e.vector_mode ()));
  }
};

/* Implements vsssegh.v.  */
template<int UNSPEC>
class th_vsssegh : public function_base
{
public:
  bool apply_tail_policy_p () const override { return false; }
  bool apply_mask_policy_p () const override { return false; }

  unsigned int call_properties (const function_instance &) const override
  {
    return CP_WRITE_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_strided_store (UNSPEC, e.vector_mode ()));
  }
};

/* Implements vsssegw.v.  */
template<int UNSPEC>
class th_vsssegw : public function_base
{
public:
  bool apply_tail_policy_p () const override { return false; }
  bool apply_mask_policy_p () const override { return false; }

  unsigned int call_properties (const function_instance &) const override
  {
    return CP_WRITE_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_strided_store (UNSPEC, e.vector_mode ()));
  }
};

template<int UNSPEC>
class th_vlxsegb : public function_base
{
public:
  unsigned int call_properties (const function_instance &) const override
  {
    return CP_READ_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_indexed_load (UNSPEC, e.vector_mode (), e.index_mode ()));
  }
};

template<int UNSPEC>
class th_vlxsegh : public function_base
{
public:
  unsigned int call_properties (const function_instance &) const override
  {
    return CP_READ_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_indexed_load (UNSPEC, e.vector_mode (), e.index_mode ()));
  }
};

template<int UNSPEC>
class th_vlxsegw : public function_base
{
public:
  unsigned int call_properties (const function_instance &) const override
  {
    return CP_READ_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_indexed_load (UNSPEC, e.vector_mode (), e.index_mode ()));
  }
};

template<int UNSPEC>
class th_vsxsegb : public function_base
{
public:
  bool apply_tail_policy_p () const override { return false; }
  bool apply_mask_policy_p () const override { return false; }

  unsigned int call_properties (const function_instance &) const override
  {
    return CP_WRITE_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_indexed_store (UNSPEC, e.vector_mode (), e.index_mode ()));
  }
};

template<int UNSPEC>
class th_vsxsegh : public function_base
{
public:
  bool apply_tail_policy_p () const override { return false; }
  bool apply_mask_policy_p () const override { return false; }

  unsigned int call_properties (const function_instance &) const override
  {
    return CP_WRITE_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_indexed_store (UNSPEC, e.vector_mode (), e.index_mode ()));
  }
};

template<int UNSPEC>
class th_vsxsegw : public function_base
{
public:
  bool apply_tail_policy_p () const override { return false; }
  bool apply_mask_policy_p () const override { return false; }

  unsigned int call_properties (const function_instance &) const override
  {
    return CP_WRITE_MEMORY;
  }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    gcc_assert (TARGET_XTHEADVECTOR);
    return e.use_exact_insn (
      code_for_pred_th_indexed_store (UNSPEC, e.vector_mode (), e.index_mode ()));
  }
};

template <enum rm_op_type RM_OP, bool HAS_TARGET, bool APPLY_VL>
class th_vcpx_base : public function_base
{
public:
  bool has_merge_operand_p () const override { return HAS_TARGET; }

  bool has_rounding_mode_operand_p () const override
  {
    return RM_OP == HAS_RM;
  }

  bool may_require_vxrm_p () const override { return true; }

  bool may_require_frm_p () const override { return true; }

  bool xt_has_idx_operand_p () const override { return true; }

  bool apply_vl_p () const override { return APPLY_VL; }

  unsigned int call_properties (const function_instance &) const override
  {
    return CP_WRITE_MEMORY;
  }
};

/* Unified subclass of th_vcpx_base, parameterized by the code_for_pred_*
   function pointer.  All th_vcpxN / th_vcpxN_vcpml classes are now
   using-aliases of this single template.  */
template <enum rm_op_type RM_OP, bool HAS_TARGET, bool APPLY_VL,
	  insn_code (*CODE_FOR) (machine_mode)>
class th_vcpx : public th_vcpx_base<RM_OP, HAS_TARGET, APPLY_VL>
{
public:
  rtx expand (function_expander &e) const override
  {
    return e.use_exact_insn (CODE_FOR (e.vector_mode ()));
  }
};

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpx0 = th_vcpx<RM_OP, false, false, code_for_pred_vcpx0>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpx1 = th_vcpx<RM_OP, true, false, code_for_pred_vcpx1>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpx2 = th_vcpx<RM_OP, false, false, code_for_pred_vcpx2>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpx3 = th_vcpx<RM_OP, true, false, code_for_pred_vcpx3>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpx4 = th_vcpx<RM_OP, false, false, code_for_pred_vcpx4>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpx5 = th_vcpx<RM_OP, true, false, code_for_pred_vcpx5>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpx6 = th_vcpx<RM_OP, false, false, code_for_pred_vcpx6>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpx7 = th_vcpx<RM_OP, true, false, code_for_pred_vcpx7>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpx8 = th_vcpx<RM_OP, false, false, code_for_pred_vcpx8>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpx9 = th_vcpx<RM_OP, false, false, code_for_pred_vcpx9>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpx10 = th_vcpx<RM_OP, true, false, code_for_pred_vcpx10>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpml_vcpx0 = th_vcpx<RM_OP, false, true, code_for_pred_vcpml_vcpx0>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpml_vcpx1 = th_vcpx<RM_OP, true, true, code_for_pred_vcpml_vcpx1>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpml_vcpx2 = th_vcpx<RM_OP, false, true, code_for_pred_vcpml_vcpx2>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpml_vcpx3 = th_vcpx<RM_OP, true, true, code_for_pred_vcpml_vcpx3>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpml_vcpx4 = th_vcpx<RM_OP, false, true, code_for_pred_vcpml_vcpx4>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpml_vcpx5 = th_vcpx<RM_OP, true, true, code_for_pred_vcpml_vcpx5>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpml_vcpx6 = th_vcpx<RM_OP, false, true, code_for_pred_vcpml_vcpx6>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpml_vcpx7 = th_vcpx<RM_OP, true, true, code_for_pred_vcpml_vcpx7>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpml_vcpx8 = th_vcpx<RM_OP, false, true, code_for_pred_vcpml_vcpx8>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpml_vcpx9 = th_vcpx<RM_OP, false, true, code_for_pred_vcpml_vcpx9>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vcpml_vcpx10 = th_vcpx<RM_OP, true, true, code_for_pred_vcpml_vcpx10>;

template <enum rm_op_type RM_OP, bool HAS_TARGET>
class th_vwncpx_base : public function_base
{
public:
  bool has_merge_operand_p () const override { return HAS_TARGET; }

  bool has_rounding_mode_operand_p () const override
  {
    return RM_OP == HAS_RM;
  }

  bool may_require_vxrm_p () const override { return true; }

  bool may_require_frm_p () const override { return true; }

  bool xt_has_idx_operand_p () const override { return true; }

  bool apply_vl_p () const override { return true; }

  unsigned int call_properties (const function_instance &) const override
  {
    return CP_WRITE_MEMORY;
  }
};

/* Mode selection for th_vwncpx expand: which machine_mode to pass.  */
enum cpx_mode_type { CPX_ARG0, CPX_ARG1, CPX_VEC };

/* Unified subclass of th_vwncpx_base, parameterized by the code_for_pred_*
   function pointer and the mode selection strategy.  All th_vwcpxN / th_vncpxN
   classes are now using-aliases of this single template.  */
template <enum rm_op_type RM_OP, bool HAS_TARGET,
	  insn_code (*CODE_FOR) (machine_mode),
	  cpx_mode_type MODE_TYPE>
class th_vwncpx : public th_vwncpx_base<RM_OP, HAS_TARGET>
{
public:
  rtx expand (function_expander &e) const override
  {
    machine_mode mode;
    switch (MODE_TYPE)
      {
      case CPX_ARG0: mode = e.arg_mode (0); break;
      case CPX_ARG1: mode = e.arg_mode (1); break;
      case CPX_VEC:  mode = e.vector_mode (); break;
      }
    return e.use_exact_insn (CODE_FOR (mode));
  }
};

template <enum rm_op_type RM_OP = NO_RM>
using th_vwcpx0 = th_vwncpx<RM_OP, false, code_for_pred_vwcpx0, CPX_ARG1>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vwcpx1 = th_vwncpx<RM_OP, false, code_for_pred_vwcpx1, CPX_ARG1>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vwcpx2 = th_vwncpx<RM_OP, false, code_for_pred_vwcpx2, CPX_ARG1>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vwcpx3 = th_vwncpx<RM_OP, false, code_for_pred_vwcpx3, CPX_ARG1>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vncpx4 = th_vwncpx<RM_OP, false, code_for_pred_vncpx4, CPX_VEC>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vncpx5 = th_vwncpx<RM_OP, true, code_for_pred_vncpx5, CPX_VEC>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vfwqcpx6 = th_vwncpx<RM_OP, false, code_for_pred_vfwqcpx6, CPX_ARG1>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vfwqcpx7 = th_vwncpx<RM_OP, false, code_for_pred_vfwqcpx7, CPX_ARG1>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vwqcpx8 = th_vwncpx<RM_OP, false, code_for_pred_vwqcpx8, CPX_ARG0>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vwqcpx9 = th_vwncpx<RM_OP, true, code_for_pred_vwqcpx9, CPX_ARG0>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vnqcpx10 = th_vwncpx<RM_OP, false, code_for_pred_vnqcpx10, CPX_VEC>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vnqcpx11 = th_vwncpx<RM_OP, true, code_for_pred_vnqcpx11, CPX_VEC>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vwcpx12 = th_vwncpx<RM_OP, false, code_for_pred_vwcpx12, CPX_ARG0>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vwcpx13 = th_vwncpx<RM_OP, true, code_for_pred_vwcpx13, CPX_ARG0>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vncpx14 = th_vwncpx<RM_OP, false, code_for_pred_vncpx14, CPX_VEC>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vnqcpx15 = th_vwncpx<RM_OP, false, code_for_pred_vnqcpx15, CPX_VEC>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vncpx16 = th_vwncpx<RM_OP, true, code_for_pred_vncpx16, CPX_VEC>;

template <enum rm_op_type RM_OP = NO_RM>
using th_vnqcpx17 = th_vwncpx<RM_OP, true, code_for_pred_vnqcpx17, CPX_VEC>;

/* Implements vfexp2/vftanh/vfsig/vfrec/vfsqrt/vfrsqrt/vflog2/vfsin/vscos.  */
template<int UNSPEC, enum frm_op_type FRM_OP = NO_FRM>
class th_unop : public function_base
{
public:
  bool has_rounding_mode_operand_p () const override
  {
    return FRM_OP == HAS_FRM;
  }

  bool may_require_frm_p () const override { return true; }

  rtx expand (function_expander &e) const override
  {
    return e.use_exact_insn (code_for_th_pred (UNSPEC, e.vector_mode ()));
  }
};

/* Implements vmacc54l.vv/vmacc54h.vv/vmacc54l.vs/vmacc54h.vs.  */
template<int UNSPEC>
class th_vcrypto : public function_base
{
public:
  
  bool has_merge_operand_p () const override { return false; }
  rtx expand (function_expander &e) const override
  {
    return e.use_ternop_insn (true, code_for_th_pred_vcrypto (UNSPEC, UNSPEC, e.vector_mode ()));
  }
};

/* Implements th.vabd.vv/th.vabd.vx/th.vabd.vi
   /th.vabdu.vv/th.vabdu.vx/th.vabdu.vi
   /th.vaba.vv/th.vaba.vx/th.vaba.vi
   /th.vabau.vv/th.vabau.vx/th.vabau.vi.  */
template<int UNSPEC, bool HAS_TARGET>
class th_vcoder : public function_base
{
public:
  
  bool has_merge_operand_p () const override { return HAS_TARGET; }
  rtx expand (function_expander &e) const override
  {
    switch (e.op_info->op)
      {
      case OP_TYPE_vx:
        return e.use_exact_insn (code_for_th_pred_vcoder_scalar (UNSPEC, e.vector_mode ()));
      case OP_TYPE_vv:
	      return e.use_exact_insn (code_for_th_pred_vcoder (UNSPEC, e.vector_mode ()));
      default:
	      gcc_unreachable ();
      }
  }
};

/* Implements th.vfabd.vv/th.vfabd.vf */
template <bool MAY_REQUIRE_FRM = false, enum frm_op_type FRM_OP = NO_FRM>
class th_vcoder_float : public function_base
{
public:
  bool has_merge_operand_p () const override { return true; }
  bool has_rounding_mode_operand_p () const override
  {
    return FRM_OP == HAS_FRM;
  }

  bool may_require_frm_p () const override { return MAY_REQUIRE_FRM; }

  rtx expand (function_expander &e) const override
  {
    switch (e.op_info->op)
      {
      case OP_TYPE_vf:
	return e.use_exact_insn (code_for_th_pred_vcoder_float_scalar (e.vector_mode ()));
      case OP_TYPE_vv:
	return e.use_exact_insn (code_for_th_pred_vcoder_float (e.vector_mode ()));
      default:
	gcc_unreachable ();
      }
  }
};

/* Implements th.vwabd.vv/th.vwabd.vx/th.vwabdu.vv/th.vwabdu.vx/
 * th.vwaba.vv/th.vwaba.vx/th.vwabau.vv/th.vwabau.vx.  */
template<int UNSPEC, bool HAS_TARGET>
class th_vcoder_widen : public function_base
{
public:
  bool has_merge_operand_p () const override { return HAS_TARGET; }

  rtx expand (function_expander &e) const override
  {
    switch (e.op_info->op)
      {
      case OP_TYPE_vx:
        return e.use_exact_insn (code_for_th_pred_vcoder_widen_scalar (UNSPEC, e.vector_mode ()));
      case OP_TYPE_vv:
	      return e.use_exact_insn (code_for_th_pred_vcoder_widen (UNSPEC, e.vector_mode ()));
      default:
	      gcc_unreachable ();
      }
  }
};

/* Implements vgmulxor.vv.  */
class th_vgmulxor : public function_base
{
public:
  
  bool apply_mask_policy_p () const override { return false; }
  bool use_mask_predication_p () const override { return false; }
  bool has_merge_operand_p () const override { return false; }
  rtx expand (function_expander &e) const override
  {
    return e.use_exact_insn (code_for_th_pred_vgmulxor (e.vector_mode ()));
  }
};

/* Implements vilo.vv/vile.vv.  */
template<int UNSPEC>
class th_vil : public function_base
{
public:

  bool apply_mask_policy_p () const override { return false; }
  bool use_mask_predication_p () const override { return false; }
  bool has_merge_operand_p () const override { return true; }
  rtx expand (function_expander &e) const override
  {
    return e.use_exact_insn (code_for_th_pred_vil (UNSPEC, UNSPEC, e.vector_mode ()));
  }
};

/* Implements vcrcfoldr.vv/vcrcfoldn.vv.  */
template<int UNSPEC>
class th_vcrcfold : public function_base
{
public:

  bool apply_mask_policy_p () const override { return false; }
  bool use_mask_predication_p () const override { return false; }
  bool has_merge_operand_p () const override { return false; }
  rtx expand (function_expander &e) const override
  {
    return e.use_exact_insn (code_for_th_pred_vcrcfold (UNSPEC, UNSPEC, e.vector_mode ()));
  }
};


/* Implements th.vfncvt.e4.h/th.vfncvt.e5.h/th.vfncvt.e4.bf16/th.vfncvt.e5.bf16.  */
template<int UNSPEC, enum frm_op_type FRM_OP = NO_FRM>
class th_vfncvt : public function_base
{
public:

  bool may_require_saturation_mode_p () const override { return true; }

  bool has_rounding_mode_operand_p () const override
  {
    return FRM_OP == HAS_FRM;
  }

  bool may_require_frm_p () const override { return true; }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    return e.use_exact_insn (code_for_th_pred_xtheadvfcvt_narrow (UNSPEC, e.vector_mode ()));
  }
};

/* Implements th.vfncvt.rod.bf16.s.  */
class th_vfncvt_rod : public function_base
{
public:

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    return e.use_exact_insn (code_for_th_pred_xtheadvfcvt_rod_trunc (e.vector_mode ()));
  }
};

/* Implements th.vfwcvt.h.e4/th.vfwcvt.h.e5/th.vfwcvt.bf16.e4/th.vfwcvt.bf16.e5.  */
template<int UNSPEC, enum frm_op_type FRM_OP = NO_FRM>
class th_vfwcvt : public function_base
{
public:

  bool has_rounding_mode_operand_p () const override
  {
    return FRM_OP == HAS_FRM;
  }

  bool may_require_frm_p () const override { return true; }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  rtx expand (function_expander &e) const override
  {
    return e.use_exact_insn (code_for_th_pred_xtheadvfcvt_widen (UNSPEC, e.vector_mode ()));
  }
};

/* Implements xtheadvreduction instructions.  */
template<int UNSPEC, enum frm_op_type FRM_OP = NO_FRM,
	 bool is64special_p = false>
class th_vfred : public function_base
{
public:

  bool may_require_saturation_mode_p () const override { return true; }

  bool has_rounding_mode_operand_p () const override
  {
    return FRM_OP == HAS_FRM;
  }

  bool may_require_frm_p () const override { return true; }

  bool xt_is_vred_p () const override { return true; }

  bool xt_is_vred64_p () const override { return is64special_p; }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  bool apply_tail_policy_p () const override { return false; }
  bool apply_mask_policy_p () const override { return false; }
  bool use_mask_predication_p () const override { return false; }
  bool has_merge_operand_p () const override { return false; }
  bool apply_vl_p () const override { return false; }

  rtx expand (function_expander &e) const override
  {
    return e.use_exact_insn (code_for_th_pred_xtheadvreduction (UNSPEC, e.vector_mode ()));
  }
};

/* Implements xtheadvreduction instructions.  */
template<int UNSPEC, bool is64special_p = false>
class th_vary : public function_base
{
public:

  bool has_rounding_mode_operand_p () const override { return false; }

  bool may_require_frm_p () const override { return false; }

  bool xt_is_vred_p () const override { return true; }

  bool xt_is_vred64_p () const override { return is64special_p; }

  bool can_be_overloaded_p (enum predication_type_index) const override
  {
    return true;
  }

  bool apply_tail_policy_p () const override { return false; }
  bool apply_mask_policy_p () const override { return false; }
  bool use_mask_predication_p () const override { return false; }
  bool has_merge_operand_p () const override { return false; }
  bool apply_vl_p () const override { return false; }

  rtx expand (function_expander &e) const override
  {
    return e.use_exact_insn (code_for_th_pred_xtheadvreduction_vary (UNSPEC, e.vector_mode ()));
  }
};

static CONSTEXPR const th_vpnclip<UNSPEC_TH_VPNCLIP> th_vpnclip_obj;
static CONSTEXPR const th_vpnclip<UNSPEC_TH_VPNCLIPU> th_vpnclipu_obj;

static CONSTEXPR const th_vpwadd<UNSPEC_TH_VPWADD> th_vpwadd_obj;
static CONSTEXPR const th_vpwadd<UNSPEC_TH_VPWADDU> th_vpwaddu_obj;

static CONSTEXPR const th_maqa<UNSPEC_TH_VMAQA> th_vmaqa_obj;
static CONSTEXPR const th_maqa<UNSPEC_TH_VMAQAU> th_vmaqau_obj;
static CONSTEXPR const th_maqa<UNSPEC_TH_VMAQASU> th_vmaqasu_obj;
static CONSTEXPR const th_maqa<UNSPEC_TH_VMAQAUS> th_vmaqaus_obj;
static CONSTEXPR const th_maqa<UNSPEC_TH_VPMAQA> th_vpmaqa_obj;
static CONSTEXPR const th_maqa<UNSPEC_TH_VPMAQAU> th_vpmaqau_obj;
static CONSTEXPR const th_maqa<UNSPEC_TH_VPMAQASU> th_vpmaqasu_obj;
static CONSTEXPR const th_maqa<UNSPEC_TH_VPMAQAUS> th_vpmaqaus_obj;

static CONSTEXPR const th_vlsegb<UNSPEC_TH_VLSEGB> th_vlsegb_obj;
static CONSTEXPR const th_vlsegb<UNSPEC_TH_VLSEGBU> th_vlsegbu_obj;
static CONSTEXPR const th_vlsegh<UNSPEC_TH_VLSEGH> th_vlsegh_obj;
static CONSTEXPR const th_vlsegh<UNSPEC_TH_VLSEGHU> th_vlseghu_obj;
static CONSTEXPR const th_vlsegw<UNSPEC_TH_VLSEGW> th_vlsegw_obj;
static CONSTEXPR const th_vlsegw<UNSPEC_TH_VLSEGWU> th_vlsegwu_obj;
static CONSTEXPR const th_vssegb<UNSPEC_TH_VLSEGB> th_vssegb_obj;
static CONSTEXPR const th_vssegh<UNSPEC_TH_VLSEGH> th_vssegh_obj;
static CONSTEXPR const th_vssegw<UNSPEC_TH_VLSEGW> th_vssegw_obj;
static CONSTEXPR const th_vlssegb<UNSPEC_TH_VLSSEGB> th_vlssegb_obj;
static CONSTEXPR const th_vlssegb<UNSPEC_TH_VLSSEGBU> th_vlssegbu_obj;
static CONSTEXPR const th_vlssegh<UNSPEC_TH_VLSSEGH> th_vlssegh_obj;
static CONSTEXPR const th_vlssegh<UNSPEC_TH_VLSSEGHU> th_vlsseghu_obj;
static CONSTEXPR const th_vlssegw<UNSPEC_TH_VLSSEGW> th_vlssegw_obj;
static CONSTEXPR const th_vlssegw<UNSPEC_TH_VLSSEGWU> th_vlssegwu_obj;
static CONSTEXPR const th_vsssegb<UNSPEC_TH_VLSSEGB> th_vsssegb_obj;
static CONSTEXPR const th_vsssegh<UNSPEC_TH_VLSSEGH> th_vsssegh_obj;
static CONSTEXPR const th_vsssegw<UNSPEC_TH_VLSSEGW> th_vsssegw_obj;
static CONSTEXPR const th_vlxsegb<UNSPEC_TH_VLXSEGB> th_vlxsegb_obj;
static CONSTEXPR const th_vlxsegb<UNSPEC_TH_VLXSEGBU> th_vlxsegbu_obj;
static CONSTEXPR const th_vlxsegh<UNSPEC_TH_VLXSEGH> th_vlxsegh_obj;
static CONSTEXPR const th_vlxsegh<UNSPEC_TH_VLXSEGHU> th_vlxseghu_obj;
static CONSTEXPR const th_vlxsegw<UNSPEC_TH_VLXSEGW> th_vlxsegw_obj;
static CONSTEXPR const th_vlxsegw<UNSPEC_TH_VLXSEGWU> th_vlxsegwu_obj;
static CONSTEXPR const th_vsxsegb<UNSPEC_TH_VLXSEGB> th_vsxsegb_obj;
static CONSTEXPR const th_vsxsegh<UNSPEC_TH_VLXSEGH> th_vsxsegh_obj;
static CONSTEXPR const th_vsxsegw<UNSPEC_TH_VLXSEGW> th_vsxsegw_obj;

static CONSTEXPR const th_vcpx0<NO_RM> th_vcpx0_obj;
static CONSTEXPR const th_vcpx0<HAS_RM> th_vcpx0_rm_obj;
static CONSTEXPR const th_vcpx1<NO_RM> th_vcpx1_obj;
static CONSTEXPR const th_vcpx1<HAS_RM> th_vcpx1_rm_obj;
static CONSTEXPR const th_vcpx2<NO_RM> th_vcpx2_obj;
static CONSTEXPR const th_vcpx2<HAS_RM> th_vcpx2_rm_obj;
static CONSTEXPR const th_vcpx3<NO_RM> th_vcpx3_obj;
static CONSTEXPR const th_vcpx3<HAS_RM> th_vcpx3_rm_obj;
static CONSTEXPR const th_vcpx4<NO_RM> th_vcpx4_obj;
static CONSTEXPR const th_vcpx4<HAS_RM> th_vcpx4_rm_obj;
static CONSTEXPR const th_vcpx5<NO_RM> th_vcpx5_obj;
static CONSTEXPR const th_vcpx5<HAS_RM> th_vcpx5_rm_obj;
static CONSTEXPR const th_vcpx6<NO_RM> th_vcpx6_obj;
static CONSTEXPR const th_vcpx6<HAS_RM> th_vcpx6_rm_obj;
static CONSTEXPR const th_vcpx7<NO_RM> th_vcpx7_obj;
static CONSTEXPR const th_vcpx7<HAS_RM> th_vcpx7_rm_obj;
static CONSTEXPR const th_vcpx8<NO_RM> th_vcpx8_obj;
static CONSTEXPR const th_vcpx8<HAS_RM> th_vcpx8_rm_obj;
static CONSTEXPR const th_vcpx9<NO_RM> th_vcpx9_obj;
static CONSTEXPR const th_vcpx9<HAS_RM> th_vcpx9_rm_obj;
static CONSTEXPR const th_vcpx10<NO_RM> th_vcpx10_obj;
static CONSTEXPR const th_vcpx10<HAS_RM> th_vcpx10_rm_obj;

static CONSTEXPR const th_vcpml_vcpx0<NO_RM> th_vcpml_vcpx0_obj;
static CONSTEXPR const th_vcpml_vcpx0<HAS_RM> th_vcpml_vcpx0_rm_obj;
static CONSTEXPR const th_vcpml_vcpx1<NO_RM> th_vcpml_vcpx1_obj;
static CONSTEXPR const th_vcpml_vcpx1<HAS_RM> th_vcpml_vcpx1_rm_obj;
static CONSTEXPR const th_vcpml_vcpx2<NO_RM> th_vcpml_vcpx2_obj;
static CONSTEXPR const th_vcpml_vcpx2<HAS_RM> th_vcpml_vcpx2_rm_obj;
static CONSTEXPR const th_vcpml_vcpx3<NO_RM> th_vcpml_vcpx3_obj;
static CONSTEXPR const th_vcpml_vcpx3<HAS_RM> th_vcpml_vcpx3_rm_obj;
static CONSTEXPR const th_vcpml_vcpx4<NO_RM> th_vcpml_vcpx4_obj;
static CONSTEXPR const th_vcpml_vcpx4<HAS_RM> th_vcpml_vcpx4_rm_obj;
static CONSTEXPR const th_vcpml_vcpx5<NO_RM> th_vcpml_vcpx5_obj;
static CONSTEXPR const th_vcpml_vcpx5<HAS_RM> th_vcpml_vcpx5_rm_obj;
static CONSTEXPR const th_vcpml_vcpx6<NO_RM> th_vcpml_vcpx6_obj;
static CONSTEXPR const th_vcpml_vcpx6<HAS_RM> th_vcpml_vcpx6_rm_obj;
static CONSTEXPR const th_vcpml_vcpx7<NO_RM> th_vcpml_vcpx7_obj;
static CONSTEXPR const th_vcpml_vcpx7<HAS_RM> th_vcpml_vcpx7_rm_obj;
static CONSTEXPR const th_vcpml_vcpx8<NO_RM> th_vcpml_vcpx8_obj;
static CONSTEXPR const th_vcpml_vcpx8<HAS_RM> th_vcpml_vcpx8_rm_obj;
static CONSTEXPR const th_vcpml_vcpx9<NO_RM> th_vcpml_vcpx9_obj;
static CONSTEXPR const th_vcpml_vcpx9<HAS_RM> th_vcpml_vcpx9_rm_obj;
static CONSTEXPR const th_vcpml_vcpx10<NO_RM> th_vcpml_vcpx10_obj;
static CONSTEXPR const th_vcpml_vcpx10<HAS_RM> th_vcpml_vcpx10_rm_obj;

static CONSTEXPR const th_vwcpx0<NO_RM> th_vwcpx0_obj;
static CONSTEXPR const th_vwcpx0<HAS_RM> th_vwcpx0_rm_obj;
static CONSTEXPR const th_vwcpx1<NO_RM> th_vwcpx1_obj;
static CONSTEXPR const th_vwcpx1<HAS_RM> th_vwcpx1_rm_obj;
static CONSTEXPR const th_vwcpx2<NO_RM> th_vwcpx2_obj;
static CONSTEXPR const th_vwcpx2<HAS_RM> th_vwcpx2_rm_obj;
static CONSTEXPR const th_vwcpx3<NO_RM> th_vwcpx3_obj;
static CONSTEXPR const th_vwcpx3<HAS_RM> th_vwcpx3_rm_obj;
static CONSTEXPR const th_vncpx4<NO_RM> th_vncpx4_obj;
static CONSTEXPR const th_vncpx4<HAS_RM> th_vncpx4_rm_obj;
static CONSTEXPR const th_vncpx5<NO_RM> th_vncpx5_obj;
static CONSTEXPR const th_vncpx5<HAS_RM> th_vncpx5_rm_obj;
static CONSTEXPR const th_vfwqcpx6<NO_RM> th_vfwqcpx6_obj;
static CONSTEXPR const th_vfwqcpx6<HAS_RM> th_vfwqcpx6_rm_obj;
static CONSTEXPR const th_vfwqcpx7<NO_RM> th_vfwqcpx7_obj;
static CONSTEXPR const th_vfwqcpx7<HAS_RM> th_vfwqcpx7_rm_obj;
static CONSTEXPR const th_vwqcpx8<NO_RM> th_vwqcpx8_obj;
static CONSTEXPR const th_vwqcpx8<HAS_RM> th_vwqcpx8_rm_obj;
static CONSTEXPR const th_vwqcpx9<NO_RM> th_vwqcpx9_obj;
static CONSTEXPR const th_vwqcpx9<HAS_RM> th_vwqcpx9_rm_obj;
static CONSTEXPR const th_vnqcpx10<NO_RM> th_vnqcpx10_obj;
static CONSTEXPR const th_vnqcpx10<HAS_RM> th_vnqcpx10_rm_obj;
static CONSTEXPR const th_vnqcpx11<NO_RM> th_vnqcpx11_obj;
static CONSTEXPR const th_vnqcpx11<HAS_RM> th_vnqcpx11_rm_obj;
static CONSTEXPR const th_vwcpx12<NO_RM> th_vwcpx12_obj;
static CONSTEXPR const th_vwcpx12<HAS_RM> th_vwcpx12_rm_obj;
static CONSTEXPR const th_vwcpx13<NO_RM> th_vwcpx13_obj;
static CONSTEXPR const th_vwcpx13<HAS_RM> th_vwcpx13_rm_obj;
static CONSTEXPR const th_vncpx14<NO_RM> th_vncpx14_obj;
static CONSTEXPR const th_vncpx14<HAS_RM> th_vncpx14_rm_obj;
static CONSTEXPR const th_vnqcpx15<NO_RM> th_vnqcpx15_obj;
static CONSTEXPR const th_vnqcpx15<HAS_RM> th_vnqcpx15_rm_obj;
static CONSTEXPR const th_vncpx16<NO_RM> th_vncpx16_obj;
static CONSTEXPR const th_vncpx16<HAS_RM> th_vncpx16_rm_obj;
static CONSTEXPR const th_vnqcpx17<NO_RM> th_vnqcpx17_obj;
static CONSTEXPR const th_vnqcpx17<HAS_RM> th_vnqcpx17_rm_obj;

static CONSTEXPR const th_unop<UNSPEC_TH_VFEXP2> th_vfexp2_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFEXP2, HAS_FRM> th_vfexp2_frm_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFTANH> th_vftanh_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFTANH, HAS_FRM> th_vftanh_frm_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFSIG> th_vfsig_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFSIG, HAS_FRM> th_vfsig_frm_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFREC> th_vfrec_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFREC, HAS_FRM> th_vfrec_frm_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFSQRT> th_vfsqrt_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFSQRT, HAS_FRM> th_vfsqrt_frm_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFRSQRT> th_vfrsqrt_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFRSQRT, HAS_FRM> th_vfrsqrt_frm_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFLOG2> th_vflog2_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFLOG2, HAS_FRM> th_vflog2_frm_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFSIN> th_vfsin_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFSIN, HAS_FRM> th_vfsin_frm_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFCOS> th_vfcos_obj;
static CONSTEXPR const th_unop<UNSPEC_TH_VFCOS, HAS_FRM> th_vfcos_frm_obj;

static CONSTEXPR const th_vcrypto<UNSPEC_TH_VMACC54L_VV> th_vmacc54l_vv_obj;
static CONSTEXPR const th_vcrypto<UNSPEC_TH_VMACC54L_VS> th_vmacc54l_vs_obj;
static CONSTEXPR const th_vcrypto<UNSPEC_TH_VMACC54H_VV> th_vmacc54h_vv_obj;
static CONSTEXPR const th_vcrypto<UNSPEC_TH_VMACC54H_VS> th_vmacc54h_vs_obj;

static CONSTEXPR const th_vcoder<UNSPEC_TH_VABD, true> th_vabd_obj;
static CONSTEXPR const th_vcoder<UNSPEC_TH_VABDU, true> th_vabdu_obj;
static CONSTEXPR const th_vcoder<UNSPEC_TH_VABA, false> th_vaba_obj;
static CONSTEXPR const th_vcoder<UNSPEC_TH_VABAU, false> th_vabau_obj;
static CONSTEXPR const th_vcoder_float<true> th_vfabd_obj;
static CONSTEXPR const th_vcoder_float<true, HAS_FRM> th_vfabd_frm_obj;
static CONSTEXPR const th_vcoder_widen<UNSPEC_TH_VWABD, true> th_vwabd_obj;
static CONSTEXPR const th_vcoder_widen<UNSPEC_TH_VWABDU, true> th_vwabdu_obj;
static CONSTEXPR const th_vcoder_widen<UNSPEC_TH_VWABA, false> th_vwaba_obj;
static CONSTEXPR const th_vcoder_widen<UNSPEC_TH_VWABAU, false> th_vwabau_obj;
static CONSTEXPR const th_vcoder<UNSPEC_TH_VABSMAX, true> th_vabsmax_obj;

static CONSTEXPR const th_vgmulxor th_vgmulxor_obj;
static CONSTEXPR const th_vil<UNSPEC_TH_VILO_VV> th_vilo_obj;
static CONSTEXPR const th_vil<UNSPEC_TH_VILE_VV> th_vile_obj;
static CONSTEXPR const th_vcrcfold<UNSPEC_TH_VCRCFOLDR_VV> th_vcrcfoldr_obj;
static CONSTEXPR const th_vcrcfold<UNSPEC_TH_VCRCFOLDN_VV> th_vcrcfoldn_obj;

static CONSTEXPR const th_vfncvt<UNSPEC_TH_VFNCVT_E4_H>
	th_vfncvt_e4_h_obj;
static CONSTEXPR const th_vfncvt<UNSPEC_TH_VFNCVT_E4_H, HAS_FRM>
	th_vfncvt_e4_h_frm_obj;
static CONSTEXPR const th_vfncvt<UNSPEC_TH_VFNCVT_E5_H>
	th_vfncvt_e5_h_obj;
static CONSTEXPR const th_vfncvt<UNSPEC_TH_VFNCVT_E5_H, HAS_FRM>
	th_vfncvt_e5_h_frm_obj;
static CONSTEXPR const th_vfncvt<UNSPEC_TH_VFNCVT_E4_BF16>
	th_vfncvt_e4_bf16_obj;
static CONSTEXPR const th_vfncvt<UNSPEC_TH_VFNCVT_E4_BF16, HAS_FRM>
	th_vfncvt_e4_bf16_frm_obj;
static CONSTEXPR const th_vfncvt<UNSPEC_TH_VFNCVT_E5_BF16>
	th_vfncvt_e5_bf16_obj;
static CONSTEXPR const th_vfncvt<UNSPEC_TH_VFNCVT_E5_BF16, HAS_FRM>
	th_vfncvt_e5_bf16_frm_obj;
static CONSTEXPR const th_vfncvt_rod th_vfncvt_rod_bf16_s_obj;
static CONSTEXPR const th_vfwcvt<UNSPEC_TH_VFWCVT_H_E4>
	th_vfwcvt_h_e4_obj;
static CONSTEXPR const th_vfwcvt<UNSPEC_TH_VFWCVT_H_E4, HAS_FRM>
	th_vfwcvt_h_e4_frm_obj;
static CONSTEXPR const th_vfwcvt<UNSPEC_TH_VFWCVT_H_E5>
	th_vfwcvt_h_e5_obj;
static CONSTEXPR const th_vfwcvt<UNSPEC_TH_VFWCVT_H_E5, HAS_FRM>
	th_vfwcvt_h_e5_frm_obj;
static CONSTEXPR const th_vfwcvt<UNSPEC_TH_VFWCVT_BF16_E4>
	th_vfwcvt_bf16_e4_obj;
static CONSTEXPR const th_vfwcvt<UNSPEC_TH_VFWCVT_BF16_E4, HAS_FRM>
	th_vfwcvt_bf16_e4_frm_obj;
static CONSTEXPR const th_vfwcvt<UNSPEC_TH_VFWCVT_BF16_E5>
	th_vfwcvt_bf16_e5_obj;
static CONSTEXPR const th_vfwcvt<UNSPEC_TH_VFWCVT_BF16_E5, HAS_FRM>
	th_vfwcvt_bf16_e5_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDSUM_DUP_32, NO_FRM, false>
	th_vfredsum_dup_32_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDSUM_DUP_32, HAS_FRM, false>
	th_vfredsum_dup_32_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDSUM_DUP_32, NO_FRM, false>
	th_vbfredsum_dup_32_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDSUM_DUP_32, HAS_FRM, false>
	th_vbfredsum_dup_32_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDSUM_DUP_64, NO_FRM, true>
	th_vfredsum_dup_64_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDSUM_DUP_64, HAS_FRM, true>
	th_vfredsum_dup_64_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDSUM_DUP_64, NO_FRM, false>
	th_vbfredsum_dup_64_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDSUM_DUP_64, HAS_FRM, false>
	th_vbfredsum_dup_64_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDSUM_C_32, NO_FRM, false>
	th_vfredsum_c_32_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDSUM_C_32, HAS_FRM, false>
	th_vfredsum_c_32_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDSUM_C_32, NO_FRM, false>
	th_vbfredsum_c_32_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDSUM_C_32, HAS_FRM, false>
	th_vbfredsum_c_32_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDSUM_C_64, NO_FRM, true>
	th_vfredsum_c_64_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDSUM_C_64, HAS_FRM, true>
	th_vfredsum_c_64_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDSUM_C_64, NO_FRM, false>
	th_vbfredsum_c_64_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDSUM_C_64, HAS_FRM, false>
	th_vbfredsum_c_64_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMAX_DUP_32, NO_FRM, false>
	th_vfredmax_dup_32_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMAX_DUP_32, HAS_FRM, false>
	th_vfredmax_dup_32_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMAX_DUP_32, NO_FRM, false>
	th_vbfredmax_dup_32_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMAX_DUP_32, HAS_FRM, false>
	th_vbfredmax_dup_32_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMAX_DUP_64, NO_FRM, true>
	th_vfredmax_dup_64_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMAX_DUP_64, HAS_FRM, true>
	th_vfredmax_dup_64_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMAX_DUP_64, NO_FRM, false>
	th_vbfredmax_dup_64_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMAX_DUP_64, HAS_FRM, false>
	th_vbfredmax_dup_64_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMAX_C_32, NO_FRM, false>
	th_vfredmax_c_32_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMAX_C_32, HAS_FRM, false>
	th_vfredmax_c_32_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMAX_C_32, NO_FRM, false>
	th_vbfredmax_c_32_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMAX_C_32, HAS_FRM, false>
	th_vbfredmax_c_32_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMAX_C_64, NO_FRM, true>
	th_vfredmax_c_64_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMAX_C_64, HAS_FRM, true>
	th_vfredmax_c_64_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMAX_C_64, NO_FRM, false>
	th_vbfredmax_c_64_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMAX_C_64, HAS_FRM, false>
	th_vbfredmax_c_64_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMIN_DUP_32, NO_FRM, false>
	th_vfredmin_dup_32_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMIN_DUP_32, HAS_FRM, false>
	th_vfredmin_dup_32_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMIN_DUP_32, NO_FRM, false>
	th_vbfredmin_dup_32_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMIN_DUP_32, HAS_FRM, false>
	th_vbfredmin_dup_32_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMIN_DUP_64, NO_FRM, true>
	th_vfredmin_dup_64_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMIN_DUP_64, HAS_FRM, true>
	th_vfredmin_dup_64_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMIN_DUP_64, NO_FRM, false>
	th_vbfredmin_dup_64_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMIN_DUP_64, HAS_FRM, false>
	th_vbfredmin_dup_64_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMIN_C_32, NO_FRM, false>
	th_vfredmin_c_32_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMIN_C_32, HAS_FRM, false>
	th_vfredmin_c_32_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMIN_C_32, NO_FRM, false>
	th_vbfredmin_c_32_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMIN_C_32, HAS_FRM, false>
	th_vbfredmin_c_32_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMIN_C_64, NO_FRM, true>
	th_vfredmin_c_64_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VFREDMIN_C_64, HAS_FRM, true>
	th_vfredmin_c_64_frm_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMIN_C_64, NO_FRM, false>
	th_vbfredmin_c_64_obj;
static CONSTEXPR const th_vfred<UNSPEC_TH_VBFREDMIN_C_64, HAS_FRM, false>
	th_vbfredmin_c_64_frm_obj;
static CONSTEXPR const th_vary<UNSPEC_TH_VARY_DUP_32, false> th_vary_dup_32_obj;
static CONSTEXPR const th_vary<UNSPEC_TH_VARY_DUP_64, true> th_vary_dup_64_obj;

/* theadvdot.  */
BASE (th_vpnclip)
BASE (th_vpnclipu)
BASE (th_vpwadd)
BASE (th_vpwaddu)
BASE (th_vmaqa)
BASE (th_vmaqau)
BASE (th_vmaqasu)
BASE (th_vmaqaus)
BASE (th_vpmaqa)
BASE (th_vpmaqau)
BASE (th_vpmaqasu)
BASE (th_vpmaqaus)

/* xtheadvector seg load store*/
BASE (th_vlsegb)
BASE (th_vlsegbu)
BASE (th_vlsegh)
BASE (th_vlseghu)
BASE (th_vlsegw)
BASE (th_vlsegwu)
BASE (th_vssegb)
BASE (th_vssegh)
BASE (th_vssegw)
BASE (th_vlssegb)
BASE (th_vlssegbu)
BASE (th_vlssegh)
BASE (th_vlsseghu)
BASE (th_vlssegw)
BASE (th_vlssegwu)
BASE (th_vsssegb)
BASE (th_vsssegh)
BASE (th_vsssegw)
BASE (th_vlxsegb)
BASE (th_vlxsegbu)
BASE (th_vlxsegh)
BASE (th_vlxseghu)
BASE (th_vlxsegw)
BASE (th_vlxsegwu)
BASE (th_vsxsegb)
BASE (th_vsxsegh)
BASE (th_vsxsegw)

/* Xxtcv */
BASE (th_vcpx0)
BASE (th_vcpx0_rm)
BASE (th_vcpx1)
BASE (th_vcpx1_rm)
BASE (th_vcpx2)
BASE (th_vcpx2_rm)
BASE (th_vcpx3)
BASE (th_vcpx3_rm)
BASE (th_vcpx4)
BASE (th_vcpx4_rm)
BASE (th_vcpx5)
BASE (th_vcpx5_rm)
BASE (th_vcpx6)
BASE (th_vcpx6_rm)
BASE (th_vcpx7)
BASE (th_vcpx7_rm)
BASE (th_vcpx8)
BASE (th_vcpx8_rm)
BASE (th_vcpx9)
BASE (th_vcpx9_rm)
BASE (th_vcpx10)
BASE (th_vcpx10_rm)

/* Xtheadvcpml */
BASE (th_vcpml_vcpx0)
BASE (th_vcpml_vcpx0_rm)
BASE (th_vcpml_vcpx1)
BASE (th_vcpml_vcpx1_rm)
BASE (th_vcpml_vcpx2)
BASE (th_vcpml_vcpx2_rm)
BASE (th_vcpml_vcpx3)
BASE (th_vcpml_vcpx3_rm)
BASE (th_vcpml_vcpx4)
BASE (th_vcpml_vcpx4_rm)
BASE (th_vcpml_vcpx5)
BASE (th_vcpml_vcpx5_rm)
BASE (th_vcpml_vcpx6)
BASE (th_vcpml_vcpx6_rm)
BASE (th_vcpml_vcpx7)
BASE (th_vcpml_vcpx7_rm)
BASE (th_vcpml_vcpx8)
BASE (th_vcpml_vcpx8_rm)
BASE (th_vcpml_vcpx9)
BASE (th_vcpml_vcpx9_rm)
BASE (th_vcpml_vcpx10)
BASE (th_vcpml_vcpx10_rm)

/* xtheadcvwn  */
BASE (th_vwcpx0)
BASE (th_vwcpx0_rm)
BASE (th_vwcpx1)
BASE (th_vwcpx1_rm)
BASE (th_vwcpx2)
BASE (th_vwcpx2_rm)
BASE (th_vwcpx3)
BASE (th_vwcpx3_rm)
BASE (th_vncpx4)
BASE (th_vncpx4_rm)
BASE (th_vncpx5)
BASE (th_vncpx5_rm)
BASE (th_vfwqcpx6)
BASE (th_vfwqcpx6_rm)
BASE (th_vfwqcpx7)
BASE (th_vfwqcpx7_rm)
BASE (th_vwqcpx8)
BASE (th_vwqcpx8_rm)
BASE (th_vwqcpx9)
BASE (th_vwqcpx9_rm)
BASE (th_vnqcpx10)
BASE (th_vnqcpx10_rm)
BASE (th_vnqcpx11)
BASE (th_vnqcpx11_rm)
BASE (th_vwcpx12)
BASE (th_vwcpx12_rm)
BASE (th_vwcpx13)
BASE (th_vwcpx13_rm)
BASE (th_vncpx14)
BASE (th_vncpx14_rm)
BASE (th_vnqcpx15)
BASE (th_vnqcpx15_rm)
BASE (th_vncpx16)
BASE (th_vncpx16_rm)
BASE (th_vnqcpx17)
BASE (th_vnqcpx17_rm)

/* xtheadvsfa  */
BASE (th_vfexp2)
BASE (th_vfexp2_frm)
BASE (th_vftanh)
BASE (th_vftanh_frm)
BASE (th_vfsig)
BASE (th_vfsig_frm)
BASE (th_vfrec)
BASE (th_vfrec_frm)
BASE(th_vfsqrt)
BASE(th_vfsqrt_frm)
BASE(th_vfrsqrt)
BASE(th_vfrsqrt_frm)
BASE(th_vflog2)
BASE(th_vflog2_frm)
BASE(th_vfsin)
BASE(th_vfsin_frm)
BASE(th_vfcos)
BASE(th_vfcos_frm)

/* xtheadvcrypto  */
BASE (th_vmacc54l_vv)
BASE (th_vmacc54l_vs)
BASE (th_vmacc54h_vv)
BASE (th_vmacc54h_vs)

/* xtheadvcoder  */
BASE (th_vabd)
BASE (th_vabdu)
BASE (th_vaba)
BASE (th_vabau)
BASE (th_vfabd)
BASE (th_vfabd_frm)
BASE (th_vwabd)
BASE (th_vwabdu)
BASE (th_vwaba)
BASE (th_vwabau)
BASE (th_vabsmax)

/* xtheadvarith  */
BASE (th_vgmulxor)
BASE (th_vilo)
BASE (th_vile)
BASE (th_vcrcfoldr)
BASE (th_vcrcfoldn)
BASE (th_vfncvt_e4_h)
BASE (th_vfncvt_e4_h_frm)
BASE (th_vfncvt_e5_h)
BASE (th_vfncvt_e5_h_frm)
BASE (th_vfncvt_e4_bf16)
BASE (th_vfncvt_e4_bf16_frm)
BASE (th_vfncvt_e5_bf16)
BASE (th_vfncvt_e5_bf16_frm)
BASE (th_vfncvt_rod_bf16_s)
BASE (th_vfwcvt_h_e4)
BASE (th_vfwcvt_h_e4_frm)
BASE (th_vfwcvt_h_e5)
BASE (th_vfwcvt_h_e5_frm)
BASE (th_vfwcvt_bf16_e4)
BASE (th_vfwcvt_bf16_e4_frm)
BASE (th_vfwcvt_bf16_e5)
BASE (th_vfwcvt_bf16_e5_frm)
BASE (th_vfredsum_dup_32)
BASE (th_vfredsum_dup_32_frm)
BASE (th_vbfredsum_dup_32)
BASE (th_vbfredsum_dup_32_frm)
BASE (th_vfredsum_dup_64)
BASE (th_vfredsum_dup_64_frm)
BASE (th_vbfredsum_dup_64)
BASE (th_vbfredsum_dup_64_frm)
BASE (th_vfredsum_c_32)
BASE (th_vfredsum_c_32_frm)
BASE (th_vbfredsum_c_32)
BASE (th_vbfredsum_c_32_frm)
BASE (th_vfredsum_c_64)
BASE (th_vfredsum_c_64_frm)
BASE (th_vbfredsum_c_64)
BASE (th_vbfredsum_c_64_frm)
BASE (th_vfredmax_dup_32)
BASE (th_vfredmax_dup_32_frm)
BASE (th_vbfredmax_dup_32)
BASE (th_vbfredmax_dup_32_frm)
BASE (th_vfredmax_dup_64)
BASE (th_vfredmax_dup_64_frm)
BASE (th_vbfredmax_dup_64)
BASE (th_vbfredmax_dup_64_frm)
BASE (th_vfredmax_c_32)
BASE (th_vfredmax_c_32_frm)
BASE (th_vbfredmax_c_32)
BASE (th_vbfredmax_c_32_frm)
BASE (th_vfredmax_c_64)
BASE (th_vfredmax_c_64_frm)
BASE (th_vbfredmax_c_64)
BASE (th_vbfredmax_c_64_frm)
BASE (th_vfredmin_dup_32)
BASE (th_vfredmin_dup_32_frm)
BASE (th_vbfredmin_dup_32)
BASE (th_vbfredmin_dup_32_frm)
BASE (th_vfredmin_dup_64)
BASE (th_vfredmin_dup_64_frm)
BASE (th_vbfredmin_dup_64)
BASE (th_vbfredmin_dup_64_frm)
BASE (th_vfredmin_c_32)
BASE (th_vfredmin_c_32_frm)
BASE (th_vbfredmin_c_32)
BASE (th_vbfredmin_c_32_frm)
BASE (th_vfredmin_c_64)
BASE (th_vfredmin_c_64_frm)
BASE (th_vbfredmin_c_64)
BASE (th_vbfredmin_c_64_frm)
BASE (th_vary_dup_32)
BASE (th_vary_dup_64)
#endif

#ifdef XUANTIE_VECTOR_BUILTINS_DEF
#endif

#ifdef XUANTIE_VECTOR_BUILTINS_H
#endif

#ifdef XUANTIE_VECTOR_BUILTINS_CC

/* A list of SI integer will be registered for intrinsic functions.  */
static const rvv_type_info si_ops[] = {
#define DEF_RVV_SI_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

/* A list of USI integer will be registered for intrinsic functions.  */
static const rvv_type_info usi_ops[] = {
#define DEF_RVV_USI_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

/* A list of Int Tuple types will be registered for intrinsic functions.  */
static const rvv_type_info tuple_int_ops[] = {
#define DEF_RVV_INT_TUPLE_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

/* A list of SF will be registered for intrinsic functions.  */
static const rvv_type_info sf_ops[] = {
#define DEF_RVV_SF_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

/* A list of unsigned sew8/sew32 integer will be registered for intrinsic functions.  */
static const rvv_type_info qu_ops[] = {
#define DEF_RVV_QU_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

/* A list of sew64 integer will be registered for intrinsic functions.  */
static const rvv_type_info diu_ops[] = {
#define DEF_RVV_DIU_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

  /* A list of floating-point will be registered for intrinsic functions.  */
static const rvv_type_info f16_ops[] = {
#define DEF_RVV_F16_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

  /* A list of floating-point will be registered for intrinsic functions.  */
static const rvv_type_info bf16_ops[] = {
#define DEF_RVV_BF16_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

  /* A list of floating-point will be registered for intrinsic functions.  */
static const rvv_type_info f_red_ops[] = {
#define DEF_RVV_F_RED_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

  /* A list of floating-point will be registered for intrinsic functions.  */
static const rvv_type_info bf16_red_ops[] = {
#define DEF_RVV_BF16_RED_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

/* A list of Int LMUL2-8 will be registered for intrinsic functions.
   IMPORTANT: m1 types are intentionally EXCLUDED here.  m1 is provided by
   the separate lmul1_i_s_ops table.  This disjoint partitioning is required
   because GCC's RVV builtin framework registers every (name, type) instance
   of every function group at pragma-vector time, regardless of the group's
   REQUIRED_EXTENSIONS (the extension check happens at intrinsic call time,
   not at registration time).  If both this table and lmul1_i_s_ops contained
   m1, the same (name, type) would be inserted into the function hash table
   twice, triggering an ICE in add_unique_function.  */
static const rvv_type_info whole_reg_iu_ops[] = {
#define DEF_RVV_WHOLE_REG_IU_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

/* A list of floating-point LMUL2-8 will be registered for intrinsic functions.
   m1 types are intentionally EXCLUDED here; they are provided by lmul1_f_ops.
   See the detailed comment on whole_reg_iu_ops above for the rationale.  */
static const rvv_type_info whole_reg_f_ops[] = {
#define DEF_RVV_WHOLE_REG_F_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

/* A list of LMUL2-8 (integer + floating-point) will be registered for
   intrinsic functions.  m1 types are intentionally EXCLUDED here for the
   same reason as whole_reg_iu_ops/whole_reg_f_ops above; m1 is provided
   separately via lmul1_i_s_ops/lmul1_f_ops.  */
static const rvv_type_info whole_reg_ops[] = {
#define DEF_RVV_WHOLE_REG_IU_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#define DEF_RVV_WHOLE_REG_F_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

/* A list of integer LMUL1 will be registered for intrinsic functions.  */
static const rvv_type_info lmul1_i_s_ops[] = {
#define DEF_RVV_LMUL1_I_S_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

/* A list of floating-point LMUL1 will be registered for intrinsic functions. */
static const rvv_type_info lmul1_f_ops[] = {
#define DEF_RVV_LMUL1_F_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

/* A list of Double-Widening all integer and float will be registered for
 * intrinsic functions.  */
static const rvv_type_info wextiuf_ops[] = {
#define DEF_RVV_WEXTI_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#define DEF_RVV_WEXTU_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#define DEF_RVV_WEXTF_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#define XUANTIE_CVWN_GUARD
#include "riscv-vector-builtins-types.def"
#undef XUANTIE_CVWN_GUARD
  {NUM_VECTOR_TYPES, 0}};

  /* A list of floating-point will be registered for intrinsic functions.  */
static const rvv_type_info xt_cv_dtrunc_iuf_ops[] = {
#define DEF_RVV_I_CVDT_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#define DEF_RVV_I_CVQT_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#define DEF_RVV_U_CVDT_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#define DEF_RVV_U_CVQT_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#define DEF_RVV_F_CVDT_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#define DEF_RVV_F_CVQT_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

  /* A list of floating-point will be registered for intrinsic functions.  */
static const rvv_type_info xt_cv_qext_f_ops[] = {
#define DEF_RVV_F_CVQW_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

  /* A list of floating-point will be registered for intrinsic functions.  */
static const rvv_type_info xt_cv_qext_iuf_ops[] = {
#define DEF_RVV_I_CVQW_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#define DEF_RVV_U_CVQW_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#define DEF_RVV_F_CVQW_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

  /* A list of floating-point will be registered for intrinsic functions.  */
static const rvv_type_info xt_cv_qtrunc_iuf_ops[] = {
#define DEF_RVV_I_CVQT_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#define DEF_RVV_U_CVQT_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#define DEF_RVV_F_CVQT_OPS(TYPE, REQUIRE) {VECTOR_TYPE_##TYPE, REQUIRE},
#include "xuantie-vector-builtins.def"
  {NUM_VECTOR_TYPES, 0}};

/* A list of args for vector_type func (vector_type, vector_type, vector_type)
 * function.  */
static CONSTEXPR const rvv_arg_type_info th_i_maqa_vvv_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_xt_maqa_quad_signed_vector),
     rvv_arg_type_info (RVV_BASE_xt_maqa_quad_signed_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info th_i_maqa_vxv_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_scalar),
     rvv_arg_type_info (RVV_BASE_xt_maqa_quad_signed_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info th_iu_maqa_vvv_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_xt_maqa_quad_signed_vector),
     rvv_arg_type_info (RVV_BASE_xt_maqa_quad_unsigned_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info th_iu_maqa_vxv_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_scalar),
     rvv_arg_type_info (RVV_BASE_xt_maqa_quad_unsigned_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info th_ui_maqa_vvv_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_xt_maqa_quad_unsigned_vector),
     rvv_arg_type_info (RVV_BASE_xt_maqa_quad_signed_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info th_ui_maqa_vxv_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_scalar),
     rvv_arg_type_info (RVV_BASE_xt_maqa_quad_signed_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info th_u_maqa_vvv_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_xt_maqa_quad_unsigned_vector),
     rvv_arg_type_info (RVV_BASE_xt_maqa_quad_unsigned_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info th_u_maqa_vxv_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_scalar),
     rvv_arg_type_info (RVV_BASE_xt_maqa_quad_unsigned_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info th_vvx_args[]
  = {rvv_arg_type_info (RVV_BASE_vector), rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_scalar), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info th_uvvv_args[]
  = {rvv_arg_type_info (RVV_BASE_unsigned_vector), rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info th_uvvx_args[]
  = {rvv_arg_type_info (RVV_BASE_unsigned_vector), rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_scalar), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info th_uwwvv_args[]
  = {rvv_arg_type_info (RVV_BASE_unsigned_vector),
     rvv_arg_type_info (RVV_BASE_double_trunc_vector),
     rvv_arg_type_info (RVV_BASE_double_trunc_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info th_wwvx_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_double_trunc_vector),
     rvv_arg_type_info (RVV_BASE_double_trunc_scalar), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info th_uwwvx_args[]
  = {rvv_arg_type_info (RVV_BASE_unsigned_vector),
     rvv_arg_type_info (RVV_BASE_double_trunc_vector),
     rvv_arg_type_info (RVV_BASE_double_trunc_scalar), rvv_arg_type_info_end};

/* A list of args for vector_type func (vector_type) function.  */
static CONSTEXPR const rvv_arg_type_info th_fp8e4_args[]
  = {rvv_arg_type_info (RVV_BASE_xt_double_trunc_float_fp8e4m3_vector),
     rvv_arg_type_info_end};

/* A list of args for vector_type func (vector_type) function.  */
static CONSTEXPR const rvv_arg_type_info th_fp8e5_args[]
  = {rvv_arg_type_info (RVV_BASE_xt_double_trunc_float_fp8e5m2_vector),
     rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info xt_dtrunc_wvx_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_double_trunc_vector),
     rvv_arg_type_info (RVV_BASE_double_trunc_scalar), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info xt_dtrunc_vv_args[]
  = {rvv_arg_type_info (RVV_BASE_double_trunc_vector),
     rvv_arg_type_info (RVV_BASE_double_trunc_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info xt_dtrunc_bf_vv_args[]
  = {rvv_arg_type_info (RVV_BASE_double_trunc_bfloat_vector),
     rvv_arg_type_info (RVV_BASE_double_trunc_bfloat_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info xt_dtrunc_wvv_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_double_trunc_vector),
     rvv_arg_type_info (RVV_BASE_double_trunc_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info xt_dtrunc_bf_wvv_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_double_trunc_bfloat_vector),
     rvv_arg_type_info (RVV_BASE_double_trunc_bfloat_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info xt_dext_v_args[]
  = {rvv_arg_type_info (RVV_BASE_xt_double_ext_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info xt_dext_vv_args[]
  = {rvv_arg_type_info (RVV_BASE_xt_double_ext_vector),
     rvv_arg_type_info (RVV_BASE_xt_double_ext_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info xt_dext_vvv_args[]
  = {rvv_arg_type_info (RVV_BASE_xt_double_ext_vector),
     rvv_arg_type_info (RVV_BASE_xt_double_ext_vector),
     rvv_arg_type_info (RVV_BASE_xt_double_ext_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info xt_qtrunc_qvx_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_xt_quad_trunc_vector),
     rvv_arg_type_info (RVV_BASE_xt_quad_trunc_scalar), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info xt_qtrunc_bf_qvx_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_xt_quad_trunc_bfloat_vector),
     rvv_arg_type_info (RVV_BASE_xt_quad_trunc_bfloat_scalar), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info xt_qtrunc_vv_args[]
  = {rvv_arg_type_info (RVV_BASE_xt_quad_trunc_vector),
     rvv_arg_type_info (RVV_BASE_xt_quad_trunc_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info xt_qtrunc_bf_vv_args[]
  = {rvv_arg_type_info (RVV_BASE_xt_quad_trunc_bfloat_vector),
     rvv_arg_type_info (RVV_BASE_xt_quad_trunc_bfloat_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info xt_qext_v_args[]
  = {rvv_arg_type_info (RVV_BASE_xt_quad_ext_vector), rvv_arg_type_info_end};

static CONSTEXPR const rvv_arg_type_info xt_qext_vv_args[]
  = {rvv_arg_type_info (RVV_BASE_xt_quad_ext_vector),
     rvv_arg_type_info (RVV_BASE_xt_quad_ext_vector), rvv_arg_type_info_end};

/* A static operand information for vector_type func (vector_type, vector_type,
 * vector_type) function registration. */
static CONSTEXPR const rvv_op_info th_i_maqa_vvvv_ops
  = {si_ops,				  /* Types */
     OP_TYPE_vv,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     th_i_maqa_vvv_args /* Args */};

static CONSTEXPR const rvv_op_info th_i_maqa_vvxv_ops
  = {si_ops,				  /* Types */
     OP_TYPE_vx,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     th_i_maqa_vxv_args /* Args */};

static CONSTEXPR const rvv_op_info th_iu_maqa_vvvv_ops
  = {si_ops,				  /* Types */
     OP_TYPE_vv,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     th_iu_maqa_vvv_args /* Args */};

static CONSTEXPR const rvv_op_info th_iu_maqa_vvxv_ops
  = {si_ops,				  /* Types */
     OP_TYPE_vx,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     th_iu_maqa_vxv_args /* Args */};

static CONSTEXPR const rvv_op_info th_ui_maqa_vvvv_ops
  = {si_ops,				  /* Types */
     OP_TYPE_vv,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     th_ui_maqa_vvv_args /* Args */};

static CONSTEXPR const rvv_op_info th_ui_maqa_vvxv_ops
  = {si_ops,				  /* Types */
     OP_TYPE_vx,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     th_ui_maqa_vxv_args /* Args */};

static CONSTEXPR const rvv_op_info th_u_maqa_vvvv_ops
  = {usi_ops,				  /* Types */
     OP_TYPE_vv,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     th_u_maqa_vvv_args /* Args */};

static CONSTEXPR const rvv_op_info th_u_maqa_vvxv_ops
  = {usi_ops,				  /* Types */
     OP_TYPE_vx,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     th_u_maqa_vxv_args /* Args */};

static CONSTEXPR const rvv_op_info th_i_pwadd_vvxv_ops
  = {wexti_ops,				  /* Types */
     OP_TYPE_vx,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     wvx_args /* Args */};

static CONSTEXPR const rvv_op_info th_i_pwadd_vvvv_ops
  = {wexti_ops,				  /* Types */
     OP_TYPE_vv,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     wvv_args /* Args */};

static CONSTEXPR const rvv_op_info th_u_pwadd_vvxv_ops
  = {wextu_ops,				  /* Types */
     OP_TYPE_vx,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     wvx_args /* Args */};

static CONSTEXPR const rvv_op_info th_u_pwadd_vvvv_ops
  = {wextu_ops,				  /* Types */
     OP_TYPE_vv,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     wvv_args /* Args */};

/* A static operand information for double demote type func (vector_type,
 * shift_type) function registration. */
static CONSTEXPR const rvv_op_info th_i_pnclip_vwv_ops
  = {i_ops,					       /* Types */
     OP_TYPE_wv,				       /* Suffix */
     rvv_arg_type_info (RVV_BASE_double_trunc_vector), /* Return type */
     shift_wv_args /* Args */};

/* A static operand information for double demote type func (vector_type,
 * shift_type) function registration. */
static CONSTEXPR const rvv_op_info th_u_pnclip_vwv_ops
  = {u_ops,					       /* Types */
     OP_TYPE_wv,				       /* Suffix */
     rvv_arg_type_info (RVV_BASE_double_trunc_vector), /* Return type */
     shift_wv_args /* Args */};

/* A static operand information for double demote type func (vector_type,
 * size_t) function registration. */
static CONSTEXPR const rvv_op_info th_i_pnclip_vwx_ops
  = {i_ops,					       /* Types */
     OP_TYPE_wx,				       /* Suffix */
     rvv_arg_type_info (RVV_BASE_double_trunc_vector), /* Return type */
     v_size_args /* Args */};

/* A static operand information for double demote type func (vector_type,
 * size_t) function registration. */
static CONSTEXPR const rvv_op_info th_u_pnclip_vwx_ops
  = {u_ops,					       /* Types */
     OP_TYPE_wx,				       /* Suffix */
     rvv_arg_type_info (RVV_BASE_double_trunc_vector), /* Return type */
     v_size_args /* Args */};

/* A static operand information for vector_type func (const scalar_type *)
 * function registration. */
static CONSTEXPR const rvv_op_info tuple_v_int_scalar_const_ptr_ops
  = {tuple_int_ops,				  /* Types */
     OP_TYPE_v,				  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     scalar_const_ptr_args /* Args */};

/* A static operand information for void func (scalar_type *, vector_type)
 * function registration. */
static CONSTEXPR const rvv_op_info tuple_v_int_scalar_ptr_ops
  = {tuple_int_ops,				/* Types */
     OP_TYPE_v,				/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     scalar_ptr_args /* Args */};

/* A static operand information for vector_type func (const scalar_type *,
 * ptrdiff_t) function registration. */
static CONSTEXPR const rvv_op_info tuple_v_int_scalar_const_ptr_ptrdiff_ops
  = {tuple_int_ops,				  /* Types */
     OP_TYPE_v,				  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     scalar_const_ptr_ptrdiff_args /* Args */};

/* A static operand information for void func (scalar_type *, ptrdiff_t,
 * vector_type) function registration. */
static CONSTEXPR const rvv_op_info tuple_v_int_scalar_ptr_ptrdiff_ops
  = {tuple_int_ops,				/* Types */
     OP_TYPE_v,				/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     scalar_ptr_ptrdiff_args /* Args */};

/* A static operand information for vector_type func (const scalar_type *,
 * index_type) function registration. */
static CONSTEXPR const rvv_op_info tuple_v_int_scalar_const_ptr_index_ops
  = {tuple_int_ops,				  /* Types */
     OP_TYPE_v,				  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     scalar_const_ptr_index_args /* Args */};

/* A static operand information for void func (scalar_type *, index_type,
 * vector_type) function registration. */
static CONSTEXPR const rvv_op_info tuple_v_int_scalar_ptr_index_ops
  = {tuple_int_ops,				/* Types */
     OP_TYPE_v,				/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     scalar_ptr_index_args /* Args */};

static CONSTEXPR const rvv_op_info sf_v_ops
  = {sf_ops,				  /* Types */
     OP_TYPE_v,				  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     v_args /* Args */};

static CONSTEXPR const rvv_op_info th_i_vvvv_u_ops
  = {i_ops,				  /* Types */
     OP_TYPE_vv,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_unsigned_vector), /* Return type */
     th_uvvv_args /* Args */};

static CONSTEXPR const rvv_op_info th_u_vvvv_ops
  = {u_ops,				  /* Types.  */
     OP_TYPE_vv,			  /* Suffix.  */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type.  */
     vvv_args /* Args.  */};

static CONSTEXPR const rvv_op_info th_i_vvvx_u_ops
  = {i_ops,				  /* Types */
     OP_TYPE_vx,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_unsigned_vector), /* Return type */
     th_uvvx_args /* Args */};

static CONSTEXPR const rvv_op_info th_u_vvvx_ops
  = {u_ops,				  /* Types.  */
     OP_TYPE_vx,			  /* Suffix.  */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type.  */
     th_vvx_args /* Args.  */};

 /* A static operand information for vector_type func (vector_type,
  * double demote scalar_type, double demote type) function registration. */
static CONSTEXPR const rvv_op_info th_i_wwvx_u_ops
  = {wexti_ops,				  /* Types */
     OP_TYPE_vx,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_unsigned_vector), /* Return type */
     th_uwwvx_args /* Args */};

/* A static operand information for vector_type func (vector_type, double demote
 * scalar_type, double demote type) function registration. */
static CONSTEXPR const rvv_op_info th_u_wwvx_ops
  = {wextu_ops,				  /* Types */
     OP_TYPE_vx,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     th_wwvx_args /* Args */};

/* A static operand information for vector_type func (vector_type, vector_type)
 * function registration. */
static CONSTEXPR const rvv_op_info th_i_vvv_u_ops
  = {i_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_unsigned_vector), /* Return type */
     vv_args /* Args */};

/* A static operand information for vector_type func (vector_type, scalar_type)
 * function registration. */
static CONSTEXPR const rvv_op_info th_i_vvx_u_ops
  = {i_ops,				/* Types */
     OP_TYPE_vx,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_unsigned_vector), /* Return type */
     vx_args /* Args */};

/* A static operand information for vector_type func (double demote type, double
 * demote type) function registration. */
static CONSTEXPR const rvv_op_info th_i_wvv_u_ops
  = {wexti_ops,				  /* Types */
     OP_TYPE_vv,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_unsigned_vector), /* Return type */
     wvv_args /* Args */};

/* A static operand information for vector_type func (double demote type, double
 * demote scalar_type) function registration. */
static CONSTEXPR const rvv_op_info th_i_wvx_u_ops
  = {wexti_ops,				  /* Types */
     OP_TYPE_vx,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_unsigned_vector), /* Return type */
     wvx_args /* Args */};

/* A static operand information for vector_type func (vector_type, double demote
 * type, double demote type) function registration. */
static CONSTEXPR const rvv_op_info th_i_wwvv_u_ops
  = {wexti_ops,				  /* Types */
     OP_TYPE_vv,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_unsigned_vector), /* Return type */
     th_uwwvv_args /* Args */};

static CONSTEXPR const rvv_op_info th_qu_vvv_ops
  = {qu_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vvv_args /* Args */};

static CONSTEXPR const rvv_op_info th_diu_vvvv_ops
  = {diu_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vvv_args /* Args */};

/* A list of args for func (vector_type, unsigned) function.  */
static CONSTEXPR const rvv_arg_type_info vi_args[]
  = {rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_xt_unsigned_int), rvv_arg_type_info_end};

/* A list of args for func (vector_type, vector_type, unsigned)
 * function.  */
static CONSTEXPR const rvv_arg_type_info vvi_args[]
  = {rvv_arg_type_info (RVV_BASE_vector), rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_xt_unsigned_int), rvv_arg_type_info_end};

/* A list of args for func (vector_type, vector_type, scalar_type)
 * function.  */
static CONSTEXPR const rvv_arg_type_info vvx_args[]
  = {rvv_arg_type_info (RVV_BASE_vector), rvv_arg_type_info (RVV_BASE_vector),
     rvv_arg_type_info (RVV_BASE_scalar), rvv_arg_type_info_end};

static CONSTEXPR const rvv_op_info xt_all_vcpx_void_v_ops
  = {whole_reg_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     v_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpx_vv_ops
  = {whole_reg_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     v_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpx_void_vi_ops
  = {whole_reg_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vi_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpx_vvi_ops
  = {whole_reg_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vi_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpx_void_vvv_ops
  = {whole_reg_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vvv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpx_vvv_ops
  = {whole_reg_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_iu_vcpx_void_vvx_ops
  = {whole_reg_iu_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vvx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_iu_vcpx_vvx_ops
  = {whole_reg_iu_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpx_void_vvi_ops
  = {whole_reg_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vvi_args /* Args */};

static CONSTEXPR const rvv_op_info xt_f_vcpx_void_vvx_ops
  = {whole_reg_f_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vvx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_f_vcpx_vvx_ops
  = {whole_reg_f_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vx_args /* Args */};

/* LMUL1-only variants of xt_*_vcpx_*_ops, used when only xtheadcv is enabled
   (without xtheadvcpml).  When both xtheadcv and xtheadvcpml are enabled, the
   full LMUL1-8 variants above are used instead.  */
static CONSTEXPR const rvv_op_info xt_all_vcpx_m1_void_v_ops
  = {lmul1_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     v_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpx_m1_vv_ops
  = {lmul1_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     v_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpx_m1_void_vi_ops
  = {lmul1_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vi_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpx_m1_vvi_ops
  = {lmul1_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vi_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpx_m1_void_vvv_ops
  = {lmul1_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vvv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpx_m1_vvv_ops
  = {lmul1_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_iu_vcpx_m1_void_vvx_ops
  = {lmul1_i_s_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vvx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_iu_vcpx_m1_vvx_ops
  = {lmul1_i_s_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpx_m1_void_vvi_ops
  = {lmul1_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vvi_args /* Args */};

static CONSTEXPR const rvv_op_info xt_f_vcpx_m1_void_vvx_ops
  = {lmul1_f_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vvx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_f_vcpx_m1_vvx_ops
  = {lmul1_f_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpml_void_v_ops
  = {all_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     v_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpml_vv_ops
  = {all_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     v_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpml_void_vi_ops
  = {all_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vi_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpml_vvi_ops
  = {all_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vi_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpml_void_vvv_ops
  = {all_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vvv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpml_vvv_ops
  = {all_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_iu_vcpml_void_vvx_ops
  = {iu_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vvx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_iu_vcpml_vvx_ops
  = {iu_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vcpml_void_vvi_ops
  = {all_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vvi_args /* Args */};

static CONSTEXPR const rvv_op_info xt_f_vcpml_void_vvx_ops
  = {f_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     vvx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_f_vcpml_vvx_ops
  = {f_ops,				/* Types */
     OP_TYPE_v,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vwcpx_void_wvx_ops
  = {wextiu_ops,			/* Types */
     OP_TYPE_vx,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     xt_dtrunc_wvx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vwcpx_wvx_ops
  = {wextiu_ops,			/* Types */
     OP_TYPE_vx,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     xt_dtrunc_wvx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vwcpx_void_wvv_ops
  = {wextiuf_ops,			/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     xt_dtrunc_wvv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vwcpx_wvv_ops
  = {wextiuf_ops,			/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     xt_dtrunc_wvv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_bf_vwcpx_void_wvv_ops
  = {sf_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     xt_dtrunc_bf_wvv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_bf_vwcpx_wvv_ops
  = {sf_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     xt_dtrunc_bf_wvv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vncpx_void_vv_ops
  = {xt_cv_dtrunc_iuf_ops,		/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     xt_dext_vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vncpx_vv_ops
  = {xt_cv_dtrunc_iuf_ops,		/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     xt_dext_vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_fp_vfwqcpx_void_qvx_ops
  = {xt_cv_qext_f_ops,				/* Types */
     OP_TYPE_vf,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     xt_qtrunc_qvx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_fp_vfwqcpx_qtrunc_qvx_ops
  = {xt_cv_qext_f_ops,			/* Types */
     OP_TYPE_vf,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     xt_qtrunc_qvx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_bf_vfwqcpx_void_qvx_ops
  = {xt_cv_qext_f_ops,			/* Types */
     OP_TYPE_vf,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     xt_qtrunc_bf_qvx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_bf_vfwqcpx_qtrunc_qvx_ops
  = {xt_cv_qext_f_ops,			/* Types */
     OP_TYPE_vf,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     xt_qtrunc_bf_qvx_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vwqcpx_void_vv_ops
  = {xt_cv_qext_iuf_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     xt_qtrunc_vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vwqcpx_qtrunc_vv_ops
  = {xt_cv_qext_iuf_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     xt_qtrunc_vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_bf_vwqcpx_void_vv_ops
  = {xt_cv_qext_f_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     xt_qtrunc_bf_vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_bf_vwqcpx_qtrunc_vv_ops
  = {xt_cv_qext_f_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     xt_qtrunc_bf_vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vnqcpx_void_vv_ops
  = {xt_cv_qtrunc_iuf_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     xt_qext_vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vnqcpx_vv_ops
  = {xt_cv_qtrunc_iuf_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     xt_qext_vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vwcpx_void_vv_ops
  = {wextiuf_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     xt_dtrunc_vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vwcpx_wwv_ops
  = {wextiuf_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     xt_dtrunc_vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_bf_vwcpx_void_vv_ops
  = {sf_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     xt_dtrunc_bf_vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_bf_vwcpx_wwv_ops
  = {sf_ops,				/* Types */
     OP_TYPE_vv,			/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     xt_dtrunc_bf_vv_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vncpx_void_v_ops
  = {xt_cv_dtrunc_iuf_ops,				/* Types */
     OP_TYPE_v,				/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     xt_dext_v_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vncpx_v_ops
  = {xt_cv_dtrunc_iuf_ops,				/* Types */
     OP_TYPE_v,				/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     xt_dext_v_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vnqcpx_void_v_ops
  = {xt_cv_qtrunc_iuf_ops,				/* Types */
     OP_TYPE_v,				/* Suffix */
     rvv_arg_type_info (RVV_BASE_void), /* Return type */
     xt_qext_v_args /* Args */};

static CONSTEXPR const rvv_op_info xt_all_vnqcpx_v_ops
  = {xt_cv_qtrunc_iuf_ops,				/* Types */
     OP_TYPE_v,				/* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     xt_qext_v_args /* Args */};

/* vop/vop_mu will be registered.  */
static CONSTEXPR const predication_type_index none_mu_preds[]
  = {PRED_TYPE_none, PRED_TYPE_mu, NUM_PRED_TYPES};

/* vop/vop_tu/vop_mu/vop_tumu/vop_mu will be registered.  */
static CONSTEXPR const predication_type_index none_tu_mu_tumu_preds[]
  = {PRED_TYPE_none,  PRED_TYPE_tu, PRED_TYPE_tumu, PRED_TYPE_mu, NUM_PRED_TYPES};

/* A static operand information for vector_type func (vector_type)
 * function registration. */
static CONSTEXPR const rvv_op_info f16_to_f8e4_v_ops
  = {f16_ops,						      /* Types */
     OP_TYPE_v,					      /* Suffix */
     rvv_arg_type_info (RVV_BASE_xt_double_trunc_float_fp8e4m3_vector), /* Return type */
     vi_args /* Args */};

/* A static operand information for vector_type func (vector_type)
 * function registration. */
static CONSTEXPR const rvv_op_info f16_to_f8e5_v_ops
  = {f16_ops,						      /* Types */
     OP_TYPE_v,					      /* Suffix */
     rvv_arg_type_info (RVV_BASE_xt_double_trunc_float_fp8e5m2_vector), /* Return type */
     vi_args /* Args */};

/* A static operand information for vector_type func (vector_type)
 * function registration. */
static CONSTEXPR const rvv_op_info bf16_to_f8e4_v_ops
  = {bf16_ops,						      /* Types */
     OP_TYPE_v,					      /* Suffix */
     rvv_arg_type_info (RVV_BASE_xt_double_trunc_float_fp8e4m3_vector), /* Return type */
     vi_args /* Args */};

/* A static operand information for vector_type func (vector_type)
 * function registration. */
static CONSTEXPR const rvv_op_info bf16_to_f8e5_v_ops
  = {bf16_ops,						      /* Types */
     OP_TYPE_v,					      /* Suffix */
     rvv_arg_type_info (RVV_BASE_xt_double_trunc_float_fp8e5m2_vector), /* Return type */
     vi_args /* Args */};

/* A static operand information for vector_type func (vector_type)
 * function registration. */
static CONSTEXPR const rvv_op_info fp8e4_to_f16_v_ops
  = {f16_ops,				  /* Types */
     OP_TYPE_f_v,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     th_fp8e4_args /* Args */};

/* A static operand information for vector_type func (vector_type)
 * function registration. */
static CONSTEXPR const rvv_op_info fp8e5_to_f16_v_ops
  = {f16_ops,				  /* Types */
     OP_TYPE_f_v,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     th_fp8e5_args /* Args */};

/* A static operand information for vector_type func (vector_type)
 * function registration. */
static CONSTEXPR const rvv_op_info fp8e4_to_bf16_v_ops
  = {bf16_ops,				  /* Types */
     OP_TYPE_f_v,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     th_fp8e4_args /* Args */};

/* A static operand information for vector_type func (vector_type)
 * function registration. */
static CONSTEXPR const rvv_op_info fp8e5_to_bf16_v_ops
  = {bf16_ops,				  /* Types */
     OP_TYPE_f_v,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     th_fp8e5_args /* Args */};

/* A static operand information for vector_type func (vector_type)
 * function registration. */
static CONSTEXPR const rvv_op_info f_red_v_ops
  = {f_red_ops,				  /* Types */
     OP_TYPE_v,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vi_args /* Args */};

/* A static operand information for vector_type func (vector_type)
 * function registration. */
static CONSTEXPR const rvv_op_info f_vary_v_ops
  = {f_red_ops,				  /* Types */
     OP_TYPE_v,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     v_args /* Args */};

/* A static operand information for vector_type func (vector_type)
 * function registration. */
static CONSTEXPR const rvv_op_info bf16_red_v_ops
  = {bf16_red_ops,				  /* Types */
     OP_TYPE_v,			  /* Suffix */
     rvv_arg_type_info (RVV_BASE_vector), /* Return type */
     vi_args /* Args */};

/* Register the utnmode enum.  */
static void
register_utnmode ()
{
  auto_vec<string_int_pair, 5> values;
#define DEF_RVV_UTNMODE_ENUM(NAME, VALUE)                                          \
  values.quick_push (string_int_pair ("__RISCV_UTNMODE_" #NAME, VALUE));
#include "xuantie-vector-builtins.def"
#undef DEF_RVV_UTNMODE_ENUM

  lang_hooks.types.simulate_enum_decl (input_location, "__RISCV_UTNMODE", &values);
}
#endif

#ifdef XUANTIE_VECTOR_BUILTINS_TYPES_DEF
#endif

#ifdef XUANTIE_VECTOR_BUILTINS_FUNCTIONS_DEF

#define REQUIRED_EXTENSIONS VECTOR_EXT
DEF_RVV_FUNCTION (th_vpnclipu, narrow_alu, none_m_preds, th_u_pnclip_vwv_ops)
DEF_RVV_FUNCTION (th_vpnclipu, narrow_alu, none_m_preds, th_u_pnclip_vwx_ops)
DEF_RVV_FUNCTION (th_vpnclip, narrow_alu, none_m_preds, th_i_pnclip_vwv_ops)
DEF_RVV_FUNCTION (th_vpnclip, narrow_alu, none_m_preds, th_i_pnclip_vwx_ops)

DEF_RVV_FUNCTION (th_vpwaddu, widen_alu, none_m_preds, th_u_pwadd_vvvv_ops)
DEF_RVV_FUNCTION (th_vpwaddu, widen_alu, none_m_preds, th_u_pwadd_vvxv_ops)
DEF_RVV_FUNCTION (th_vpwadd, widen_alu, none_m_preds, th_i_pwadd_vvvv_ops)
DEF_RVV_FUNCTION (th_vpwadd, widen_alu, none_m_preds, th_i_pwadd_vvxv_ops)

DEF_RVV_FUNCTION (th_vmaqau, th_maqa, none_m_preds, th_u_maqa_vvvv_ops)
DEF_RVV_FUNCTION (th_vmaqau, th_maqa, none_m_preds, th_u_maqa_vvxv_ops)
DEF_RVV_FUNCTION (th_vmaqa, th_maqa, none_m_preds, th_i_maqa_vvvv_ops)
DEF_RVV_FUNCTION (th_vmaqa, th_maqa, none_m_preds, th_i_maqa_vvxv_ops)
DEF_RVV_FUNCTION (th_vmaqasu, th_maqa, none_m_preds, th_iu_maqa_vvvv_ops)
DEF_RVV_FUNCTION (th_vmaqasu, th_maqa, none_m_preds, th_iu_maqa_vvxv_ops)
DEF_RVV_FUNCTION (th_vmaqaus, th_maqa, none_m_preds, th_ui_maqa_vvvv_ops)
DEF_RVV_FUNCTION (th_vmaqaus, th_maqa, none_m_preds, th_ui_maqa_vvxv_ops)

DEF_RVV_FUNCTION (th_vpmaqau, th_maqa, none_m_preds, th_u_maqa_vvvv_ops)
DEF_RVV_FUNCTION (th_vpmaqau, th_maqa, none_m_preds, th_u_maqa_vvxv_ops)
DEF_RVV_FUNCTION (th_vpmaqa, th_maqa, none_m_preds, th_i_maqa_vvvv_ops)
DEF_RVV_FUNCTION (th_vpmaqa, th_maqa, none_m_preds, th_i_maqa_vvxv_ops)
DEF_RVV_FUNCTION (th_vpmaqasu, th_maqa, none_m_preds, th_iu_maqa_vvvv_ops)
DEF_RVV_FUNCTION (th_vpmaqasu, th_maqa, none_m_preds, th_iu_maqa_vvxv_ops)
DEF_RVV_FUNCTION (th_vpmaqaus, th_maqa, none_m_preds, th_ui_maqa_vvvv_ops)
DEF_RVV_FUNCTION (th_vpmaqaus, th_maqa, none_m_preds, th_ui_maqa_vvxv_ops)
#undef REQUIRED_EXTENSIONS

#define REQUIRED_EXTENSIONS XTHEADVECTOR_EXT
DEF_RVV_FUNCTION (th_vlsegb, th_seg_loadb, full_preds, tuple_v_int_scalar_const_ptr_ops)
DEF_RVV_FUNCTION (th_vlsegbu, th_seg_loadbu, full_preds, tuple_v_int_scalar_const_ptr_ops)
DEF_RVV_FUNCTION (th_vlsegh, th_seg_loadh, full_preds, tuple_v_int_scalar_const_ptr_ops)
DEF_RVV_FUNCTION (th_vlseghu, th_seg_loadhu, full_preds, tuple_v_int_scalar_const_ptr_ops)
DEF_RVV_FUNCTION (th_vlsegw, th_seg_loadw, full_preds, tuple_v_int_scalar_const_ptr_ops)
DEF_RVV_FUNCTION (th_vlsegwu, th_seg_loadwu, full_preds, tuple_v_int_scalar_const_ptr_ops)
DEF_RVV_FUNCTION (th_vssegb, th_seg_storeb, none_m_preds, tuple_v_int_scalar_ptr_ops)
DEF_RVV_FUNCTION (th_vssegh, th_seg_storeh, none_m_preds, tuple_v_int_scalar_ptr_ops)
DEF_RVV_FUNCTION (th_vssegw, th_seg_storew, none_m_preds, tuple_v_int_scalar_ptr_ops)
DEF_RVV_FUNCTION (th_vlssegb, th_seg_strideloadb, full_preds, tuple_v_int_scalar_const_ptr_ptrdiff_ops)
DEF_RVV_FUNCTION (th_vlssegbu, th_seg_strideloadbu, full_preds, tuple_v_int_scalar_const_ptr_ptrdiff_ops)
DEF_RVV_FUNCTION (th_vlssegh, th_seg_strideloadh, full_preds, tuple_v_int_scalar_const_ptr_ptrdiff_ops)
DEF_RVV_FUNCTION (th_vlsseghu, th_seg_strideloadhu, full_preds, tuple_v_int_scalar_const_ptr_ptrdiff_ops)
DEF_RVV_FUNCTION (th_vlssegw, th_seg_strideloadw, full_preds, tuple_v_int_scalar_const_ptr_ptrdiff_ops)
DEF_RVV_FUNCTION (th_vlssegwu, th_seg_strideloadwu, full_preds, tuple_v_int_scalar_const_ptr_ptrdiff_ops)
DEF_RVV_FUNCTION (th_vsssegb, th_seg_stridestoreb, none_m_preds, tuple_v_int_scalar_ptr_ptrdiff_ops)
DEF_RVV_FUNCTION (th_vsssegh, th_seg_stridestoreh, none_m_preds, tuple_v_int_scalar_ptr_ptrdiff_ops)
DEF_RVV_FUNCTION (th_vsssegw, th_seg_stridestorew, none_m_preds, tuple_v_int_scalar_ptr_ptrdiff_ops)
DEF_RVV_FUNCTION (th_vlxsegb, th_seg_indexed_loadb, full_preds, tuple_v_int_scalar_const_ptr_index_ops)
DEF_RVV_FUNCTION (th_vlxsegbu, th_seg_indexed_loadbu, full_preds, tuple_v_int_scalar_const_ptr_index_ops)
DEF_RVV_FUNCTION (th_vlxsegh, th_seg_indexed_loadh, full_preds, tuple_v_int_scalar_const_ptr_index_ops)
DEF_RVV_FUNCTION (th_vlxseghu, th_seg_indexed_loadhu, full_preds, tuple_v_int_scalar_const_ptr_index_ops)
DEF_RVV_FUNCTION (th_vlxsegw, th_seg_indexed_loadw, full_preds, tuple_v_int_scalar_const_ptr_index_ops)
DEF_RVV_FUNCTION (th_vlxsegwu, th_seg_indexed_loadwu, full_preds, tuple_v_int_scalar_const_ptr_index_ops)
DEF_RVV_FUNCTION (th_vsxsegb, th_seg_indexed_storeb, none_m_preds, tuple_v_int_scalar_ptr_index_ops)
DEF_RVV_FUNCTION (th_vsxsegh, th_seg_indexed_storeh, none_m_preds, tuple_v_int_scalar_ptr_index_ops)
DEF_RVV_FUNCTION (th_vsxsegw, th_seg_indexed_storew, none_m_preds, tuple_v_int_scalar_ptr_index_ops)
#undef REQUIRED_EXTENSIONS

#define REQUIRED_EXTENSIONS XTHEADCV_EXT
DEF_RVV_FUNCTION (th_vcpx0, xtheadcv, none_mu_preds, xt_all_vcpx_m1_void_v_ops)
DEF_RVV_FUNCTION (th_vcpx0_rm, xtheadcv, none_mu_preds, xt_all_vcpx_m1_void_v_ops)
DEF_RVV_FUNCTION (th_vcpx1, xtheadcv, none_mu_preds, xt_all_vcpx_m1_vv_ops)
DEF_RVV_FUNCTION (th_vcpx1_rm, xtheadcv, none_mu_preds, xt_all_vcpx_m1_vv_ops)
DEF_RVV_FUNCTION (th_vcpx2, xtheadcv, none_mu_preds, xt_all_vcpx_m1_void_vi_ops)
DEF_RVV_FUNCTION (th_vcpx2_rm, xtheadcv, none_mu_preds, xt_all_vcpx_m1_void_vi_ops)
DEF_RVV_FUNCTION (th_vcpx3, xtheadcv, none_mu_preds, xt_all_vcpx_m1_vvi_ops)
DEF_RVV_FUNCTION (th_vcpx3_rm, xtheadcv, none_mu_preds, xt_all_vcpx_m1_vvi_ops)
DEF_RVV_FUNCTION (th_vcpx4, xtheadcv, none_mu_preds, xt_all_vcpx_m1_void_vvv_ops)
DEF_RVV_FUNCTION (th_vcpx4_rm, xtheadcv, none_mu_preds, xt_all_vcpx_m1_void_vvv_ops)
DEF_RVV_FUNCTION (th_vcpx5, xtheadcv, none_mu_preds, xt_all_vcpx_m1_vvv_ops)
DEF_RVV_FUNCTION (th_vcpx5_rm, xtheadcv, none_mu_preds, xt_all_vcpx_m1_vvv_ops)
DEF_RVV_FUNCTION (th_vcpx6, xtheadcv, none_mu_preds, xt_iu_vcpx_m1_void_vvx_ops)
DEF_RVV_FUNCTION (th_vcpx6_rm, xtheadcv, none_mu_preds, xt_iu_vcpx_m1_void_vvx_ops)
DEF_RVV_FUNCTION (th_vcpx7, xtheadcv, none_mu_preds, xt_iu_vcpx_m1_vvx_ops)
DEF_RVV_FUNCTION (th_vcpx7_rm, xtheadcv, none_mu_preds, xt_iu_vcpx_m1_vvx_ops)
DEF_RVV_FUNCTION (th_vcpx8, xtheadcv, none_mu_preds, xt_all_vcpx_m1_void_vvi_ops)
DEF_RVV_FUNCTION (th_vcpx8_rm, xtheadcv, none_mu_preds, xt_all_vcpx_m1_void_vvi_ops)
DEF_RVV_FUNCTION (th_vcpx9, xtheadcv, none_mu_preds, xt_f_vcpx_m1_void_vvx_ops)
DEF_RVV_FUNCTION (th_vcpx9_rm, xtheadcv, none_mu_preds, xt_f_vcpx_m1_void_vvx_ops)
DEF_RVV_FUNCTION (th_vcpx10, xtheadcv, none_mu_preds, xt_f_vcpx_m1_vvx_ops)
DEF_RVV_FUNCTION (th_vcpx10_rm, xtheadcv, none_mu_preds, xt_f_vcpx_m1_vvx_ops)
#undef REQUIRED_EXTENSIONS

#define REQUIRED_EXTENSIONS XTHEADCV_AND_XTHEADVCPML_EXT
DEF_RVV_FUNCTION (th_vcpx0, xtheadcv, none_mu_preds, xt_all_vcpx_void_v_ops)
DEF_RVV_FUNCTION (th_vcpx0_rm, xtheadcv, none_mu_preds, xt_all_vcpx_void_v_ops)
DEF_RVV_FUNCTION (th_vcpx1, xtheadcv, none_mu_preds, xt_all_vcpx_vv_ops)
DEF_RVV_FUNCTION (th_vcpx1_rm, xtheadcv, none_mu_preds, xt_all_vcpx_vv_ops)
DEF_RVV_FUNCTION (th_vcpx2, xtheadcv, none_mu_preds, xt_all_vcpx_void_vi_ops)
DEF_RVV_FUNCTION (th_vcpx2_rm, xtheadcv, none_mu_preds, xt_all_vcpx_void_vi_ops)
DEF_RVV_FUNCTION (th_vcpx3, xtheadcv, none_mu_preds, xt_all_vcpx_vvi_ops)
DEF_RVV_FUNCTION (th_vcpx3_rm, xtheadcv, none_mu_preds, xt_all_vcpx_vvi_ops)
DEF_RVV_FUNCTION (th_vcpx4, xtheadcv, none_mu_preds, xt_all_vcpx_void_vvv_ops)
DEF_RVV_FUNCTION (th_vcpx4_rm, xtheadcv, none_mu_preds, xt_all_vcpx_void_vvv_ops)
DEF_RVV_FUNCTION (th_vcpx5, xtheadcv, none_mu_preds, xt_all_vcpx_vvv_ops)
DEF_RVV_FUNCTION (th_vcpx5_rm, xtheadcv, none_mu_preds, xt_all_vcpx_vvv_ops)
DEF_RVV_FUNCTION (th_vcpx6, xtheadcv, none_mu_preds, xt_iu_vcpx_void_vvx_ops)
DEF_RVV_FUNCTION (th_vcpx6_rm, xtheadcv, none_mu_preds, xt_iu_vcpx_void_vvx_ops)
DEF_RVV_FUNCTION (th_vcpx7, xtheadcv, none_mu_preds, xt_iu_vcpx_vvx_ops)
DEF_RVV_FUNCTION (th_vcpx7_rm, xtheadcv, none_mu_preds, xt_iu_vcpx_vvx_ops)
DEF_RVV_FUNCTION (th_vcpx8, xtheadcv, none_mu_preds, xt_all_vcpx_void_vvi_ops)
DEF_RVV_FUNCTION (th_vcpx8_rm, xtheadcv, none_mu_preds, xt_all_vcpx_void_vvi_ops)
DEF_RVV_FUNCTION (th_vcpx9, xtheadcv, none_mu_preds, xt_f_vcpx_void_vvx_ops)
DEF_RVV_FUNCTION (th_vcpx9_rm, xtheadcv, none_mu_preds, xt_f_vcpx_void_vvx_ops)
DEF_RVV_FUNCTION (th_vcpx10, xtheadcv, none_mu_preds, xt_f_vcpx_vvx_ops)
DEF_RVV_FUNCTION (th_vcpx10_rm, xtheadcv, none_mu_preds, xt_f_vcpx_vvx_ops)
#undef REQUIRED_EXTENSIONS

#define REQUIRED_EXTENSIONS XTHEADVCPML_EXT
DEF_RVV_FUNCTION (th_vcpml_vcpx0, xtheadvcpml, none_mu_preds, xt_all_vcpml_void_v_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx0_rm, xtheadvcpml, none_mu_preds, xt_all_vcpml_void_v_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx1, xtheadvcpml, none_tu_mu_tumu_preds, xt_all_vcpml_vv_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx1_rm, xtheadvcpml, none_tu_mu_tumu_preds, xt_all_vcpml_vv_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx2, xtheadvcpml, none_mu_preds, xt_all_vcpml_void_vi_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx2_rm, xtheadvcpml, none_mu_preds, xt_all_vcpml_void_vi_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx3, xtheadvcpml, none_tu_mu_tumu_preds, xt_all_vcpml_vvi_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx3_rm, xtheadvcpml, none_tu_mu_tumu_preds, xt_all_vcpml_vvi_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx4, xtheadvcpml, none_mu_preds, xt_all_vcpml_void_vvv_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx4_rm, xtheadvcpml, none_mu_preds, xt_all_vcpml_void_vvv_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx5, xtheadvcpml, none_tu_mu_tumu_preds, xt_all_vcpml_vvv_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx5_rm, xtheadvcpml, none_tu_mu_tumu_preds, xt_all_vcpml_vvv_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx6, xtheadvcpml, none_mu_preds, xt_iu_vcpml_void_vvx_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx6_rm, xtheadvcpml, none_mu_preds, xt_iu_vcpml_void_vvx_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx7, xtheadvcpml, none_tu_mu_tumu_preds, xt_iu_vcpml_vvx_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx7_rm, xtheadvcpml, none_tu_mu_tumu_preds, xt_iu_vcpml_vvx_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx8, xtheadvcpml, none_mu_preds, xt_all_vcpml_void_vvi_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx8_rm, xtheadvcpml, none_mu_preds, xt_all_vcpml_void_vvi_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx9, xtheadvcpml, none_mu_preds, xt_f_vcpml_void_vvx_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx9_rm, xtheadvcpml, none_mu_preds, xt_f_vcpml_void_vvx_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx10, xtheadvcpml, none_tu_mu_tumu_preds, xt_f_vcpml_vvx_ops)
DEF_RVV_FUNCTION (th_vcpml_vcpx10_rm, xtheadvcpml, none_tu_mu_tumu_preds, xt_f_vcpml_vvx_ops)
#undef REQUIRED_EXTENSIONS

#define REQUIRED_EXTENSIONS XTHEADCVWN_EXT
DEF_RVV_FUNCTION (th_vwcpx0, xtheadcvwn_vd, none_mu_preds, xt_all_vwcpx_void_wvx_ops)
DEF_RVV_FUNCTION (th_vwcpx0_rm, xtheadcvwn_vd, none_mu_preds, xt_all_vwcpx_void_wvx_ops)
DEF_RVV_FUNCTION (th_vwcpx1, xtheadcvwn_vd, none_tu_mu_tumu_preds, xt_all_vwcpx_wvx_ops)
DEF_RVV_FUNCTION (th_vwcpx1_rm, xtheadcvwn_vd, none_tu_mu_tumu_preds, xt_all_vwcpx_wvx_ops)
DEF_RVV_FUNCTION (th_vwcpx2, xtheadcvwn_vd, none_mu_preds, xt_all_vwcpx_void_wvv_ops)
DEF_RVV_FUNCTION (th_vwcpx2, xtheadcvwn_vd, none_mu_preds, xt_bf_vwcpx_void_wvv_ops)
DEF_RVV_FUNCTION (th_vwcpx2_rm, xtheadcvwn_vd, none_mu_preds, xt_all_vwcpx_void_wvv_ops)
DEF_RVV_FUNCTION (th_vwcpx2_rm, xtheadcvwn_vd, none_mu_preds, xt_bf_vwcpx_void_wvv_ops)
DEF_RVV_FUNCTION (th_vwcpx3, xtheadcvwn_vd, none_tu_mu_tumu_preds, xt_all_vwcpx_wvv_ops)
DEF_RVV_FUNCTION (th_vwcpx3, xtheadcvwn_vd, none_tu_mu_tumu_preds, xt_bf_vwcpx_wvv_ops)
DEF_RVV_FUNCTION (th_vwcpx3_rm, xtheadcvwn_vd, none_tu_mu_tumu_preds, xt_all_vwcpx_wvv_ops)
DEF_RVV_FUNCTION (th_vwcpx3_rm, xtheadcvwn_vd, none_tu_mu_tumu_preds, xt_bf_vwcpx_wvv_ops)
DEF_RVV_FUNCTION (th_vncpx4, xtheadcvwn_narrow, none_mu_preds, xt_all_vncpx_void_vv_ops)
DEF_RVV_FUNCTION (th_vncpx4_rm, xtheadcvwn_narrow, none_mu_preds, xt_all_vncpx_void_vv_ops)
DEF_RVV_FUNCTION (th_vncpx5, xtheadcvwn_narrow, none_tu_mu_tumu_preds, xt_all_vncpx_vv_ops)
DEF_RVV_FUNCTION (th_vncpx5_rm, xtheadcvwn_narrow, none_tu_mu_tumu_preds, xt_all_vncpx_vv_ops)
DEF_RVV_FUNCTION (th_vfwqcpx6, xtheadcvwn_vd, none_mu_preds, xt_fp_vfwqcpx_void_qvx_ops)
DEF_RVV_FUNCTION (th_vfwqcpx6, xtheadcvwn_vd, none_mu_preds, xt_bf_vfwqcpx_void_qvx_ops)
DEF_RVV_FUNCTION (th_vfwqcpx6_rm, xtheadcvwn_vd, none_mu_preds, xt_fp_vfwqcpx_void_qvx_ops)
DEF_RVV_FUNCTION (th_vfwqcpx6_rm, xtheadcvwn_vd, none_mu_preds, xt_bf_vfwqcpx_void_qvx_ops)
DEF_RVV_FUNCTION (th_vfwqcpx7, xtheadcvwn_vd, none_tu_mu_tumu_preds, xt_fp_vfwqcpx_qtrunc_qvx_ops)
DEF_RVV_FUNCTION (th_vfwqcpx7, xtheadcvwn_vd, none_tu_mu_tumu_preds, xt_bf_vfwqcpx_qtrunc_qvx_ops)
DEF_RVV_FUNCTION (th_vfwqcpx7_rm, xtheadcvwn_vd, none_tu_mu_tumu_preds, xt_fp_vfwqcpx_qtrunc_qvx_ops)
DEF_RVV_FUNCTION (th_vfwqcpx7_rm, xtheadcvwn_vd, none_tu_mu_tumu_preds, xt_bf_vfwqcpx_qtrunc_qvx_ops)
DEF_RVV_FUNCTION (th_vwqcpx8, xtheadcvwn, none_mu_preds, xt_all_vwqcpx_void_vv_ops)
DEF_RVV_FUNCTION (th_vwqcpx8, xtheadcvwn, none_mu_preds, xt_bf_vwqcpx_void_vv_ops)
DEF_RVV_FUNCTION (th_vwqcpx8_rm, xtheadcvwn, none_mu_preds, xt_all_vwqcpx_void_vv_ops)
DEF_RVV_FUNCTION (th_vwqcpx8_rm, xtheadcvwn, none_mu_preds, xt_bf_vwqcpx_void_vv_ops)
DEF_RVV_FUNCTION (th_vwqcpx9, xtheadcvwn, none_tu_mu_tumu_preds, xt_all_vwqcpx_qtrunc_vv_ops)
DEF_RVV_FUNCTION (th_vwqcpx9, xtheadcvwn, none_tu_mu_tumu_preds, xt_bf_vwqcpx_qtrunc_vv_ops)
DEF_RVV_FUNCTION (th_vwqcpx9_rm, xtheadcvwn, none_tu_mu_tumu_preds, xt_all_vwqcpx_qtrunc_vv_ops)
DEF_RVV_FUNCTION (th_vwqcpx9_rm, xtheadcvwn, none_tu_mu_tumu_preds, xt_bf_vwqcpx_qtrunc_vv_ops)
DEF_RVV_FUNCTION (th_vnqcpx10, xtheadcvwn_narrow, none_mu_preds, xt_all_vnqcpx_void_vv_ops)
DEF_RVV_FUNCTION (th_vnqcpx10_rm, xtheadcvwn_narrow, none_mu_preds, xt_all_vnqcpx_void_vv_ops)
DEF_RVV_FUNCTION (th_vnqcpx11, xtheadcvwn_narrow, none_tu_mu_tumu_preds, xt_all_vnqcpx_vv_ops)
DEF_RVV_FUNCTION (th_vnqcpx11_rm, xtheadcvwn_narrow, none_tu_mu_tumu_preds, xt_all_vnqcpx_vv_ops)
DEF_RVV_FUNCTION (th_vwcpx12, xtheadcvwn, none_mu_preds, xt_all_vwcpx_void_vv_ops)
DEF_RVV_FUNCTION (th_vwcpx12, xtheadcvwn, none_mu_preds, xt_bf_vwcpx_void_vv_ops)
DEF_RVV_FUNCTION (th_vwcpx12_rm, xtheadcvwn, none_mu_preds, xt_all_vwcpx_void_vv_ops)
DEF_RVV_FUNCTION (th_vwcpx12_rm, xtheadcvwn, none_mu_preds, xt_bf_vwcpx_void_vv_ops)
DEF_RVV_FUNCTION (th_vwcpx13, xtheadcvwn, none_tu_mu_tumu_preds, xt_all_vwcpx_wwv_ops)
DEF_RVV_FUNCTION (th_vwcpx13, xtheadcvwn, none_tu_mu_tumu_preds, xt_bf_vwcpx_wwv_ops)
DEF_RVV_FUNCTION (th_vwcpx13_rm, xtheadcvwn, none_tu_mu_tumu_preds, xt_all_vwcpx_wwv_ops)
DEF_RVV_FUNCTION (th_vwcpx13_rm, xtheadcvwn, none_tu_mu_tumu_preds, xt_bf_vwcpx_wwv_ops)
DEF_RVV_FUNCTION (th_vncpx14, xtheadcvwn_narrow, none_mu_preds, xt_all_vncpx_void_v_ops)
DEF_RVV_FUNCTION (th_vncpx14_rm, xtheadcvwn_narrow, none_mu_preds, xt_all_vncpx_void_v_ops)
DEF_RVV_FUNCTION (th_vnqcpx15, xtheadcvwn_narrow, none_mu_preds, xt_all_vnqcpx_void_v_ops)
DEF_RVV_FUNCTION (th_vnqcpx15_rm, xtheadcvwn_narrow, none_mu_preds, xt_all_vnqcpx_void_v_ops)
DEF_RVV_FUNCTION (th_vncpx16, xtheadcvwn_narrow, none_tu_mu_tumu_preds, xt_all_vncpx_v_ops)
DEF_RVV_FUNCTION (th_vncpx16_rm, xtheadcvwn_narrow, none_tu_mu_tumu_preds, xt_all_vncpx_v_ops)
DEF_RVV_FUNCTION (th_vnqcpx17, xtheadcvwn_narrow, none_tu_mu_tumu_preds, xt_all_vnqcpx_v_ops)
DEF_RVV_FUNCTION (th_vnqcpx17_rm, xtheadcvwn_narrow, none_tu_mu_tumu_preds, xt_all_vnqcpx_v_ops)

#undef REQUIRED_EXTENSIONS

#define REQUIRED_EXTENSIONS XTHEADVSFA_EXT
DEF_RVV_FUNCTION (th_vfexp2, alu, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vfexp2_frm, alu_frm, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vftanh, alu, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vftanh_frm, alu_frm, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vfsig, alu, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vfsig_frm, alu_frm, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vfrec, alu, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vfrec_frm, alu_frm, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vfsqrt, alu, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vfsqrt_frm, alu_frm, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vfrsqrt, alu, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vfrsqrt_frm, alu_frm, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vflog2, alu, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vflog2_frm, alu_frm, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vfsin, alu, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vfsin_frm, alu_frm, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vfcos, alu, full_preds, sf_v_ops)
DEF_RVV_FUNCTION (th_vfcos_frm, alu_frm, full_preds, sf_v_ops)
#undef REQUIRED_EXTENSIONS

#define REQUIRED_EXTENSIONS XTHEADVCRYPTO_EXT
DEF_RVV_FUNCTION (th_vmacc54l_vv, th_alu, full_preds, u_vvvv_crypto_sew64_ops)
DEF_RVV_FUNCTION (th_vmacc54l_vs, th_alu, full_preds, u_vvvv_crypto_sew64_ops)
DEF_RVV_FUNCTION (th_vmacc54h_vv, th_alu, full_preds, u_vvvv_crypto_sew64_ops)
DEF_RVV_FUNCTION (th_vmacc54h_vs, th_alu, full_preds, u_vvvv_crypto_sew64_ops)
#undef REQUIRED_EXTENSIONS

#define REQUIRED_EXTENSIONS XTHEADVCODER_EXT
DEF_RVV_FUNCTION (th_vabd, th_alu_u, full_preds, th_i_vvv_u_ops)
DEF_RVV_FUNCTION (th_vabd, th_alu_u, full_preds, th_i_vvx_u_ops)
DEF_RVV_FUNCTION (th_vabdu, alu, full_preds, u_vvv_ops)
DEF_RVV_FUNCTION (th_vabdu, alu, full_preds, u_vvx_ops)
DEF_RVV_FUNCTION (th_vaba, th_alu_u, full_preds, th_i_vvvv_u_ops)
DEF_RVV_FUNCTION (th_vaba, th_alu_u, full_preds, th_i_vvvx_u_ops)
DEF_RVV_FUNCTION (th_vabau, alu, full_preds, th_u_vvvv_ops)
DEF_RVV_FUNCTION (th_vabau, alu, full_preds, th_u_vvvx_ops)
DEF_RVV_FUNCTION (th_vfabd, alu, full_preds, f_vvv_ops)
DEF_RVV_FUNCTION (th_vfabd, alu, full_preds, f_vvf_ops)
DEF_RVV_FUNCTION (th_vfabd_frm, alu_frm, full_preds, f_vvv_ops)
DEF_RVV_FUNCTION (th_vfabd_frm, alu_frm, full_preds, f_vvf_ops)
DEF_RVV_FUNCTION (th_vwabd, th_alu_u, full_preds, th_i_wvv_u_ops)
DEF_RVV_FUNCTION (th_vwabd, th_alu_u, full_preds, th_i_wvx_u_ops)
DEF_RVV_FUNCTION (th_vwabdu, alu, full_preds, u_wvv_ops)
DEF_RVV_FUNCTION (th_vwabdu, alu, full_preds, u_wvx_ops)
DEF_RVV_FUNCTION (th_vwaba, th_alu_u, full_preds, th_i_wwvv_u_ops)
DEF_RVV_FUNCTION (th_vwaba, th_alu_u, full_preds, th_i_wwvx_u_ops)
DEF_RVV_FUNCTION (th_vwabau, alu, full_preds, u_wwvv_ops)
DEF_RVV_FUNCTION (th_vwabau, alu, full_preds, th_u_wwvx_ops)
DEF_RVV_FUNCTION (th_vabsmax, th_alu_u, full_preds, th_i_vvv_u_ops)
#undef REQUIRED_EXTENSIONS

#define REQUIRED_EXTENSIONS XTHEADVARITH_EXT
DEF_RVV_FUNCTION (th_vgmulxor, alu, none_tu_preds, th_qu_vvv_ops)
DEF_RVV_FUNCTION (th_vilo, alu, none_tu_preds, iu_vvv_ops)
DEF_RVV_FUNCTION (th_vile, alu, none_tu_preds, iu_vvv_ops)
DEF_RVV_FUNCTION (th_vcrcfoldr, alu, none_tu_preds, th_diu_vvvv_ops)
DEF_RVV_FUNCTION (th_vcrcfoldn, alu, none_tu_preds, th_diu_vvvv_ops)
#undef REQUIRED_EXTENSIONS


#define REQUIRED_EXTENSIONS XTHEADVFCVT_EXT
DEF_RVV_FUNCTION (th_vfncvt_e4_h, th_alu, full_preds, f16_to_f8e4_v_ops)
DEF_RVV_FUNCTION (th_vfncvt_e4_h_frm, th_alu_frm, full_preds, f16_to_f8e4_v_ops)
DEF_RVV_FUNCTION (th_vfncvt_e5_h, th_alu, full_preds, f16_to_f8e5_v_ops)
DEF_RVV_FUNCTION (th_vfncvt_e5_h_frm, th_alu_frm, full_preds, f16_to_f8e5_v_ops)
DEF_RVV_FUNCTION (th_vfncvt_e4_bf16, th_alu, full_preds, bf16_to_f8e4_v_ops)
DEF_RVV_FUNCTION (th_vfncvt_e4_bf16_frm, th_alu_frm, full_preds, bf16_to_f8e4_v_ops)
DEF_RVV_FUNCTION (th_vfncvt_e5_bf16, th_alu, full_preds, bf16_to_f8e5_v_ops)
DEF_RVV_FUNCTION (th_vfncvt_e5_bf16_frm, th_alu_frm, full_preds, bf16_to_f8e5_v_ops)
DEF_RVV_FUNCTION (th_vfncvt_rod_bf16_s, th_alu, full_preds, f32_to_bf16_f_w_ops)
DEF_RVV_FUNCTION (th_vfwcvt_h_e4, th_alu, full_preds, fp8e4_to_f16_v_ops)
DEF_RVV_FUNCTION (th_vfwcvt_h_e4_frm, th_alu_frm, full_preds, fp8e4_to_f16_v_ops)
DEF_RVV_FUNCTION (th_vfwcvt_h_e5, th_alu, full_preds, fp8e5_to_f16_v_ops)
DEF_RVV_FUNCTION (th_vfwcvt_h_e5_frm, th_alu_frm, full_preds, fp8e5_to_f16_v_ops)
DEF_RVV_FUNCTION (th_vfwcvt_bf16_e4, th_alu, full_preds, fp8e4_to_bf16_v_ops)
DEF_RVV_FUNCTION (th_vfwcvt_bf16_e4_frm, th_alu_frm, full_preds, fp8e4_to_bf16_v_ops)
DEF_RVV_FUNCTION (th_vfwcvt_bf16_e5, th_alu, full_preds, fp8e5_to_bf16_v_ops)
DEF_RVV_FUNCTION (th_vfwcvt_bf16_e5_frm, th_alu_frm, full_preds, fp8e5_to_bf16_v_ops)
#undef REQUIRED_EXTENSIONS

#define REQUIRED_EXTENSIONS XTHEADVREDUCTION_EXT
DEF_RVV_FUNCTION (th_vfredsum_dup_32, th_alu, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vfredsum_dup_32_frm, th_alu_frm, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredsum_dup_32, th_alu, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredsum_dup_32_frm, th_alu_frm, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vfredsum_dup_64, th_alu, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vfredsum_dup_64_frm, th_alu_frm, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredsum_dup_64, th_alu, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredsum_dup_64_frm, th_alu_frm, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vfredsum_c_32, th_alu, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vfredsum_c_32_frm, th_alu_frm, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredsum_c_32, th_alu, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredsum_c_32_frm, th_alu_frm, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vfredsum_c_64, th_alu, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vfredsum_c_64_frm, th_alu_frm, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredsum_c_64, th_alu, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredsum_c_64_frm, th_alu_frm, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmax_dup_32, th_alu, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmax_dup_32_frm, th_alu_frm, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmax_dup_32, th_alu, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmax_dup_32_frm, th_alu_frm, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmax_dup_64, th_alu, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmax_dup_64_frm, th_alu_frm, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmax_dup_64, th_alu, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmax_dup_64_frm, th_alu_frm, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmax_c_32, th_alu, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmax_c_32_frm, th_alu_frm, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmax_c_32, th_alu, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmax_c_32_frm, th_alu_frm, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmax_c_64, th_alu, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmax_c_64_frm, th_alu_frm, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmax_c_64, th_alu, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmax_c_64_frm, th_alu_frm, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmin_dup_32, th_alu, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmin_dup_32_frm, th_alu_frm, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmin_dup_32, th_alu, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmin_dup_32_frm, th_alu_frm, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmin_dup_64, th_alu, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmin_dup_64_frm, th_alu_frm, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmin_dup_64, th_alu, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmin_dup_64_frm, th_alu_frm, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmin_c_32, th_alu, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmin_c_32_frm, th_alu_frm, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmin_c_32, th_alu, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmin_c_32_frm, th_alu_frm, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmin_c_64, th_alu, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vfredmin_c_64_frm, th_alu_frm, none_preds, f_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmin_c_64, th_alu, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vbfredmin_c_64_frm, th_alu_frm, none_preds, bf16_red_v_ops)
DEF_RVV_FUNCTION (th_vary_dup_32, th_alu, none_preds, f_vary_v_ops)
DEF_RVV_FUNCTION (th_vary_dup_64, th_alu, none_preds, f_vary_v_ops)
#undef REQUIRED_EXTENSIONS

#endif
