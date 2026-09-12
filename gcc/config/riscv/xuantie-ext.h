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

#ifndef GCC_XUANTIE_EXT_H
#define GCC_XUANTIE_EXT_H

#define FP_REG_RTX_P(X) (REG_P (X) && FP_REG_P (REGNO (X)))

#define RISCV_TUNE_C950_P (riscv_microarchitecture == c950)

/* FIXME: This may need to change c910 to c908/c907.  */
#define RISCV_TUNE_STRING_DEFAULT	\
  (TARGET_XTHEADC ? "c910" :		\
   TARGET_XTHEADE ? "e906" :		\
   TARGET_XTHEADSE ? "e902" :		\
   "rocket")

#define XT_CPU_OR_TUNE_STRING \
  (const char*)(riscv_cpu_string != NULL ? riscv_cpu_string: riscv_tune_string)

#define XT_PREFIX_MATCH_P(prefix, string)		\
  (string != NULL && strncmp (prefix, string, sizeof prefix - 1) == 0)

#define TARGET_XUANTIE 						\
  (TARGET_XTHEADCMO						\
   || XT_PREFIX_MATCH_P ("zhijiang", XT_CPU_OR_TUNE_STRING)	\
   || XT_PREFIX_MATCH_P ("xt-", XT_CPU_OR_TUNE_STRING)		\
)

#define TARGET_XUANTIE_C_OR_E (TARGET_XTHEADC || TARGET_XTHEADE)
#define TARGET_XUANTIE_COMBINE_XOR (TARGET_XUANTIE_C_OR_E && riscv_combine_xor)
#define TARGET_XUANTIE_EXPAND_SPLIT_IMM (TARGET_XUANTIE ? riscv_expand_split_imm : true)
#define TARGET_XUANTIE_UNALIGNED_ACCESS (riscv_unaligned_libcall && riscv_slow_unaligned_access_p)
#define TARGET_XUANTIE_FCLASS (TARGET_HARD_FLOAT && TARGET_XUANTIE && riscv_insn_fclass)
#define TARGET_XUANTIE_EXTEND_RTL_IFCVT_COST (TARGET_XUANTIE ? riscv_extend_rtl_ifcvt_cost : false)
#define TARGET_XUANTIE_UNHOT_INLINE (TARGET_XUANTIE ? riscv_ipa_unhot_inline : false)
#define TARGET_XUANTIE_SIGNEDNESS_COMPARISON_IV (TARGET_XUANTIE ? riscv_signedness_comparison_iv : false)
#define TARGET_XUANTIE_IV_ADJUST_ADDR_COST (TARGET_XUANTIE ? riscv_iv_adjust_addr_cost : true)
#define TARGET_XUANTIE_THREAD1 (TARGET_XUANTIE ? riscv_thread_jumps1 : true)
#define TARGET_XUANTIE_AGGRESSIVE_SCHED (TARGET_XUANTIE ? riscv_aggressive_schedule : true)
#define TARGET_XUANTIE_SINK_COMMON_STORE (TARGET_XUANTIE ? riscv_rvv_auto_vectorize || optimize_size : true)
#define TARGET_XUANTIE_INVARIANT_AS_CONSTANT (TARGET_XUANTIE ? riscv_invariant_as_constant : false)
#define TARGET_XUANTIE_FWPROP2_ADDRESS_OPTIMIZE (TARGET_XUANTIE ? riscv_fwprop2_address_optimize : false)
#define TARGET_XUANTIE_LOOP_DUP_HEADER_FOR_MOD_POW2P_OPTIMIZE (TARGET_XUANTIE ? riscv_loop_dup_header_for_mod_pow2p_optimize : false)
#define TARGET_XUANTIE_ADDSI3_EXTEND (TARGET_XUANTIE ? riscv_expand_addsi_extend : true)

/* TARGET for XUANTIE.  */
#define TARGET_XUANTIE_DSP (TARGET_DSP || TARGET_ZPN)
#define TARGET_XUANTIE_ZPN TARGET_ZPN
#define TARGET_XUANTIE_ZPSFOPERAND TARGET_ZPSFOPERAND
#define TARGET_XUANTIE_ZPRVSFEXTRA TARGET_ZPRVSFEXTRA
#define TARGET_XUANTIE_COP_BI TARGET_XTHEADCBI
#define TARGET_XUANTIE_COP_EI TARGET_XTHEADCEI
#define TARGET_XUANTIE_COP_F TARGET_XTHEADCF

