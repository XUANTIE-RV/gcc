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

;; Matrix constraints.

(define_register_constraint "xr" "TARGET_XTHEADMATRIX ? MATRIX_REGS : NO_REGS"
  "A matrix register (if available).")

(define_register_constraint "xi" "TARGET_XTHEADMATRIX ? MATRIX_GR_REGS : NO_REGS"
  "A matrix general register (x8 - x15) (if available).")

(define_constraint "xp"
  "POLY_INT"
  (and (match_code "const_poly_int")
       (match_test "known_eq (rtx_to_poly_int64 (op), XT_RVM_UNITS_PER_REG)")))

; This defines 'm' as normal memory constraint.  This is only possible
; since the standard memory constraint is re-defined in riscv.h using
; the TARGET_MEM_CONSTRAINT macro.
(define_memory_constraint "m"
  "Matches the most general memory address."
  (and (match_code "mem")
       (match_test "memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0), MEM_ADDR_SPACE (op))
		    && !xt_mem_operand (op, GET_MODE (op))")))

(define_constraint "xm"
  "A 7-bit unsigned immediate for RVM configuration values."
  (and (match_code "const_int")
       (match_test "IN_RANGE (ival, 0, 127)")))