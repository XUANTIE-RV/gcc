;; Machine description for XUANTIE vendor extensions
;; Copyright (C) 2024 Free Software Foundation, Inc.
;; Contributed by Alibaba Damo Academy Xuantie Team.

;; This file is part of GCC.

;; GCC is free software; you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation; either version 3, or (at your option)
;; any later version.

;; GCC is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with GCC; see the file COPYING3.  If not see
;; <http://www.gnu.org/licenses/>.

(include "xuantie-pipeline-c906v.md")
(include "xuantie-pipeline-c910.md")
(include "xuantie-ext-predicates.md")
(include "xuantie-ext-constraints.md")
(include "xuantie-ext-p.md")
(include "xuantie-ext-matrix.md")
(include "xuantie-ext-cop.md")

(define_c_enum "unspec" [
  UNSPEC_XT_FCLASS
  UNSPEC_XT_FCLASS_FOR_QUIET_CMP
])

(define_c_enum "unspecv" [
  ;; CSR read
  UNSPECV_XT_CSR_READ
  ;; CSR write
  UNSPECV_XT_CSR_WRITE
  ;; CSR set bits
  UNSPECV_XT_CSR_SET_BITS
  ;; CSR clear bits
  UNSPECV_XT_CSR_CLEAR_BITS
])

(define_constants [
   (XT_VXSAT_REGNUM		0x009)

   (XT_MSTATUS_REGNUM		0x300)
   (XT_MEPC_REGNUM		0x341)
   (XT_MCAUSE_REGNUM		0x342)

   (XT_MSTATUS_MIE_BIT		8)

   (XT_UTNMODE_REGNUM		77)
])

;; XUANTIE bugfix

(define_insn "*xt_fmemidx_movdf_hardfloat"
  [(set (match_operand:DF 0 "fpr_or_xt_mem_operand"      "=f,th_m_mir,f,th_m_miu")
       (match_operand:DF 1 "fpr_or_xt_mem_or_0_operand" " th_m_mir,fG,th_m_miu,fG"))]
  "TARGET_DOUBLE_FLOAT && TARGET_XTHEADFMEMIDX
   && TARGET_XTHEADMEMIDX && xt_fmemidx_movdf_hardfloat_p (operands[0], operands[1]) == 1"
  { return riscv_output_move (operands[0], operands[1]); }
  [(set_attr "move_type" "fpload,fpstore,fpload,fpstore")
   (set_attr "mode" "DF")
   (set (attr "length") (const_int 16))])

;; Help reload to add a displacement for the base register.
;; In the case `zext(*(uN*)(base+(zext(rN)<<1)))` LRA splits
;; off two new instructions: a) `new_base = base + disp`, and
;; b) `index = zext(rN)<<1`.  The index calculation has no
;; corresponding instruction pattern and needs this insn_and_split
;; to recover.

(define_insn_and_split "*th_memidx_operand_1"
  [(set (match_operand:DI 0 "register_operand" "=r")
     (ashift:DI
       (zero_extend:DI (match_operand:SI 1 "register_operand" "r"))
       (match_operand 2 "const_int_operand" "n")))]
  "TARGET_64BIT && TARGET_XTHEADMEMIDX && lra_in_progress"
  "#"
  ""
  [(set (match_dup 0) (zero_extend:DI (match_dup 1)))
   (set (match_dup 0) (ashift:DI (match_dup 0) (match_dup 2)))]
  ""
  [(set_attr "type" "bitmanip")])


;; Similar for the case `zext(*(uN*))(base+((rN<<1)&0x1fffffffe))`.

(define_insn_and_split "*th_memidx_operand_2"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(and:DI (ashift:DI (match_operand:DI 1 "register_operand" "r")
			   (match_operand:QI 2 "imm123_operand" "Ds3"))
		(match_operand 3 "const_int_operand" "n")))]
  "TARGET_64BIT && TARGET_XTHEADMEMIDX && !TARGET_ZBA
   && (lra_in_progress || reload_completed)
   && (INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff"
  "#"
  "&& !TARGET_ZBA && reload_completed"
  [(set (match_dup 0) (zero_extend:DI (subreg:SI (match_dup 1) 0)))
   (set (match_dup 0) (ashift:DI (match_dup 0) (match_dup 2)))]
  ""
  [(set_attr "type" "bitmanip")])

(define_insn_and_split "*th_memidx_operand_3"
  [(set (match_operand:X 0 "register_operand" "=&r")
	(plus:X (match_operand:X 3 "register_operand" "r")
		(ashift:X (match_operand:X 1 "register_operand" "r")
			  (match_operand:QI 2 "imm123_operand" "Ds3"))))]
  "TARGET_XTHEADMEMIDX"
  "#"
  "&& 1"
  [(set (match_dup 0)
	(plus:DI (ashift:DI (match_dup 1)
			    (match_dup 2))
		  (match_dup 3)))]
  {
    if (!(TARGET_ZBA || TARGET_XTHEADBA))
      {
	emit_insn (gen_ashl<mode>3 (operands[0], operands[1], operands[2]));
	emit_insn (gen_add3_insn (operands[0], operands[3], operands[0]));
	DONE;
      }
  }
  [(set_attr "type" "bitmanip")])

