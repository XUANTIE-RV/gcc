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

(define_automaton "c906v")
(define_automaton "c906_div")

(define_cpu_unit "c906_alu_ex1" "c906v")
(define_cpu_unit "c906_bju_ex1" "c906v")
(define_cpu_unit "c906_mul_ex1, c906_mul_ex2, c906_mul_ex3" "c906v")
(define_cpu_unit "c906_div_ex1" "c906_div")
(define_cpu_unit "c906_cp0_ex1" "c906v")
(define_cpu_unit "c906_lsu_ag, c906_lsu_dc, c906_lsu_da" "c906v")

(define_reservation "c906_alu_cycle" "c906_alu_ex1")
(define_reservation "c906_bju_cycle" "c906_bju_ex1")
(define_reservation "c906_mul_cycle"
		    "c906_mul_ex1, c906_mul_ex2, c906_mul_ex3")
(define_reservation "c906_cp0_cycle" "c906_cp0_ex1")
(define_reservation "c906_cp0_v_cycle" "c906_cp0_ex1")

;; div : 5-36 cycle
(define_reservation "c906_div_cycle" "c906_div_ex1 * 20")

(define_reservation "c906_lsu_1_cycle" "c906_lsu_ag")
(define_reservation "c906_lsu_2_cycle" "c906_lsu_ag, c906_lsu_dc")

(define_reservation "c906_lsu_1_f_cycle" "c906_lsu_ag")
(define_reservation "c906_lsu_3_f_cycle" "c906_lsu_ag, c906_lsu_dc, c906_lsu_da")

(define_reservation "c906_lsu_1_v_cycle" "c906_lsu_ag")
(define_reservation "c906_lsu_3_v_cycle"
		    "c906_lsu_ag, c906_lsu_dc, c906_lsu_da")

;;
;; scalar integer

(define_insn_reservation "c906_alu" 1
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "unknown,arith,shift,logical,mtc,mfc,move,slt,
			multi,nop,ghost,dsp,const,bitmanip,rotate,
			max,min,minu,maxu,clz,ctz,cpop,
			condmove,mvpair,zicond,clmul,crypto"))
  "c906_alu_cycle")

(define_insn_reservation "c906_bju" 1
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "jump,call,auipc,unknown,branch,jalr,ret,sfb_alu"))
  "c906_bju_cycle")

(define_insn_reservation "c906_mul" 3
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "imul"))
  "c906_mul_cycle")

(define_insn_reservation "c906_div" 20
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "idiv"))
  "c906_div_cycle")

;; ld/st/set

(define_insn_reservation "c906_cp0" 1
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "trap,atomic"))
  "c906_cp0_cycle")

(define_insn_reservation "c906_cp0_v" 1
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "vector,rdvlenb,rdvl,wrvxrm,wrfrm,
       			rdfrm,vsetvl,vsetvl_pre"))
  "c906_cp0_v_cycle")

(define_insn_reservation "c906_lsu_1" 1
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "store"))
  "c906_lsu_1_cycle")

(define_insn_reservation "c906_lsu_1_f" 1
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "fpstore"))
  "c906_lsu_1_f_cycle")

(define_insn_reservation "c906_lsu_2" 2
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "load"))
  "c906_lsu_2_cycle")

(define_insn_reservation "c906_lsu_3" 2
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "fpload"))
  "c906_lsu_3_f_cycle")

(define_insn_reservation "c906_lsu_3_v" 2
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "vlde,vldm,vlds,vldux,vldox,vldff,vldr,vlsegde,vlsegdux,vlsegdox,vlsegdff,vlsegds"))
  "c906_lsu_3_v_cycle")

(define_insn_reservation "c906_lsu_1_v" 1
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "vste,vstm,vsts,vstux,vstox,vstr,vssegte,vssegts,vssegtux,vssegtox"))
  "c906_lsu_1_v_cycle")

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define_automaton "c906_fv_iex")
(define_automaton "c906_fv_fex")
(define_automaton "c906_fv_fdiv")
(define_automaton "c906_fv_vdiv")
(define_automaton "c906_fv_vfdiv")
(define_automaton "c906_fv_igp")
(define_automaton "c906_fv_fgp")

