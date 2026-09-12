(define_mode_iterator VI_NOFRAC_S [
  RVVM8QI RVVM4QI RVVM2QI RVVM1QI
  RVVM8HI RVVM4HI RVVM2HI RVVM1HI
  RVVM8SI RVVM4SI RVVM2SI RVVM1SI
  (RVVM8DI "TARGET_VECTOR_ELEN_64 && TARGET_64BIT")
  (RVVM4DI "TARGET_VECTOR_ELEN_64 && TARGET_64BIT")
  (RVVM2DI "TARGET_VECTOR_ELEN_64 && TARGET_64BIT")
  (RVVM1DI "TARGET_VECTOR_ELEN_64 && TARGET_64BIT")
])

(define_mode_iterator VI_S [VI_NOFRAC_S VI_FRAC])

(define_mode_iterator VF_NOBF_NOFRAC [
  (RVVM8HF "TARGET_ZVFHMIN || TARGET_ZVFH") (RVVM4HF "TARGET_ZVFHMIN || TARGET_ZVFH")
  (RVVM2HF "TARGET_ZVFHMIN || TARGET_ZVFH") (RVVM1HF "TARGET_ZVFHMIN || TARGET_ZVFH")

  (RVVM8SF "TARGET_VECTOR_ELEN_FP_32") (RVVM4SF "TARGET_VECTOR_ELEN_FP_32")
  (RVVM2SF "TARGET_VECTOR_ELEN_FP_32") (RVVM1SF "TARGET_VECTOR_ELEN_FP_32")

  (RVVM8DF "TARGET_VECTOR_ELEN_FP_64") (RVVM4DF "TARGET_VECTOR_ELEN_FP_64")
  (RVVM2DF "TARGET_VECTOR_ELEN_FP_64") (RVVM1DF "TARGET_VECTOR_ELEN_FP_64")
])

(define_mode_iterator VF_NOFRAC [
  VF_NOBF_NOFRAC
  (RVVM1BF "TARGET_VECTOR_ELEN_BF_16") (RVVM2BF "TARGET_VECTOR_ELEN_BF_16")
  (RVVM4BF "TARGET_VECTOR_ELEN_BF_16") (RVVM8BF "TARGET_VECTOR_ELEN_BF_16")
])

(define_mode_iterator VFBF [VF_ZVFBF16 VF_ZVFHMIN])

(define_insn "@pred_vcpx0_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 3 "const_int_operand" "i")
       (match_operand 4 "const_int_operand" "i")
       (match_operand 5 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VI_NOFRAC 2 "register_operand" "vr")]
    UNSPECV_XT_VCPX0)]
  "TARGET_XTHEADCV"
  "th.vcpx0\t%0,%2%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[5])"))])

(define_insn "@pred_vcpx0_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 3 "const_int_operand" "i")
       (match_operand 4 "const_int_operand" "i")
       (match_operand 5 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VF_NOFRAC 2 "register_operand" "vr")]
    UNSPECV_XT_VCPX0)]
  "TARGET_XTHEADCV"
  "th.vcpx0\t%0,%2%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "frm_mode")
	(symbol_ref "riscv_vector::get_frm_mode (operands[5])"))])

(define_insn "@pred_vcpx1_<mode>"
  [(set (match_operand:VI_NOFRAC 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VI_NOFRAC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 5 "const_int_operand" "i, i, i, i")
	 (match_operand 6 "const_int_operand" "i, i, i, i")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VI_NOFRAC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VI_NOFRAC 4 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VCPX1)
      (match_operand:VI_NOFRAC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCV"
  "th.vcpx1\t%1,%0,%4%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[7])"))])

(define_insn "@pred_vcpx1_<mode>"
  [(set (match_operand:VF_NOFRAC 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VF_NOFRAC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 5 "const_int_operand" "i, i, i, i")
	 (match_operand 6 "const_int_operand" "i, i, i, i")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VF_NOFRAC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VF_NOFRAC 4 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VCPX1)
      (match_operand:VF_NOFRAC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCV"
  "th.vcpx1\t%1,%0,%4%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "frm_mode")
	(symbol_ref "riscv_vector::get_frm_mode (operands[7])"))])

(define_insn "@pred_vcpx2_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 4 "const_int_operand" "i")
       (match_operand 5 "const_int_operand" "i")
       (match_operand 6 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VI_NOFRAC 2 "register_operand" "vr")
     (match_operand 3 "const_0_to_31_operand" "i")]
    UNSPECV_XT_VCPX2)]
  "TARGET_XTHEADCV"
  "th.vcpx2\t%0,%2,%3%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[6])"))])

(define_insn "@pred_vcpx2_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 4 "const_int_operand" "i")
       (match_operand 5 "const_int_operand" "i")
       (match_operand 6 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VF_NOFRAC 2 "register_operand" "vr")
     (match_operand 3 "const_0_to_31_operand" "i")]
    UNSPECV_XT_VCPX2)]
  "TARGET_XTHEADCV"
  "th.vcpx2\t%0,%2,%3%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "frm_mode")
	(symbol_ref "riscv_vector::get_frm_mode (operands[6])"))])

(define_insn "@pred_vcpx3_<mode>"
  [(set (match_operand:VI_NOFRAC 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VI_NOFRAC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 6 "const_int_operand" "i, i, i, i")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VI_NOFRAC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VI_NOFRAC 4 "register_operand" "vr, vr, vr, vr")
	 (match_operand 5 "const_0_to_31_operand" "i, i, i, i")]
	UNSPECV_XT_VCPX3)
      (match_operand:VI_NOFRAC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCV"
  "th.vcpx3\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[8])"))])

(define_insn "@pred_vcpx3_<mode>"
  [(set (match_operand:VF_NOFRAC 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VF_NOFRAC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 6 "const_int_operand" "i, i, i, i")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VF_NOFRAC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VF_NOFRAC 4 "register_operand" "vr, vr, vr, vr")
	 (match_operand 5 "const_0_to_31_operand" "i, i, i, i")]
	UNSPECV_XT_VCPX3)
      (match_operand:VF_NOFRAC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCV"
  "th.vcpx3\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "frm_mode")
	(symbol_ref "riscv_vector::get_frm_mode (operands[8])"))])

