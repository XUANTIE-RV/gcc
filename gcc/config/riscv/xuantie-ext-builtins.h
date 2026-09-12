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

#ifndef GCC_XUANTIE_EXT_BUILTINS_H
#define GCC_XUANTIE_EXT_BUILTINS_H

#define RISCV_ATYPE_UIMM6 xt_build_imm_type (XT_BUILTIN_IMM6, UNSIGNED)
#define RISCV_ATYPE_UIMM5 xt_build_imm_type (XT_BUILTIN_IMM5, UNSIGNED)
#define RISCV_ATYPE_UIMM4 xt_build_imm_type (XT_BUILTIN_IMM4, UNSIGNED)
#define RISCV_ATYPE_UIMM3 xt_build_imm_type (XT_BUILTIN_IMM3, UNSIGNED)
#define RISCV_ATYPE_UIMM2 xt_build_imm_type (XT_BUILTIN_IMM2, UNSIGNED)
#define RISCV_ATYPE_CUIMM6 RISCV_ATYPE_UIMM6
#define RISCV_ATYPE_CUIMM5 RISCV_ATYPE_UIMM5
#define RISCV_ATYPE_CUIMM4 RISCV_ATYPE_UIMM4
#define RISCV_ATYPE_CUIMM3 RISCV_ATYPE_UIMM3
#define RISCV_ATYPE_CUIMM2 RISCV_ATYPE_UIMM2

/* DSP types.  */

#define RISCV_ATYPE_RVP4QI build_vector_type_for_mode (intQI_type_node, RVP4QImode)
#define RISCV_ATYPE_RVP8QI build_vector_type_for_mode (intQI_type_node, RVP8QImode)
#define RISCV_ATYPE_RVP2HI build_vector_type_for_mode (intHI_type_node, RVP2HImode)
#define RISCV_ATYPE_RVP4HI build_vector_type_for_mode (intHI_type_node, RVP4HImode)
#define RISCV_ATYPE_RVP2SI build_vector_type_for_mode (intSI_type_node, RVP2SImode)

#define RISCV_ATYPE_RVP4UQI build_vector_type_for_mode (unsigned_intQI_type_node, RVP4QImode)
#define RISCV_ATYPE_RVP8UQI build_vector_type_for_mode (unsigned_intQI_type_node, RVP8QImode)
#define RISCV_ATYPE_RVP2UHI build_vector_type_for_mode (unsigned_intHI_type_node, RVP2HImode)
#define RISCV_ATYPE_RVP4UHI build_vector_type_for_mode (unsigned_intHI_type_node, RVP4HImode)
#define RISCV_ATYPE_RVP2USI build_vector_type_for_mode (unsigned_intSI_type_node, RVP2SImode)

#define RISCV_ATYPE_DI intDI_type_node
#define RISCV_ATYPE_SF float_type_node
#define RISCV_ATYPE_DF double_type_node
#define RISCV_ATYPE_HF float16_type_node
#define RISCV_ATYPE_BF bfloat16_type_node

/* Declare an availability predicate for built-in functions of xuantie.  */
#define XUANTIE_AVAIL(NAME, COND)	\
 static unsigned int			\
 riscv_builtin_avail_##NAME (void)	\
 {					\
   return (COND);			\
 }

XUANTIE_AVAIL (dsp, TARGET_XUANTIE_DSP)
XUANTIE_AVAIL (zpsfoperand, TARGET_XUANTIE_ZPSFOPERAND)
XUANTIE_AVAIL (dsp32, TARGET_XUANTIE_DSP && !TARGET_64BIT)
XUANTIE_AVAIL (dsp64, TARGET_XUANTIE_DSP && TARGET_64BIT)
XUANTIE_AVAIL (xtheadcbi32, TARGET_XUANTIE_COP_BI && !TARGET_64BIT)
XUANTIE_AVAIL (xtheadcbi64, TARGET_XUANTIE_COP_BI && TARGET_64BIT)
XUANTIE_AVAIL (xtheadcei32, TARGET_XUANTIE_COP_EI && !TARGET_64BIT)
XUANTIE_AVAIL (xtheadcei64, TARGET_XUANTIE_COP_EI && TARGET_64BIT)
XUANTIE_AVAIL (xtheadcf, TARGET_XUANTIE_COP_F)
XUANTIE_AVAIL (xtheadcfhf, TARGET_XUANTIE_COP_F && TARGET_ZFHMIN)
XUANTIE_AVAIL (xtheadcfbf, TARGET_XUANTIE_COP_F && TARGET_ZFBFMIN)
XUANTIE_AVAIL (zfa_float, TARGET_ZFA && TARGET_HARD_FLOAT)
XUANTIE_AVAIL (zfa_double, TARGET_ZFA && TARGET_DOUBLE_FLOAT)

static void xt_init_builtins (void);
static tree xt_builtin_decl (unsigned int, bool);
static rtx xt_rvm_expand_builtins (unsigned int code, tree exp, rtx target);
#endif /* ! GCC_XUANTIE_EXT_BUILTINS_H */
