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

#include "rtl.h"
#include "xuantie-tune.def"
#include "opts.h"

poly_uint16 xt_rvm_chunks;

void
xt_option_override (const struct riscv_tune_param *tune_param,
		    struct gcc_options *opts,
		    struct gcc_options *opts_set)
{

  xt_rvm_chunks = TARGET_XTHEADMATRIX ? poly_uint16 (2, 0, 2)
				      : poly_uint16 (0, 0, 0);

  /* The STRATEGY_VECTOR strategy for stringop expansion use the e8 m8 LMUL to
     process all length now, which may lead to performance regressions. */
  if (!OPTION_SET_P (stringop_strategy))
    SET_OPTION_IF_UNSET (opts, opts_set, stringop_strategy, STRATEGY_SCALAR);

  if (!riscv_rvv_auto_vectorize && !OPTION_SET_P (flag_tree_vectorize))
    {
      if (!OPTION_SET_P (flag_tree_vectorize))
	{
	  SET_OPTION_IF_UNSET (opts, opts_set, flag_tree_loop_vectorize, 0);
	  SET_OPTION_IF_UNSET (opts, opts_set, flag_tree_slp_vectorize, 0);
	}
    }

  /* If not XUANTIE, do nothing.  */
  if (!TARGET_XUANTIE)
    return;

  if (!optimize_size)
    {
      SET_OPTION_IF_UNSET (opts, opts_set,
			   param_max_inline_insns_single,
			   400);
      SET_OPTION_IF_UNSET (opts, opts_set,
			   param_max_inline_insns_auto,
			   30);
    }

  SET_OPTION_IF_UNSET (opts, opts_set,
		       g_switch_value,
		       0);

  /* This optimization will cause the when the size of memmove/memset to
     generate is unknown in compile time, which may increase the dynamic
     instruction count when the loop is simple (like the loop is just
     assign values to array). But it is profitable on c950. */
  int is_ldist_on = RISCV_TUNE_C950_P;
  SET_OPTION_IF_UNSET (opts, opts_set,
		       flag_tree_loop_distribute_patterns,
		       is_ldist_on);

  if (optimize == 3)
    SET_OPTION_IF_UNSET (opts, opts_set,
			 riscv_ipa_unhot_inline,
			 1);

  /* If not optimizing for size, set the default
     alignment to what the target wants.  */
  if (!opts->x_optimize_size)
    {
      if (opts->x_flag_align_loops && !opts->x_str_align_loops)
	opts->x_str_align_loops = tune_param->loop_align;
      if (opts->x_flag_align_jumps && !opts->x_str_align_jumps)
	opts->x_str_align_jumps = tune_param->jump_align;
      if (opts->x_flag_align_functions && !opts->x_str_align_functions)
	opts->x_str_align_functions = tune_param->function_align;
    }

  if (!opts_set->x_riscv_4k_optimize && riscv_microarchitecture == c910)
    opts->x_riscv_4k_optimize = 1;

  if (riscv_libcc_runtime && TARGET_64BIT)
    warning (0, "mccrt is only supported in rv32* arch");

  /* For XUANTIE E, when Ospace is turned on, X is turned on by default.  */
  if ((TARGET_XTHEADE || TARGET_XTHEADSE) && !opts->x_riscv_unaligned_libcall && optimize_size)
    SET_OPTION_IF_UNSET (opts, opts_set, riscv_unaligned_libcall, 1);

  if (!riscv_expand_split_imm)
    SET_OPTION_IF_UNSET (opts, opts_set, riscv_expand_addsi_extend, 0);

  int queue_depth = 0;
  switch (tune_param->autoprefetcher_model)
    {
      case riscv_tune_param::AUTOPREFETCHER_OFF:
	queue_depth = -1;
	break;
      case riscv_tune_param::AUTOPREFETCHER_WEAK:
	queue_depth = 0;
	break;
      default:
	gcc_unreachable ();
    }

  /* We don't mind passing in global_options_set here as we don't use
     the *options_set structs anyway.  */
  SET_OPTION_IF_UNSET (opts, opts_set,
		       param_sched_autopref_queue_depth, queue_depth);

  SET_OPTION_IF_UNSET (opts, opts_set, param_max_stores_to_merge, 128);
}

/* If (set DEST SRC) is not a valid move instruction, emit an equivalent
   sequence that is valid.  */

