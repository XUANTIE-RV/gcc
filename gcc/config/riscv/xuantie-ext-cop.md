;; Machine description for XUANTIE coprocessor interface extensions.
;; Copyright (C) 2024 Free Software Foundation, Inc.

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


(define_insn_reservation "generic_cpx_interface" 1
  (eq_attr "type" "cpx,vcpx,vwncpx,fcpx")
  "nothing")

(define_mode_iterator ANYF_FCPX [SF DF (HF "TARGET_ZFHMIN") (BF "TARGET_ZFBFMIN")])


(define_c_enum "unspecv" [
  ;; Scalar integer
  UNSPECV_XT_CPX0
  UNSPECV_XT_CPX1
  UNSPECV_XT_CPX2
  UNSPECV_XT_CPX3
  UNSPECV_XT_CPX4
  UNSPECV_XT_CPX5
  UNSPECV_XT_CPX6
  UNSPECV_XT_CPX7
  UNSPECV_XT_CPX8
  UNSPECV_XT_CPX9
  UNSPECV_XT_CPX10

  ;; Vector
  UNSPECV_XT_VCPX0
  UNSPECV_XT_VCPX1
  UNSPECV_XT_VCPX2
  UNSPECV_XT_VCPX3
  UNSPECV_XT_VCPX4
  UNSPECV_XT_VCPX5
  UNSPECV_XT_VCPX6
  UNSPECV_XT_VCPX7
  UNSPECV_XT_VCPX8
  UNSPECV_XT_VCPX9
  UNSPECV_XT_VCPX10

  ;; Scalar floating point
  UNSPECV_XT_FCPX0
  UNSPECV_XT_FCPX1
  UNSPECV_XT_FCPX2
  UNSPECV_XT_FCPX3
  UNSPECV_XT_FCPX4
  UNSPECV_XT_FCPX5
  UNSPECV_XT_FCPX6

  ;; Widen/Narrow Vector
  UNSPECV_XT_VWCPX0
  UNSPECV_XT_VWCPX1
  UNSPECV_XT_VWCPX2
  UNSPECV_XT_VWCPX3
  UNSPECV_XT_VNCPX4
  UNSPECV_XT_VNCPX5
  UNSPECV_XT_VFWQCPX6
  UNSPECV_XT_VFWQCPX7
  UNSPECV_XT_VWQCPX8
  UNSPECV_XT_VWQCPX9
  UNSPECV_XT_VNQCPX10
  UNSPECV_XT_VNQCPX11
  UNSPECV_XT_VWCPX12
  UNSPECV_XT_VWCPX13
  UNSPECV_XT_VNCPX14
  UNSPECV_XT_VNQCPX15
  UNSPECV_XT_VNCPX16
  UNSPECV_XT_VNQCPX17
])

(define_insn "riscv_th_cpx0_<mode>"
  [(unspec_volatile [(match_operand 0 "const_0_3_operand")
        (match_operand:X 1 "register_operand" "r")
        (match_operand 2 "const_0_1023_operand")] UNSPECV_XT_CPX0)]
  "TARGET_XTHEADCBI"
  "th.cpx0\t%0,%1,%2"
  [(set_attr "type" "cpx")])

(define_insn "riscv_th_cpx1_<mode>"
  [(unspec_volatile [(match_operand 0 "const_0_3_operand")
        (match_operand:X 1 "register_operand" "r")] UNSPECV_XT_CPX1)]
  "TARGET_XTHEADCBI"
  "th.cpx1\t%0,%1"
  [(set_attr "type" "cpx")])

(define_insn "riscv_th_cpx2_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
    (unspec_volatile:X [(match_operand 1 "const_0_3_operand")
        (match_operand:X 2 "register_operand" "r")
        (match_operand 3 "const_0_to_31_operand")] UNSPECV_XT_CPX2))]
  "TARGET_XTHEADCBI"
  "th.cpx2\t%1,%0,%2,%3"
  [(set_attr "type" "cpx")])

(define_insn "riscv_th_cpx3_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
    (unspec_volatile:X [(match_operand 1 "const_0_3_operand")
        (match_operand:X 2 "register_operand" "r")] UNSPECV_XT_CPX3))]
  "TARGET_XTHEADCBI"
  "th.cpx3\t%1,%0,%2"
  [(set_attr "type" "cpx")])

(define_insn "riscv_th_cpx4_<mode>"
  [(unspec_volatile [(match_operand 0 "const_0_3_operand")
        (match_operand:X 1 "register_operand" "r")
        (match_operand:X 2 "register_operand" "r")
        (match_operand 3 "const_0_to_31_operand")] UNSPECV_XT_CPX4)]
  "TARGET_XTHEADCBI"
  "th.cpx4\t%0,%1,%2,%3"
  [(set_attr "type" "cpx")])

(define_insn "riscv_th_cpx5_<mode>"
  [(unspec_volatile [(match_operand 0 "const_0_3_operand")
        (match_operand:X 1 "register_operand" "r")
        (match_operand:X 2 "register_operand" "r")] UNSPECV_XT_CPX5)]
  "TARGET_XTHEADCBI"
  "th.cpx5\t%0,%1,%2"
  [(set_attr "type" "cpx")])

(define_insn "riscv_th_cpx6_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
    (unspec_volatile:X [(match_operand 1 "const_0_3_operand")
        (match_operand:X 2 "register_operand" "r")
        (match_operand:X 3 "register_operand" "r")] UNSPECV_XT_CPX6))]
  "TARGET_XTHEADCBI"
  "th.cpx6\t%1,%0,%2,%3"
  [(set_attr "type" "cpx")])

