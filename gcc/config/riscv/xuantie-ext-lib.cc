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

#include "fold-const.h"
#include "gimple.h"
#include "ssa.h"
#include "gimple-iterator.h"
#include "tree-eh.h"
#include "tree-hash-traits.h"
#include "gimple-pretty-print.h"
#include "gimplify.h"
#include "tree-ssanames.h"
#include "backend.h"
#include "pass_manager.h"
#include "context.h"
#include "cfgrtl.h"
#include "cfghooks.h"
#include "cfganal.h"
#include "riscv-subset.h"

bool
target_subset_version_p (const char *subset, int major, int minor)
{
  return riscv_cmdline_subset_list () -> lookup (subset, major, minor) != NULL;
}

static void
xt_replace_insn_regnum(rtx *pattern_ref,
		       rtx old_reg,
		       unsigned int new_regnum)
{
  const char *fmt;
  int i, j;
  enum rtx_code code = GET_CODE(*pattern_ref);

  fmt = GET_RTX_FORMAT(code);
  for (i = GET_RTX_LENGTH(code) - 1; i >= 0; i--)
    if (fmt[i] == 'e')
      xt_replace_insn_regnum(&XEXP(*pattern_ref, i), old_reg, new_regnum);
    else if (fmt[i] == 'E')
      for (j = 0; j < XVECLEN(*pattern_ref, i); j++)
	xt_replace_insn_regnum(&XVECEXP(*pattern_ref, i, j), old_reg,
			       new_regnum);
    else if (fmt[i] == 'r')
    {
      if (REGNO(*pattern_ref) == REGNO(old_reg))
	*pattern_ref = gen_rtx_REG(GET_MODE(*pattern_ref), new_regnum);
    }
}

/* Depth first traverse the preds of CUR_BB, if a block set REG
   is found, return TRUE. VISITED_BB record the blocks that has
   been traversed.  */

static bool
xt_reg_set_by_preds (basic_block cur_bb, bitmap visited_bb, const_rtx reg)
{
  edge_iterator ei;
  edge e;

  FOR_EACH_EDGE (e, ei, cur_bb->preds)
    {
      basic_block bb = e->src;
      class df_lr_bb_info *bb_info = df_lr_get_bb_info (bb->index);

      if (bitmap_bit_p (visited_bb, bb->index))
	continue;

      if (!bb_info)
	return true;

      if (bitmap_bit_p (&bb_info->def, REGNO (reg)))
	return true;

      bitmap_set_bit (visited_bb, bb->index);
      if (xt_reg_set_by_preds (bb, visited_bb, reg))
	return true;
    }
  return false;
}

/* Check if the RGE is set between FROM and TO, return TRUE if it is set.  */

static bool
xt_reg_set_trace_p (const_rtx reg, rtx_insn *from, rtx_insn *to)
{
  bool set = false;
  rtx_insn *insn;
  basic_block from_bb = BLOCK_FOR_INSN (from);
  basic_block to_bb = BLOCK_FOR_INSN (to);
  bitmap visited_blocks = BITMAP_ALLOC (NULL);

  /* The x0 can never be set.  */
  if (REGNO (reg) == GP_REG_FIRST)
    return false;

  if (from == to)
    return false;

  /* Case 1: FROM and TO are in the same block, and FROM is before TO.  */
  if (from_bb == to_bb && DF_INSN_LUID (from) < DF_INSN_LUID (to))
    {
      for (insn = NEXT_INSN (from); insn != to; insn = NEXT_INSN (insn))
	if (INSN_P (insn) && reg_set_p (reg, insn))
	  return true;
      return false;
    }

  /* Case 2: FROM and TO are in different blocks
	     or they are in same block and FROM follows TO. */

  /* Check if the REG is set from FROM to the end of the block.  */
  for (insn = NEXT_INSN (from); insn != NEXT_INSN (BB_END (from_bb));
       insn = NEXT_INSN (insn))
    if (INSN_P (insn) && reg_set_p (reg, insn))
      return true;

  /* Check if the REG is set from the start of block to TO.  */
  for (insn = BB_HEAD (to_bb); insn != to; insn = NEXT_INSN (insn))
    if (INSN_P (insn) && reg_set_p (reg, insn))
      return true;

  /* Check if the REG is set in every path from FROM_BB to TO_BB.  */
  bitmap_set_bit (visited_blocks, from_bb->index);
  set = xt_reg_set_by_preds (to_bb, visited_blocks, reg);
  BITMAP_FREE (visited_blocks);
  return set;
}

/* Implement DSP extension.  */