bool
xt_legitimize_move (machine_mode mode, rtx dest, rtx src)
{
  /* Th_mem does not support immediate as SRC.  */
  if (!TARGET_64BIT && mode == DFmode
      && CONST_DOUBLE_P (src) && xt_mem_operand (dest, DFmode))
    {
      rtx reg = force_reg (DFmode, src);
      riscv_emit_move (dest, reg);
      return true;
    }

  /* Expand
      (set (reg:OUTER dest) (subreg:OUTER (reg:INNER src) 0))
    to
      (set (reg:OUTER dest) ({sign,zero}_extend:OUTER (reg:INNER src)))

    A paradoxical integer subreg of a pseudo register, when the pseudo
    is later spilled to memory by LRA, degenerates to a subreg of a
    MEM.  This incorrectly matches a move pattern with a wide-mode
    memory constraint, emitting a load wider than the stack slot, and
    leaving garbage in the upper bits.

    Converting to an explicit extension early ensures that after spilling
    the pseudo, the extension of a MEM correctly matches a narrow-load
    pattern, emitting the right-sized load instruction.

    The choice between sign_extend and zero_extend is determined by
    PROMOTE_MODE, which defines the canonical form of narrow values in
    wide registers.  For example, on RV64 SImode is always sign-extended
    (matching the behavior of W-suffix instructions like addw).  */
  if (lra_in_progress
      && SCALAR_INT_MODE_P (mode)
      && SUBREG_P (src)
      && REG_P (SUBREG_REG (src))
      && SCALAR_INT_MODE_P (GET_MODE (SUBREG_REG (src)))
      && paradoxical_subreg_p (src)
      && known_eq (SUBREG_BYTE (src), 0)
      && register_operand (dest, mode))
    {
      /* Use PROMOTE_MODE to determine the canonical extension for the
	 inner mode.  Start with unsignedp = 1 (zero-extend) as the
	 default for paradoxical subreg whose upper bits are undefined.
	 PROMOTE_MODE may override this; e.g. on RV64, SImode forces
	 unsignedp = 0 (sign-extend) to match the ABI convention that
	 32-bit values are always sign-extended in 64-bit registers.  */
      int unsignedp = 1;
      scalar_int_mode inner_mode
	= as_a <scalar_int_mode> (GET_MODE (SUBREG_REG (src)));
#ifdef PROMOTE_MODE
      PROMOTE_MODE (inner_mode, unsignedp, NULL_TREE);
#endif
      convert_move (dest, SUBREG_REG (src), unsignedp);
      return true;
    }

  return false;
}

void
xt_conditional_register_usage (void)
{
  if (!TARGET_XTHEADMATRIX)
    {
      for (int regno = XT_RVM_MATRIX_REG_FIRST;
	   regno <= XT_RVM_MATRIX_REG_LAST; regno++)
	fixed_regs[regno] = call_used_regs[regno] = 1;

      fixed_regs[MSIZE_M_REGNUM] = call_used_regs[MSIZE_M_REGNUM] = 1;
      fixed_regs[MSIZE_N_REGNUM] = call_used_regs[MSIZE_N_REGNUM] = 1;
      fixed_regs[MSIZE_K_REGNUM] = call_used_regs[MSIZE_K_REGNUM] = 1;
    }
}

/* Try to use libcall to extract bit field form mem. Return nonzero if using libcall.  */

void
xt_emit_libcall_for_unaligned_access (enum riscv_extraction_pattern ep,
					 rtx *operands, machine_mode mode)
{
  gcc_assert (mode == SImode || mode == DImode);

  rtx libfunc = NULL_RTX;
  switch (ep)
    {
    case RISCV_EP_INSV:
      {
	libfunc = init_one_libfunc (concat ("__thead_uwrite", (mode == SImode ? "4" : "8"), NULL));
	emit_library_call (libfunc, LCT_NORMAL, mode,
			   operands[3], mode,
			   XEXP (operands[0], 0), Pmode);
	emit_clobber (operands[0]);
	return;
      }
    case RISCV_EP_EXTV:
    case RISCV_EP_EXTZV:
      {
	libfunc = init_one_libfunc (concat ("__thead_uread", (mode == SImode ? "4" : "8"), NULL));
	rtx target = emit_library_call_value (libfunc, operands[0], LCT_PURE, mode,
					      XEXP (operands[1], 0), Pmode);
	emit_use (operands[1]);
	if (!rtx_equal_p (operands[0], target))
	  emit_move_insn (operands[0], target);

	return;
      }
    default:
      gcc_unreachable ();
    }
}

/* Determine whether the XTheadFmemidx move is supported.
   Function return values:
    - 1: Utilize XTheadFmemidx move
    - 0: Perform a standard move operation
    - -1: Encounter an illegal instruction, indicating an invalid operation.  */
