/* RISC-V Xuantie coprocessor interface intrinsics include file.
   Copyright (C) 2024 Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   Under Section 7 of GPL version 3, you are granted additional
   permissions described in the GCC Runtime Library Exception, version
   3.1, as published by the Free Software Foundation.

   You should have received a copy of the GNU General Public License and
   a copy of the GCC Runtime Library Exception along with this program;
   see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef __RISCV_XT_COP_H
#define __RISCV_XT_COP_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__riscv_xtheadcbi)

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_cpx0 (const unsigned idx, unsigned long rs1, const unsigned imm10)
{
    __builtin_riscv_th_cpx0 (idx,rs1,imm10);
}

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_cpx1 (const unsigned idx, unsigned long rs1)
{
    __builtin_riscv_th_cpx1 (idx,rs1);
}

extern __inline unsigned long
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_cpx2 (const unsigned idx, unsigned long rs1, const unsigned imm5)
{
    return __builtin_riscv_th_cpx2 (idx,rs1,imm5);
}

extern __inline unsigned long
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_cpx3 (const unsigned idx, unsigned long rs1)
{
    return __builtin_riscv_th_cpx3 (idx,rs1);
}

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_cpx4 (const unsigned idx, unsigned long rs1, unsigned long rs2, const unsigned imm5)
{
    __builtin_riscv_th_cpx4 (idx,rs1,rs2,imm5);
}

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_cpx5 (const unsigned idx, unsigned long rs1, unsigned long rs2)
{
    __builtin_riscv_th_cpx5 (idx,rs1,rs2);
}

extern __inline unsigned long
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_cpx6 (const unsigned idx, unsigned long rs1, unsigned long rs2)
{
    return __builtin_riscv_th_cpx6 (idx,rs1,rs2);
}

extern __inline unsigned long
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_cpx9 (const unsigned idx, unsigned long rd, unsigned long rs1, const unsigned imm10)
{
    return __builtin_riscv_th_cpx9 (idx,rd,rs1,imm10);
}

extern __inline unsigned long
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_cpx10 (const unsigned idx, const unsigned imm10)
{
    return __builtin_riscv_th_cpx10 (idx,imm10);
}

#endif // __riscv_xtheadcbi

#if defined(__riscv_xtheadcei)

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_cpx7 (const unsigned idx, unsigned long rd, unsigned long rs1, unsigned long rs2)
{
    __builtin_riscv_th_cpx7 (idx,rd,rs1,rs2);
}

extern __inline unsigned long
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_cpx8 (const unsigned idx, unsigned long rd, unsigned long rs1, unsigned long rs2)
{
    return __builtin_riscv_th_cpx8 (idx,rd,rs1,rs2);
}

#endif // __riscv_xtheadcei

#if defined (__riscv_xtheadcv)
#include <riscv_vector.h>
#include "riscv_th_cop_vector.h"
#endif // __riscv_xtheadcv

#if defined (__riscv_xtheadcf)

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx0_f32 (const unsigned idx, float fs1)
{
    __builtin_riscv_th_fcpx0_f32 (idx,fs1);
}

extern __inline float
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx1_f32 (const unsigned idx, float fs1)
{
    return __builtin_riscv_th_fcpx1_f32 (idx,fs1);
}

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx2_f32 (const unsigned idx, float fs1, float fs2)
{
    __builtin_riscv_th_fcpx2_f32 (idx,fs1,fs2);
}

extern __inline float
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx3_f32 (const unsigned idx, float fs1, float fs2)
{
    return __builtin_riscv_th_fcpx3_f32 (idx,fs1,fs2);
}

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx4_f32 (const unsigned idx, float fs3, float fs1, float fs2)
{
    __builtin_riscv_th_fcpx4_f32 (idx,fs3,fs1,fs2);
}

extern __inline float
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx5_f32 (const unsigned idx, float fd, float fs1, float fs2)
{
    return __builtin_riscv_th_fcpx5_f32 (idx,fd,fs1,fs2);
}

extern __inline float
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx6_f32 (const unsigned idx, float fs2, const unsigned imm5)
{
    __builtin_riscv_th_fcpx6_f32 (idx,fs2,imm5);
}


#if defined (__riscv_d)

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx0_f64 (const unsigned idx, double fs1)
{
    __builtin_riscv_th_fcpx0_f64 (idx,fs1);
}

extern __inline double
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx1_f64 (const unsigned idx, double fs1)
{
    return __builtin_riscv_th_fcpx1_f64 (idx,fs1);
}

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx2_f64 (const unsigned idx, double fs1, double fs2)
{
    __builtin_riscv_th_fcpx2_f64 (idx,fs1,fs2);
}

extern __inline double
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx3_f64 (const unsigned idx, double fs1, double fs2)
{
    return __builtin_riscv_th_fcpx3_f64 (idx,fs1,fs2);
}

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx4_f64 (const unsigned idx, double fs3, double fs1, double fs2)
{
    __builtin_riscv_th_fcpx4_f64 (idx,fs3,fs1,fs2);
}

extern __inline double
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx5_f64 (const unsigned idx, double fd, double fs1, double fs2)
{
    return __builtin_riscv_th_fcpx5_f64 (idx,fd,fs1,fs2);
}

extern __inline double
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx6_f64 (const unsigned idx, double fs2, const unsigned imm5)
{
    __builtin_riscv_th_fcpx6_f64 (idx,fs2,imm5);
}

#endif /* __riscv_d */