(define_cpu_unit "c906_vex1, c906_vex2, c906_vex3, c906_vex4" "c906_fv_iex")
(define_cpu_unit "c906_vid, c906_vfex1, c906_vfex2, c906_vfex3, c906_vfex4,
		  c906_vfex5" "c906_fv_fex")
(define_cpu_unit "c906_fdiv" "c906_fv_fdiv")
(define_cpu_unit "c906_vdiv" "c906_fv_vdiv")
(define_cpu_unit "c906_vfdiv" "c906_fv_vfdiv")
(define_cpu_unit "c906_vector_gp0, c906_vector_gp1, c906_vector_gp2,
		  c906_vector_gp3" "c906_fv_igp")
(define_cpu_unit "c906_vector_float_gp0, c906_vector_float_gp1,
		  c906_vector_float_gp2, c906_vector_float_gp3" "c906_fv_fgp")

(define_reservation "c906_vfpu_1_cycle" "c906_vfex1, c906_vfex2, c906_vfex3")
(define_reservation "c906_vfpu_2_cycle" "c906_vfex1, c906_vfex2, c906_vfex3, c906_vfex4")
(define_reservation "c906_vfpu_3_cycle"
		    "c906_vfex1, c906_vfex2, c906_vfex3, c906_vfex4, c906_vfex5")
(define_reservation "c906_vfpu_4_cycle" "c906_vid, c906_vfex1, c906_vfex2, c906_vfex3")

;; fdiv : 5-12/18/33  cycle
(define_reservation "c906_fdiv_cycle" "c906_fdiv * 18")

(define_reservation "c906_vdsp_1_cycle"
		    "c906_vex1, c906_vex2, c906_vex3")
(define_reservation "c906_vdsp_2_cycle"
		    "c906_vex1, c906_vex2, c906_vex3, c906_vex4")

;; vidiv : 3-21  cycle
(define_reservation "c906_vdiv_cycle" "c906_vdiv * 12")

(define_reservation "c906_vfpu_v_1_cycle"
		    "c906_vfex1, c906_vfex2, c906_vfex3")
(define_reservation "c906_vfpu_v_2_cycle"
		    "c906_vfex1, c906_vfex2, c906_vfex3, c906_vfex4")

;; vfdiv : 5-12/18/33  cycle
(define_reservation "c906_vfdiv_cycle" "c906_vfdiv * 18")

;;
;; scalar fp

(define_insn_reservation "c906_vfpu_saddsign" 3
  (and (eq_attr "tune" "c906v")
       (ior (and (eq_attr "type" "fadd")
		 (eq_attr "mode" "HF,SF"))
	    (eq_attr "type" "fmove")))
  "c906_vfpu_1_cycle")

(define_insn_reservation "c906_vfpu_minmax" 3
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "fminmax"))
  "c906_vfpu_1_cycle")

(define_insn_reservation "c906_vfpu_dadd" 4
  (and (eq_attr "tune" "c906v")
       (and (eq_attr "type" "fadd")
	    (eq_attr "mode" "DF")))
  "c906_vfpu_2_cycle")

(define_insn_reservation "c906_vfpu_cvt" 3
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "fcvt"))
  "c906_vfpu_1_cycle")

(define_insn_reservation "c906_vfpu_cmpcvti" 4
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "fcmp,fcvt_i2f,fcvt_f2i"))
  "c906_vfpu_4_cycle")

(define_insn_reservation "c906_vfpu_smul" 3
  (and (eq_attr "tune" "c906v")
       (and (eq_attr "type" "fmul")
	    (eq_attr "mode" "HF,SF")))
  "c906_vfpu_1_cycle")

(define_insn_reservation "c906_vfpu_dmul" 4
  (and (eq_attr "tune" "c906v")
       (and (eq_attr "type" "fmul")
	    (eq_attr "mode" "DF")))
  "c906_vfpu_2_cycle")