(define_insn "@pred_vcpx4_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 5 "const_int_operand" "i")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VI_NOFRAC 2 "register_operand" "vr")
     (match_operand:VI_NOFRAC 3 "register_operand" "vr")
     (match_operand:VI_NOFRAC 4 "register_operand" "vr")]
    UNSPECV_XT_VCPX4)]
  "TARGET_XTHEADCV"
  "th.vcpx4\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[7])"))])

(define_insn "@pred_vcpx4_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 5 "const_int_operand" "i")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VF_NOFRAC 2 "register_operand" "vr")
     (match_operand:VF_NOFRAC 3 "register_operand" "vr")
     (match_operand:VF_NOFRAC 4 "register_operand" "vr")]
    UNSPECV_XT_VCPX4)]
  "TARGET_XTHEADCV"
  "th.vcpx4\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "frm_mode")
	(symbol_ref "riscv_vector::get_frm_mode (operands[7])"))])

(define_insn "@pred_vcpx5_<mode>"
  [(set (match_operand:VI_NOFRAC 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VI_NOFRAC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 6 "const_int_operand" "i, i, i, i")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VI_NOFRAC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VI_NOFRAC 4 "register_operand" "vr, vr, vr, vr")
	 (match_operand:VI_NOFRAC 5 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VCPX5)
      (match_operand:VI_NOFRAC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCV"
  "th.vcpx5\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[8])"))])

(define_insn "@pred_vcpx5_<mode>"
  [(set (match_operand:VF_NOFRAC 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VF_NOFRAC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 6 "const_int_operand" "i, i, i, i")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VF_NOFRAC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VF_NOFRAC 4 "register_operand" "vr, vr, vr, vr")
	 (match_operand:VF_NOFRAC 5 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VCPX5)
      (match_operand:VF_NOFRAC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCV"
  "th.vcpx5\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[8])"))])

(define_insn "@pred_vcpx6_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 5 "const_int_operand" "i")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VI_NOFRAC_S 2 "register_operand" "vr")
     (match_operand:VI_NOFRAC_S 3 "register_operand" "vr")
     (match_operand:<VEL> 4 "register_operand" "r")]
    UNSPECV_XT_VCPX6)]
  "TARGET_XTHEADCV"
  "th.vcpx6\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[7])"))])

(define_insn "@pred_vcpx7_<mode>"
  [(set (match_operand:VI_NOFRAC_S 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VI_NOFRAC_S
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 6 "const_int_operand" "i, i, i, i")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VI_NOFRAC_S
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VI_NOFRAC_S 4 "register_operand" "vr, vr, vr, vr")
	 (match_operand:<VEL> 5 "register_operand" "r, r, r, r")]
	UNSPECV_XT_VCPX7)
      (match_operand:VI_NOFRAC_S 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCV"
  "th.vcpx7\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[8])"))])

(define_insn "@pred_vcpx8_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 5 "const_int_operand" "i")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VI_NOFRAC 2 "register_operand" "vr")
     (match_operand:VI_NOFRAC 3 "register_operand" "vr")
     (match_operand 4 "const_0_to_31_operand" "i")]
    UNSPECV_XT_VCPX8)]
  "TARGET_XTHEADCV"
  "th.vcpx8\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[7])"))])

(define_insn "@pred_vcpx8_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 5 "const_int_operand" "i")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VF_NOFRAC 2 "register_operand" "vr")
     (match_operand:VF_NOFRAC 3 "register_operand" "vr")
     (match_operand 4 "const_0_to_31_operand" "i")]
    UNSPECV_XT_VCPX8)]
  "TARGET_XTHEADCV"
  "th.vcpx8\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[7])"))])

(define_insn "@pred_vcpx9_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 5 "const_int_operand" "i")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VF_NOFRAC 2 "register_operand" "vr")
     (match_operand:VF_NOFRAC 3 "register_operand" "vr")
     (match_operand:<VEL> 4 "register_operand" "f")]
    UNSPECV_XT_VCPX9)]
  "TARGET_XTHEADCV"
  "th.vcpx9\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[7])"))])

(define_insn "@pred_vcpx10_<mode>"
  [(set (match_operand:VF_NOFRAC 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VF_NOFRAC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 6 "const_int_operand" "i, i, i, i")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VF_NOFRAC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VF_NOFRAC 4 "register_operand" "vr, vr, vr, vr")
	 (match_operand:<VEL> 5 "register_operand" "f, f, f, f")]
	UNSPECV_XT_VCPX10)
      (match_operand:VF_NOFRAC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCV"
  "th.vcpx10\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[8])"))])

;; Xtheadvcpml

(define_insn "@pred_vcpml_vcpx0_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 3 "vector_length_operand"	" rvl")
       (match_operand 4 "const_int_operand" "i")
       (match_operand 5 "const_int_operand" "i")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VI 2 "register_operand" "vr")]
    UNSPECV_XT_VCPX0)]
  "TARGET_XTHEADVCPML"
  "th.vcpx0\t%0,%2%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "3")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[4])"))
   (set (attr "avl_type_idx") (const_int 6))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[7])"))])

(define_insn "@pred_vcpml_vcpx0_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 3 "vector_length_operand"	" rvl")
       (match_operand 4 "const_int_operand" "i")
       (match_operand 5 "const_int_operand" "i")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VFBF 2 "register_operand" "vr")]
    UNSPECV_XT_VCPX0)]
  "TARGET_XTHEADVCPML"
  "th.vcpx0\t%0,%2%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "3")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[4])"))
   (set (attr "avl_type_idx") (const_int 6))
   (set (attr "frm_mode")
	(symbol_ref "riscv_vector::get_frm_mode (operands[7])"))])

(define_insn "@pred_vcpml_vcpx1_<mode>"
  [(set (match_operand:VI 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VI
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 5 "vector_length_operand"	"rvl, rvl, rvl, rvl")
	 (match_operand 6 "const_int_operand" "i, i, i, i")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VI
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VI 4 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VCPX1)
      (match_operand:VI 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADVCPML"
  "th.vcpx1\t%1,%0,%4%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[9])"))])

(define_insn "@pred_vcpml_vcpx1_<mode>"
  [(set (match_operand:VFBF 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VFBF
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 5 "vector_length_operand"	"rvl, rvl, rvl, rvl")
	 (match_operand 6 "const_int_operand" "i, i, i, i")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VFBF
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VFBF 4 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VCPX1)
      (match_operand:VFBF 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADVCPML"
  "th.vcpx1\t%1,%0,%4%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "frm_mode")
	(symbol_ref "riscv_vector::get_frm_mode (operands[9])"))])

