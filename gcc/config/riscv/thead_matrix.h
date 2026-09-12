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

#ifndef _GCC_RISCV_MATRIX_H
#define _GCC_RISCV_MATRIX_H 1

#if !defined (__riscv_matrix)
#error "Matrix intrinsics require the matrix extension."
#else

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#pragma riscv intrinsic "xtheadmatrix"

#define __MATRIX_INTRINSIC_PREFIX						\
__extension__ extern __inline					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

typedef size_t mrow_t;
typedef size_t mcol_t;

enum __MATRIX_CSR
{
  RVM_XMRSTART = 0,
  RVM_XMCSR,
  RVM_XMSIZE,
  RVM_XMLENB,
  RVM_XRLENB,
  RVM_XMISA,
  RVM_NULL
};

__MATRIX_INTRINSIC_PREFIX
unsigned long __riscv_th_mread_csr (enum __MATRIX_CSR csr)
{
  unsigned long rm = 0;
  switch (csr)
    {
    case RVM_XMRSTART:
      __asm__ __volatile__ ("csrr\t%0,xmrstart" : "=r"(rm) : : "memory");
      break;
    case RVM_XMCSR:
      __asm__ __volatile__ ("csrr\t%0,xmcsr" : "=r"(rm) : : "memory");
      break;
    case RVM_XMSIZE:
      __asm__ __volatile__ ("csrr\t%0,xmsize" : "=r"(rm) : : "memory");
      break;
    case RVM_XMLENB:
      __asm__ __volatile__ ("csrr\t%0,xmlenb" : "=r"(rm) : : "memory");
      break;
    case RVM_XRLENB:
      __asm__ __volatile__ ("csrr\t%0,xrlenb" : "=r"(rm) : : "memory");
      break;
    case RVM_XMISA:
      __asm__ __volatile__ ("csrr\t%0,xmisa" : "=r"(rm) : : "memory");
      break;
    }
  return rm;
}

__MATRIX_INTRINSIC_PREFIX
void __riscv_th_mwrite_csr (enum __MATRIX_CSR csr, unsigned long value)
{
  switch (csr)
    {
    case RVM_XMRSTART:
      __asm__ __volatile__ ("csrw\txmrstart,%z0" : : "rJ"(value) : "memory");
      break;
    case RVM_XMCSR:
      __asm__ __volatile__ ("csrw\txmcsr,%z0" : : "rJ"(value) : "memory");
      break;
    case RVM_XMSIZE:
      __asm__ __volatile__ ("csrw\txmsize,%z0" : : "rJ"(value) : "memory");
      break;
    }
}

#define __riscv_th_mrelease __riscv_th_mrelease_i32

#define __riscv_th_msetmrow_m __riscv_th_msetmrow_m_i32
#define __riscv_th_msetmrow_n __riscv_th_msetmrow_n_i32
#define __riscv_th_msetmrow_k __riscv_th_msetmrow_k_i32

__MATRIX_INTRINSIC_PREFIX
mcol_t __riscv_th_msetmcol_e8 (mcol_t c)
{return (mcol_t)((__riscv_th_msetmcol_i32 (c * 1) >> 16 & 0xffff));}

__MATRIX_INTRINSIC_PREFIX
mcol_t __riscv_th_msetmcol_e16 (mcol_t c)
{return (mcol_t)((__riscv_th_msetmcol_i32 (c * 2) >> 16 & 0xffff)/2);}

__MATRIX_INTRINSIC_PREFIX
mcol_t __riscv_th_msetmcol_e32 (mcol_t c)
{return (mcol_t)((__riscv_th_msetmcol_i32 (c * 4) >> 16 & 0xffff)/4);}

__MATRIX_INTRINSIC_PREFIX
mcol_t __riscv_th_msetmcol_e64 (mcol_t c)
{return (mcol_t)((__riscv_th_msetmcol_i32 (c * 8) >> 16 & 0xffff)/8);}

#if defined(__riscv_xlen) && __riscv_xlen != 64

__MATRIX_INTRINSIC_PREFIX mint64_t __riscv_th_mmov_m_x_i64 (mint64_t dest, int64_t src, size_t index)
{
  muint32_t temp = __riscv_th_mreinterpret_u32 (dest);
  temp = __riscv_th_mmov_m_x_u32 (temp, src & 0xffffffff, index * 2);
  temp = __riscv_th_mmov_m_x_u32 (temp, src >> 32, index * 2 + 1);
  return __riscv_th_mreinterpret_i64 (temp);
}
__MATRIX_INTRINSIC_PREFIX int64_t __riscv_th_mmov_x_m_i64 (mint64_t src, size_t index)
{
  muint32_t temp = __riscv_th_mreinterpret_u32 (src);
  uint32_t t1 = __riscv_th_mmov_x_m_u32 (temp, index * 2);
  uint32_t t2 = __riscv_th_mmov_x_m_u32 (temp, index * 2 + 1);
  uint64_t low = t1;
  uint64_t high = t2;
  return (high << 32 | low);
}

__MATRIX_INTRINSIC_PREFIX mint64_t __riscv_th_mdup_m_x_i64 (int64_t src)
{
  mint64_t temp = __riscv_th_mundefined_i64 ();
  mint64_t res = __riscv_th_mundefined_i64 ();
  temp = __riscv_th_mmov_m_x_i64 (temp, src, 0);
  temp = __riscv_th_mmov_mv_i64 (temp, 0);
  mrow_t row = __riscv_th_mread_csr (RVM_XRLENB) / 4;
  mrow_t col = row / 2;
  __riscv_th_mst_i64 ((int64_t *)&res, 8, temp, row, 1);
  return __riscv_th_mld_i64 ((int64_t *)&res, 0, row, col);
}

__MATRIX_INTRINSIC_PREFIX muint64_t __riscv_th_mmov_m_x_u64 (muint64_t dest, uint64_t src, size_t index)
{
  muint32_t temp = __riscv_th_mreinterpret_u32 (dest);
  temp = __riscv_th_mmov_m_x_u32 (temp, src & 0xffffffff, index * 2);
  temp = __riscv_th_mmov_m_x_u32 (temp, src >> 32, index * 2 + 1);
  return __riscv_th_mreinterpret_u64 (temp);
}

__MATRIX_INTRINSIC_PREFIX uint64_t __riscv_th_mmov_x_m_u64 (muint64_t src, size_t index)
{
  muint32_t temp = __riscv_th_mreinterpret_u32 (src);
  uint32_t t1 = __riscv_th_mmov_x_m_u32 (temp, index * 2);
  uint32_t t2 = __riscv_th_mmov_x_m_u32 (temp, index * 2 + 1);
  uint64_t low = t1;
  uint64_t high = t2;
  return (high << 32 | low);
}

__MATRIX_INTRINSIC_PREFIX muint64_t __riscv_th_mdup_m_x_u64 (uint64_t src)
{
  muint64_t temp = __riscv_th_mundefined_u64 ();
  muint64_t res = __riscv_th_mundefined_u64 ();
  temp = __riscv_th_mmov_m_x_u64 (temp, src, 0);
  temp = __riscv_th_mmov_mv_u64 (temp, 0);
  mrow_t row = __riscv_th_mread_csr (RVM_XRLENB) / 4;
  mrow_t col = row / 2;
  __riscv_th_mst_u64 ((uint64_t *)&res, 8, temp, row, 1);
  return __riscv_th_mld_u64 ((uint64_t *)&res, 0, row, col);
}

#endif /* #if defined(__riscv_xlen) && __riscv_xlen != 64 */

#endif
#endif /* _GCC_RISCV_MATRIX_H */