#define TARGET_XTHEADMATRIX0P3 target_subset_version_p ("xtheadmatrix", 0, 3)

#define XT_MATCH( prefix, string )	\
  (strncmp (prefix, string, sizeof prefix - 1) == 0)

#define XT_MCPU_NO_FENCE_TSO_P					\
  (XT_PREFIX_MATCH_P ("e902", XT_CPU_OR_TUNE_STRING)		\
   || XT_PREFIX_MATCH_P ("e906", XT_CPU_OR_TUNE_STRING)		\
   || XT_PREFIX_MATCH_P ("e907", XT_CPU_OR_TUNE_STRING)		\
   || XT_PREFIX_MATCH_P ("c906", XT_CPU_OR_TUNE_STRING)		\
   || XT_PREFIX_MATCH_P ("c910", XT_CPU_OR_TUNE_STRING)		\
   || XT_PREFIX_MATCH_P ("r910", XT_CPU_OR_TUNE_STRING)		\
   || XT_PREFIX_MATCH_P ("c920", XT_CPU_OR_TUNE_STRING)		\
   || XT_PREFIX_MATCH_P ("r920", XT_CPU_OR_TUNE_STRING)		\
)

extern const char *xt_expand_abi_from_arch (int argc, const char **argv);
extern const char *xt_expand_abi_from_cpu (int argc, const char **argv);
extern const char *xt_get_arch_spec_path (int argc, const char **argv);
extern const char *xt_expand_tune_form_arch (int argc, const char **argv);

/* The number of bits and bytes in a RVM matrix.  */
#define XT_RVM_BITS_PER_MATRIX (poly_uint16 (xt_rvm_chunks * 64))
#define XT_RVM_BYTES_PER_MATRIX (poly_uint16 (xt_rvm_chunks * 8))

#define XT_RVM_DWARF_MLENB (4096 + 0xcc0)
#define XT_RVM_DWARF_MATRIX(REGNO) (REGNO + 0xBA8)

#define XT_RVM_TEMP_REGNUM (GP_REG_FIRST + 31)
#define XT_RVM_TEMP_REG(MODE) gen_rtx_REG (MODE, XT_RVM_TEMP_REGNUM)

#define XT_RVM_MATRIX_REG_FIRST 88
#define XT_RVM_MATRIX_REG_LAST  95
#define XT_RVM_MATRIX_REG_NUM   (XT_RVM_MATRIX_REG_LAST - XT_RVM_MATRIX_REG_FIRST + 1)

#define XT_RVM_MSIZE_M_REGNUM 85
#define XT_RVM_MSIZE_N_REGNUM 86
#define XT_RVM_MSIZE_K_REGNUM 87
#define XT_RVM_MSIZE_REG_P(REGNO) ((unsigned int) ((int) (REGNO) - XT_RVM_MSIZE_M_REGNUM) < 3)


#define XT_RVM_MATRIX_REG_P(REGNO) \
  ((unsigned int) ((int) (REGNO) - XT_RVM_MATRIX_REG_FIRST) < XT_RVM_MATRIX_REG_NUM)

#define XT_RVM_UNITS_PER_REG (GET_MODE_SIZE (RVMM1QImode))

#define XT_CLIC_PREEMPTIBLE_P(c) c->machine->xt_machine_function.clic_preemptible_p

#define XT_INTERRUPT_FLOAT_P(c)	\
  (c->machine->interrupt_handler_p	\
  && ((TARGET_HARD_FLOAT && c->machine->frame.fmask)	\
      || (TARGET_ZFINX && (c->machine->frame.mask & ~(1 << RISCV_PROLOGUE_TEMP_REGNUM)))))

#define XT_INTERRUPT_DSP_P(c)	\
  (c->machine->interrupt_handler_p	\
  && TARGET_XUANTIE_DSP)