(define_insn "@pred_vcpml_vcpx2_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 4 "vector_length_operand"	" rvl")
       (match_operand 5 "const_int_operand" "i")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (match_operand 8 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VI 2 "register_operand" "vr")
     (match_operand 3 "const_0_to_31_operand" "i")]
    UNSPECV_XT_VCPX2)]
  "TARGET_XTHEADVCPML"
  "th.vcpx2\t%0,%2,%3%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "4")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[5])"))
   (set (attr "avl_type_idx") (const_int 7))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[8])"))])

(define_insn "@pred_vcpml_vcpx2_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 4 "vector_length_operand"	" rvl")
       (match_operand 5 "const_int_operand" "i")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (match_operand 8 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VFBF 2 "register_operand" "vr")
     (match_operand 3 "const_0_to_31_operand" "i")]
    UNSPECV_XT_VCPX2)]
  "TARGET_XTHEADVCPML"
  "th.vcpx2\t%0,%2,%3%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "4")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[5])"))
   (set (attr "avl_type_idx") (const_int 7))
   (set (attr "frm_mode")
	(symbol_ref "riscv_vector::get_frm_mode (operands[8])"))])

(define_insn "@pred_vcpml_vcpx3_<mode>"
  [(set (match_operand:VI 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VI
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 6 "vector_length_operand"	"rvl, rvl, rvl, rvl")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
	 (match_operand 10 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VI
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VI 4 "register_operand" "vr, vr, vr, vr")
	 (match_operand 5 "const_0_to_31_operand" "i, i, i, i")]
	UNSPECV_XT_VCPX3)
      (match_operand:VI 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADVCPML"
  "th.vcpx3\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[10])"))])

(define_insn "@pred_vcpml_vcpx3_<mode>"
  [(set (match_operand:VFBF 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VFBF
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 6 "vector_length_operand"	"rvl, rvl, rvl, rvl")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
	 (match_operand 10 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VFBF
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VFBF 4 "register_operand" "vr, vr, vr, vr")
	 (match_operand 5 "const_0_to_31_operand" "i, i, i, i")]
	UNSPECV_XT_VCPX3)
      (match_operand:VFBF 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADVCPML"
  "th.vcpx3\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "frm_mode")
	(symbol_ref "riscv_vector::get_frm_mode (operands[10])"))])

(define_insn "@pred_vcpml_vcpx4_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 5 "vector_length_operand"	" rvl")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (match_operand 8 "const_int_operand" "i")
       (match_operand 9 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VI 2 "register_operand" "vr")
     (match_operand:VI 3 "register_operand" "vr")
     (match_operand:VI 4 "register_operand" "vr")]
    UNSPECV_XT_VCPX4)]
  "TARGET_XTHEADVCPML"
  "th.vcpx4\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[9])"))])

(define_insn "@pred_vcpml_vcpx4_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 5 "vector_length_operand"	" rvl")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (match_operand 8 "const_int_operand" "i")
       (match_operand 9 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VFBF 2 "register_operand" "vr")
     (match_operand:VFBF 3 "register_operand" "vr")
     (match_operand:VFBF 4 "register_operand" "vr")]
    UNSPECV_XT_VCPX4)]
  "TARGET_XTHEADVCPML"
  "th.vcpx4\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "frm_mode")
	(symbol_ref "riscv_vector::get_frm_mode (operands[9])"))])

(define_insn "@pred_vcpml_vcpx5_<mode>"
  [(set (match_operand:VI 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VI
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 6 "vector_length_operand"	"rvl, rvl, rvl, rvl")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
	 (match_operand 10 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VI
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VI 4 "register_operand" "vr, vr, vr, vr")
	 (match_operand:VI 5 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VCPX5)
      (match_operand:VI 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADVCPML"
  "th.vcpx5\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[10])"))])

(define_insn "@pred_vcpml_vcpx5_<mode>"
  [(set (match_operand:VFBF 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VFBF
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 6 "vector_length_operand"	"rvl, rvl, rvl, rvl")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
	 (match_operand 10 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VFBF
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VFBF 4 "register_operand" "vr, vr, vr, vr")
	 (match_operand:VFBF 5 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VCPX5)
      (match_operand:VFBF 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADVCPML"
  "th.vcpx5\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[10])"))])

(define_insn "@pred_vcpml_vcpx6_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 5 "vector_length_operand"	" rvl")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (match_operand 8 "const_int_operand" "i")
       (match_operand 9 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VI_S 2 "register_operand" "vr")
     (match_operand:VI_S 3 "register_operand" "vr")
     (match_operand:<VEL> 4 "register_operand" "r")]
    UNSPECV_XT_VCPX6)]
  "TARGET_XTHEADVCPML"
  "th.vcpx6\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[9])"))])

(define_insn "@pred_vcpml_vcpx7_<mode>"
  [(set (match_operand:VI_S 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VI_S
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 6 "vector_length_operand"	"rvl, rvl, rvl, rvl")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
	 (match_operand 10 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VI_S
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VI_S 4 "register_operand" "vr, vr, vr, vr")
	 (match_operand:<VEL> 5 "register_operand" "r, r, r, r")]
	UNSPECV_XT_VCPX7)
      (match_operand:VI_S 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADVCPML"
  "th.vcpx7\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[10])"))])

(define_insn "@pred_vcpml_vcpx8_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 5 "vector_length_operand"	" rvl")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (match_operand 8 "const_int_operand" "i")
       (match_operand 9 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VI 2 "register_operand" "vr")
     (match_operand:VI 3 "register_operand" "vr")
     (match_operand 4 "const_0_to_31_operand" "i")]
    UNSPECV_XT_VCPX8)]
  "TARGET_XTHEADVCPML"
  "th.vcpx8\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[9])"))])

(define_insn "@pred_vcpml_vcpx8_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 5 "vector_length_operand"	" rvl")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (match_operand 8 "const_int_operand" "i")
       (match_operand 9 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VFBF 2 "register_operand" "vr")
     (match_operand:VFBF 3 "register_operand" "vr")
     (match_operand 4 "const_0_to_31_operand" "i")]
    UNSPECV_XT_VCPX8)]
  "TARGET_XTHEADVCPML"
  "th.vcpx8\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[9])"))])

