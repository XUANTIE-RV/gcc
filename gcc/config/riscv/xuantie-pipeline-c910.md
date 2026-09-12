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

(define_automaton "c910")
(define_automaton "c910_div")
(define_automaton "c910_fv_fdiv")
(define_automaton "c910_fv_vdiv")

(define_cpu_unit "c910_alu_ex1" "c910")
(define_cpu_unit "c910_bju_ex1" "c910")
(define_cpu_unit "c910_mul_ex1, c910_mul_ex2, c910_mul_ex3, c910_mul_ex4" "c910")
(define_cpu_unit "c910_cp0_ex1" "c910")
(define_cpu_unit "c910_div_ex1" "c910_div")
(define_cpu_unit "c910_lsu_ag, c910_lsu_dc, c910_lsu_da" "c910")

(define_reservation "c910_alu_cycle" "c910_alu_ex1")
(define_reservation "c910_bju_cycle" "c910_bju_ex1")
(define_reservation "c910_mul_cycle"
		    "c910_mul_ex1, c910_mul_ex2, c910_mul_ex3, c910_mul_ex4")
(define_reservation "c910_cp0_cycle" "c910_cp0_ex1")
(define_reservation "c910_cp0_v_cycle" "c910_cp0_ex1")

;; div : 4-20 cycle
(define_reservation "c910_div_cycle" "c910_div_ex1 * 12")

(define_reservation "c910_lsu_1_cycle" "c910_lsu_ag")
(define_reservation "c910_lsu_3_cycle" "c910_lsu_ag, c910_lsu_dc, c910_lsu_da")

(define_reservation "c910_lsu_3_v_cycle"
		    "c910_lsu_ag, c910_lsu_dc, c910_lsu_da")

;;
;; scalar integer

(define_insn_reservation "c910_alu" 1
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "unknown,arith,shift,logical,mtc,mfc,move,slt,
			multi,nop,ghost,dsp,const,bitmanip,rotate,
			max,min,minu,maxu,clz,ctz,cpop,
			condmove,mvpair,zicond,clmul,crypto"))
  "c910_alu_cycle")

(define_insn_reservation "c910" 1
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "jump,call,auipc,unknown,branch,jalr,ret,sfb_alu"))
  "c910_bju_cycle")

(define_insn_reservation "c910_mul" 4
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "imul"))
  "c910_mul_cycle")

(define_insn_reservation "c910_div" 12
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "idiv"))
  "c910_div_cycle")

;; ld/st/set

(define_insn_reservation "c910_cp0" 1
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "trap,atomic"))
  "c910_cp0_cycle")

(define_insn_reservation "c910_cp0_v" 1
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "vector,rdvlenb,rdvl,wrvxrm,wrfrm,
       			rdfrm,vsetvl,vsetvl_pre"))
  "c910_cp0_v_cycle")

(define_insn_reservation "c910_lsu_1" 1
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "store,fpstore"))
  "c910_lsu_1_cycle")

(define_insn_reservation "c910_lsu_2" 3
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "load,fpload"))
  "c910_lsu_3_cycle")

(define_insn_reservation "c910_lsu_vload" 6
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "vlde,vldm,vlds,vldux,vldox,vldff,vldr,vlsegde,vlsegdux,vlsegdox,vlsegdff,vlsegds"))
  "c910_lsu_3_v_cycle, c910_lsu_da * 3")

(define_insn_reservation "c910_lsu_vstore" 4
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "vste,vstm,vsts,vstux,vstox,vstr,vssegte,vssegts,vssegtux,vssegtox"))
  "c910_lsu_3_v_cycle, c910_lsu_da")

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define_automaton "c910_fv")

(define_cpu_unit "c910_fvex1, c910_fvex2, c910_fvex3, c910_fvex4, c910_fvex5" "c910_fv")
(define_cpu_unit "c910_fdiv" "c910_fv_fdiv")
(define_cpu_unit "c910_vdiv" "c910_fv_vdiv")
(define_cpu_unit "c910_vector_gp0, c910_vector_gp1, c910_vector_gp2, c910_vector_gp3" "c910_fv")
(define_cpu_unit "c910_vector_float_gp0, c910_vector_float_gp1, c910_vector_float_gp2, c910_vector_float_gp3" "c910_fv")

(define_reservation "c910_fv_3_cycle" "c910_fvex1, c910_fvex2, c910_fvex3")
(define_reservation "c910_fv_4_cycle" "c910_fvex1, c910_fvex2, c910_fvex3, c910_fvex4")
(define_reservation "c910_fv_5_cycle" "c910_fvex1, c910_fvex2, c910_fvex3, c910_fvex4, c910_fvex5")

;; fdiv : 4-7/10/17  cycle
(define_reservation "c910_fdiv_cycle" "c910_fdiv * 10")

;; vidiv : 6-23/25  cycle
(define_reservation "c910_vdiv_cycle" "c910_vdiv * 15")

