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

(define_predicate "xt_const_uns16_arith_operand"
  (and (match_code "const_int")
       (match_test "((INTVAL (op) & ~(unsigned HOST_WIDE_INT) 0xffff) == 0) ")))

(define_predicate "xt_uns16_arith_operand"
  (ior (match_operand 0 "xt_const_uns16_arith_operand")
       (match_operand 0 "register_operand")))

(define_predicate "xt_const_uimm3_operand"
  (and (match_code "const_int")
       (match_test "IN_RANGE (INTVAL (op), 0, 7)")))

(define_predicate "xt_rvm0p3_reg_or_uimm3_operand"
  (ior (match_operand 0 "xt_const_uimm3_operand")
       (and (match_test "TARGET_XTHEADMATRIX0P3")
            (match_operand 0 "register_operand"))))

(define_predicate "xt_reg_or_uimm3_operand"
  (ior (match_operand 0 "xt_const_uimm3_operand")
       (match_operand 0 "register_operand")))

;; Return true if operand is a FPR register.

(define_predicate "fpr_operand"
  (match_code "reg,subreg")
{
  if (GET_MODE (op) != mode && mode != VOIDmode)
    return FALSE;

  if (GET_CODE (op) == SUBREG)
    {
      if (GET_CODE (SUBREG_REG (op)) != REG)
        return register_operand (op, mode);

      op = SUBREG_REG (op);
    }

  if (GET_CODE (op) != REG)
    return FALSE;

  return ((FP_REG_RTX_P (op) || (REGNO (op)) >= FIRST_PSEUDO_REGISTER));
})

;; Accept a register, but not a subreg of any kind.  This allows us to
;; avoid pathological cases in reload wrt data movement common in
;; int->fp conversion.  */
(define_predicate "xt_reg_no_subreg_operand"
  (and (match_code "reg")
       (match_operand 0 "register_operand")))

(define_predicate "xt_mem_operand"
  (and (match_code "mem")
       (match_test "(satisfies_constraint_th__m__mir (op)
                    || satisfies_constraint_th__m__miu (op)) ")))

(define_predicate "fpr_or_xt_mem_operand"
  (ior (match_operand 0 "fpr_operand")
       (match_operand 0 "xt_mem_operand")))

(define_predicate "fpr_or_xt_mem_or_0_operand"
  (ior (match_operand 0 "fpr_or_xt_mem_operand")
       (match_operand 0 "const_0_operand")))

(define_predicate "reg_or_no_nan_double_operand"
  (ior (match_operand 0 "register_operand")
       (and (match_operand 0 "const_double_operand")
	    (match_test "!real_isnan (CONST_DOUBLE_REAL_VALUE (op))"))))

(define_predicate "p_register_operand"
  (match_operand 0 "register_operand")
  {
    if (((GET_MODE (op) != mode) && (mode != VOIDmode))
	|| (!REG_P (op) && !SUBREG_P (op)))
      return false;

    unsigned regno = REG_P (op) ? REGNO (op) : REGNO (SUBREG_REG (op));
    /* Special predicate to match even-odd double register pair.  */
    if (!TARGET_64BIT && regno < FIRST_PSEUDO_REGISTER
	&& mode == DImode && (regno & 1) != 0)
      return false;

   return true;
  })

;; Return 1 if OP is constant integer 0..31 for MODE.
(define_predicate "const_0_to_31_operand"
  (and (match_code "const_int")
       (match_test "IN_RANGE (INTVAL (op), 0, 31)")))

(define_predicate "const_0_1023_operand"
  (and (match_code "const_int")
       (match_test "IN_RANGE (INTVAL (op), 0, 1023)")))

(define_predicate "const_exp_4_operand"
  (and (match_code "const_int")
       (match_test "IN_RANGE (exact_log2 (INTVAL (op)), 0, 3)")))

(define_predicate "const_exp_8_operand"
  (and (match_code "const_int")
       (match_test "IN_RANGE (exact_log2 (INTVAL (op)), 0, 7)")))

(define_predicate "insv32_operand"
  (and (match_code "const_int")
       (match_test "INTVAL (op) < 32 && (INTVAL (op) & 7) == 0")))

(define_predicate "insv64_operand"
  (and (match_code "const_int")
       (match_test "INTVAL (op) < 64 && (INTVAL (op) & 7) == 0")))

(define_predicate "reg_or_const_0_to_31_operand"
  (ior (match_operand 0 "const_0_to_31_operand")
       (match_operand 0 "register_operand")))

(define_predicate "csr_address"
  (and (match_code "const_int")
       (match_test "IN_RANGE (INTVAL (op), 0, IMM_REACH-1)")))

(define_predicate "reg_or_mem_operand_or_0_operand"
  (ior (match_operand 0 "reg_or_0_operand")
       (match_operand 0 "memory_operand")))

(define_special_predicate "matrix_cfg_operand"
  (ior (match_operand 0 "pmode_register_operand")
       (match_test "satisfies_constraint_xm (op)")))

(define_special_predicate "matrix_blksize_operand"
  (ior (match_operand 0 "pmode_register_operand")
       (match_operand 0 "const_0_3_operand")))