(define_insn "@pred_vcpml_vcpx9_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand" "vmWc1")
       (match_operand 5 "vector_length_operand"	" rvl")
       (match_operand 6 "const_int_operand" "i")
       (match_operand 7 "const_int_operand" "i")
       (match_operand 8 "const_int_operand" "i")
       (match_operand 9 "const_int_operand" "i")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)
       (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" "i")
     (match_operand:VFBF 2 "register_operand" "vr")
     (match_operand:VFBF 3 "register_operand" "vr")
     (match_operand:<VEL> 4 "register_operand" "f")]
    UNSPECV_XT_VCPX9)]
  "TARGET_XTHEADVCPML"
  "th.vcpx9\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[9])"))])

(define_insn "@pred_vcpml_vcpx10_<mode>"
  [(set (match_operand:VFBF 0 "register_operand" "=vd, vd, vr, vr")
    (if_then_else:VFBF
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 6 "vector_length_operand"	"rvl, rvl, rvl, rvl")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
	 (match_operand 10 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VFBF
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VFBF 4 "register_operand" "vr, vr, vr, vr")
	 (match_operand:<VEL> 5 "register_operand" "f, f, f, f")]
	UNSPECV_XT_VCPX10)
      (match_operand:VFBF 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADVCPML"
  "th.vcpx10\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vcpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[10])"))])

;; Xtheadcvwn

(define_mode_iterator VI_QUAD_EXT_SRC [
  RVVM2QI RVVM1QI RVVMF2QI RVVMF4QI (RVVMF8QI "TARGET_MIN_VLEN > 32")

  RVVM2HI RVVM1HI RVVMF2HI (RVVMF4HI "TARGET_MIN_VLEN > 32")
])

(define_mode_iterator VI_DOUBLE_EXT_SRC [
  VI_QUAD_EXT_SRC
  RVVM4QI RVVM4HI RVVM4SI RVVM2SI RVVM1SI (RVVMF2SI "TARGET_MIN_VLEN > 32")
])

(define_mode_iterator VF_NOBF_QUAD_EXT_SRC [
  (RVVM2HF "TARGET_VECTOR_ELEN_FP_16")
  (RVVM1HF "TARGET_VECTOR_ELEN_FP_16")
  (RVVMF2HF "TARGET_VECTOR_ELEN_FP_16")
  (RVVMF4HF "TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN > 32")
])

(define_mode_iterator VF_BF_QUAD_EXT_SRC [
  (RVVM2BF "TARGET_VECTOR_ELEN_BF_16")
  (RVVM1BF "TARGET_VECTOR_ELEN_BF_16")
  (RVVMF2BF "TARGET_VECTOR_ELEN_BF_16")
  (RVVMF4BF "TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN > 32")
])

(define_mode_iterator VF_NOBF_DOUBLE_EXT_SRC [VF_NOBF_QUAD_EXT_SRC
  (RVVM4HF "TARGET_VECTOR_ELEN_FP_16")
  (RVVM4SF "TARGET_VECTOR_ELEN_FP_32")
  (RVVM2SF "TARGET_VECTOR_ELEN_FP_32")
  (RVVM1SF "TARGET_VECTOR_ELEN_FP_32")
  (RVVMF2SF "TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN > 32")
])

(define_mode_iterator VF_BF_DOUBLE_EXT_SRC [
  VF_BF_QUAD_EXT_SRC
  (RVVM4BF "TARGET_VECTOR_ELEN_BF_16")
])

(define_mode_iterator VF_DOUBLE_EXT_SRC [VF_NOBF_DOUBLE_EXT_SRC VF_BF_DOUBLE_EXT_SRC])

(define_mode_iterator VF_QUAD_EXT_SRC [VF_NOBF_QUAD_EXT_SRC VF_BF_QUAD_EXT_SRC])

(define_mode_attr XT_V_DOUBLE_EXTEND [
  (RVVM4QI "RVVM8HI") (RVVM2QI "RVVM4HI")
  (RVVM1QI "RVVM2HI") (RVVMF2QI "RVVM1HI")
  (RVVMF4QI "RVVMF2HI") (RVVMF8QI "RVVMF4HI")

  (RVVM4HI "RVVM8SI") (RVVM2HI "RVVM4SI")
  (RVVM1HI "RVVM2SI") (RVVMF2HI "RVVM1SI")
  (RVVMF4HI "RVVMF2SI")

  (RVVM4SI "RVVM8DI") (RVVM2SI "RVVM4DI")
  (RVVM1SI "RVVM2DI") (RVVMF2SI "RVVM1DI")

  (RVVM4HF "RVVM8SF") (RVVM2HF "RVVM4SF")
  (RVVM1HF "RVVM2SF") (RVVMF2HF "RVVM1SF")
  (RVVMF4HF "RVVMF2SF")

  (RVVM4SF "RVVM8DF") (RVVM2SF "RVVM4DF")
  (RVVM1SF "RVVM2DF") (RVVMF2SF "RVVM1DF")
  
  (RVVM4BF "RVVM8SF") (RVVM2BF "RVVM4SF")
  (RVVM1BF "RVVM2SF") (RVVMF2BF "RVVM1SF")
  (RVVMF4BF "RVVMF2SF")
])

(define_mode_attr XT_V_QUAD_EXTEND [
  (RVVM2QI "RVVM8SI") (RVVM1QI "RVVM4SI") (RVVMF2QI "RVVM2SI") (RVVMF4QI "RVVM1SI") (RVVMF8QI "RVVMF2SI")

  (RVVM2HI "RVVM8DI") (RVVM1HI "RVVM4DI") (RVVMF2HI "RVVM2DI") (RVVMF4HI "RVVM1DI")

  (RVVM2HF "RVVM8DF") (RVVM1HF "RVVM4DF") (RVVMF2HF "RVVM2DF") (RVVMF4HF "RVVM1DF")

  (RVVM2BF "RVVM8DF") (RVVM1BF "RVVM4DF") (RVVMF2BF "RVVM2DF") (RVVMF4BF "RVVM1DF")])

(define_insn "@pred_vwcpx0_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 5 "vector_length_operand"	" rvl,rvl")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (match_operand 9 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:<XT_V_DOUBLE_EXTEND> 2 "register_operand" " vr, vr")
     (match_operand:VI_DOUBLE_EXT_SRC 3 "register_operand" " vr, vr")
     (match_operand:<VEL> 4 "register_operand" " r, r")]
    UNSPECV_XT_VWCPX0)]
  "TARGET_XTHEADCVWN"
  "th.vwcpx0.vx\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[7])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[9])"))])