;; THead Optimization

;; TARGET_XUANTIE_XOR_COMBINE

(define_insn "*xt_xor<mode>3"
  [(set (match_operand:X        0 "register_operand" "=r,r")
	(xor:X (match_operand:X 1 "register_operand" "%r,r")
	       (match_operand:X 2 "xt_uns16_arith_operand" "r,I")))]
  "TARGET_XUANTIE_COMBINE_XOR
   && !(TARGET_ZBS && uimm_extra_bit_or_twobits (operands[2], VOIDmode))"
  "xor%i2\t%0,%1,%2"
  [(set_attr "type" "logical")
   (set_attr "mode" "<MODE>")])


;; Bit field extract form mem patterns.

(define_expand "extvmisalign<mode>"
  [(set (match_operand:GPR 0 "register_operand")
	(sign_extract:GPR (match_operand:BLK 1 "memory_operand")
			  (match_operand 2 "const_int_operand")
			  (match_operand 3 "const_int_operand")))]
  "TARGET_XUANTIE_UNALIGNED_ACCESS"
{
  if (INTVAL (operands[3]) == 0
      && INTVAL (operands[2]) == GET_MODE_BITSIZE (<MODE>mode))
    {
      xt_emit_libcall_for_unaligned_access (RISCV_EP_EXTV, operands, <MODE>mode);
      DONE;
    }

  FAIL;
})

(define_expand "extzvmisalign<mode>"
  [(set (match_operand:GPR 0 "register_operand")
	(zero_extract:GPR (match_operand:BLK 1 "memory_operand")
			  (match_operand 2 "const_int_operand")
			  (match_operand 3 "const_int_operand")))]
  "TARGET_XUANTIE_UNALIGNED_ACCESS"
{
  if (INTVAL (operands[3]) == 0
      && INTVAL (operands[2]) == GET_MODE_BITSIZE (<MODE>mode))
    {
      xt_emit_libcall_for_unaligned_access (RISCV_EP_EXTZV, operands, <MODE>mode);
      DONE;
    }

  FAIL;
})

(define_expand "insvmisalign<mode>"
  [(set (zero_extract:GPR (match_operand:BLK 0 "memory_operand")
			 (match_operand 1 "const_int_operand")
			 (match_operand 2 "const_int_operand"))
	(match_operand:GPR 3 "register_operand"))]
  "TARGET_XUANTIE_UNALIGNED_ACCESS"
{
  if (INTVAL (operands[2]) == 0
      && INTVAL (operands[1]) == GET_MODE_BITSIZE (<MODE>mode))
    {
      xt_emit_libcall_for_unaligned_access (RISCV_EP_INSV, operands, <MODE>mode);
      DONE;
    }

  FAIL;
})

(define_insn "@fclass<ANYF:mode><X:mode>2"
  [(set (match_operand:X	0 "register_operand" "=r")
	(unspec:X
	  [(match_operand:ANYF  1 "register_operand" " f")]
	UNSPEC_XT_FCLASS))]
  "TARGET_HARD_FLOAT || TARGET_ZFINX"
  "fclass.<fmt>\t%0,%1"
  [(set_attr "type" "fcmp")
   (set_attr "mode" "<UNITMODE>")])

(define_insn_and_split "fquiet_cmp<ANYF:mode><X:mode>_helper"
  [(set (match_operand:X	0 "register_operand" "=r")
	(unspec:X
	  [(match_operand:ANYF  1 "reg_or_no_nan_double_operand" " f")
	   (match_operand:ANYF  2 "reg_or_no_nan_double_operand" " f")]
	UNSPEC_XT_FCLASS_FOR_QUIET_CMP))
    (clobber (match_operand:X   3))]
  "TARGET_XUANTIE_FCLASS && (TARGET_HARD_FLOAT || TARGET_ZFINX)"
  "#"
  "&& 1"
  [(const_int 0)]
  {
    rtx op0 = operands[0];
    rtx op1 = operands[1];
    rtx op2 = operands[2];
    rtx op3 = operands[3];

    if (REG_P (op1) && REG_P (op2))
      {
	emit_insn (gen_fclass2 (<ANYF:MODE>mode, <X:MODE>mode, op0, op1));
	emit_insn (gen_fclass2 (<ANYF:MODE>mode, <X:MODE>mode, op3, op2));
	emit_insn (gen_ior<X:mode>3 (op0, op0, op3));
      }
    else if (!REG_P (op1) && REG_P (op2))
      emit_insn (gen_fclass2 (<ANYF:MODE>mode, <X:MODE>mode, op0, op2));
    else if (REG_P (op1) && !REG_P (op2))
      emit_insn (gen_fclass2 (<ANYF:MODE>mode, <X:MODE>mode, op0, op1));
    else
      emit_move_insn (op0, GEN_INT (1));

    DONE;
  }
  [(set_attr "type" "fcmp")
   (set_attr "mode" "<UNITMODE>")])