(define_insn_reservation "c906_vfpu_smadd" 4
  (and (eq_attr "tune" "c906v")
       (and (eq_attr "type" "fmadd")
	    (eq_attr "mode" "HF,SF")))
  "c906_vfpu_2_cycle")

(define_insn_reservation "c906_vfpu_dmadd" 5
  (and (eq_attr "tune" "c906v")
       (and (eq_attr "type" "fmadd")
	    (eq_attr "mode" "DF")))
  "c906_vfpu_3_cycle")

(define_insn_reservation "c906_vfpu_div" 18
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "fdiv,fsqrt"))
  "c906_fdiv_cycle")

;; vdsp integer

(define_insn_reservation "c906_vdsp_1" 3
  (and (eq_attr "tune" "c906v")
       (and (eq_attr "type" "vimul,viwmul,vimuladd,viwmuladd")
	    (eq_attr "sew" "8,16")))
  "c906_vdsp_1_cycle + c906_vector_gp0")

(define_insn_reservation "c906_vdsp_2" 3
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "vialu,viwalu,vicalu"))
  "c906_vdsp_1_cycle + c906_vector_gp1")

(define_insn_reservation "c906_vdsp_3" 3
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "vext,vshift,vnshift,vicmp,viminmax,
                        vimerge,vimov,vsalu,vaalu,vsmul,vsshift,vnclip,
                        vmalu,vmpop,vmffs,vmsfs,vmiota,vmidx,vimovvx,vimovxv,
                        vslideup,vslidedown,vislide1up,vislide1down,
                        vgather,vcompress,vmov,vandn"))
  "c906_vdsp_1_cycle + c906_vector_gp2")

(define_insn_reservation "c906_vdsp_4" 4
  (and (eq_attr "tune" "c906v")
       (and (eq_attr "type" "vimul,viwmul,vimuladd,viwmuladd")
	    (eq_attr "sew" "32,64")))
  "c906_vdsp_2_cycle + c906_vector_gp0")

(define_insn_reservation "c906_vdsp_5" 4
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "vbrev,vbrev8,vrev8,vired,viredl,viwred"))
  "c906_vdsp_2_cycle + c906_vector_gp1")

(define_insn_reservation "c906_vdsp_div" 12
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "vidiv"))
  "c906_vdiv_cycle + c906_vector_gp3")

;; vdsp float

(define_insn_reservation "c906_vfpu_1" 12
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "vfmuladd,vfwmuladd,vfsgnj,vfredu,vfredusum,vfredo,
       			vfredosum,vfwredu,vfwredo,vfcmp,vfwalu,vfwaluw,vfalu"))
  "c906_vfpu_v_1_cycle + c906_vector_float_gp1")

(define_insn_reservation "c906_vfpu_2" 12
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "vfmul,vfwmul"))
  "c906_vfpu_v_1_cycle + c906_vector_float_gp0")

(define_insn_reservation "c906_vfpu_3" 13
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "vfmuladd,vfwmuladd"))
  "c906_vfpu_v_2_cycle + c906_vector_float_gp0")

(define_insn_reservation "c906_vfpu_4" 12
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "vfmovvf,vfmovfv,vfslide1up,vfslide1down,vfclass,vfrecp,
       			vfmerge,vfcvtitof,vfcvtftoi,vfwcvtitof,vfwcvtftoi,
			vfwcvtftof,vfncvtitof,vfncvtftoi,vfncvtftof,vfmov,
			vfsgnj"))
  "c906_vfpu_v_1_cycle + c906_vector_float_gp2")

(define_insn_reservation "c906_vfpu_vdiv" 18
  (and (eq_attr "tune" "c906v")
       (eq_attr "type" "vfdiv,vfsqrt,vfrsqrt"))
  "c906_vfdiv_cycle + c906_vector_float_gp3")

(define_bypass 0 "c906_vfpu_1" "c906_vfpu_3")
(define_bypass 4 "c906_lsu_3_v" "c906_vdsp_2")
