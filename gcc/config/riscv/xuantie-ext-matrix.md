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

(define_c_enum "unspec" [
  UNSPEC_XT_MCFGM
  UNSPEC_XT_MCFGN
  UNSPEC_XT_MCFGK
  UNSPEC_XT_MUNDEF
  UNSPEC_XT_MRELEASE
  UNSPEC_XT_MZERO
  UNSPEC_XT_MREAD_XMLENB
  UNSPEC_XT_MREAD_XRLENB
  UNSPEC_XT_MREAD_XMSIZE
  UNSPEC_XT_MLD
  UNSPEC_XT_MSLD
  UNSPEC_XT_MST
  UNSPEC_XT_MSST
  UNSPEC_XT_MMOV
  UNSPEC_XT_MDUP
  UNSPEC_XT_MREINTERPRET
  UNSPEC_XT_MSET
  UNSPEC_XT_MGET
  UNSPEC_XT_MMACC
  UNSPEC_XT_MMACCU
  UNSPEC_XT_MMACCUS
  UNSPEC_XT_MMACCSU

;; XTheadMatrix 0.3 support
  UNSPEC_XT_FMMACC
  UNSPEC_XT_PMMAQA
  UNSPEC_XT_PMMAQAU
  UNSPEC_XT_PMMAQAUS
  UNSPEC_XT_PMMAQASU
  UNSPEC_XT_USE_MSIZE
])

(define_constants [
   (INVALID_ATTRIBUTE	    255)
   (X0_REGNUM		      0)
])

(define_mode_iterator MMODES [
  RVMM1QI RVMM2QI
  RVMM1HI RVMM2HI
  RVMM1SI RVMM2SI
  RVMM1DI RVMM2DI

  RVMM1HF RVMM2HF
  RVMM1SF RVMM2SF
  RVMM1DF RVMM2DF
])

(define_mode_iterator M1MODES [
  RVMM1QI RVMM1HI RVMM1SI RVMM1DI
  RVMM1HF RVMM1SF RVMM1DF
])

(define_mode_iterator M2MODES [
  RVMM2QI RVMM2HI RVMM2SI RVMM2DI
  RVMM2HF RVMM2SF RVMM2DF
])

(define_mode_iterator I_M1MODES [
  RVMM1QI RVMM1HI RVMM1SI RVMM1DI
])

(define_mode_attr MEL [
  (RVMM1QI "QI") (RVMM2QI "QI")
  (RVMM1HI "HI") (RVMM2HI "HI")
  (RVMM1SI "SI") (RVMM2SI "SI")
  (RVMM1DI "DI") (RVMM2DI "DI")

  (RVMM1HF "HF") (RVMM2HF "HF")
  (RVMM1SF "SF") (RVMM2SF "SF")
  (RVMM1DF "DF") (RVMM2DF "DF")
])

(define_mode_attr MEL_BITS [
  (RVMM1QI "8") (RVMM2QI "8")
  (RVMM1HI "16") (RVMM2HI "16")
  (RVMM1SI "32") (RVMM2SI "32")
  (RVMM1DI "64") (RVMM2DI "64")

  (RVMM1HF "16") (RVMM2HF "16")
  (RVMM1SF "32") (RVMM2SF "32")
  (RVMM1DF "64") (RVMM2DF "64")
])

(define_mode_attr MM1 [
  (RVMM1QI "RVMM1QI") (RVMM2QI "RVMM1QI")
  (RVMM1HI "RVMM1HI") (RVMM2HI "RVMM1HI")
  (RVMM1SI "RVMM1SI") (RVMM2SI "RVMM1SI")
  (RVMM1DI "RVMM1DI") (RVMM2DI "RVMM1DI")

  (RVMM1HF "RVMM1HF") (RVMM2HF "RVMM1HF")
  (RVMM1SF "RVMM1SF") (RVMM2SF "RVMM1SF")
  (RVMM1DF "RVMM1DF") (RVMM2DF "RVMM1DF")
])