(define_insn "@pred_vwcpx1_<mode>"
  [(set (match_operand:<XT_V_DOUBLE_EXTEND> 0 "register_operand" "=&vd, &vr")
    (if_then_else:<XT_V_DOUBLE_EXTEND>
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 6 "vector_length_operand"	" rvl,rvl")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (match_operand 9 "const_int_operand"	"  i,  i")
	     (match_operand 10 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
	(unspec_volatile:VI_DOUBLE_EXT_SRC
	[(match_operand 1 "const_0_3_operand" " i, i")
	 (match_operand:<XT_V_DOUBLE_EXTEND> 3 "register_operand" " 0, 0")
	 (match_operand:VI_DOUBLE_EXT_SRC 4 "register_operand" " vr, vr")
	 (match_operand:<VEL> 5 "register_operand" " r, r")]
    UNSPECV_XT_VWCPX1)
    (match_dup 3)))]
  "TARGET_XTHEADCVWN"
  "th.vwcpx1.vx\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[8])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[10])"))])

(define_insn "@pred_vwcpx2_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 5 "vector_length_operand"	" rvl,rvl")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (match_operand 9 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:<XT_V_DOUBLE_EXTEND> 2 "register_operand" " vr, vr")
     (match_operand:VI_DOUBLE_EXT_SRC 3 "register_operand" " vr, vr")
     (match_operand:VI_DOUBLE_EXT_SRC 4 "register_operand" " vr, vr")]
    UNSPECV_XT_VWCPX2)]
  "TARGET_XTHEADCVWN"
  "th.vwcpx2.vv\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[7])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[9])"))])

(define_insn "@pred_vwcpx2_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 5 "vector_length_operand"	" rvl,rvl")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (match_operand 9 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:<XT_V_DOUBLE_EXTEND> 2 "register_operand" " vr, vr")
     (match_operand:VF_DOUBLE_EXT_SRC 3 "register_operand" " vr, vr")
     (match_operand:VF_DOUBLE_EXT_SRC 4 "register_operand" " vr, vr")]
    UNSPECV_XT_VWCPX2)]
  "TARGET_XTHEADCVWN"
  "th.vwcpx2.vv\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[7])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "frm_mode")
	(symbol_ref "riscv_vector::get_frm_mode (operands[9])"))])

(define_insn "@pred_vwcpx3_<mode>"
  [(set (match_operand:<XT_V_DOUBLE_EXTEND> 0 "register_operand" "=&vd, &vr")
    (if_then_else:<XT_V_DOUBLE_EXTEND>
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 6 "vector_length_operand"	" rvl,rvl")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (match_operand 9 "const_int_operand"	"  i,  i")
	     (match_operand 10 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
	(unspec_volatile:VI_DOUBLE_EXT_SRC
	[(match_operand 1 "const_0_3_operand" " i, i")
	 (match_operand:<XT_V_DOUBLE_EXTEND> 3 "register_operand" " 0, 0")
	 (match_operand:VI_DOUBLE_EXT_SRC 4 "register_operand" " vr, vr")
	 (match_operand:VI_DOUBLE_EXT_SRC 5 "register_operand" " vr, vr")]
    UNSPECV_XT_VWCPX3)
    (match_dup 3)))]
  "TARGET_XTHEADCVWN"
  "th.vwcpx3.vv\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[8])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[10])"))])

(define_insn "@pred_vwcpx3_<mode>"
  [(set (match_operand:<XT_V_DOUBLE_EXTEND> 0 "register_operand" "=&vd, &vr")
    (if_then_else:<XT_V_DOUBLE_EXTEND>
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 6 "vector_length_operand"	" rvl,rvl")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (match_operand 9 "const_int_operand"	"  i,  i")
	     (match_operand 10 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
	(unspec_volatile:VF_DOUBLE_EXT_SRC
	[(match_operand 1 "const_0_3_operand" " i, i")
	 (match_operand:<XT_V_DOUBLE_EXTEND> 3 "register_operand" " 0, 0")
	 (match_operand:VF_DOUBLE_EXT_SRC 4 "register_operand" " vr, vr")
	 (match_operand:VF_DOUBLE_EXT_SRC 5 "register_operand" " vr, vr")]
    UNSPECV_XT_VWCPX3)
    (match_dup 3)))]
  "TARGET_XTHEADCVWN"
  "th.vwcpx3.vv\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[8])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "frm_mode")
	(symbol_ref "riscv_vector::get_frm_mode (operands[10])"))])

(define_insn "@pred_vncpx4_<mode>"
  [(unspec_volatile:VI_DOUBLE_EXT_SRC
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 4 "vector_length_operand"	" rvl,rvl")
	     (match_operand 5 "const_int_operand"	"  i,  i")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:<XT_V_DOUBLE_EXTEND> 2 "register_operand" " vr, vr")
     (match_operand:<XT_V_DOUBLE_EXTEND> 3 "register_operand" " vr, vr")]
    UNSPECV_XT_VNCPX4)]
  "TARGET_XTHEADCVWN"
  "th.vncpx4.vv\t%0,%2,%3%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "4")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[5])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[6])"))
   (set (attr "avl_type_idx") (const_int 7))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[8])"))])

(define_insn "@pred_vncpx4_<mode>"
  [(unspec_volatile:VF_DOUBLE_EXT_SRC
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 4 "vector_length_operand"	" rvl,rvl")
	     (match_operand 5 "const_int_operand"	"  i,  i")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:<XT_V_DOUBLE_EXTEND> 2 "register_operand" " vr, vr")
     (match_operand:<XT_V_DOUBLE_EXTEND> 3 "register_operand" " vr, vr")]
    UNSPECV_XT_VNCPX4)]
  "TARGET_XTHEADCVWN"
  "th.vncpx4.vv\t%0,%2,%3%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "4")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[5])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[6])"))
   (set (attr "avl_type_idx") (const_int 7))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[8])"))])

