#ifndef __RISCV_VECTOR_V0P10_H
#define __RISCV_VECTOR_V0P10_H

#define ATTRIBUTE_PREFIX __extension__ extern __inline __attribute__ ((__always_inline__, __gnu_inline__, __artificial__))

typedef unsigned int word_type __attribute__ ((mode (__word__)));

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

typedef _Float16 __float16_t;
typedef float __float32_t;
typedef double __float64_t;

#ifndef __RISCV_VECTOR_H
#include <riscv_vector.h>
#endif

enum RVV_CSR {
  RVV_VSTART = 0,
  RVV_VXSAT,
  RVV_VXRM,
  RVV_VCSR,
};

ATTRIBUTE_PREFIX
unsigned long vread_csr(enum RVV_CSR csr)
{
  unsigned long rv = 0;
  switch (csr)
    {
    case RVV_VSTART:
      __asm__ __volatile__ ("csrr\t%0,vstart" : "=r"(rv) : : "memory");
      break;
    case RVV_VXSAT:
      __asm__ __volatile__ ("csrr\t%0,vxsat" : "=r"(rv) : : "memory");
      break;
    case RVV_VXRM:
      __asm__ __volatile__ ("csrr\t%0,vxrm" : "=r"(rv) : : "memory");
      break;
    case RVV_VCSR:
      __asm__ __volatile__ ("csrr\t%0,vcsr" : "=r"(rv) : : "memory");
      break;
    }
  return rv;
}

ATTRIBUTE_PREFIX
void vwrite_csr(enum RVV_CSR csr, unsigned long value)
{
  switch (csr)
    {
    case RVV_VSTART:
      __asm__ __volatile__ ("csrw\tvstart,%z0" : : "rJ"(value) : "memory");
      break;
    case RVV_VXSAT:
      __asm__ __volatile__ ("csrw\tvxsat,%z0" : : "rJ"(value) : "memory");
      break;
    case RVV_VXRM:
      __asm__ __volatile__ ("csrw\tvxrm,%z0" : : "rJ"(value) : "memory");
      break;
    case RVV_VCSR:
      __asm__ __volatile__ ("csrw\tvcsr,%z0" : : "rJ"(value) : "memory");
      break;
    }
}

#if (__riscv_v_intrinsic == 10000 || __riscv_th_v_intrinsic == 10000)
#ifdef __riscv_vector_bf16
#include <riscv_vector_v0p10_bf16.h>
#endif
#include <riscv_vector_v0p10_non_policy_common.h>
#include <riscv_vector_v0p10_vsseg_common.h>
#endif

#if (__riscv_th_v_intrinsic == 10000)
#include <riscv_vector_v0p10_non_policy_xtheadvector.h>
#include <riscv_vector_v0p10_vsseg_xtheadvector.h>
#elif (__riscv_v_intrinsic == 10000)
#include <riscv_vector_v0p10_non_policy.h>
#include <riscv_vector_v0p10_vsseg.h>
#endif

#if (__riscv_xtheadvdot == 1000000)
#include <riscv_vector_v0p10_xtheadvdot.h>
#endif

#undef ATTRIBUTE_PREFIX
#endif /* __RISCV_VECTOR_V0P10_H */