(define_mode_attr mlum [
  (RVMM1QI "1") (RVMM2QI "2")
  (RVMM1HI "1") (RVMM2HI "2")
  (RVMM1SI "1") (RVMM2SI "2")
  (RVMM1DI "1") (RVMM2DI "2")

  (RVMM1HF "1") (RVMM2HF "2")
  (RVMM1SF "1") (RVMM2SF "2")
  (RVMM1DF "1") (RVMM2DF "2")
])

(define_mode_attr mvfmt [
  (RVMM1QI "b") (RVMM2QI "b")
  (RVMM1HI "h") (RVMM2HI "h")
  (RVMM1SI "w") (RVMM2SI "w")
  (RVMM1DI "d") (RVMM2DI "d")

  (RVMM1HF "h") (RVMM2HF "h")
  (RVMM1SF "w") (RVMM2SF "w")
  (RVMM1DF "d") (RVMM2DF "d")
])

(define_constants[
   (MSIZE_M_REGNUM		85)
   (MSIZE_N_REGNUM		86)
   (MSIZE_K_REGNUM		87)
])

;; Provide a generic reservation for XTheadMatrix instructions.
(define_insn_reservation "virtual_rvm" 1
  (eq_attr "type" "mcfg,mcfgm,mcfgn,mcfgk,mldr,mstr,mmovr,mld,mst,mmov,
		   mzero,mfmacc,mrelease,mcsr")
  "nothing")

;; True if the type is RVM instructions that include MCFG
;; global status register in the use op list.
;; We known MCFG has 4 fields: SEW, LMUL, TA, MA.
;; The instruction need any of MCFG field is set as true
;; in this attribute.
(define_attr "th_m_has_mcfg_op" "false,true"
  (cond [(eq_attr "type" "mld,mst,mfmacc")
	 (const_string "true")]
	(const_string "false")))

(define_attr "rvm_mcfgm_op_idx" "" (const_int INVALID_ATTRIBUTE))

(define_attr "rvm_mcfgn_op_idx" "" (const_int INVALID_ATTRIBUTE))

(define_attr "rvm_mcfgk_op_idx" "" (const_int INVALID_ATTRIBUTE))

(define_attr "rvm_mcfgk_gpr_op_idx" "" (const_int INVALID_ATTRIBUTE))

;; Element width for matrix column configuration.
(define_attr "rvm_ebits" ""
  (const_int 8))

;; Matrix cfg
(define_insn "@rvm_mcfgm<P:mode>"
  [(set (reg:P MSIZE_M_REGNUM)
	(unspec:P [
	  (match_operand:P 0 "matrix_cfg_operand" "rxm")]
	UNSPEC_XT_MCFGM))]
  "TARGET_XTHEADMATRIX"
  {
    return "th.mcfgm%i0\tzero,%0";
  }
  [(set_attr "type" "mcfgm")
  (set_attr "mode" "none")])

(define_insn "@rvm_mcfgn<P:mode>"
  [(set (reg:P MSIZE_N_REGNUM)
	(unspec:P [
	  (match_operand:P 0 "matrix_cfg_operand" "rxm")]
	UNSPEC_XT_MCFGN))]
  "TARGET_XTHEADMATRIX"
  {
    return "th.mcfgn%i0\tzero,%0";
  }
  [(set_attr "type" "mcfgn")
  (set_attr "mode" "none")])

(define_insn "@rvm_mcfgk<P:mode>"
  [(set (reg:P MSIZE_K_REGNUM)
	(unspec:P [
	  (match_operand:P 0 "matrix_cfg_operand" "rxm")]
	UNSPEC_XT_MCFGK))]
  "TARGET_XTHEADMATRIX"
  {
    return "th.mcfgk%i0\tzero,%0";
  }
  [(set_attr "type" "mcfgk")
  (set_attr "mode" "none")])

(define_insn "@rvm_legacy_mcfgm<P:mode>"
  [(set (reg:P MSIZE_M_REGNUM)
	(unspec:P [
	  (match_operand:P 1 "reg_or_int_operand" "rI")]
	UNSPEC_XT_MCFGM))
    (set (match_operand:P 0 "register_operand"	"=r")
	(unspec:P [
	  (reg:P MSIZE_M_REGNUM)
	  (reg:P MSIZE_N_REGNUM)
	  (reg:P MSIZE_K_REGNUM)]
	UNSPEC_XT_USE_MSIZE))]
  "TARGET_XTHEADMATRIX0P3"
  "th.mcfgm%i1\t%0,%1"
  [(set_attr "type" "mcfgm")
  (set_attr "mode" "none")])

(define_insn "@rvm_legacy_mcfgn<P:mode>"
  [(set (reg:P MSIZE_N_REGNUM)
	(unspec:P [
	  (match_operand:P 1 "reg_or_int_operand" "rI")]
	UNSPEC_XT_MCFGN))
    (set (match_operand:P 0 "register_operand"	"=r")
	(unspec:P [
	  (reg:P MSIZE_M_REGNUM)
	  (reg:P MSIZE_N_REGNUM)
	  (reg:P MSIZE_K_REGNUM)]
	UNSPEC_XT_USE_MSIZE))]
  "TARGET_XTHEADMATRIX0P3"
  "th.mcfgn%i1\t%0,%1"
  [(set_attr "type" "mcfgn")
  (set_attr "mode" "none")])

(define_insn "@rvm_legacy_mcfgk<P:mode>"
  [(set (reg:P MSIZE_K_REGNUM)
	(unspec:P [
	  (match_operand:P 1 "reg_or_int_operand" "rI")]
	UNSPEC_XT_MCFGK))
    (set (match_operand:P 0 "register_operand"	"=r")
	(unspec:P [
	  (reg:P MSIZE_M_REGNUM)
	  (reg:P MSIZE_N_REGNUM)
	  (reg:P MSIZE_K_REGNUM)]
	UNSPEC_XT_USE_MSIZE))]
  "TARGET_XTHEADMATRIX0P3"
  "th.mcfgk%i1\t%0,%1"
  [(set_attr "type" "mcfgk")
  (set_attr "mode" "none")])

(define_insn_and_split "@rvm_mcfgk_with_move<P:mode>"
  [(set (match_operand:P 0 "register_operand"    "=r")
	(match_operand:P 1 "const_int_operand" "I"))
    (set (reg:P MSIZE_K_REGNUM)
	(unspec:P [
	  (match_dup 0)]
	UNSPEC_XT_MCFGK))]
  "TARGET_XTHEADMATRIX"
  "#"
  "&& 1"
  [(const_int 0)]
  {
    emit_move_insn (operands[0], operands[1]);
    emit_insn (gen_rvm_mcfgk (Pmode, operands[0]));
    DONE;
  }
  [(set_attr "type" "mcfgk")
  (set_attr "mode" "none")])

(define_insn_and_split "@rvm_mcfgk_with_shift<P:mode>"
  [(set (match_operand:P 1 "register_operand"    "=r")
	(ashift:P
	  (match_operand:P 0 "register_operand"  " r")
	  (match_operand:P 2 "const_int_operand" " I")))
    (set (reg:P MSIZE_K_REGNUM)
	(unspec:P [
	  (match_dup 1)]
	UNSPEC_XT_MCFGK))]
  "TARGET_XTHEADMATRIX"
  "#"
  "&& 1"
  [(const_int 0)]
  {
    if (TARGET_64BIT)
      emit_insn (gen_ashldi3 (operands[1], operands[0], operands[2]));
    else
      emit_insn (gen_ashlsi3 (operands[1], operands[0], operands[2]));

    emit_insn (gen_rvm_mcfgk (Pmode, operands[1]));
    DONE;
  }
  [(set_attr "type" "mcfgk")
  (set_attr "mode" "none")])

(define_insn "@rvm_mundefined<mode>"
  [(set (match_operand:MMODES 0 "register_operand" "=xr")
	      (unspec:MMODES
	  [(reg:SI X0_REGNUM)]
	UNSPEC_XT_MUNDEF))]
  "TARGET_XTHEADMATRIX"
  ""
  [(set_attr "type" "mmov")])

;; Matrix zero
(define_insn "@rvm_mzero<mode>"
  [(set (match_operand:MMODES 0 "register_operand" "=xr")
	(unspec:MMODES
		[(reg:SI X0_REGNUM)]
	UNSPEC_XT_MZERO))]
  "TARGET_XTHEADMATRIX"
  {
    static char buf[128] = {0};
    size_t bytes = 0;
    unsigned regno = REGNO (operands[0]);

    bytes += snprintf (buf + bytes, sizeof (buf), "th.mzero\t%s",
		       reg_names[regno]);

    unsigned lmul = xt_rvm_get_lmul (<MODE>mode);
    for (unsigned i = 1; i < lmul; i++)
      bytes += snprintf (buf + bytes, sizeof (buf), "\n\tth.mzero\t%s",
			 reg_names[regno + i]);

    return buf;
  }
  [(set_attr "type" "mzero")
  (set_attr "mode" "none")
  (set (attr "rvm_ebits") (const_int <MEL_BITS>))])

;; Matrix mrelease
(define_insn "rvm_mrelease"
  [(unspec_volatile [(const_int 0)] UNSPEC_XT_MRELEASE)]
  "TARGET_XTHEADMATRIX"
  "th.mrelease"
  [(set_attr "type" "mrelease")
  (set_attr "mode" "none")])

;; Matrix read mlenb

(define_expand "@rvm_read_xmlenb<mode>"
  [(set (match_operand 0 "register_operand")
	(unspec:P
	  [(const_int 0)]
	UNSPEC_XT_MREAD_XMLENB))]
  "TARGET_XTHEADMATRIX"
{
  rtx imm = gen_int_mode (XT_RVM_UNITS_PER_REG, Pmode);
  emit_move_insn (operands[0], imm);
  DONE;
})

(define_int_iterator MCSR_ITERATOR [
  UNSPEC_XT_MREAD_XRLENB
  UNSPEC_XT_MREAD_XMSIZE
])

(define_int_attr mcsr_pattern[
  (UNSPEC_XT_MREAD_XRLENB "xrlenb") (UNSPEC_XT_MREAD_XMSIZE "xmsize")
])

(define_insn "@rvm_read_<mcsr_pattern>_<mode>"
  [(set (match_operand:P 0 "register_operand" "=r")
	(unspec_volatile:P
	  [(const_int 0)]
	MCSR_ITERATOR))]
  "TARGET_XTHEADMATRIX"
  "csrr\t%0,<mcsr_pattern>"
  [(set_attr "type" "mcsr")
   (set_attr "mode" "none")])

;; Matrix whole register

(define_expand "mov<mode>"
  [(set (match_operand:MMODES 0 "reg_or_mem_operand")
	(match_operand:MMODES 1 "reg_or_mem_operand_or_0_operand"))]
  "TARGET_XTHEADMATRIX"
{
  if (const_0_operand (operands[1], <MODE>mode))
    {
      emit_insn (gen_rvm_mundefined (<MODE>mode, operands[0]));
      DONE;
    }
})

(define_insn "*mov<mode>"
  [(set (match_operand:MMODES 0 "reg_or_mem_operand" "=xr, m,xr")
	(match_operand:MMODES 1 "reg_or_mem_operand" "  m,xr,xr"))]
  "TARGET_XTHEADMATRIX"
  {
    switch (which_alternative)
      {
      case 0:
	return "th.mld<mlum>m<mvfmt>\t%0,%1";
      case 1:
	return "th.mst<mlum>m<mvfmt>\t%1,%0";
      case 2:
	{
	  if (REGNO (operands[0]) == REGNO (operands[1]))
	    return "";

	  if (<mlum> == 1)
	    return "th.mmov.mm\t%0,%1";
	  else if (<mlum> == 2)
	    return concat ("th.mmov.mm\\t%0,%1\\n\\tth.mmov.mm\\t", reg_names[REGNO (operands[0]) + 1], ",", reg_names[REGNO (operands[1]) + 1], NULL);
	  else
	    gcc_unreachable ();
	}
      default:
	gcc_unreachable ();
      }
  }
  [(set_attr "type" "mldr,mstr,mmovr")
   (set_attr "mode" "none")])

(define_int_iterator MLOAD_ITERATOR [
  UNSPEC_XT_MLD
  UNSPEC_XT_MSLD
])

(define_int_attr mload_pattern[
  (UNSPEC_XT_MLD "mld") (UNSPEC_XT_MSLD "msld")
])

;; Matrix load
(define_expand "@rvm_<mload_pattern>_<M1MODES:mode><P:mode>"
  [(parallel [(set (match_operand:M1MODES 0 "register_operand")
	(unspec:M1MODES
	  [(mem:M1MODES (match_operand:P 1 "register_operand"))
	   (match_operand:P 2 "register_operand")
	   (match_operand:P 3 "matrix_cfg_operand")
	   (match_operand:P 4 "reg_or_int_operand")
	   (reg:P MSIZE_M_REGNUM)
	   (reg:P MSIZE_K_REGNUM)]
	MLOAD_ITERATOR))
   (clobber (match_scratch:P 5))])]
  "TARGET_XTHEADMATRIX"
  {})

(define_insn "*rvm_<mload_pattern>_<M1MODES:mode><P:mode>"
  [(set (match_operand:M1MODES 0 "register_operand"       "=xr")
	(unspec:M1MODES
	  [(match_operand:M1MODES 1 "memory_operand"      "  m")
	   (match_operand:P 2 "register_operand"	  "  r")
	   (match_operand:P 3 "matrix_cfg_operand" " rxm")
	   (match_operand:P 4 "reg_or_int_operand" " rI")
	   (reg:P MSIZE_M_REGNUM)
	   (reg:P MSIZE_K_REGNUM)]
	MLOAD_ITERATOR))
   (clobber (match_scratch:P 5 "=&r"))]
  "TARGET_XTHEADMATRIX"
  {
    return "th.<mload_pattern><mvfmt>\t%0,%2,%1";
  }
  [(set_attr "type" "mld")
  (set_attr "mode" "none")
  (set (attr "rvm_ebits") (const_int <MEL_BITS>))
  (set (attr "rvm_mcfgm_op_idx") (const_int 3))
  (set (attr "rvm_mcfgk_op_idx") (const_int 4))
  (set (attr "rvm_mcfgk_gpr_op_idx") (const_int 5))])

(define_int_iterator MSTORE_ITERATOR [
  UNSPEC_XT_MST
  UNSPEC_XT_MSST
])

(define_int_attr mstore_pattern[
  (UNSPEC_XT_MST "mst") (UNSPEC_XT_MSST "msst")
])

;; Matrix store
(define_expand "@rvm_<mstore_pattern>_<M1MODES:mode><P:mode>"
  [(parallel [(set (mem:M1MODES (match_operand:P 0 "register_operand"))
	(unspec:M1MODES
	  [(match_operand:P 1 "register_operand")
	   (match_operand:M1MODES 2 "register_operand")
	   (match_operand:P 3 "matrix_cfg_operand")
	   (match_operand:P 4 "reg_or_int_operand")
	   (reg:P MSIZE_M_REGNUM)
	   (reg:P MSIZE_K_REGNUM)]
	MSTORE_ITERATOR))
   (clobber (match_scratch:P 5))])]
  "TARGET_XTHEADMATRIX"
  {})

(define_insn "*rvm_mst<M1MODES:mode><P:mode>"
  [(set (match_operand:M1MODES 0 "memory_operand"	 "=m")
	(unspec:M1MODES
	  [(match_operand:P 1 "register_operand"	  " r")
	   (match_operand:M1MODES 2 "register_operand"    "xr")
	   (match_operand:P 3 "matrix_cfg_operand" "rxm")
	   (match_operand:P 4 "reg_or_int_operand" "rI")
	   (reg:P MSIZE_M_REGNUM)
	   (reg:P MSIZE_K_REGNUM)]
	MSTORE_ITERATOR))
   (clobber (match_scratch:P 5 "=&r"))]
  "TARGET_XTHEADMATRIX"
  {
    return "th.<mstore_pattern><mvfmt>\t%2,%1,%0";
  }
  [(set_attr "type" "mst")
  (set_attr "mode" "none")
  (set (attr "rvm_ebits") (const_int <MEL_BITS>))
  (set (attr "rvm_mcfgm_op_idx") (const_int 3))
  (set (attr "rvm_mcfgk_op_idx") (const_int 4))
  (set (attr "rvm_mcfgk_gpr_op_idx") (const_int 5))])

;; Matrix mov

(define_insn "@rvm_mmov_mv<M1MODES:mode><P:mode>"
  [(set (match_operand:M1MODES 0 "register_operand"    "=xr,xr")
	(unspec:M1MODES
	  [(match_operand:M1MODES 1 "register_operand" " xr,xr")
	   (match_operand:P 2 "xt_rvm0p3_reg_or_uimm3_operand"    " xi, I")]
	UNSPEC_XT_MMOV))]
  "TARGET_XTHEADMATRIX"
  {
    if (immediate_operand (operands[2], GET_MODE (operands[2])))
      return "th.mmov.mv.i\t%0,%1[%2]";

    return "th.mmov.mv.x\t%0,%1[%2]";
  }
  [(set_attr "type" "mmov")
  (set_attr "mode" "none")
  (set (attr "rvm_ebits") (const_int <MEL_BITS>))])

(define_insn "@rvm_mmov_m_x<I_M1MODES:mode><P:mode>"
  [(set (match_operand:I_M1MODES 0 "register_operand"     "=xr")
	(unspec:I_M1MODES
	  [(match_operand:I_M1MODES 1 "register_operand"  "  0")
	   (match_operand:<MEL> 2 "register_operand" "  r")
	   (match_operand:P 3 "register_operand"	 "  r")]
	UNSPEC_XT_MMOV))]
  "TARGET_XTHEADMATRIX"
  "th.mmov<mvfmt>.m.x\t%0,%2,%3"
  [(set_attr "type" "mmov")
  (set_attr "mode" "none")
  (set (attr "rvm_ebits") (const_int <MEL_BITS>))])

(define_insn "@rvm_mmov_x_m<I_M1MODES:mode><P:mode>"
  [(set (match_operand:<MEL> 0 "register_operand"   "=r")
	(unspec:<MEL>
	  [(match_operand:I_M1MODES 1 "register_operand" "xr")
	   (match_operand:P 2 "register_operand"	" r")]
	UNSPEC_XT_MMOV))]
  "TARGET_XTHEADMATRIX"
  "th.mmov<mvfmt>.x.m\t%0,%1,%2"
  [(set_attr "type" "mmov")
  (set_attr "mode" "none")
  (set (attr "rvm_ebits") (const_int <MEL_BITS>))])

(define_insn "@rvm_mdup_m_x<mode>"
  [(set (match_operand:I_M1MODES 0 "register_operand"     "=xr")
	(unspec:I_M1MODES
	  [(match_operand:<MEL> 1 "register_operand" "  r")]
	UNSPEC_XT_MDUP))]
  "TARGET_XTHEADMATRIX"
  "th.mdup<mvfmt>.m.x\t%0,%1"
  [(set_attr "type" "mmov")
  (set_attr "mode" "none")
  (set (attr "rvm_ebits") (const_int <MEL_BITS>))])

;; Matrix integer pointwise arithmetic
(define_int_iterator MMACC_ITERATOR [
  UNSPEC_XT_MMACC
  UNSPEC_XT_MMACCU
  UNSPEC_XT_MMACCUS
  UNSPEC_XT_MMACCSU
  UNSPEC_XT_PMMAQA
  UNSPEC_XT_PMMAQAU
  UNSPEC_XT_PMMAQAUS
  UNSPEC_XT_PMMAQASU
])

(define_mode_iterator MMACC_MODES [RVMM1QI])

(define_int_attr macc_pattern [
  (UNSPEC_XT_MMACC "mmacc") (UNSPEC_XT_MMACCU "mmaccu")
  (UNSPEC_XT_MMACCUS "mmaccus") (UNSPEC_XT_MMACCSU "mmaccsu")
  (UNSPEC_XT_PMMAQA "pmmaqa") (UNSPEC_XT_PMMAQAU "pmmaqau")
  (UNSPEC_XT_PMMAQAUS "pmmaqaus") (UNSPEC_XT_PMMAQASU "pmmaqasu")
])

(define_int_attr maqa_pattern [
  (UNSPEC_XT_MMACC "mmaqa") (UNSPEC_XT_MMACCU "mmaqau")
  (UNSPEC_XT_MMACCUS "mmaqaus") (UNSPEC_XT_MMACCSU "mmaqasu")
  (UNSPEC_XT_PMMAQA "pmmaqa") (UNSPEC_XT_PMMAQAU "pmmaqau")
  (UNSPEC_XT_PMMAQAUS "pmmaqaus") (UNSPEC_XT_PMMAQASU "pmmaqasu")
])

(define_insn "@rvm_<macc_pattern>_<P:mode>_<MMACC_MODES:mode>"
  [(set (match_operand 0 "register_operand"	 "=&xr")
	(unspec:RVMM1SI
	  [(plus
	     (match_operand 1 "register_operand"    "   0")
	     (mult
	       (match_operand:MMACC_MODES 2 "register_operand"  "  xr")
	       (match_operand 3 "register_operand"  "  xr")))
	     (match_operand:P 4 "matrix_cfg_operand" "  rxm")
	     (match_operand:P 5 "matrix_cfg_operand" "  rxm")
	     (match_operand:P 6 "reg_or_int_operand" "  rI")
	     (reg:P MSIZE_M_REGNUM)
	     (reg:P MSIZE_K_REGNUM)
	     (reg:P MSIZE_N_REGNUM)]
	  MMACC_ITERATOR))
   (clobber (match_scratch:P 7 "=&r"))]
  "TARGET_XTHEADMATRIX"
  {
    return "th.<maqa_pattern>.b\t%0,%3,%2";
  }
  [(set_attr "type" "mfmacc")
  (set_attr "mode" "none")
  (set (attr "rvm_ebits") (const_int <MMACC_MODES:MEL_BITS>))
  (set (attr "rvm_mcfgm_op_idx") (const_int 4))
  (set (attr "rvm_mcfgn_op_idx") (const_int 5))
  (set (attr "rvm_mcfgk_op_idx") (const_int 6))
  (set (attr "rvm_mcfgk_gpr_op_idx") (const_int 7))])

(define_insn "@rvm_fmmacc_<P:mode>"
  [(set (match_operand 0 "register_operand"	 "=&xr")
	(unspec:RVMM1HF
	  [(plus
	     (match_operand 1 "register_operand"    "   0")
	     (mult
	       (match_operand:RVMM1HF 2 "register_operand"  "  xr")
	       (match_operand 3 "register_operand"  "  xr")))
	     (match_operand:P 4 "matrix_cfg_operand" "  rxm")
	     (match_operand:P 5 "matrix_cfg_operand" "  rxm")
	     (match_operand:P 6 "reg_or_int_operand" "  rI")
	     (reg:P MSIZE_M_REGNUM)
	     (reg:P MSIZE_K_REGNUM)
	     (reg:P MSIZE_N_REGNUM)]
	  UNSPEC_XT_FMMACC))
   (clobber (match_scratch:P 7 "=&r"))]
  "TARGET_XTHEADMATRIX0P3"
  "th.fmmacc.h\t%0,%3,%2"
  [(set_attr "type" "mfmacc")
  (set_attr "mode" "none")
  (set (attr "rvm_ebits") (const_int 16))
  (set (attr "rvm_mcfgm_op_idx") (const_int 4))
  (set (attr "rvm_mcfgn_op_idx") (const_int 5))
  (set (attr "rvm_mcfgk_op_idx") (const_int 6))
  (set (attr "rvm_mcfgk_gpr_op_idx") (const_int 7))])

(define_insn_and_split "@rvm_mreinterpret_<MMODES:mode>"
  [(set (match_operand:MMODES 0 "register_operand"	  "=xr")
	(unspec:MMODES
	  [(match_operand 1 "register_operand" " xr")]
	UNSPEC_XT_MREINTERPRET))]
  "TARGET_XTHEADMATRIX"
  {
    gcc_assert (<mlum> == xt_rvm_get_lmul (GET_MODE(operands[1])));

    if (<mlum> == 1)
      return "th.mmov.mm\t%0,%1";
    else if (<mlum> == 2)
      return concat ("th.mmov.mm\\t%0,%1\\n\\tth.mmov.mm\\t", reg_names[REGNO (operands[0]) + 1], ",", reg_names[REGNO (operands[1]) + 1], NULL);
    else
      gcc_unreachable ();
  }
  "&& (REGNO (operands[0]) == REGNO (operands[1]))"
  [(const_int 0)]
  {
    emit_note (NOTE_INSN_DELETED);
    DONE;
  }
  [(set_attr "type" "mmov")
  (set_attr "mode" "none")
  (set (attr "rvm_ebits") (const_int <MMODES:MEL_BITS>))])

;; Matrix mset/mget
(define_expand "@rvm_mset_<mode>"
  [(set (match_operand:M2MODES 0 "register_operand")
	(unspec:M2MODES
	  [(match_operand:M2MODES 1 "register_operand")
	   (match_operand 2 "xt_const_uimm3_operand")
	   (match_operand:<MM1> 3 "register_operand")]
	UNSPEC_XT_MSET))]
  "TARGET_XTHEADMATRIX && INTVAL (operands[2]) < <M2MODES:mlum>"
  {
    poly_int64 offset = INTVAL (operands[2]) * GET_MODE_SIZE (GET_MODE (operands[3]));
    emit_move_insn (operands[0], operands[1]);
    rtx subreg = simplify_gen_subreg (GET_MODE (operands[3]), operands[0],
				      <MODE>mode, offset);
    emit_move_insn (subreg, operands[3]);
    DONE;
  })

(define_expand "@rvm_mget_<mode>"
  [(set (match_operand:<MM1>  0 "register_operand")
	(unspec:<MM1>
	  [(match_operand:M2MODES 1 "register_operand")
	   (match_operand 2 "xt_const_uimm3_operand")]
	UNSPEC_XT_MGET))]
  "TARGET_XTHEADMATRIX && INTVAL (operands[2]) < <M2MODES:mlum>"
  {
    poly_int64 offset = INTVAL (operands[2]) * GET_MODE_SIZE (GET_MODE (operands[0]));
    rtx subreg = simplify_gen_subreg (GET_MODE (operands[0]), operands[1],
				      <MODE>mode, offset);
    if(!subreg)
      {
	gcc_unreachable ();
	FAIL;
      }
    emit_move_insn (operands[0], subreg);
    DONE;
  })