(define_insn "riscv_th_cpx7_<mode>"
  [(unspec_volatile [(match_operand 0 "const_0_3_operand")
        (match_operand:X 1 "register_operand" "r")
        (match_operand:X 2 "register_operand" "r")
        (match_operand:X 3 "register_operand" "r")] UNSPECV_XT_CPX7)]
  "TARGET_XTHEADCEI"
  "th.cpx7\t%0,%1,%2,%3"
  [(set_attr "type" "cpx")])

(define_insn "riscv_th_cpx8_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
    (unspec_volatile:X [(match_operand 1 "const_0_3_operand")
        (match_operand:X 2 "register_operand" "0")
        (match_operand:X 3 "register_operand" "r")
        (match_operand:X 4 "register_operand" "r")] UNSPECV_XT_CPX8))]
  "TARGET_XTHEADCEI"
  "th.cpx8\t%1,%2,%3,%4"
  [(set_attr "type" "cpx")])

(define_insn "riscv_th_cpx9_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
    (unspec_volatile:X [(match_operand 1 "const_0_3_operand")
        (match_operand:X 2 "register_operand" "0")
        (match_operand:X 3 "register_operand" "r")
        (match_operand:X 4 "const_0_1023_operand")] UNSPECV_XT_CPX9))]
  "TARGET_XTHEADCBI"
  "th.cpx9\t%1,%2,%3,%4"
  [(set_attr "type" "cpx")])

(define_insn "riscv_th_cpx10_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
    (unspec_volatile:X [(match_operand 1 "const_0_3_operand")
        (match_operand 2 "const_0_1023_operand")] UNSPECV_XT_CPX10))]
  "TARGET_XTHEADCBI"
  "th.cpx10\t%1,%0,%2"
  [(set_attr "type" "cpx")])

(define_insn "riscv_th_fcpx0_<mode>"
  [(unspec_volatile [(match_operand 0 "const_0_3_operand" "i")
        (match_operand:ANYF_FCPX 1 "register_operand" "f")] UNSPECV_XT_FCPX0)]
  "TARGET_XTHEADCF"
  "th.fcpx0\t%0,%1"
  [(set_attr "type" "fcpx")])

(define_insn "riscv_th_fcpx1_<mode>"
  [(set (match_operand:ANYF_FCPX 0 "register_operand" "=f")
    (unspec_volatile:ANYF_FCPX [(match_operand 1 "const_0_3_operand" "i")
        (match_operand:ANYF_FCPX 2 "register_operand" "f")] UNSPECV_XT_FCPX1))]
  "TARGET_XTHEADCF"
  "th.fcpx1\t%1,%0,%2"
  [(set_attr "type" "fcpx")])

(define_insn "riscv_th_fcpx2_<mode>"
  [(unspec_volatile [(match_operand 0 "const_0_3_operand" "i")
        (match_operand:ANYF_FCPX 1 "register_operand" "f")
        (match_operand:ANYF_FCPX 2 "register_operand" "f")] UNSPECV_XT_FCPX2)]
  "TARGET_XTHEADCF"
  "th.fcpx2\t%0,%1,%2"
  [(set_attr "type" "fcpx")])

(define_insn "riscv_th_fcpx3_<mode>"
  [(set (match_operand:ANYF_FCPX 0 "register_operand" "=f")
    (unspec_volatile:ANYF_FCPX [(match_operand 1 "const_0_3_operand" "i")
        (match_operand:ANYF_FCPX 2 "register_operand" "f")
        (match_operand:ANYF_FCPX 3 "register_operand" "f")] UNSPECV_XT_FCPX3))]
  "TARGET_XTHEADCF"
  "th.fcpx3\t%1,%0,%2,%3"
  [(set_attr "type" "fcpx")])

(define_insn "riscv_th_fcpx4_<mode>"
  [(unspec_volatile [(match_operand 0 "const_0_3_operand" "i")
        (match_operand:ANYF_FCPX 1 "register_operand" "f")
        (match_operand:ANYF_FCPX 2 "register_operand" "f")
        (match_operand:ANYF_FCPX 3 "register_operand" "f")] UNSPECV_XT_FCPX4)]
  "TARGET_XTHEADCF"
  "th.fcpx4\t%0,%1,%2,%3"
  [(set_attr "type" "fcpx")])

(define_insn "riscv_th_fcpx5_<mode>"
  [(set (match_operand:ANYF_FCPX 0 "register_operand" "=f")
    (unspec_volatile:ANYF_FCPX [(match_operand 1 "const_0_3_operand" "i")
        (match_operand:ANYF_FCPX 2 "register_operand" "0")
        (match_operand:ANYF_FCPX 3 "register_operand" "f")
        (match_operand:ANYF_FCPX 4 "register_operand" "f")] UNSPECV_XT_FCPX5))]
  "TARGET_XTHEADCF"
  "th.fcpx5\t%1,%0,%3,%4"
  [(set_attr "type" "fcpx")])

(define_insn "riscv_th_fcpx6_<mode>"
  [(set (match_operand:ANYF_FCPX 0 "register_operand" "=f")
    (unspec_volatile:ANYF_FCPX [(match_operand 1 "const_0_3_operand" "i")
        (match_operand:ANYF_FCPX 2 "register_operand" "f")
        (match_operand 3 "const_0_to_31_operand" "i")] UNSPECV_XT_FCPX6))]
  "TARGET_XTHEADCF"
  "th.fcpx6\t%1,%0,%2,%3"
  [(set_attr "type" "fcpx")])