#if defined (__riscv_zfhmin)

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx0_f16 (const unsigned idx, _Float16 fs1)
{
    __builtin_riscv_th_fcpx0_f16 (idx,fs1);
}

extern __inline _Float16
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx1_f16 (const unsigned idx, _Float16 fs1)
{
    return __builtin_riscv_th_fcpx1_f16 (idx,fs1);
}

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx2_f16 (const unsigned idx, _Float16 fs1, _Float16 fs2)
{
    __builtin_riscv_th_fcpx2_f16 (idx,fs1,fs2);
}

extern __inline _Float16
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx3_f16 (const unsigned idx, _Float16 fs1, _Float16 fs2)
{
    return __builtin_riscv_th_fcpx3_f16 (idx,fs1,fs2);
}

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx4_f16 (const unsigned idx, _Float16 fs3, _Float16 fs1, _Float16 fs2)
{
    __builtin_riscv_th_fcpx4_f16 (idx,fs3,fs1,fs2);
}

extern __inline _Float16
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx5_f16 (const unsigned idx, _Float16 fd, _Float16 fs1, _Float16 fs2)
{
    return __builtin_riscv_th_fcpx5_f16 (idx,fd,fs1,fs2);
}

extern __inline _Float16
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx6_f16 (const unsigned idx, _Float16 fs2, const unsigned imm5)
{
    __builtin_riscv_th_fcpx6_f16 (idx,fs2,imm5);
}

#endif // __riscv_zfhmin

#if defined (__riscv_zfbfmin)

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx0_bf16 (const unsigned idx, __bf16 fs1)
{
    __builtin_riscv_th_fcpx0_bf16 (idx,fs1);
}

extern __inline __bf16
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx1_bf16 (const unsigned idx, __bf16 fs1)
{
    return __builtin_riscv_th_fcpx1_bf16 (idx,fs1);
}

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx2_bf16 (const unsigned idx, __bf16 fs1, __bf16 fs2)
{
    __builtin_riscv_th_fcpx2_bf16 (idx,fs1,fs2);
}

extern __inline __bf16
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx3_bf16 (const unsigned idx, __bf16 fs1, __bf16 fs2)
{
    return __builtin_riscv_th_fcpx3_bf16 (idx,fs1,fs2);
}

extern __inline void
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx4_bf16 (const unsigned idx, __bf16 fs3, __bf16 fs1, __bf16 fs2)
{
    __builtin_riscv_th_fcpx4_bf16 (idx,fs3,fs1,fs2);
}

extern __inline __bf16
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx5_bf16 (const unsigned idx, __bf16 fd, __bf16 fs1, __bf16 fs2)
{
    return __builtin_riscv_th_fcpx5_bf16 (idx,fd,fs1,fs2);
}

extern __inline __bf16
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
__riscv_th_fcpx6_bf16 (const unsigned idx, __bf16 fs2, const unsigned imm5)
{
    __builtin_riscv_th_fcpx6_bf16 (idx,fs2,imm5);
}

#endif  // __riscv_zfbfmin

#endif  // __riscv_xtheadcf

#if defined (__cplusplus)
}
#endif // __cplusplus
#endif // __RISCV_XT_COP_H