bool
xt_dsp_mode_p (machine_mode mode)
{
  if (TARGET_XUANTIE_ZPN || TARGET_XUANTIE_ZPSFOPERAND)
    {
      switch (mode)
      {
	case E_RVP2HImode:
	case E_RVP4QImode:
	case E_RVP2SImode:
	case E_RVP4HImode:
	case E_RVP8QImode:
	  return true;
	default:
	  break;
      }
    }
  return false;
}

/* Return the vectorization machine mode for RVV according to LMUL.  */
machine_mode
xt_dsp_preferred_simd_mode (scalar_mode mode)
{
  if (TARGET_XUANTIE_ZPN)
    {
      if (TARGET_64BIT)
	switch (mode)
	  {
	  case E_SImode:
	    return RVP2SImode;
	  case E_HImode:
	    return RVP4HImode;
	  case E_QImode:
	    return RVP8QImode;
	  default:
	    break;
	  }
      else
	switch (mode)
	  {
	  case E_HImode:
	    return  RVP2HImode;
	  case E_QImode:
	    return  RVP4QImode;
	  default:
	    break;
	  }
    }
  if (TARGET_XUANTIE_ZPSFOPERAND && mode == E_HImode)
    return E_RVP2HImode;
  return word_mode;
}

static opt_machine_mode
xt_dsp_simd_mode (scalar_mode inner_mode, poly_uint64 nunits)
{
  if (TARGET_XUANTIE_ZPN)
    {
      if (TARGET_64BIT)
  {
    if (inner_mode == E_SImode && known_eq (nunits, (uint64_t)2))
      return RVP2SImode;
    if (inner_mode == E_HImode && known_eq (nunits, (uint64_t)4))
      return RVP4HImode;
    if (inner_mode == E_QImode && known_eq (nunits, (uint64_t)8))
      return RVP8QImode;
  }
      else
  {
    if (inner_mode == E_HImode && known_eq (nunits, (uint64_t)2))
      return RVP2HImode;
    if (inner_mode == E_QImode && known_eq (nunits, (uint64_t)4))
      return RVP4QImode;
  }
    }

  if (TARGET_XUANTIE_ZPSFOPERAND && inner_mode == E_HImode
      && known_eq (nunits, (uint64_t)2))
    return E_RVP2HImode;

  return opt_machine_mode ();
}

opt_machine_mode
xt_dsp_vectorize_related_mode (machine_mode vector_mode,
			       scalar_mode element_mode,
			       poly_uint64 nunits)
{
  const unsigned xlen_bytes = TARGET_64BIT ? 8 : 4;

  poly_uint64 min_units;
  if (is_a <scalar_int_mode> (element_mode)
      && multiple_p (xlen_bytes, GET_MODE_SIZE (element_mode), &min_units))
    {
      machine_mode dsp_mode;
      if (maybe_ne (nunits, 0U))
	{
	  /* Try to find a DSP SIMD mode with exactly NUNITS units.  */
	  if (multiple_p (min_units, nunits)
	      && xt_dsp_simd_mode (element_mode, nunits).exists (&dsp_mode))
	    return dsp_mode;
	}
      else
	{
	  /* Take the preferred number of units from the number of bytes
	     that fit in VECTOR_MODE.  */
	  min_units = ordered_min (min_units, GET_MODE_SIZE (vector_mode));
	  if (xt_dsp_simd_mode (element_mode, min_units).exists (&dsp_mode))
	    return dsp_mode;
	}
    }

  return default_vectorize_related_mode (vector_mode, element_mode, nunits);
}

rtx xt_di_high_part_subreg(rtx reg)
{
  poly_uint64 high_part_offset = subreg_highpart_offset (SImode, DImode);
  return simplify_gen_subreg (
	   SImode, reg,
	   DImode, high_part_offset);
}

rtx xt_di_low_part_subreg(rtx reg)
{
  poly_uint64 low_part_offset = subreg_lowpart_offset (SImode, DImode);
  return simplify_gen_subreg (
	   SImode, reg,
	   DImode, low_part_offset);
}

