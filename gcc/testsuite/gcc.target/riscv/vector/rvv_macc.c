/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include "rvv-common.h"
#include <riscv_vector.h>
#include <stddef.h>

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VMACC(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)				\
  void vmacc##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE *z, word_type vl) {	\
    v##VCLASST##EM##_t vx, vy, vz;					\
    vx = VLOAD(VCLASS, SEW, EM, x);						\
    vy = VLOAD(VCLASS, SEW, EM, y);						\
    vz = VLOAD(VCLASS, SEW, EM, z);						\
    vz = vfmacc_vv_##VCLASS##EM(vz, vx, vy, vl);							\
    VSTORE(VCLASS, SEW, EM, z, vz);						\
  }

#define VMACC_IMM(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)			\
  void vmacc##VCLASS##EM##_imm(size_t n, STYPE x, STYPE *y, STYPE *z, word_type vl) {	\
    v##VCLASST##EM##_t vx, vy, vz;					\
    vy = VLOAD(VCLASS, SEW, EM, y);						\
    vz = VLOAD(VCLASS, SEW, EM, z);						\
    vz = vfmacc_vf_##VCLASS##EM(vz, x, vy, vl);							\
    VSTORE(VCLASS, SEW, EM, z, vz);						\
  }

#define VINT_MAC(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)			\
  void v##OP##_##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE *z, word_type vl) {	\
    v##VCLASST##EM##_t vx, vy, vz;					\
    vx = VLOAD(VCLASS, SEW, EM, x);						\
    vy = VLOAD(VCLASS, SEW, EM, y);						\
    vz = VLOAD(VCLASS, SEW, EM, z);						\
    vz = v##OP##_vv_##VCLASS##EM (vz, vx, vy, vl);				\
    VSTORE(VCLASS, SEW, EM, z, vz);						\
  }

#define VINT_MAC_IMM(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)		\
  void v##OP##_##VCLASS##EM##_imm(size_t n, STYPE x, STYPE *y, STYPE *z, word_type vl) {\
    v##VCLASST##EM##_t vx, vy, vz;					\
    vy = VLOAD(VCLASS, SEW, EM, y);						\
    vz = VLOAD(VCLASS, SEW, EM, z);						\
    vz = v##OP##_vx_##VCLASS##EM (vz, x, vy, vl);				\
    VSTORE(VCLASS, SEW, EM, z, vz);						\
  }

RVV_INT_TEST_ARG (VINT_MAC, macc)
RVV_INT_TEST_ARG (VINT_MAC, madd)
RVV_INT_TEST_ARG (VINT_MAC_IMM, macc)
RVV_INT_TEST_ARG (VINT_MAC_IMM, madd)
RVV_UINT_TEST_ARG (VINT_MAC, macc)
RVV_UINT_TEST_ARG (VINT_MAC, madd)
RVV_UINT_TEST_ARG (VINT_MAC_IMM, macc)
RVV_UINT_TEST_ARG (VINT_MAC_IMM, madd)
RVV_INT_TEST_ARG (VINT_MAC, nmsac)
RVV_INT_TEST_ARG (VINT_MAC, nmsub)
RVV_INT_TEST_ARG (VINT_MAC_IMM, nmsac)
RVV_INT_TEST_ARG (VINT_MAC_IMM, nmsub)
RVV_UINT_TEST_ARG (VINT_MAC, nmsac)
RVV_UINT_TEST_ARG (VINT_MAC, nmsub)
RVV_UINT_TEST_ARG (VINT_MAC_IMM, nmsac)
RVV_UINT_TEST_ARG (VINT_MAC_IMM, nmsub)

RVV_FLOAT_TEST(VMACC)
RVV_FLOAT_TEST(VMACC_IMM)

/* { dg-final { scan-assembler-times "v(?:macc|madd)\.vv" 88 } } */
/* { dg-final { scan-assembler-times "v(?:macc|madd)\.vx" 88 } } */
/* { dg-final { scan-assembler-times "v(?:nmsac|nmsub)\.vv" 88 } } */
/* { dg-final { scan-assembler-times "v(?:nmsac|nmsub)\.vx" 88 } } */

/* { dg-final { scan-assembler-times "vf(?:macc|madd)\.vv" 15 } } */
/* { dg-final { scan-assembler-times "vf(?:macc|madd)\.vf" 15 } } */