int
xt_fmemidx_movdf_hardfloat_p (rtx dest, rtx src)
{
  /* Without M expansion, we cannot get th_m operands. */
  if (!TARGET_XTHEADFMEMIDX)
    return 0;

  if (xt_mem_operand (dest, DFmode))
    {
      /* At 32 bits, we cannot use zero as the source operand of the fsrd/flrd
	instruction because it is 32 bits.  */
      if (const_0_operand (src, DFmode))
	return TARGET_64BIT ? 1 : -1;

      /* Pseudo-registers and floating-point registers are legal.  */
      if (register_operand (src, DFmode))
	return fpr_operand (src, DFmode) ? 1 : -1;
    }
  else if (xt_mem_operand (src, DFmode))
    {
      if (register_operand (dest, DFmode))
	return fpr_operand (dest, DFmode) ? 1 : -1;
    }

  return 0;
}

/* Implement TARGET_IV_GEN_LOAD_INDEX.
   Don't generate index for induction variables for the loop when
   4k-optimize is enable and loop size is larger than 4k.  */

static bool
xt_iv_gen_load_index (HOST_WIDE_INT loop_niter,
			 machine_mode mem_mode)
{
  if (VECTOR_MODE_P (mem_mode))
    return true;

  HOST_WIDE_INT mem_size = GET_MODE_SIZE (mem_mode).to_constant();

  if (!riscv_4k_optimize)
    return true;

  if (loop_niter * mem_size > 4048)
    return false;
  return true;
}

/* Implement TARGET_PROMOTED_TYPE.  */

static tree
xt_promoted_type (const_tree t)
{
  if (SCALAR_FLOAT_TYPE_P (t)
      && TYPE_PRECISION (t) == 16
      && TYPE_MODE (t) == BFmode)
    return riscv_bfloat16_type_node;

  return NULL_TREE;
}

/* Implement TARGET_CANNOT_SUBSTITUTE_MEM_EQUIV_P.  */

static bool
xt_cannot_substitute_mem_equiv_p (rtx mem)
{
  gcc_assert (MEM_P (mem));

  /* th_mem is special. On rv32, it cannot safely replace pseudo-registers
     with equivalent memory values during register allocation, such as
     equivalent replacement between GPR and FPR, because it does no
     support memory splitting.  */
  if (!TARGET_64BIT && xt_mem_operand (mem, DFmode))
    return true;

  return false;
}

bool
xt_rtx_costs (rtx x, machine_mode mode ATTRIBUTE_UNUSED, int outer_code,
	      int opno ATTRIBUTE_UNUSED, int *total,
	      bool speed ATTRIBUTE_UNUSED)
{
  if (xt_rvm_mode_p (mode))
    {
      *total = COSTS_N_INSNS (1);
      return true;
    }

  int cost;
  switch (GET_CODE (x))
    {
    case XOR:
      if (TARGET_XUANTIE_COMBINE_XOR && outer_code == SET
	  && REG_P (XEXP (x, 0)) && CONST_INT_P (XEXP (x, 1))
	  && !SMALL_OPERAND (INTVAL (XEXP (x, 1)))
	  && !(TARGET_ZBS && uimm_extra_bit_or_twobits (XEXP (x, 1), VOIDmode)))
	{
	  *total = TARGET_XUANTIE_EXPAND_SPLIT_IMM ? COSTS_N_INSNS (2) + 2
                                             : COSTS_N_INSNS (1);
	  return true;
	}
      gcc_fallthrough ();
    case IOR:
      /* orn, andn and xorn pattern for zbb.  */
      if (TARGET_ZBB
	  && GET_CODE (XEXP (x, 0)) == NOT)
	{
	  *total = riscv_binary_cost (x, 1, 2);
	  return true;
	}

      /* bset[i] and binv[i] pattern for zbs.  */
      if ((GET_CODE (x) == IOR || GET_CODE (x) == XOR)
	  && TARGET_ZBS)
	{
	  if ((GET_CODE (XEXP (x, 0)) == ASHIFT
	      && CONST_INT_P (XEXP (XEXP (x, 0), 0)))
	      || single_bit_mask_operand (XEXP (x, 1), VOIDmode))
	    {
	       *total = COSTS_N_INSNS (1);
	       return true;
	    }
	  else if (uimm_extra_bit_or_twobits (XEXP (x, 1), VOIDmode))
	    {
	       *total = COSTS_N_INSNS (2);
	       return true;
	    }
	}
      break;
    case CONST_INT:
      /* trivial constants checked using OUTER_CODE in case they are
	 encodable in insn itself w/o need for additional insn(s).  */
      if (riscv_immediate_operand_p (outer_code, INTVAL (x)))
	{
	  *total = 0;
	  return true;
	}
      else if (outer_code == SET)
	{
	  cost = riscv_integer_cost (INTVAL (x));
	  *total = COSTS_N_INSNS (cost);
	  return true;
	}
      break;
    case MEM:
      /* If the address is legitimate, return the number of
	 instructions it needs.  */
      if ((cost = riscv_address_insns (XEXP (x, 0), mode, true)) > 0)
	{
	  /* When optimizing for size, make uncompressible 32-bit addresses
	     more expensive so that compressible 32-bit addresses are
	     preferred.  */
	  if ((TARGET_RVC || TARGET_ZCA)
	      && !speed && riscv_mshorten_memrefs && mode == SImode
	      && !riscv_compressed_lw_address_p (XEXP (x, 0)))
	    cost++;

	  *total = COSTS_N_INSNS (cost) + tune_param->memory_cost;
	  return true;
	}
      /* Otherwise use the default handling.  */
      return false;
    case ZERO_EXTRACT:
      /* zero extraction pattern (xtheadbb:th.extu).  */
      if (outer_code == SET && TARGET_XTHEADBB)
	{
	  *total = COSTS_N_INSNS (SINGLE_SHIFT_COST);
	  return true;
	}
      break;
    case LO_SUM:
      if (outer_code == SET && REG_P (XEXP (x, 0)))
	*total = COSTS_N_INSNS (1);
      else
	*total = (set_src_cost (XEXP (x, 0), mode, speed)
		+ set_src_cost (XEXP (x, 1), mode, speed));
      return true;
    default:
      return false;
    }
  return false;
}