/* This definition replaces the formerly used 'm' constraint with a
   different constraint letter in order to avoid changing semantics of
   the 'm' constraint when accepting new address formats in
   TARGET_LEGITIMATE_ADDRESS_P.  The constraint letter defined here
   must not be used in insn definitions or inline assemblies except
   for mov.  */
#define TARGET_MEM_CONSTRAINT 'e'

/* Return true if X is a large immediate that should be treated specially
   when -mcall-arg-no-preload-large-imm is enabled.  These are constants that:
     - Are CONST_INT;
     - Are not small (SMALL_OPERAND);
     - Do not match efficient shift/mask patterns.
   Such immediates are expensive to synthesize and benefit from
   being kept as raw const_int nodes in RTL.  */
#define TARGET_XUANTIE_LARGE_IMMEDIATE_P(X, MODE) \
  (CONST_INT_P (X) && riscv_call_arg_no_preload_large_imm \
   && !(SMALL_OPERAND (INTVAL (X)) \
	|| p2m1_shift_operand (X, MODE) \
	|| high_mask_shift_operand (X, MODE)))

#ifndef USED_FOR_TARGET

/* Enumerates the possible extraction_insn operations.  */
enum riscv_extraction_pattern {
  RISCV_EP_INSV, RISCV_EP_EXTV, RISCV_EP_EXTZV
};

/* Routines implemented in xuantie-ext.cc.  */
extern void xt_option_override (const struct riscv_tune_param *,
				struct gcc_options *,
				struct gcc_options *);
extern void xt_emit_libcall_for_unaligned_access (enum riscv_extraction_pattern,
						  rtx *, machine_mode);
extern bool xt_rtx_costs (rtx, machine_mode, int, int, int *, bool);
extern rtx xt_add_offset (rtx, rtx, HOST_WIDE_INT);
extern void xt_conditional_register_usage (void);
extern bool xt_legitimize_move (machine_mode, rtx, rtx);

extern const struct riscv_tune_param xt_c950_tune_info;
extern const struct riscv_tune_param xt_c907_tune_info;
extern const struct riscv_tune_param xt_c908_tune_info;
extern const struct riscv_tune_param xt_c906v_tune_info;
extern const struct riscv_tune_param xt_c910_tune_info;
extern const struct riscv_tune_param xt_e9_tune_info;

extern int xt_fmemidx_movdf_hardfloat_p (rtx dest, rtx src);

/* Routines implemented in xuantie-lib.cc.  */
/* Implement DSP extension.  */
extern bool target_subset_version_p (const char *, int, int);
bool xt_dsp_mode_p (machine_mode);
extern opt_machine_mode xt_dsp_vectorize_related_mode (machine_mode, scalar_mode, poly_uint64);
extern machine_mode xt_dsp_preferred_simd_mode (scalar_mode mode);
extern void xt_dsp_split_ashiftdi3 (rtx, rtx, rtx);
extern void xt_dsp_split_ashiftrtdi3 (rtx, rtx, rtx);
extern void xt_dsp_split_lshiftrtdi3 (rtx, rtx, rtx);

enum xt_builtin_imm {
  XT_BUILTIN_IMM2 = 2,
  XT_BUILTIN_IMM_STRAT = XT_BUILTIN_IMM2,
  XT_BUILTIN_IMM3,
  XT_BUILTIN_IMM4,
  XT_BUILTIN_IMM5,
  XT_BUILTIN_IMM6,
  XT_BUILTIN_IMM_END
};

extern tree xt_build_imm_type (enum xt_builtin_imm, signop);
extern bool xt_optimize_mode_switching_p (int);

/* Implement MATRIX extension.  */
extern bool xt_rvm_mode_p (enum machine_mode);
extern unsigned int xt_rvm_get_lmul (machine_mode);
extern const char *xt_get_rvm_mode_mfmt (machine_mode);

extern poly_uint16 xt_rvm_chunks;
extern void xt_rvm_legitimize_poly_move (machine_mode, rtx, rtx, rtx);
extern const char *xt_rvm_mangle_builtin_type (const_tree);

extern GTY(()) tree riscv_bfloat16_type_node;

extern bool xt_emit_interrupt_csr_p ();

extern poly_int64 xt_rvm_adjust_nunits (enum machine_mode, int, int);
#endif
#endif /* ! GCC_XUANTIE_EXT_H */