(define_insn "fquiet_cmp<ANYF:mode>_helper"
  [(unspec_volatile
	[(match_operand:ANYF 0 "reg_or_no_nan_double_operand" " f")
	 (match_operand:ANYF 1 "reg_or_no_nan_double_operand" " f")]
	UNSPEC_XT_FCLASS_FOR_QUIET_CMP)]
  "TARGET_XUANTIE_FCLASS && (TARGET_HARD_FLOAT || TARGET_ZFINX)"
  "feq.<fmt>\tzero,%0,%1"
  [(set_attr "type" "fcmp")
   (set_attr "mode" "<UNITMODE>")])

(define_expand "f<quiet_pattern>_quiet<ANYF:mode><X:mode>3_opt"
   [(set (match_operand:X	 	0 "register_operand")
	 (unspec:X [(match_operand:ANYF 1 "register_operand")
		    (match_operand:ANYF 2 "register_operand")]
		   QUIET_COMPARISON))]
  "TARGET_XUANTIE_FCLASS && (TARGET_HARD_FLOAT || TARGET_ZFINX)"
  {
    rtx op0 = operands[0];
    rtx op1 = operands[1];
    rtx op2 = operands[2];
    rtx tmp = gen_reg_rtx (<X:MODE>mode);
    rtx label = gen_label_rtx ();

    emit_insn (gen_fquiet_cmp<ANYF:mode><X:mode>_helper (op0, op1, op2, tmp));

    if (!HONOR_SNANS (<ANYF:MODE>mode))
      riscv_emit_binary (LT, op0, op0, GEN_INT (0x100));
    else
      {
	riscv_emit_binary (LT, op0, op0, GEN_INT (0x200));
	emit_insn (gen_fquiet_cmp<ANYF:mode>_helper (op1, op2));
      }
    riscv_expand_conditional_branch (label, EQ, op0, GEN_INT (0));
    riscv_emit_binary (<QUIET_PATTERN>, op0, op1, op2);
    emit_label (label);
    DONE;
  }
)

(define_insn "xt_csr_read"
  [(unspec_volatile [
	(match_operand:SI 0 "register_operand" "=r")
	(match_operand:SI 1 "csr_address" "")]
    UNSPECV_XT_CSR_READ)
    (clobber (match_dup 0))]
  ""
  {
    unsigned HOST_WIDE_INT reg_num = UINTVAL (operands[1]);
    switch (reg_num)
    {
      case XT_MSTATUS_REGNUM:
	return "csrr\t%0,mstatus";
      case XT_MEPC_REGNUM:
	return "csrr\t%0,mepc";
      case XT_MCAUSE_REGNUM:
	return "csrr\t%0,mcause";
      case XT_VXSAT_REGNUM:
	return "csrr\t%0,vxsat";
      default:
	gcc_unreachable ();
    }
    gcc_unreachable ();
  }
[(set_attr "type" "fmove")])

(define_insn "xt_csr_write"
  [(unspec_volatile [(match_operand:SI 0 "csr_address" "")
		     (match_operand:SI 1 "register_operand" "r")]
		    UNSPECV_XT_CSR_WRITE)]
  ""
  {
    unsigned HOST_WIDE_INT reg_num = UINTVAL (operands[0]);
    switch (reg_num)
    {
      case XT_MSTATUS_REGNUM:
	return "csrw\tmstatus,%1";
      case XT_MEPC_REGNUM:
	return "csrw\tmepc,%1";
      case XT_MCAUSE_REGNUM:
	return "csrw\tmcause,%1";
      case XT_VXSAT_REGNUM:
	return "csrw\tvxsat,%1";
      default:
	gcc_unreachable ();
    }
    gcc_unreachable ();
  }
[(set_attr "type" "fmove")])

(define_insn "xt_csr_set_bits"
  [(unspec_volatile [(match_operand:SI 0 "csr_address" "")
		     (match_operand:SI 1 "csr_operand" "rK")]
		    UNSPECV_XT_CSR_SET_BITS)]
  ""
  {
    gcc_assert (UINTVAL (operands[0]) == XT_MSTATUS_REGNUM);
    return "csrs%i1\tmstatus,%1";
  }
[(set_attr "type" "fmove")])

(define_insn "xt_csr_clear_bits"
  [(unspec_volatile [(match_operand:SI 0 "csr_address" "")
		     (match_operand:SI 1 "csr_operand" "rK")]
		    UNSPECV_XT_CSR_CLEAR_BITS)]
  ""
  {
    gcc_assert (UINTVAL (operands[0]) == XT_MSTATUS_REGNUM);
    return "csrc%i1\tmstatus,%1";
  }
[(set_attr "type" "fmove")])