static void
xt_split_shiftrtdi3 (rtx dst, rtx src, rtx shiftamount, bool logic_shift_p)
{
  rtx src_high_part;
  rtx dst_high_part, dst_low_part;
  dst_high_part = xt_di_high_part_subreg (dst);
  src_high_part = xt_di_high_part_subreg (src);
  dst_low_part = xt_di_low_part_subreg (dst);
  if (INTVAL (shiftamount) < 32)
    {
      if (logic_shift_p)
	{
	  emit_insn (gen_riscv_uwexti_si (dst_low_part, src,
					  shiftamount));
	  emit_insn (gen_lshrsi3 (dst_high_part, src_high_part,
				  shiftamount));
	}
      else
	{
	  emit_insn (gen_riscv_wexti_si (dst_low_part, src,
					 shiftamount));
	  emit_insn (gen_ashrsi3 (dst_high_part, src_high_part,
				  shiftamount));
	}
    }
  else
    {
      rtx new_shift_amout = gen_int_mode(INTVAL (shiftamount) - 32, SImode);
      if (logic_shift_p)
	{
	  emit_insn (gen_lshrsi3 (dst_low_part, src_high_part,
				  new_shift_amout));
	  emit_move_insn (dst_high_part, const0_rtx);
	}
      else
	{
	  emit_insn (gen_ashrsi3 (dst_low_part, src_high_part,
				  new_shift_amout));
	  emit_insn (gen_ashrsi3 (dst_high_part, src_high_part,
				  GEN_INT (31)));
	}
    }
}

void
xt_dsp_split_ashiftdi3 (rtx dst, rtx src, rtx shiftamount)
{
  rtx src_low_part;
  rtx dst_high_part, dst_low_part;
  dst_high_part = xt_di_high_part_subreg (dst);
  dst_low_part = xt_di_low_part_subreg (dst);
  src_low_part = xt_di_low_part_subreg (src);
  if (INTVAL (shiftamount) < 32)
    {
      rtx ext_start;
      ext_start = gen_int_mode(32 - INTVAL (shiftamount), SImode);
      emit_insn (gen_riscv_wexti_si (dst_high_part, src, ext_start));
      emit_insn (gen_ashlsi3 (dst_low_part, src_low_part, shiftamount));
    }
  else
    {
      rtx new_shift_amout = gen_int_mode(INTVAL (shiftamount) - 32, SImode);
      emit_insn (gen_ashlsi3 (dst_high_part, src_low_part,
			      new_shift_amout));
      emit_move_insn (dst_low_part, GEN_INT (0));
    }
}

void
xt_dsp_split_ashiftrtdi3 (rtx dst, rtx src, rtx shiftamount)
{
  xt_split_shiftrtdi3 (dst, src, shiftamount, false);
}

void
xt_dsp_split_lshiftrtdi3 (rtx dst, rtx src, rtx shiftamount)
{
  xt_split_shiftrtdi3 (dst, src, shiftamount, true);
}

/* Builtin types for the short immediately number.  */
tree
xt_build_imm_type (enum xt_builtin_imm prec, signop unsigned_p)
{
  tree *ret;

  static tree riscv_const_imm_nodes[(XT_BUILTIN_IMM_END
				     - XT_BUILTIN_IMM_STRAT) * 2];

  ret = &riscv_const_imm_nodes[(prec - XT_BUILTIN_IMM_STRAT)
				   * (unsigned_p + 1)];
  if (*ret == NULL_TREE)
    {
      *ret = unsigned_p ? make_unsigned_type (BITS_PER_UNIT * 4)
			: make_signed_type (BITS_PER_UNIT * 4);

      set_min_and_max_values_for_integral_type (*ret, prec, unsigned_p);
    }

  return *ret;
}

const char *
xt_get_rvm_mode_mfmt (machine_mode mode)
{
  switch (mode)
  {
    case E_RVMM1QImode:
      return "b";
    case E_RVMM1HImode:
    case E_RVMM1HFmode:
    case E_RVMM2HFmode:
      return "h";
    case E_RVMM1SImode:
      return "w";
    case E_RVMM1SFmode:
      return "s";
    case E_RVMM1DImode:
    case E_RVMM1DFmode:
    case E_RVMM2DFmode:
      return "d";
     default:
      break;
  }
  return "";
}

/* Return true if mode is the RVM enabled mode.  */
bool
xt_rvm_mode_p (machine_mode mode)
{
#undef ENTRY
#define ENTRY(MODE, REQUIREMENT, ...)					\
  case MODE##mode:							\
    return REQUIREMENT;
  switch (mode)
    {
#include "xuantie-ext-builtins-matrix.def"
    default:
      return false;
    }

  return false;
}

/* Call from ADJUST_NUNITS in xuantie-modes.def. Return the correct
   NUNITS size for corresponding machine_mode.  */
poly_int64
xt_rvm_adjust_nunits (machine_mode mode, int lmul, int nf)
{
  if (xt_rvm_mode_p (mode))
    return xt_rvm_chunks * lmul * nf;

  /* Set the disabled RVM modes size as 1 by default.  */
  return 1;
}