;;
;; scalar fp

(define_insn_reservation "c910_fv_saddsign" 3
  (and (eq_attr "tune" "c910")
	(eq_attr "type" "fadd"))
  "c910_fv_3_cycle")

(define_insn_reservation "c910_fv_move" 2
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "fmove,fcvt,fcmp,fcvt_i2f,fcvt_f2i"))
  "c910_fvex1 * 2")

(define_insn_reservation "c910_f_minmax" 2
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "fminmax"))
  "c910_fvex1 * 2")

(define_insn_reservation "c910_fv_hfmul" 3
  (and (eq_attr "tune" "c910")
       (and (eq_attr "type" "fmul")
	    (eq_attr "mode" "HF,BF")))
  "c910_fv_3_cycle")

(define_insn_reservation "c910_fv_mul" 4
  (and (eq_attr "tune" "c910")
       (and (eq_attr "type" "fmul")
	    (eq_attr "mode" "SF,DF")))
  "c910_fv_4_cycle")

(define_insn_reservation "c910_fv_hfmadd" 4
  (and (eq_attr "tune" "c910")
       (and (eq_attr "type" "fmadd")
	    (eq_attr "mode" "HF,BF")))
  "c910_fv_4_cycle")

(define_insn_reservation "c910_fv_madd" 5
  (and (eq_attr "tune" "c910")
       (and (eq_attr "type" "fmadd")
	    (eq_attr "mode" "SF,DF")))
  "c910_fv_5_cycle")

(define_insn_reservation "c910_vfpu_div" 10
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "fdiv,fsqrt"))
  "c910_fdiv_cycle")

;; vector integer

(define_insn_reservation "c910_vector_1" 3
  (and (eq_attr "tune" "c910")
       (and (eq_attr "type" "vimul,viwmul,vimuladd,viwmuladd")
	    (eq_attr "sew" "8,16")))
  "c910_fv_3_cycle + c910_vector_gp0")

(define_insn_reservation "c910_vector_2" 3
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "vialu,viwalu,vicalu"))
  "c910_fv_3_cycle + c910_vector_gp1")

(define_insn_reservation "c910_vector_3" 3
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "vext,vshift,vnshift,vicmp,viminmax,
                        vimerge,vimov,vsalu,vaalu,vsmul,vsshift,vnclip,
                        vmalu,vmpop,vmffs,vmsfs,vmiota,vmidx,vimovvx,vimovxv,
                        vslideup,vslidedown,vislide1up,vislide1down,
                        vgather,vcompress,vmov,vandn"))
  "c910_fv_3_cycle + c910_vector_gp2")

(define_insn_reservation "c910_vector_4" 4
  (and (eq_attr "tune" "c910")
        (and (eq_attr "type" "vimul,viwmul,vimuladd,viwmuladd")
	     (eq_attr "sew" "32,64")))
  "c910_fv_4_cycle + c910_vector_gp0")

(define_insn_reservation "c910_vector_5" 4
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "vbrev,vbrev8,vrev8,vired,viredl,viwred"))
  "c910_fv_4_cycle + c910_vector_gp1")

(define_insn_reservation "c910_vector_div" 15
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "vidiv"))
  "c910_vdiv_cycle + c910_vector_gp3")

;; vector float

(define_insn_reservation "c910_vector_fp_1" 3
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "vfmuladd,vfwmuladd,vfsgnj,vfredu,vfredusum,vfredo,
       			vfredosum,vfwredu,vfwredo,vfwalu,vfwaluw,vfalu"))
  "c910_fv_3_cycle + c910_vector_float_gp1")

(define_insn_reservation "c910_vector_fp_2" 2
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "vfcmp"))
  "c910_fvex1 * 2 + c910_vector_float_gp1")

(define_insn_reservation "c910_vector_fp_3" 4
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "vfmul,vfwmul"))
  "c910_fv_4_cycle + c910_vector_float_gp0")

(define_insn_reservation "c910_vector_fp_4" 5
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "vfmuladd,vfwmuladd"))
  "c910_fv_5_cycle + c910_vector_float_gp0")

(define_insn_reservation "c910_vector_fp_5" 2
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "vfmovvf,vfmovfv,vfslide1up,vfslide1down,vfclass,vfrecp,
       			vfmerge,vfcvtitof,vfcvtftoi,vfwcvtitof,vfwcvtftoi,
			vfwcvtftof,vfncvtitof,vfncvtftoi,vfncvtftof,vfmov,
			vfsgnj"))
  "c910_fvex1 * 2 + c910_vector_float_gp2")

(define_insn_reservation "c910_vector_fp_div" 10
  (and (eq_attr "tune" "c910")
       (eq_attr "type" "vfdiv,vfsqrt,vfrsqrt"))
  "c910_fdiv_cycle + c910_vector_float_gp3")