/* Return a legitimate address for REG + OFFSET.  TEMP is as for
   riscv_force_temporary; it is only needed when OFFSET is not a
   SMALL_OPERAND.  */

rtx
xt_add_offset (rtx temp, rtx reg, HOST_WIDE_INT offset)
{
  if (!SMALL_OPERAND (offset))
    {
      HOST_WIDE_INT offset_value = offset;
      rtx high;

      if (SMALL_OPERAND (((offset_value < 0) ? offset_value - 1 : offset_value + 1) / 2))
	{
	  /* If the OFFSET is within 2*SMALL_OPERAND,
	      use addi + ld/st instead of li + add + ld/st.  */
	  const int base = (offset_value < 0) ? -2048 : 2047;
	  high = gen_int_mode (base, Pmode);
	  offset_value = offset_value - base;
	  reg = riscv_force_temporary (temp, gen_rtx_PLUS (Pmode, reg, high));
	}
      else
	{
	  /* Leave OFFSET as a 16-bit offset and put the excess in HIGH.
	      The addition inside the macro CONST_HIGH_PART may cause an
	      overflow, so we need to force a sign-extension check.  */
	  high = gen_int_mode (CONST_HIGH_PART (offset_value), Pmode);
	  offset_value = CONST_LOW_PART (offset_value);
	  high = riscv_force_temporary (temp, high);
	  reg = riscv_force_temporary (temp, gen_rtx_PLUS (Pmode, high, reg));
	}

      return plus_constant (Pmode, reg, offset_value);
    }
  return plus_constant (Pmode, reg, offset);
}

/* Implement the TARGET_OPTAB_SUPPORTED_P hook.  */

static bool
xt_by_pieces_mode_supported_p (fixed_size_mode mode)
{
  if (!riscv_rvv_auto_vectorize && VECTOR_MODE_P (mode))
    return false;

  return true;
}

#include "xuantie-ext-lib.cc"
#include "xuantie-pass-dsext.cc"
#include "xuantie-pass-load-merging.cc"
#include "xuantie-pass-mcfg.cc"

#undef TARGET_IV_GEN_LOAD_INDEX
#define TARGET_IV_GEN_LOAD_INDEX xt_iv_gen_load_index

#undef TARGET_PROMOTED_TYPE
#define TARGET_PROMOTED_TYPE xt_promoted_type

#undef TARGET_CANNOT_SUBSTITUTE_MEM_EQUIV_P
#define TARGET_CANNOT_SUBSTITUTE_MEM_EQUIV_P xt_cannot_substitute_mem_equiv_p

#undef TARGET_BY_PIECES_MODE_SUPPORTED_P
#define TARGET_BY_PIECES_MODE_SUPPORTED_P xt_by_pieces_mode_supported_p