unsigned int
xt_rvm_get_lmul (machine_mode mode)
{
#undef ENTRY
  if (xt_rvm_mode_p (mode))
#define ENTRY(MODE, REQUIREMENT, LMUL)					\
  case MODE##mode:							\
    return LMUL;
  switch (mode)
    {
#include "xuantie-ext-builtins-matrix.def"
    default:
      gcc_unreachable ();
    }
  return 0;
}

void
xt_rvm_legitimize_poly_move (machine_mode mode, rtx dest, rtx tmp, rtx src)
{
  poly_int64 value = rtx_to_poly_int64 (src);
  HOST_WIDE_INT factor = value.coeffs[2];
  HOST_WIDE_INT mlenb = XT_RVM_UNITS_PER_REG.coeffs[2];
  if (factor == 0)
    return;

  rtx tmp2 = can_create_pseudo_p () ? gen_reg_rtx (Pmode) : XT_RVM_TEMP_REG (Pmode);
  gcc_assert (multiple_p (factor, mlenb));
  emit_move_insn (tmp2, gen_int_mode (XT_RVM_UNITS_PER_REG, Pmode));
  riscv_expand_mult_with_const_int (mode, tmp, tmp2, factor / mlenb);
  riscv_expand_op (PLUS, mode, dest, tmp, dest);
}

/* Return true if can use CSR to enable CLIC for XUANTIE.  */
bool xt_emit_interrupt_csr_p ()
{
  if (TH_INT_INTERRUPT_HELPER (cfun)
      && XT_CLIC_PREEMPTIBLE_P (cfun)
      /* FIXME: 3/4 may not be reasonable, it is a balance between
	 code size and performance.  */
      && __builtin_popcount (th_int_get_mask (cfun->machine->xt_machine_function.mask)) >= 12)
    return false;

  if (cfun->machine->interrupt_handler_p
      && XT_CLIC_PREEMPTIBLE_P (cfun)
      && cfun->machine->interrupt_mode == MACHINE_MODE)
    return true;

  return false;
}

/* Return true if t0 is saved or restored, otherwise false.  */
static bool
handle_interrupt_csr (HOST_WIDE_INT *offset, unsigned int regno, riscv_save_restore_fn fn, bool epilogue)
{
  if (regno != RISCV_PROLOGUE_TEMP_REGNUM)
    return false;

  if (!(XT_INTERRUPT_FLOAT_P (cfun) || XT_INTERRUPT_DSP_P (cfun) || xt_emit_interrupt_csr_p ()))
    return false;

  unsigned int word_size = UNITS_PER_WORD;
  HOST_WIDE_INT t0_offset = *offset;
  *offset -= word_size;
  if (!epilogue)
    {
      riscv_save_restore_reg (word_mode, regno, t0_offset, fn);

      if (XT_INTERRUPT_FLOAT_P (cfun))
	{
	  emit_insn (gen_riscv_frcsr (RISCV_PROLOGUE_TEMP (SImode)));
	  riscv_save_restore_reg (SImode, regno, *offset, fn);
	  *offset -= word_size;
	}

      if (XT_INTERRUPT_DSP_P (cfun))
	{
	  emit_insn (gen_xt_csr_read (RISCV_PROLOGUE_TEMP (SImode), GEN_INT (XT_VXSAT_REGNUM)));
	  riscv_save_restore_reg (SImode, regno, *offset, fn);
	  *offset -= word_size;
	}

      if (xt_emit_interrupt_csr_p ())
	{
	  emit_insn (gen_xt_csr_read (RISCV_PROLOGUE_TEMP (SImode), GEN_INT (XT_MSTATUS_REGNUM)));
	  riscv_save_restore_reg (SImode, regno, *offset, fn);
	  *offset -= word_size;

	  emit_insn (gen_xt_csr_read (RISCV_PROLOGUE_TEMP (SImode), GEN_INT (XT_MCAUSE_REGNUM)));
	  riscv_save_restore_reg (SImode, regno, *offset, fn);
	  *offset -= word_size;

	  emit_insn (gen_xt_csr_read (RISCV_PROLOGUE_TEMP (SImode), GEN_INT (XT_MEPC_REGNUM)));
	  riscv_save_restore_reg (SImode, regno, *offset, fn);
	  *offset -= word_size;
	}
    }
  else
    {
      if (XT_INTERRUPT_FLOAT_P (cfun))
	{
	  riscv_save_restore_reg (SImode, regno, *offset, fn);
	  emit_insn (gen_riscv_fscsr (RISCV_PROLOGUE_TEMP (SImode)));
	  *offset -= word_size;
	}

      if (XT_INTERRUPT_DSP_P (cfun))
	{
	  riscv_save_restore_reg (SImode, regno, *offset, fn);
	  emit_insn (gen_xt_csr_write (GEN_INT (XT_VXSAT_REGNUM), RISCV_PROLOGUE_TEMP (SImode)));
	  *offset -= word_size;
	}

      if (xt_emit_interrupt_csr_p ())
	{
	  riscv_save_restore_reg (SImode, regno, *offset, fn);
	  emit_insn (gen_xt_csr_write (GEN_INT (XT_MSTATUS_REGNUM), RISCV_PROLOGUE_TEMP (SImode)));
	  *offset -= word_size;

	  riscv_save_restore_reg (SImode, regno, *offset, fn);
	  emit_insn (gen_xt_csr_write (GEN_INT (XT_MCAUSE_REGNUM), RISCV_PROLOGUE_TEMP (SImode)));
	  *offset -= word_size;

	  riscv_save_restore_reg (SImode, regno, *offset, fn);
	  emit_insn (gen_xt_csr_write (GEN_INT (XT_MEPC_REGNUM), RISCV_PROLOGUE_TEMP (SImode)));
	  *offset -= word_size;
	}
      riscv_save_restore_reg (word_mode, regno, t0_offset, fn);
    }
    *offset += word_size;

  return true;
}