(define_insn "@pred_vncpx5_<mode>"
  [(set (match_operand:VI_DOUBLE_EXT_SRC 0 "register_operand" "=&vd, &vd, &vr, &vr")
    (if_then_else:VI_DOUBLE_EXT_SRC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
         (match_operand 6 "vector_length_operand"    "rvl, rvl, rvl, rvl")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
         (match_operand 10 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VI_DOUBLE_EXT_SRC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:<XT_V_DOUBLE_EXTEND> 4 "register_operand" "vr, vr, vr, vr")
         (match_operand:<XT_V_DOUBLE_EXTEND> 5 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VNCPX5)
      (match_operand:VI_DOUBLE_EXT_SRC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCVWN"
  "th.vncpx5.vv\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[8])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[10])"))])

(define_insn "@pred_vncpx5_<mode>"
  [(set (match_operand:VF_DOUBLE_EXT_SRC 0 "register_operand" "=&vd, &vd, &vr, &vr")
    (if_then_else:VF_DOUBLE_EXT_SRC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
         (match_operand 6 "vector_length_operand"    "rvl, rvl, rvl, rvl")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
         (match_operand 10 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VF_DOUBLE_EXT_SRC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:<XT_V_DOUBLE_EXTEND> 4 "register_operand" "vr, vr, vr, vr")
         (match_operand:<XT_V_DOUBLE_EXTEND> 5 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VNCPX5)
      (match_operand:VF_DOUBLE_EXT_SRC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCVWN"
  "th.vncpx5.vv\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[8])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[10])"))])

(define_insn "@pred_vfwqcpx6_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 5 "vector_length_operand"	" rvl,rvl")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (match_operand 9 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:<XT_V_QUAD_EXTEND> 2 "register_operand" " vr, vr")
     (match_operand:VF_QUAD_EXT_SRC 3 "register_operand" " vr, vr")
     (match_operand:<VEL> 4 "register_operand" " f, f")]
    UNSPECV_XT_VFWQCPX6)]
  "TARGET_XTHEADCVWN"
  "th.vfwqcpx6.vf\t%0,%2,%3,%4%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[7])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[9])"))])

(define_insn "@pred_vfwqcpx7_<mode>"
  [(set (match_operand:<XT_V_QUAD_EXTEND> 0 "register_operand" "=&vd, &vr")
    (if_then_else:<XT_V_QUAD_EXTEND>
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 6 "vector_length_operand"	" rvl,rvl")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (match_operand 9 "const_int_operand"	"  i,  i")
	     (match_operand 10 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
	(unspec_volatile:VF_QUAD_EXT_SRC
	[(match_operand 1 "const_0_3_operand" " i, i")
	 (match_operand:<XT_V_QUAD_EXTEND> 3 "register_operand" " 0, 0")
	 (match_operand:VF_QUAD_EXT_SRC 4 "register_operand" " vr, vr")
	 (match_operand:<VEL> 5 "register_operand" " f, f")]
    UNSPECV_XT_VFWQCPX7)
    (match_dup 3)))]
  "TARGET_XTHEADCVWN"
  "th.vfwqcpx7.vf\t%1,%3,%4,%5%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[8])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[9])"))])

(define_insn "@pred_vwqcpx8_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 4 "vector_length_operand"	" rvl,rvl")
	     (match_operand 5 "const_int_operand"	"  i,  i")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:VI_QUAD_EXT_SRC 2 "register_operand" " vr, vr")
     (match_operand:VI_QUAD_EXT_SRC 3 "register_operand" " vr, vr")]
    UNSPECV_XT_VWQCPX8)]
  "TARGET_XTHEADCVWN"
  "th.vwqcpx8.vv\t%0,%2,%3%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "4")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[5])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[6])"))
   (set (attr "avl_type_idx") (const_int 7))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[8])"))])

(define_insn "@pred_vwqcpx8_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 4 "vector_length_operand"	" rvl,rvl")
	     (match_operand 5 "const_int_operand"	"  i,  i")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:VF_QUAD_EXT_SRC 2 "register_operand" " vr, vr")
     (match_operand:VF_QUAD_EXT_SRC 3 "register_operand" " vr, vr")]
    UNSPECV_XT_VWQCPX8)]
  "TARGET_XTHEADCVWN"
  "th.vwqcpx8.vv\t%0,%2,%3%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "4")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[5])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[6])"))
   (set (attr "avl_type_idx") (const_int 7))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[8])"))])

(define_insn "@pred_vwqcpx9_<mode>"
  [(set (match_operand:<XT_V_QUAD_EXTEND> 0 "register_operand" "=&vd, &vd, &vr, &vr")
    (if_then_else:<XT_V_QUAD_EXTEND>
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 6 "vector_length_operand"    "rvl, rvl, rvl, rvl")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
	 (match_operand 10 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
	(unspec_volatile:VI_QUAD_EXT_SRC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VI_QUAD_EXT_SRC 4 "register_operand" "vr, vr, vr, vr")
	 (match_operand:VI_QUAD_EXT_SRC 5 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VWQCPX9)
      (match_operand:<XT_V_QUAD_EXTEND> 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCVWN"
  "th.vwqcpx9.vv\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[8])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[10])"))])

(define_insn "@pred_vwqcpx9_<mode>"
  [(set (match_operand:<XT_V_QUAD_EXTEND> 0 "register_operand" "=&vd, &vd, &vr, &vr")
    (if_then_else:<XT_V_QUAD_EXTEND>
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
         (match_operand 6 "vector_length_operand"    "rvl, rvl, rvl, rvl")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
         (match_operand 10 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VF_QUAD_EXT_SRC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VF_QUAD_EXT_SRC 4 "register_operand" "vr, vr, vr, vr")
         (match_operand:VF_QUAD_EXT_SRC 5 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VWQCPX9)
      (match_operand:<XT_V_QUAD_EXTEND> 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCVWN"
  "th.vwqcpx9.vv\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[8])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[10])"))])

(define_insn "@pred_vnqcpx10_<mode>"
  [(unspec_volatile:VI_QUAD_EXT_SRC
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 4 "vector_length_operand"	" rvl,rvl")
	     (match_operand 5 "const_int_operand"	"  i,  i")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:<XT_V_QUAD_EXTEND> 2 "register_operand" " vr, vr")
     (match_operand:<XT_V_QUAD_EXTEND> 3 "register_operand" " vr, vr")]
    UNSPECV_XT_VNQCPX10)]
  "TARGET_XTHEADCVWN"
  "th.vnqcpx10.vv\t%0,%2,%3%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "4")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[5])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[6])"))
   (set (attr "avl_type_idx") (const_int 7))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[8])"))])

