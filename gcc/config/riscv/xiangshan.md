;; Scheduling description for XiangShan Nanhu.

;; Nanhu is a 6-issue, superscalar, out-of-order processor.

;; -----------------------------------------------------
;; Nanhu Core units
;; 1*jmp + 4*alu + 2*mdu + 4*fma + 2*fmisc + 2*ld + 2*st
;; -----------------------------------------------------

(define_automaton "xiangshan_jmp_rs")
(define_automaton "xiangshan_alu")
(define_automaton "xiangshan_mul_div")
(define_automaton "xiangshan_fma")
(define_automaton "xiangshan_fcvt_fdiv")
(define_automaton "xiangshan_ls")

(define_cpu_unit "xs_jmp" "xiangshan_jmp_rs")
(define_cpu_unit "xs_i2f" "xiangshan_jmp_rs")
(define_reservation "xs_jmp_rs" "xs_jmp | xs_i2f")

(define_cpu_unit "xs_alu_0, xs_alu_1, xs_alu_2, xs_alu_3" "xiangshan_alu")
(define_reservation "xs_alu_rs"
  "xs_alu_0 | xs_alu_1 | xs_alu_2 | xs_alu_3")

(define_cpu_unit "xs_mul_0, xs_mul_1" "xiangshan_mul_div")
(define_cpu_unit "xs_div_0, xs_div_1" "xiangshan_mul_div")
(define_reservation "xs_mdu_rs"
  "(xs_mul_0 + xs_div_0) | (xs_mul_1 + xs_div_1)")

(define_cpu_unit "xs_fadd_0, xs_fadd_1, xs_fadd_2, xs_fadd_3" "xiangshan_fma")
(define_cpu_unit "xs_fmul_0, xs_fmul_1, xs_fmul_2, xs_fmul_3" "xiangshan_fma")
(define_reservation "xs_fma_0" "xs_fadd_0 + xs_fmul_0")
(define_reservation "xs_fma_1" "xs_fadd_1 + xs_fmul_1")
(define_reservation "xs_fma_2" "xs_fadd_2 + xs_fmul_2")
(define_reservation "xs_fma_3" "xs_fadd_3 + xs_fmul_3")

(define_cpu_unit "xs_f2f_0, xs_f2f_1" "xiangshan_fcvt_fdiv")
(define_cpu_unit "xs_f2i_0, xs_f2i_1" "xiangshan_fcvt_fdiv")
(define_cpu_unit "xs_fdiv_0, xs_fdiv_1" "xiangshan_fcvt_fdiv")
(define_reservation "xs_fmisc_rs"
  "(xs_f2f_0 + xs_f2i_0 + xs_fdiv_0) | (xs_f2f_1 + xs_f2i_1 + xs_fdiv_1)")

(define_cpu_unit "xs_ld_0, xs_ld_1" "xiangshan_ls")
(define_cpu_unit "xs_st_0, xs_st_1" "xiangshan_ls")
(define_reservation "xs_ld_rs" "xs_ld_0 | xs_ld_1")
(define_reservation "xs_st_rs" "xs_st_0 | xs_st_1")

;; ----------------------------------------------------
;; Memory (load/store)
;; ----------------------------------------------------

(define_insn_reservation "xiangshan_load" 3
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "load"))
  "xs_ld_rs")

(define_insn_reservation "xiangshan_fpload" 3
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "fpload"))
  "xs_ld_rs")

(define_insn_reservation "xiangshan_store" 1
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "store"))
  "xs_st_rs")

(define_insn_reservation "xiangshan_fpstore" 1
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "fpstore"))
  "xs_st_rs")

;; ----------------------------------------------------
;; Int
;; ----------------------------------------------------

(define_insn_reservation "xiangshan_jump" 1
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "jump,call,auipc,unknown,branch,jalr,ret,sfb_alu"))
  "xs_jmp_rs")

(define_insn_reservation "xiangshan_i2f" 3
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "mtc"))
  "xs_jmp_rs")

(define_insn_reservation "xiangshan_mul" 3
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "imul"))
  "xs_mdu_rs")

(define_insn_reservation "xiangshan_div" 21
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "idiv"))
  "xs_mdu_rs")

(define_insn_reservation "xiangshan_alu" 1
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "nop,const,branch,arith,shift,slt,multi,logical,move,bitmanip,unknown"))
  "xs_alu_rs")

;; ----------------------------------------------------
;; Float
;; ----------------------------------------------------


(define_insn_reservation "xiangshan_fma" 5
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "fmadd"))
  "xs_fma_0 | xs_fma_1 | xs_fma_2 | xs_fma_3")

(define_insn_reservation "xiangshan_fadd" 3
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "fadd"))
  "xs_fadd_0 | xs_fadd_1 | xs_fadd_2 | xs_fadd_3")

(define_insn_reservation "xiangshan_fmul" 3
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "fmul"))
  "xs_fmul_0 | xs_fmul_1 | xs_fmul_2 | xs_fmul_3")

(define_insn_reservation "xiangshan_f2f" 3
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "fcvt,fmove"))
  "xs_fmisc_rs")

(define_insn_reservation "xiangshan_fminmax" 3
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "fminmax"))
  "xs_fmisc_rs")

(define_insn_reservation "xiangshan_f2i" 3
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "mfc,fcmp"))
  "xs_fmisc_rs")

(define_insn_reservation "xiangshan_sfdiv" 11
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "fdiv")
       (eq_attr "mode" "SF"))
  "xs_fmisc_rs")

(define_insn_reservation "xiangshan_sfsqrt" 17
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "fsqrt")
       (eq_attr "mode" "SF"))
  "xs_fmisc_rs")

(define_insn_reservation "xiangshan_dfdiv" 21
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "fdiv")
       (eq_attr "mode" "DF"))
  "xs_fmisc_rs")

(define_insn_reservation "xiangshan_dfsqrt" 37
  (and (eq_attr "tune" "xiangshan")
       (eq_attr "type" "fsqrt")
       (eq_attr "mode" "DF"))
  "xs_fmisc_rs")