/* Return TRUE that an insn is unknown for UTNMODE.  */

static bool
xt_utnmode_unknown_p (rtx_insn *insn)
{
  /* Return true if UTNMODE is set or clobbered.  */
  if (reg_set_p (gen_rtx_REG (SImode, XT_UTNMODE_REGNUM), insn))
    return true;

  /* Return true for all assembly since users may hardcode a assembly
     like this: asm volatile ("csrsi utnmode, 0x1").  */
  if (asm_insn_p (insn))
    return true;

  return false;
}

/* Return the mode that an insn results in for UTNMODE.  */

static int
riscv_utnmode_mode_after (rtx_insn *insn, int mode)
{
  if (xt_utnmode_unknown_p (insn))
    return UTNMODE_MODE_NONE;

  if (recog_memoized (insn) < 0)
    return mode;

  if (reg_mentioned_p (gen_rtx_REG (SImode, XT_UTNMODE_REGNUM), PATTERN (insn)))
    return get_attr_utnmode_mode (insn);
  else
    return mode;
}

/* Get the vxrm mode with given CONST_INT rtx, the default mode is
   FRM_VXRM_NONE.  */
int
xt_get_vxrm_mode (rtx operand)
{
  gcc_assert (CONST_INT_P (operand));

  switch (INTVAL (operand))
    {
    case riscv_vector::VXRM_RNU:
      return (int) VXRM_MODE_RNU;
    case riscv_vector::VXRM_RNE:
      return (int) VXRM_MODE_RNE;
    case riscv_vector::VXRM_RDN:
      return (int) VXRM_MODE_RDN;
    case riscv_vector::VXRM_ROD:
      return (int) VXRM_MODE_ROD;
    case riscv_vector::VXRM_NONE:
      return (int) VXRM_MODE_NONE;
    default:
      return (int) VXRM_MODE_NONE;	// TODO Differentiate frm from vxrm
    }

  gcc_unreachable ();
}

bool
xt_optimize_mode_switching_p (int entity)
{
  switch (entity)
    {
    case RISCV_VXRM:
    case RISCV_FRM:
      return TARGET_VECTOR;
    case RISCV_UTNMODE:
      return (TARGET_XTHEADVFCVT || TARGET_XTHEADVREDUCTION);
    default:
      gcc_unreachable ();
    }
}

namespace riscv_vector {

/* Get the vxrm mode with given CONST_INT rtx, the default mode is
   FRM_VXRM_NONE.  */
enum fixed_point_rounding_mode
get_vxrm_mode (rtx operand)
{
  gcc_assert (CONST_INT_P (operand));

  switch (INTVAL (operand))
    {
    case VXRM_RNU:
      return VXRM_RNU;
    case VXRM_RNE:
      return VXRM_RNE;
    case VXRM_RDN:
      return VXRM_RDN;
    case VXRM_ROD:
      return VXRM_ROD;
    case VXRM_NONE:
      return VXRM_NONE;
    default:
      return VXRM_NONE;	// TODO Differentiate frm from vxrm
    }

  gcc_unreachable ();
}

}