(define_insn "@pred_vnqcpx10_<mode>"
  [(unspec_volatile:VF_QUAD_EXT_SRC
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 4 "vector_length_operand"	" rvl,rvl")
	     (match_operand 5 "const_int_operand"	"  i,  i")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:<XT_V_QUAD_EXTEND> 2 "register_operand" " vr, vr")
     (match_operand:<XT_V_QUAD_EXTEND> 3 "register_operand" " vr, vr")]
    UNSPECV_XT_VNQCPX10)]
  "TARGET_XTHEADCVWN"
  "th.vnqcpx10.vv\t%0,%2,%3%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "4")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[5])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[6])"))
   (set (attr "avl_type_idx") (const_int 7))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[8])"))])

(define_insn "@pred_vnqcpx11_<mode>"
  [(set (match_operand:VI_QUAD_EXT_SRC 0 "register_operand" "=&vd, &vd, &vr, &vr")
    (if_then_else:VI_QUAD_EXT_SRC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
         (match_operand 6 "vector_length_operand"    "rvl, rvl, rvl, rvl")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
         (match_operand 10 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VI_QUAD_EXT_SRC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:<XT_V_QUAD_EXTEND> 4 "register_operand" "vr, vr, vr, vr")
         (match_operand:<XT_V_QUAD_EXTEND> 5 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VNQCPX11)
      (match_operand:VI_QUAD_EXT_SRC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCVWN"
  "th.vnqcpx11.vv\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[8])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[10])"))])

(define_insn "@pred_vnqcpx11_<mode>"
  [(set (match_operand:VF_QUAD_EXT_SRC 0 "register_operand" "=&vd, &vd, &vr, &vr")
    (if_then_else:VF_QUAD_EXT_SRC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
         (match_operand 6 "vector_length_operand"    "rvl, rvl, rvl, rvl")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
         (match_operand 10 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VF_QUAD_EXT_SRC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:<XT_V_QUAD_EXTEND> 4 "register_operand" "vr, vr, vr, vr")
         (match_operand:<XT_V_QUAD_EXTEND> 5 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VNQCPX11)
      (match_operand:VF_QUAD_EXT_SRC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCVWN"
  "th.vnqcpx11.vv\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[8])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[10])"))])

(define_insn "@pred_vwcpx12_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 4 "vector_length_operand"	" rvl,rvl")
	     (match_operand 5 "const_int_operand"	"  i,  i")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:VI_DOUBLE_EXT_SRC 2 "register_operand" " vr, vr")
     (match_operand:VI_DOUBLE_EXT_SRC 3 "register_operand" " vr, vr")]
    UNSPECV_XT_VWCPX12)]
  "TARGET_XTHEADCVWN"
  "th.vwcpx12.vv\t%0,%2,%3%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "4")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[5])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[6])"))
   (set (attr "avl_type_idx") (const_int 7))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[8])"))])

(define_insn "@pred_vwcpx12_<mode>"
  [(unspec_volatile
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 4 "vector_length_operand"	" rvl,rvl")
	     (match_operand 5 "const_int_operand"	"  i,  i")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (match_operand 8 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:VF_DOUBLE_EXT_SRC 2 "register_operand" " vr, vr")
     (match_operand:VF_DOUBLE_EXT_SRC 3 "register_operand" " vr, vr")]
    UNSPECV_XT_VWCPX12)]
  "TARGET_XTHEADCVWN"
  "th.vwcpx12.vv\t%0,%2,%3%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "4")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[5])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[6])"))
   (set (attr "avl_type_idx") (const_int 7))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[8])"))])

(define_insn "@pred_vwcpx13_<mode>"
  [(set (match_operand:<XT_V_DOUBLE_EXTEND> 0 "register_operand" "=&vd, &vd, &vr, &vr")
    (if_then_else:<XT_V_DOUBLE_EXTEND>
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
	 (match_operand 6 "vector_length_operand"    "rvl, rvl, rvl, rvl")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
	 (match_operand 10 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
	(unspec_volatile:VI_DOUBLE_EXT_SRC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VI_DOUBLE_EXT_SRC 4 "register_operand" "vr, vr, vr, vr")
	 (match_operand:VI_DOUBLE_EXT_SRC 5 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VWCPX13)
      (match_operand:<XT_V_DOUBLE_EXTEND> 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCVWN"
  "th.vwcpx13.vv\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[8])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[10])"))])

(define_insn "@pred_vwcpx13_<mode>"
  [(set (match_operand:<XT_V_DOUBLE_EXTEND> 0 "register_operand" "=&vd, &vd, &vr, &vr")
    (if_then_else:<XT_V_DOUBLE_EXTEND>
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
         (match_operand 6 "vector_length_operand"    "rvl, rvl, rvl, rvl")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
	 (match_operand 9 "const_int_operand" "i, i, i, i")
         (match_operand 10 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VF_DOUBLE_EXT_SRC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:VF_DOUBLE_EXT_SRC 4 "register_operand" "vr, vr, vr, vr")
         (match_operand:VF_DOUBLE_EXT_SRC 5 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VWCPX13)
      (match_operand:<XT_V_DOUBLE_EXTEND> 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCVWN"
  "th.vwcpx13.vv\t%1,%0,%4,%5%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "6")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[7])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[8])"))
   (set (attr "avl_type_idx") (const_int 9))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[10])"))])

(define_insn "@pred_vncpx14_<mode>"
  [(unspec_volatile:VI_DOUBLE_EXT_SRC
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 3 "vector_length_operand"	" rvl,rvl")
	     (match_operand 4 "const_int_operand"	"  i,  i")
	     (match_operand 5 "const_int_operand"	"  i,  i")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:<XT_V_DOUBLE_EXTEND> 2 "register_operand" " vr, vr")]
    UNSPECV_XT_VNCPX14)]
  "TARGET_XTHEADCVWN"
  "th.vncpx14.v\t%0,%2%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "3")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[4])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[5])"))
   (set (attr "avl_type_idx") (const_int 6))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[7])"))])

(define_insn "@pred_vncpx14_<mode>"
  [(unspec_volatile:VF_DOUBLE_EXT_SRC
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 3 "vector_length_operand"	" rvl,rvl")
	     (match_operand 4 "const_int_operand"	"  i,  i")
	     (match_operand 5 "const_int_operand"	"  i,  i")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:<XT_V_DOUBLE_EXTEND> 2 "register_operand" " vr, vr")]
    UNSPECV_XT_VNCPX14)]
  "TARGET_XTHEADCVWN"
  "th.vncpx14.v\t%0,%2%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "3")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[4])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[5])"))
   (set (attr "avl_type_idx") (const_int 6))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[7])"))])

(define_insn "@pred_vnqcpx15_<mode>"
  [(unspec_volatile:VI_QUAD_EXT_SRC
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 3 "vector_length_operand"	" rvl,rvl")
	     (match_operand 4 "const_int_operand"	"  i,  i")
	     (match_operand 5 "const_int_operand"	"  i,  i")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:<XT_V_QUAD_EXTEND> 2 "register_operand" " vr, vr")]
    UNSPECV_XT_VNQCPX15)]
  "TARGET_XTHEADCVWN"
  "th.vnqcpx15.v\t%0,%2%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "3")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[4])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[5])"))
   (set (attr "avl_type_idx") (const_int 6))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[7])"))])

(define_insn "@pred_vnqcpx15_<mode>"
  [(unspec_volatile:VF_QUAD_EXT_SRC
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_mask_operand"	" vm, Wc1")
	     (match_operand 3 "vector_length_operand"	" rvl,rvl")
	     (match_operand 4 "const_int_operand"	"  i,  i")
	     (match_operand 5 "const_int_operand"	"  i,  i")
	     (match_operand 6 "const_int_operand"	"  i,  i")
	     (match_operand 7 "const_int_operand"	"  i,  i")
	     (reg:SI VL_REGNUM)
	     (reg:SI VTYPE_REGNUM)
	     (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
     (match_operand 0 "const_0_3_operand" " i, i")
     (match_operand:<XT_V_QUAD_EXTEND> 2 "register_operand" " vr, vr")]
    UNSPECV_XT_VNQCPX15)]
  "TARGET_XTHEADCVWN"
  "th.vnqcpx15.v\t%0,%2%p1"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "3")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[4])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[5])"))
   (set (attr "avl_type_idx") (const_int 6))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[7])"))])

(define_insn "@pred_vncpx16_<mode>"
  [(set (match_operand:VI_DOUBLE_EXT_SRC 0 "register_operand" "=&vd, &vd, &vr, &vr")
    (if_then_else:VI_DOUBLE_EXT_SRC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
         (match_operand 5 "vector_length_operand"    "rvl, rvl, rvl, rvl")
	 (match_operand 6 "const_int_operand" "i, i, i, i")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
         (match_operand 9 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VI_DOUBLE_EXT_SRC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:<XT_V_DOUBLE_EXTEND> 4 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VNCPX16)
      (match_operand:VI_DOUBLE_EXT_SRC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCVWN"
  "th.vncpx16.v\t%1,%0,%4%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[7])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[9])"))])

(define_insn "@pred_vncpx16_<mode>"
  [(set (match_operand:VF_DOUBLE_EXT_SRC 0 "register_operand" "=&vd, &vd, &vr, &vr")
    (if_then_else:VF_DOUBLE_EXT_SRC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
         (match_operand 5 "vector_length_operand"    "rvl, rvl, rvl, rvl")
	 (match_operand 6 "const_int_operand" "i, i, i, i")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
         (match_operand 9 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VF_DOUBLE_EXT_SRC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:<XT_V_DOUBLE_EXTEND> 4 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VNCPX16)
      (match_operand:VF_DOUBLE_EXT_SRC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCVWN"
  "th.vncpx16.v\t%1,%0,%4%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[7])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[9])"))])

(define_insn "@pred_vnqcpx17_<mode>"
  [(set (match_operand:VI_QUAD_EXT_SRC 0 "register_operand" "=&vd, &vd, &vr, &vr")
    (if_then_else:VI_QUAD_EXT_SRC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
         (match_operand 5 "vector_length_operand"    "rvl, rvl, rvl, rvl")
	 (match_operand 6 "const_int_operand" "i, i, i, i")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
         (match_operand 9 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI VXRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VI_QUAD_EXT_SRC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:<XT_V_QUAD_EXTEND> 4 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VNQCPX17)
      (match_operand:VI_QUAD_EXT_SRC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCVWN"
  "th.vnqcpx17.v\t%1,%0,%4%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[7])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "vxrm_mode")
	(symbol_ref "(attr_vxrm_mode) xt_get_vxrm_mode (operands[9])"))])

(define_insn "@pred_vnqcpx17_<mode>"
  [(set (match_operand:VF_QUAD_EXT_SRC 0 "register_operand" "=&vd, &vd, &vr, &vr")
    (if_then_else:VF_QUAD_EXT_SRC
      (unspec:<VM>
	[(match_operand:<VM> 2 "vector_mask_operand" "vm, vm, Wc1, Wc1")
         (match_operand 5 "vector_length_operand"    "rvl, rvl, rvl, rvl")
	 (match_operand 6 "const_int_operand" "i, i, i, i")
	 (match_operand 7 "const_int_operand" "i, i, i, i")
	 (match_operand 8 "const_int_operand" "i, i, i, i")
         (match_operand 9 "const_int_operand" "i, i, i, i")
	 (reg:SI VL_REGNUM)
	 (reg:SI VTYPE_REGNUM)
	 (reg:SI FRM_REGNUM)] UNSPEC_VPREDICATE)
      (unspec_volatile:VF_QUAD_EXT_SRC
	[(match_operand 1 "const_0_3_operand" "i, i, i, i")
	 (match_operand:<XT_V_QUAD_EXTEND> 4 "register_operand" "vr, vr, vr, vr")]
	UNSPECV_XT_VNQCPX17)
      (match_operand:VF_QUAD_EXT_SRC 3 "vector_merge_operand" "vu, 0, vu, 0")))]
  "TARGET_XTHEADCVWN"
  "th.vnqcpx17.v\t%1,%0,%4%p2"
  [(set_attr "type" "vwncpx")
   (set_attr "mode" "<MODE>")
   (set_attr "vl_op_idx" "5")
   (set (attr "ta") (symbol_ref "riscv_vector::get_ta(operands[6])"))
   (set (attr "ma") (symbol_ref "riscv_vector::get_ma(operands[7])"))
   (set (attr "avl_type_idx") (const_int 8))
   (set (attr "frm_mode")
	  (symbol_ref "riscv_vector::get_frm_mode (operands[9])"))])
