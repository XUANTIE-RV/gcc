#ifndef __RISCV_VECTOR_V0P10_VSSEG_1_COMMON_H
#define __RISCV_VECTOR_V0P10_VSSEG_1_COMMON_H
#define ATTRIBUTE_PREFIX __extension__ extern __inline __attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
ATTRIBUTE_PREFIX void vlseg2e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, const int8_t *a, size_t vl)
{
  vint8m1x2_t ret = __riscv_vlseg2e8_v_i8m1x2(a, vl);
  *v0 = __riscv_vget_v_i8m1x2_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x2_i8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), const int8_t *a, size_t vl)
{
  vint8m1x2_t ret = __riscv_vlseg2e8_v_i8m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m1x2_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x2_i8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8ff_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m1x2_t ret = __riscv_vlseg2e8ff_v_i8m1x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m1x2_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x2_i8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8ff_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m1x2_t ret = __riscv_vlseg2e8ff_v_i8m1x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m1x2_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x2_i8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m1x2_t ret = __riscv_vlsseg2e8_v_i8m1x2(a, s, vl);
  *v0 = __riscv_vget_v_i8m1x2_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x2_i8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m1x2_t ret = __riscv_vlsseg2e8_v_i8m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m1x2_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x2_i8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e8_v_i8m1(int8_t *a, vint8m1_t v0, vint8m1_t v1, size_t vl)
{
  vint8m1x2_t ret = __riscv_vcreate_v_i8m1x2(v0, v1);
  __riscv_vsseg2e8_v_i8m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e8_v_i8m1_m(vbool8_t mask, int8_t *a, vint8m1_t v0, vint8m1_t v1, size_t vl)
{
  vint8m1x2_t ret = __riscv_vcreate_v_i8m1x2(v0, v1);
  __riscv_vsseg2e8_v_i8m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e8_v_i8m1(int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, size_t vl)
{
  vint8m1x2_t ret = __riscv_vcreate_v_i8m1x2(v0, v1);
  __riscv_vssseg2e8_v_i8m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e8_v_i8m1_m(vbool8_t mask, int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, size_t vl)
{
  vint8m1x2_t ret = __riscv_vcreate_v_i8m1x2(v0, v1);
  __riscv_vssseg2e8_v_i8m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e8_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, const int8_t *a, size_t vl)
{
  vint8m2x2_t ret = __riscv_vlseg2e8_v_i8m2x2(a, vl);
  *v0 = __riscv_vget_v_i8m2x2_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x2_i8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), const int8_t *a, size_t vl)
{
  vint8m2x2_t ret = __riscv_vlseg2e8_v_i8m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m2x2_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x2_i8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8ff_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m2x2_t ret = __riscv_vlseg2e8ff_v_i8m2x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m2x2_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x2_i8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8ff_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m2x2_t ret = __riscv_vlseg2e8ff_v_i8m2x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m2x2_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x2_i8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e8_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m2x2_t ret = __riscv_vlsseg2e8_v_i8m2x2(a, s, vl);
  *v0 = __riscv_vget_v_i8m2x2_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x2_i8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e8_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m2x2_t ret = __riscv_vlsseg2e8_v_i8m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m2x2_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x2_i8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e8_v_i8m2(int8_t *a, vint8m2_t v0, vint8m2_t v1, size_t vl)
{
  vint8m2x2_t ret = __riscv_vcreate_v_i8m2x2(v0, v1);
  __riscv_vsseg2e8_v_i8m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e8_v_i8m2_m(vbool4_t mask, int8_t *a, vint8m2_t v0, vint8m2_t v1, size_t vl)
{
  vint8m2x2_t ret = __riscv_vcreate_v_i8m2x2(v0, v1);
  __riscv_vsseg2e8_v_i8m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e8_v_i8m2(int8_t *a, ptrdiff_t s, vint8m2_t v0, vint8m2_t v1, size_t vl)
{
  vint8m2x2_t ret = __riscv_vcreate_v_i8m2x2(v0, v1);
  __riscv_vssseg2e8_v_i8m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e8_v_i8m2_m(vbool4_t mask, int8_t *a, ptrdiff_t s, vint8m2_t v0, vint8m2_t v1, size_t vl)
{
  vint8m2x2_t ret = __riscv_vcreate_v_i8m2x2(v0, v1);
  __riscv_vssseg2e8_v_i8m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e8_v_i8m4(vint8m4_t *v0, vint8m4_t *v1, const int8_t *a, size_t vl)
{
  vint8m4x2_t ret = __riscv_vlseg2e8_v_i8m4x2(a, vl);
  *v0 = __riscv_vget_v_i8m4x2_i8m4(ret, 0);
  *v1 = __riscv_vget_v_i8m4x2_i8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8_v_i8m4_m(vint8m4_t *v0, vint8m4_t *v1, vbool2_t mask, vint8m4_t maskedoff0 __attribute__((__unused__)), vint8m4_t maskedoff1 __attribute__((__unused__)), const int8_t *a, size_t vl)
{
  vint8m4x2_t ret = __riscv_vlseg2e8_v_i8m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m4x2_i8m4(ret, 0);
  *v1 = __riscv_vget_v_i8m4x2_i8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8ff_v_i8m4(vint8m4_t *v0, vint8m4_t *v1, const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m4x2_t ret = __riscv_vlseg2e8ff_v_i8m4x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m4x2_i8m4(ret, 0);
  *v1 = __riscv_vget_v_i8m4x2_i8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8ff_v_i8m4_m(vint8m4_t *v0, vint8m4_t *v1, vbool2_t mask, vint8m4_t maskedoff0 __attribute__((__unused__)), vint8m4_t maskedoff1 __attribute__((__unused__)), const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m4x2_t ret = __riscv_vlseg2e8ff_v_i8m4x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m4x2_i8m4(ret, 0);
  *v1 = __riscv_vget_v_i8m4x2_i8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e8_v_i8m4(vint8m4_t *v0, vint8m4_t *v1, const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m4x2_t ret = __riscv_vlsseg2e8_v_i8m4x2(a, s, vl);
  *v0 = __riscv_vget_v_i8m4x2_i8m4(ret, 0);
  *v1 = __riscv_vget_v_i8m4x2_i8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e8_v_i8m4_m(vint8m4_t *v0, vint8m4_t *v1, vbool2_t mask, vint8m4_t maskedoff0 __attribute__((__unused__)), vint8m4_t maskedoff1 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m4x2_t ret = __riscv_vlsseg2e8_v_i8m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m4x2_i8m4(ret, 0);
  *v1 = __riscv_vget_v_i8m4x2_i8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e8_v_i8m4(int8_t *a, vint8m4_t v0, vint8m4_t v1, size_t vl)
{
  vint8m4x2_t ret = __riscv_vcreate_v_i8m4x2(v0, v1);
  __riscv_vsseg2e8_v_i8m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e8_v_i8m4_m(vbool2_t mask, int8_t *a, vint8m4_t v0, vint8m4_t v1, size_t vl)
{
  vint8m4x2_t ret = __riscv_vcreate_v_i8m4x2(v0, v1);
  __riscv_vsseg2e8_v_i8m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e8_v_i8m4(int8_t *a, ptrdiff_t s, vint8m4_t v0, vint8m4_t v1, size_t vl)
{
  vint8m4x2_t ret = __riscv_vcreate_v_i8m4x2(v0, v1);
  __riscv_vssseg2e8_v_i8m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e8_v_i8m4_m(vbool2_t mask, int8_t *a, ptrdiff_t s, vint8m4_t v0, vint8m4_t v1, size_t vl)
{
  vint8m4x2_t ret = __riscv_vcreate_v_i8m4x2(v0, v1);
  __riscv_vssseg2e8_v_i8m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, const int16_t *a, size_t vl)
{
  vint16m1x2_t ret = __riscv_vlseg2e16_v_i16m1x2(a, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), const int16_t *a, size_t vl)
{
  vint16m1x2_t ret = __riscv_vlseg2e16_v_i16m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16ff_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m1x2_t ret = __riscv_vlseg2e16ff_v_i16m1x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16ff_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m1x2_t ret = __riscv_vlseg2e16ff_v_i16m1x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m1x2_t ret = __riscv_vlsseg2e16_v_i16m1x2(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m1x2_t ret = __riscv_vlsseg2e16_v_i16m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e16_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, size_t vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_vsseg2e16_v_i16m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e16_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, size_t vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_vsseg2e16_v_i16m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e16_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, size_t vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_vssseg2e16_v_i16m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e16_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, size_t vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_vssseg2e16_v_i16m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e16_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, const int16_t *a, size_t vl)
{
  vint16m2x2_t ret = __riscv_vlseg2e16_v_i16m2x2(a, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), const int16_t *a, size_t vl)
{
  vint16m2x2_t ret = __riscv_vlseg2e16_v_i16m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16ff_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m2x2_t ret = __riscv_vlseg2e16ff_v_i16m2x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16ff_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m2x2_t ret = __riscv_vlseg2e16ff_v_i16m2x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e16_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m2x2_t ret = __riscv_vlsseg2e16_v_i16m2x2(a, s, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e16_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m2x2_t ret = __riscv_vlsseg2e16_v_i16m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e16_v_i16m2(int16_t *a, vint16m2_t v0, vint16m2_t v1, size_t vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_vsseg2e16_v_i16m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e16_v_i16m2_m(vbool8_t mask, int16_t *a, vint16m2_t v0, vint16m2_t v1, size_t vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_vsseg2e16_v_i16m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e16_v_i16m2(int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, size_t vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_vssseg2e16_v_i16m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e16_v_i16m2_m(vbool8_t mask, int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, size_t vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_vssseg2e16_v_i16m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e16_v_i16m4(vint16m4_t *v0, vint16m4_t *v1, const int16_t *a, size_t vl)
{
  vint16m4x2_t ret = __riscv_vlseg2e16_v_i16m4x2(a, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16_v_i16m4_m(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0 __attribute__((__unused__)), vint16m4_t maskedoff1 __attribute__((__unused__)), const int16_t *a, size_t vl)
{
  vint16m4x2_t ret = __riscv_vlseg2e16_v_i16m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16ff_v_i16m4(vint16m4_t *v0, vint16m4_t *v1, const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m4x2_t ret = __riscv_vlseg2e16ff_v_i16m4x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16ff_v_i16m4_m(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0 __attribute__((__unused__)), vint16m4_t maskedoff1 __attribute__((__unused__)), const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m4x2_t ret = __riscv_vlseg2e16ff_v_i16m4x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e16_v_i16m4(vint16m4_t *v0, vint16m4_t *v1, const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m4x2_t ret = __riscv_vlsseg2e16_v_i16m4x2(a, s, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e16_v_i16m4_m(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0 __attribute__((__unused__)), vint16m4_t maskedoff1 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m4x2_t ret = __riscv_vlsseg2e16_v_i16m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e16_v_i16m4(int16_t *a, vint16m4_t v0, vint16m4_t v1, size_t vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_vsseg2e16_v_i16m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e16_v_i16m4_m(vbool4_t mask, int16_t *a, vint16m4_t v0, vint16m4_t v1, size_t vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_vsseg2e16_v_i16m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e16_v_i16m4(int16_t *a, ptrdiff_t s, vint16m4_t v0, vint16m4_t v1, size_t vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_vssseg2e16_v_i16m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e16_v_i16m4_m(vbool4_t mask, int16_t *a, ptrdiff_t s, vint16m4_t v0, vint16m4_t v1, size_t vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_vssseg2e16_v_i16m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, const int32_t *a, size_t vl)
{
  vint32m1x2_t ret = __riscv_vlseg2e32_v_i32m1x2(a, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), const int32_t *a, size_t vl)
{
  vint32m1x2_t ret = __riscv_vlseg2e32_v_i32m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m1x2_t ret = __riscv_vlseg2e32ff_v_i32m1x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m1x2_t ret = __riscv_vlseg2e32ff_v_i32m1x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m1x2_t ret = __riscv_vlsseg2e32_v_i32m1x2(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m1x2_t ret = __riscv_vlsseg2e32_v_i32m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, size_t vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_vsseg2e32_v_i32m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, size_t vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_vsseg2e32_v_i32m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, size_t vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_vssseg2e32_v_i32m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, size_t vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_vssseg2e32_v_i32m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, const int32_t *a, size_t vl)
{
  vint32m2x2_t ret = __riscv_vlseg2e32_v_i32m2x2(a, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), const int32_t *a, size_t vl)
{
  vint32m2x2_t ret = __riscv_vlseg2e32_v_i32m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m2x2_t ret = __riscv_vlseg2e32ff_v_i32m2x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m2x2_t ret = __riscv_vlseg2e32ff_v_i32m2x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m2x2_t ret = __riscv_vlsseg2e32_v_i32m2x2(a, s, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m2x2_t ret = __riscv_vlsseg2e32_v_i32m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_i32m2(int32_t *a, vint32m2_t v0, vint32m2_t v1, size_t vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_vsseg2e32_v_i32m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_i32m2_m(vbool16_t mask, int32_t *a, vint32m2_t v0, vint32m2_t v1, size_t vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_vsseg2e32_v_i32m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_i32m2(int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, size_t vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_vssseg2e32_v_i32m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_i32m2_m(vbool16_t mask, int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, size_t vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_vssseg2e32_v_i32m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_i32m4(vint32m4_t *v0, vint32m4_t *v1, const int32_t *a, size_t vl)
{
  vint32m4x2_t ret = __riscv_vlseg2e32_v_i32m4x2(a, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0 __attribute__((__unused__)), vint32m4_t maskedoff1 __attribute__((__unused__)), const int32_t *a, size_t vl)
{
  vint32m4x2_t ret = __riscv_vlseg2e32_v_i32m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_i32m4(vint32m4_t *v0, vint32m4_t *v1, const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m4x2_t ret = __riscv_vlseg2e32ff_v_i32m4x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0 __attribute__((__unused__)), vint32m4_t maskedoff1 __attribute__((__unused__)), const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m4x2_t ret = __riscv_vlseg2e32ff_v_i32m4x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_i32m4(vint32m4_t *v0, vint32m4_t *v1, const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m4x2_t ret = __riscv_vlsseg2e32_v_i32m4x2(a, s, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0 __attribute__((__unused__)), vint32m4_t maskedoff1 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m4x2_t ret = __riscv_vlsseg2e32_v_i32m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_i32m4(int32_t *a, vint32m4_t v0, vint32m4_t v1, size_t vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_vsseg2e32_v_i32m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_i32m4_m(vbool8_t mask, int32_t *a, vint32m4_t v0, vint32m4_t v1, size_t vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_vsseg2e32_v_i32m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_i32m4(int32_t *a, ptrdiff_t s, vint32m4_t v0, vint32m4_t v1, size_t vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_vssseg2e32_v_i32m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_i32m4_m(vbool8_t mask, int32_t *a, ptrdiff_t s, vint32m4_t v0, vint32m4_t v1, size_t vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_vssseg2e32_v_i32m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, const int64_t *a, size_t vl)
{
  vint64m1x2_t ret = __riscv_vlseg2e64_v_i64m1x2(a, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), const int64_t *a, size_t vl)
{
  vint64m1x2_t ret = __riscv_vlseg2e64_v_i64m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m1x2_t ret = __riscv_vlseg2e64ff_v_i64m1x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m1x2_t ret = __riscv_vlseg2e64ff_v_i64m1x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m1x2_t ret = __riscv_vlsseg2e64_v_i64m1x2(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m1x2_t ret = __riscv_vlsseg2e64_v_i64m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, size_t vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_vsseg2e64_v_i64m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, size_t vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_vsseg2e64_v_i64m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, size_t vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_vssseg2e64_v_i64m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, size_t vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_vssseg2e64_v_i64m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, const int64_t *a, size_t vl)
{
  vint64m2x2_t ret = __riscv_vlseg2e64_v_i64m2x2(a, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), const int64_t *a, size_t vl)
{
  vint64m2x2_t ret = __riscv_vlseg2e64_v_i64m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m2x2_t ret = __riscv_vlseg2e64ff_v_i64m2x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m2x2_t ret = __riscv_vlseg2e64ff_v_i64m2x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m2x2_t ret = __riscv_vlsseg2e64_v_i64m2x2(a, s, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m2x2_t ret = __riscv_vlsseg2e64_v_i64m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_i64m2(int64_t *a, vint64m2_t v0, vint64m2_t v1, size_t vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_vsseg2e64_v_i64m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_i64m2_m(vbool32_t mask, int64_t *a, vint64m2_t v0, vint64m2_t v1, size_t vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_vsseg2e64_v_i64m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_i64m2(int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, size_t vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_vssseg2e64_v_i64m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_i64m2_m(vbool32_t mask, int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, size_t vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_vssseg2e64_v_i64m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_i64m4(vint64m4_t *v0, vint64m4_t *v1, const int64_t *a, size_t vl)
{
  vint64m4x2_t ret = __riscv_vlseg2e64_v_i64m4x2(a, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0 __attribute__((__unused__)), vint64m4_t maskedoff1 __attribute__((__unused__)), const int64_t *a, size_t vl)
{
  vint64m4x2_t ret = __riscv_vlseg2e64_v_i64m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_i64m4(vint64m4_t *v0, vint64m4_t *v1, const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m4x2_t ret = __riscv_vlseg2e64ff_v_i64m4x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0 __attribute__((__unused__)), vint64m4_t maskedoff1 __attribute__((__unused__)), const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m4x2_t ret = __riscv_vlseg2e64ff_v_i64m4x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_i64m4(vint64m4_t *v0, vint64m4_t *v1, const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m4x2_t ret = __riscv_vlsseg2e64_v_i64m4x2(a, s, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0 __attribute__((__unused__)), vint64m4_t maskedoff1 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m4x2_t ret = __riscv_vlsseg2e64_v_i64m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_i64m4(int64_t *a, vint64m4_t v0, vint64m4_t v1, size_t vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_vsseg2e64_v_i64m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_i64m4_m(vbool16_t mask, int64_t *a, vint64m4_t v0, vint64m4_t v1, size_t vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_vsseg2e64_v_i64m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_i64m4(int64_t *a, ptrdiff_t s, vint64m4_t v0, vint64m4_t v1, size_t vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_vssseg2e64_v_i64m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_i64m4_m(vbool16_t mask, int64_t *a, ptrdiff_t s, vint64m4_t v0, vint64m4_t v1, size_t vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_vssseg2e64_v_i64m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, const uint8_t *a, size_t vl)
{
  vuint8m1x2_t ret = __riscv_vlseg2e8_v_u8m1x2(a, vl);
  *v0 = __riscv_vget_v_u8m1x2_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x2_u8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, size_t vl)
{
  vuint8m1x2_t ret = __riscv_vlseg2e8_v_u8m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m1x2_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x2_u8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8ff_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m1x2_t ret = __riscv_vlseg2e8ff_v_u8m1x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m1x2_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x2_u8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8ff_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m1x2_t ret = __riscv_vlseg2e8ff_v_u8m1x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m1x2_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x2_u8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m1x2_t ret = __riscv_vlsseg2e8_v_u8m1x2(a, s, vl);
  *v0 = __riscv_vget_v_u8m1x2_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x2_u8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m1x2_t ret = __riscv_vlsseg2e8_v_u8m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m1x2_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x2_u8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e8_v_u8m1(uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, size_t vl)
{
  vuint8m1x2_t ret = __riscv_vcreate_v_u8m1x2(v0, v1);
  __riscv_vsseg2e8_v_u8m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e8_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, size_t vl)
{
  vuint8m1x2_t ret = __riscv_vcreate_v_u8m1x2(v0, v1);
  __riscv_vsseg2e8_v_u8m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e8_v_u8m1(uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, size_t vl)
{
  vuint8m1x2_t ret = __riscv_vcreate_v_u8m1x2(v0, v1);
  __riscv_vssseg2e8_v_u8m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e8_v_u8m1_m(vbool8_t mask, uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, size_t vl)
{
  vuint8m1x2_t ret = __riscv_vcreate_v_u8m1x2(v0, v1);
  __riscv_vssseg2e8_v_u8m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e8_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, const uint8_t *a, size_t vl)
{
  vuint8m2x2_t ret = __riscv_vlseg2e8_v_u8m2x2(a, vl);
  *v0 = __riscv_vget_v_u8m2x2_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x2_u8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, size_t vl)
{
  vuint8m2x2_t ret = __riscv_vlseg2e8_v_u8m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m2x2_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x2_u8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8ff_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m2x2_t ret = __riscv_vlseg2e8ff_v_u8m2x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m2x2_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x2_u8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8ff_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m2x2_t ret = __riscv_vlseg2e8ff_v_u8m2x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m2x2_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x2_u8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e8_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m2x2_t ret = __riscv_vlsseg2e8_v_u8m2x2(a, s, vl);
  *v0 = __riscv_vget_v_u8m2x2_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x2_u8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e8_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m2x2_t ret = __riscv_vlsseg2e8_v_u8m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m2x2_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x2_u8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e8_v_u8m2(uint8_t *a, vuint8m2_t v0, vuint8m2_t v1, size_t vl)
{
  vuint8m2x2_t ret = __riscv_vcreate_v_u8m2x2(v0, v1);
  __riscv_vsseg2e8_v_u8m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e8_v_u8m2_m(vbool4_t mask, uint8_t *a, vuint8m2_t v0, vuint8m2_t v1, size_t vl)
{
  vuint8m2x2_t ret = __riscv_vcreate_v_u8m2x2(v0, v1);
  __riscv_vsseg2e8_v_u8m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e8_v_u8m2(uint8_t *a, ptrdiff_t s, vuint8m2_t v0, vuint8m2_t v1, size_t vl)
{
  vuint8m2x2_t ret = __riscv_vcreate_v_u8m2x2(v0, v1);
  __riscv_vssseg2e8_v_u8m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e8_v_u8m2_m(vbool4_t mask, uint8_t *a, ptrdiff_t s, vuint8m2_t v0, vuint8m2_t v1, size_t vl)
{
  vuint8m2x2_t ret = __riscv_vcreate_v_u8m2x2(v0, v1);
  __riscv_vssseg2e8_v_u8m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e8_v_u8m4(vuint8m4_t *v0, vuint8m4_t *v1, const uint8_t *a, size_t vl)
{
  vuint8m4x2_t ret = __riscv_vlseg2e8_v_u8m4x2(a, vl);
  *v0 = __riscv_vget_v_u8m4x2_u8m4(ret, 0);
  *v1 = __riscv_vget_v_u8m4x2_u8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8_v_u8m4_m(vuint8m4_t *v0, vuint8m4_t *v1, vbool2_t mask, vuint8m4_t maskedoff0 __attribute__((__unused__)), vuint8m4_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, size_t vl)
{
  vuint8m4x2_t ret = __riscv_vlseg2e8_v_u8m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m4x2_u8m4(ret, 0);
  *v1 = __riscv_vget_v_u8m4x2_u8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8ff_v_u8m4(vuint8m4_t *v0, vuint8m4_t *v1, const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m4x2_t ret = __riscv_vlseg2e8ff_v_u8m4x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m4x2_u8m4(ret, 0);
  *v1 = __riscv_vget_v_u8m4x2_u8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e8ff_v_u8m4_m(vuint8m4_t *v0, vuint8m4_t *v1, vbool2_t mask, vuint8m4_t maskedoff0 __attribute__((__unused__)), vuint8m4_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m4x2_t ret = __riscv_vlseg2e8ff_v_u8m4x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m4x2_u8m4(ret, 0);
  *v1 = __riscv_vget_v_u8m4x2_u8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e8_v_u8m4(vuint8m4_t *v0, vuint8m4_t *v1, const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m4x2_t ret = __riscv_vlsseg2e8_v_u8m4x2(a, s, vl);
  *v0 = __riscv_vget_v_u8m4x2_u8m4(ret, 0);
  *v1 = __riscv_vget_v_u8m4x2_u8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e8_v_u8m4_m(vuint8m4_t *v0, vuint8m4_t *v1, vbool2_t mask, vuint8m4_t maskedoff0 __attribute__((__unused__)), vuint8m4_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m4x2_t ret = __riscv_vlsseg2e8_v_u8m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m4x2_u8m4(ret, 0);
  *v1 = __riscv_vget_v_u8m4x2_u8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e8_v_u8m4(uint8_t *a, vuint8m4_t v0, vuint8m4_t v1, size_t vl)
{
  vuint8m4x2_t ret = __riscv_vcreate_v_u8m4x2(v0, v1);
  __riscv_vsseg2e8_v_u8m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e8_v_u8m4_m(vbool2_t mask, uint8_t *a, vuint8m4_t v0, vuint8m4_t v1, size_t vl)
{
  vuint8m4x2_t ret = __riscv_vcreate_v_u8m4x2(v0, v1);
  __riscv_vsseg2e8_v_u8m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e8_v_u8m4(uint8_t *a, ptrdiff_t s, vuint8m4_t v0, vuint8m4_t v1, size_t vl)
{
  vuint8m4x2_t ret = __riscv_vcreate_v_u8m4x2(v0, v1);
  __riscv_vssseg2e8_v_u8m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e8_v_u8m4_m(vbool2_t mask, uint8_t *a, ptrdiff_t s, vuint8m4_t v0, vuint8m4_t v1, size_t vl)
{
  vuint8m4x2_t ret = __riscv_vcreate_v_u8m4x2(v0, v1);
  __riscv_vssseg2e8_v_u8m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, const uint16_t *a, size_t vl)
{
  vuint16m1x2_t ret = __riscv_vlseg2e16_v_u16m1x2(a, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, size_t vl)
{
  vuint16m1x2_t ret = __riscv_vlseg2e16_v_u16m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16ff_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m1x2_t ret = __riscv_vlseg2e16ff_v_u16m1x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16ff_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m1x2_t ret = __riscv_vlseg2e16ff_v_u16m1x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m1x2_t ret = __riscv_vlsseg2e16_v_u16m1x2(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m1x2_t ret = __riscv_vlsseg2e16_v_u16m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e16_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, size_t vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_vsseg2e16_v_u16m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e16_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, size_t vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_vsseg2e16_v_u16m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e16_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, size_t vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_vssseg2e16_v_u16m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e16_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, size_t vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_vssseg2e16_v_u16m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e16_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, const uint16_t *a, size_t vl)
{
  vuint16m2x2_t ret = __riscv_vlseg2e16_v_u16m2x2(a, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, size_t vl)
{
  vuint16m2x2_t ret = __riscv_vlseg2e16_v_u16m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16ff_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m2x2_t ret = __riscv_vlseg2e16ff_v_u16m2x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16ff_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m2x2_t ret = __riscv_vlseg2e16ff_v_u16m2x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e16_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m2x2_t ret = __riscv_vlsseg2e16_v_u16m2x2(a, s, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e16_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m2x2_t ret = __riscv_vlsseg2e16_v_u16m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e16_v_u16m2(uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, size_t vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_vsseg2e16_v_u16m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e16_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, size_t vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_vsseg2e16_v_u16m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e16_v_u16m2(uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, size_t vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_vssseg2e16_v_u16m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e16_v_u16m2_m(vbool8_t mask, uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, size_t vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_vssseg2e16_v_u16m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e16_v_u16m4(vuint16m4_t *v0, vuint16m4_t *v1, const uint16_t *a, size_t vl)
{
  vuint16m4x2_t ret = __riscv_vlseg2e16_v_u16m4x2(a, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16_v_u16m4_m(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0 __attribute__((__unused__)), vuint16m4_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, size_t vl)
{
  vuint16m4x2_t ret = __riscv_vlseg2e16_v_u16m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16ff_v_u16m4(vuint16m4_t *v0, vuint16m4_t *v1, const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m4x2_t ret = __riscv_vlseg2e16ff_v_u16m4x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e16ff_v_u16m4_m(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0 __attribute__((__unused__)), vuint16m4_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m4x2_t ret = __riscv_vlseg2e16ff_v_u16m4x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e16_v_u16m4(vuint16m4_t *v0, vuint16m4_t *v1, const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m4x2_t ret = __riscv_vlsseg2e16_v_u16m4x2(a, s, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e16_v_u16m4_m(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0 __attribute__((__unused__)), vuint16m4_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m4x2_t ret = __riscv_vlsseg2e16_v_u16m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e16_v_u16m4(uint16_t *a, vuint16m4_t v0, vuint16m4_t v1, size_t vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_vsseg2e16_v_u16m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e16_v_u16m4_m(vbool4_t mask, uint16_t *a, vuint16m4_t v0, vuint16m4_t v1, size_t vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_vsseg2e16_v_u16m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e16_v_u16m4(uint16_t *a, ptrdiff_t s, vuint16m4_t v0, vuint16m4_t v1, size_t vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_vssseg2e16_v_u16m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e16_v_u16m4_m(vbool4_t mask, uint16_t *a, ptrdiff_t s, vuint16m4_t v0, vuint16m4_t v1, size_t vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_vssseg2e16_v_u16m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, const uint32_t *a, size_t vl)
{
  vuint32m1x2_t ret = __riscv_vlseg2e32_v_u32m1x2(a, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, size_t vl)
{
  vuint32m1x2_t ret = __riscv_vlseg2e32_v_u32m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m1x2_t ret = __riscv_vlseg2e32ff_v_u32m1x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m1x2_t ret = __riscv_vlseg2e32ff_v_u32m1x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m1x2_t ret = __riscv_vlsseg2e32_v_u32m1x2(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m1x2_t ret = __riscv_vlsseg2e32_v_u32m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, size_t vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_vsseg2e32_v_u32m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, size_t vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_vsseg2e32_v_u32m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, size_t vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_vssseg2e32_v_u32m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, size_t vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_vssseg2e32_v_u32m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, const uint32_t *a, size_t vl)
{
  vuint32m2x2_t ret = __riscv_vlseg2e32_v_u32m2x2(a, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, size_t vl)
{
  vuint32m2x2_t ret = __riscv_vlseg2e32_v_u32m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m2x2_t ret = __riscv_vlseg2e32ff_v_u32m2x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m2x2_t ret = __riscv_vlseg2e32ff_v_u32m2x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m2x2_t ret = __riscv_vlsseg2e32_v_u32m2x2(a, s, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m2x2_t ret = __riscv_vlsseg2e32_v_u32m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_u32m2(uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, size_t vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_vsseg2e32_v_u32m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, size_t vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_vsseg2e32_v_u32m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_u32m2(uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, size_t vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_vssseg2e32_v_u32m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_u32m2_m(vbool16_t mask, uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, size_t vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_vssseg2e32_v_u32m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_u32m4(vuint32m4_t *v0, vuint32m4_t *v1, const uint32_t *a, size_t vl)
{
  vuint32m4x2_t ret = __riscv_vlseg2e32_v_u32m4x2(a, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0 __attribute__((__unused__)), vuint32m4_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, size_t vl)
{
  vuint32m4x2_t ret = __riscv_vlseg2e32_v_u32m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_u32m4(vuint32m4_t *v0, vuint32m4_t *v1, const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m4x2_t ret = __riscv_vlseg2e32ff_v_u32m4x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0 __attribute__((__unused__)), vuint32m4_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m4x2_t ret = __riscv_vlseg2e32ff_v_u32m4x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_u32m4(vuint32m4_t *v0, vuint32m4_t *v1, const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m4x2_t ret = __riscv_vlsseg2e32_v_u32m4x2(a, s, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0 __attribute__((__unused__)), vuint32m4_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m4x2_t ret = __riscv_vlsseg2e32_v_u32m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_u32m4(uint32_t *a, vuint32m4_t v0, vuint32m4_t v1, size_t vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_vsseg2e32_v_u32m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_u32m4_m(vbool8_t mask, uint32_t *a, vuint32m4_t v0, vuint32m4_t v1, size_t vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_vsseg2e32_v_u32m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_u32m4(uint32_t *a, ptrdiff_t s, vuint32m4_t v0, vuint32m4_t v1, size_t vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_vssseg2e32_v_u32m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_u32m4_m(vbool8_t mask, uint32_t *a, ptrdiff_t s, vuint32m4_t v0, vuint32m4_t v1, size_t vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_vssseg2e32_v_u32m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, const uint64_t *a, size_t vl)
{
  vuint64m1x2_t ret = __riscv_vlseg2e64_v_u64m1x2(a, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, size_t vl)
{
  vuint64m1x2_t ret = __riscv_vlseg2e64_v_u64m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m1x2_t ret = __riscv_vlseg2e64ff_v_u64m1x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m1x2_t ret = __riscv_vlseg2e64ff_v_u64m1x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m1x2_t ret = __riscv_vlsseg2e64_v_u64m1x2(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m1x2_t ret = __riscv_vlsseg2e64_v_u64m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, size_t vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_vsseg2e64_v_u64m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, size_t vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_vsseg2e64_v_u64m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, size_t vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_vssseg2e64_v_u64m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, size_t vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_vssseg2e64_v_u64m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, const uint64_t *a, size_t vl)
{
  vuint64m2x2_t ret = __riscv_vlseg2e64_v_u64m2x2(a, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, size_t vl)
{
  vuint64m2x2_t ret = __riscv_vlseg2e64_v_u64m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m2x2_t ret = __riscv_vlseg2e64ff_v_u64m2x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m2x2_t ret = __riscv_vlseg2e64ff_v_u64m2x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m2x2_t ret = __riscv_vlsseg2e64_v_u64m2x2(a, s, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m2x2_t ret = __riscv_vlsseg2e64_v_u64m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_u64m2(uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, size_t vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_vsseg2e64_v_u64m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, size_t vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_vsseg2e64_v_u64m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_u64m2(uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, size_t vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_vssseg2e64_v_u64m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_u64m2_m(vbool32_t mask, uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, size_t vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_vssseg2e64_v_u64m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_u64m4(vuint64m4_t *v0, vuint64m4_t *v1, const uint64_t *a, size_t vl)
{
  vuint64m4x2_t ret = __riscv_vlseg2e64_v_u64m4x2(a, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0 __attribute__((__unused__)), vuint64m4_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, size_t vl)
{
  vuint64m4x2_t ret = __riscv_vlseg2e64_v_u64m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_u64m4(vuint64m4_t *v0, vuint64m4_t *v1, const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m4x2_t ret = __riscv_vlseg2e64ff_v_u64m4x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0 __attribute__((__unused__)), vuint64m4_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m4x2_t ret = __riscv_vlseg2e64ff_v_u64m4x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_u64m4(vuint64m4_t *v0, vuint64m4_t *v1, const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m4x2_t ret = __riscv_vlsseg2e64_v_u64m4x2(a, s, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0 __attribute__((__unused__)), vuint64m4_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m4x2_t ret = __riscv_vlsseg2e64_v_u64m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_u64m4(uint64_t *a, vuint64m4_t v0, vuint64m4_t v1, size_t vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_vsseg2e64_v_u64m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_u64m4_m(vbool16_t mask, uint64_t *a, vuint64m4_t v0, vuint64m4_t v1, size_t vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_vsseg2e64_v_u64m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_u64m4(uint64_t *a, ptrdiff_t s, vuint64m4_t v0, vuint64m4_t v1, size_t vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_vssseg2e64_v_u64m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_u64m4_m(vbool16_t mask, uint64_t *a, ptrdiff_t s, vuint64m4_t v0, vuint64m4_t v1, size_t vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_vssseg2e64_v_u64m4x2_m(mask, a, s, ret, vl);
}
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg2e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, const float16_t *a, size_t vl)
{
  vfloat16m1x2_t ret = __riscv_vlseg2e16_v_f16m1x2(a, vl);
  *v0 = __riscv_vget_v_f16m1x2_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x2_f16m1(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg2e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), const float16_t *a, size_t vl)
{
  vfloat16m1x2_t ret = __riscv_vlseg2e16_v_f16m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_f16m1x2_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x2_f16m1(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg2e16ff_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m1x2_t ret = __riscv_vlseg2e16ff_v_f16m1x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m1x2_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x2_f16m1(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg2e16ff_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m1x2_t ret = __riscv_vlseg2e16ff_v_f16m1x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m1x2_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x2_f16m1(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg2e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m1x2_t ret = __riscv_vlsseg2e16_v_f16m1x2(a, s, vl);
  *v0 = __riscv_vget_v_f16m1x2_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x2_f16m1(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg2e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m1x2_t ret = __riscv_vlsseg2e16_v_f16m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f16m1x2_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x2_f16m1(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg2e16_v_f16m1(float16_t *a, vfloat16m1_t v0, vfloat16m1_t v1, size_t vl)
{
  vfloat16m1x2_t ret = __riscv_vcreate_v_f16m1x2(v0, v1);
  __riscv_vsseg2e16_v_f16m1x2(a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg2e16_v_f16m1_m(vbool16_t mask, float16_t *a, vfloat16m1_t v0, vfloat16m1_t v1, size_t vl)
{
  vfloat16m1x2_t ret = __riscv_vcreate_v_f16m1x2(v0, v1);
  __riscv_vsseg2e16_v_f16m1x2_m(mask, a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg2e16_v_f16m1(float16_t *a, ptrdiff_t s, vfloat16m1_t v0, vfloat16m1_t v1, size_t vl)
{
  vfloat16m1x2_t ret = __riscv_vcreate_v_f16m1x2(v0, v1);
  __riscv_vssseg2e16_v_f16m1x2(a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg2e16_v_f16m1_m(vbool16_t mask, float16_t *a, ptrdiff_t s, vfloat16m1_t v0, vfloat16m1_t v1, size_t vl)
{
  vfloat16m1x2_t ret = __riscv_vcreate_v_f16m1x2(v0, v1);
  __riscv_vssseg2e16_v_f16m1x2_m(mask, a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg2e16_v_f16m2(vfloat16m2_t *v0, vfloat16m2_t *v1, const float16_t *a, size_t vl)
{
  vfloat16m2x2_t ret = __riscv_vlseg2e16_v_f16m2x2(a, vl);
  *v0 = __riscv_vget_v_f16m2x2_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x2_f16m2(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg2e16_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vbool8_t mask, vfloat16m2_t maskedoff0 __attribute__((__unused__)), vfloat16m2_t maskedoff1 __attribute__((__unused__)), const float16_t *a, size_t vl)
{
  vfloat16m2x2_t ret = __riscv_vlseg2e16_v_f16m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_f16m2x2_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x2_f16m2(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg2e16ff_v_f16m2(vfloat16m2_t *v0, vfloat16m2_t *v1, const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m2x2_t ret = __riscv_vlseg2e16ff_v_f16m2x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m2x2_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x2_f16m2(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg2e16ff_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vbool8_t mask, vfloat16m2_t maskedoff0 __attribute__((__unused__)), vfloat16m2_t maskedoff1 __attribute__((__unused__)), const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m2x2_t ret = __riscv_vlseg2e16ff_v_f16m2x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m2x2_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x2_f16m2(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg2e16_v_f16m2(vfloat16m2_t *v0, vfloat16m2_t *v1, const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m2x2_t ret = __riscv_vlsseg2e16_v_f16m2x2(a, s, vl);
  *v0 = __riscv_vget_v_f16m2x2_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x2_f16m2(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg2e16_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vbool8_t mask, vfloat16m2_t maskedoff0 __attribute__((__unused__)), vfloat16m2_t maskedoff1 __attribute__((__unused__)), const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m2x2_t ret = __riscv_vlsseg2e16_v_f16m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f16m2x2_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x2_f16m2(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg2e16_v_f16m2(float16_t *a, vfloat16m2_t v0, vfloat16m2_t v1, size_t vl)
{
  vfloat16m2x2_t ret = __riscv_vcreate_v_f16m2x2(v0, v1);
  __riscv_vsseg2e16_v_f16m2x2(a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg2e16_v_f16m2_m(vbool8_t mask, float16_t *a, vfloat16m2_t v0, vfloat16m2_t v1, size_t vl)
{
  vfloat16m2x2_t ret = __riscv_vcreate_v_f16m2x2(v0, v1);
  __riscv_vsseg2e16_v_f16m2x2_m(mask, a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg2e16_v_f16m2(float16_t *a, ptrdiff_t s, vfloat16m2_t v0, vfloat16m2_t v1, size_t vl)
{
  vfloat16m2x2_t ret = __riscv_vcreate_v_f16m2x2(v0, v1);
  __riscv_vssseg2e16_v_f16m2x2(a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg2e16_v_f16m2_m(vbool8_t mask, float16_t *a, ptrdiff_t s, vfloat16m2_t v0, vfloat16m2_t v1, size_t vl)
{
  vfloat16m2x2_t ret = __riscv_vcreate_v_f16m2x2(v0, v1);
  __riscv_vssseg2e16_v_f16m2x2_m(mask, a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg2e16_v_f16m4(vfloat16m4_t *v0, vfloat16m4_t *v1, const float16_t *a, size_t vl)
{
  vfloat16m4x2_t ret = __riscv_vlseg2e16_v_f16m4x2(a, vl);
  *v0 = __riscv_vget_v_f16m4x2_f16m4(ret, 0);
  *v1 = __riscv_vget_v_f16m4x2_f16m4(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg2e16_v_f16m4_m(vfloat16m4_t *v0, vfloat16m4_t *v1, vbool4_t mask, vfloat16m4_t maskedoff0 __attribute__((__unused__)), vfloat16m4_t maskedoff1 __attribute__((__unused__)), const float16_t *a, size_t vl)
{
  vfloat16m4x2_t ret = __riscv_vlseg2e16_v_f16m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_f16m4x2_f16m4(ret, 0);
  *v1 = __riscv_vget_v_f16m4x2_f16m4(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg2e16ff_v_f16m4(vfloat16m4_t *v0, vfloat16m4_t *v1, const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m4x2_t ret = __riscv_vlseg2e16ff_v_f16m4x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m4x2_f16m4(ret, 0);
  *v1 = __riscv_vget_v_f16m4x2_f16m4(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg2e16ff_v_f16m4_m(vfloat16m4_t *v0, vfloat16m4_t *v1, vbool4_t mask, vfloat16m4_t maskedoff0 __attribute__((__unused__)), vfloat16m4_t maskedoff1 __attribute__((__unused__)), const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m4x2_t ret = __riscv_vlseg2e16ff_v_f16m4x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m4x2_f16m4(ret, 0);
  *v1 = __riscv_vget_v_f16m4x2_f16m4(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg2e16_v_f16m4(vfloat16m4_t *v0, vfloat16m4_t *v1, const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m4x2_t ret = __riscv_vlsseg2e16_v_f16m4x2(a, s, vl);
  *v0 = __riscv_vget_v_f16m4x2_f16m4(ret, 0);
  *v1 = __riscv_vget_v_f16m4x2_f16m4(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg2e16_v_f16m4_m(vfloat16m4_t *v0, vfloat16m4_t *v1, vbool4_t mask, vfloat16m4_t maskedoff0 __attribute__((__unused__)), vfloat16m4_t maskedoff1 __attribute__((__unused__)), const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m4x2_t ret = __riscv_vlsseg2e16_v_f16m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f16m4x2_f16m4(ret, 0);
  *v1 = __riscv_vget_v_f16m4x2_f16m4(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg2e16_v_f16m4(float16_t *a, vfloat16m4_t v0, vfloat16m4_t v1, size_t vl)
{
  vfloat16m4x2_t ret = __riscv_vcreate_v_f16m4x2(v0, v1);
  __riscv_vsseg2e16_v_f16m4x2(a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg2e16_v_f16m4_m(vbool4_t mask, float16_t *a, vfloat16m4_t v0, vfloat16m4_t v1, size_t vl)
{
  vfloat16m4x2_t ret = __riscv_vcreate_v_f16m4x2(v0, v1);
  __riscv_vsseg2e16_v_f16m4x2_m(mask, a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg2e16_v_f16m4(float16_t *a, ptrdiff_t s, vfloat16m4_t v0, vfloat16m4_t v1, size_t vl)
{
  vfloat16m4x2_t ret = __riscv_vcreate_v_f16m4x2(v0, v1);
  __riscv_vssseg2e16_v_f16m4x2(a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg2e16_v_f16m4_m(vbool4_t mask, float16_t *a, ptrdiff_t s, vfloat16m4_t v0, vfloat16m4_t v1, size_t vl)
{
  vfloat16m4x2_t ret = __riscv_vcreate_v_f16m4x2(v0, v1);
  __riscv_vssseg2e16_v_f16m4x2_m(mask, a, s, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vlseg2e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, const float32_t *a, size_t vl)
{
  vfloat32m1x2_t ret = __riscv_vlseg2e32_v_f32m1x2(a, vl);
  *v0 = __riscv_vget_v_f32m1x2_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x2_f32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), const float32_t *a, size_t vl)
{
  vfloat32m1x2_t ret = __riscv_vlseg2e32_v_f32m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_f32m1x2_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x2_f32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m1x2_t ret = __riscv_vlseg2e32ff_v_f32m1x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m1x2_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x2_f32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m1x2_t ret = __riscv_vlseg2e32ff_v_f32m1x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m1x2_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x2_f32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m1x2_t ret = __riscv_vlsseg2e32_v_f32m1x2(a, s, vl);
  *v0 = __riscv_vget_v_f32m1x2_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x2_f32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m1x2_t ret = __riscv_vlsseg2e32_v_f32m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f32m1x2_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x2_f32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_f32m1(float32_t *a, vfloat32m1_t v0, vfloat32m1_t v1, size_t vl)
{
  vfloat32m1x2_t ret = __riscv_vcreate_v_f32m1x2(v0, v1);
  __riscv_vsseg2e32_v_f32m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_f32m1_m(vbool32_t mask, float32_t *a, vfloat32m1_t v0, vfloat32m1_t v1, size_t vl)
{
  vfloat32m1x2_t ret = __riscv_vcreate_v_f32m1x2(v0, v1);
  __riscv_vsseg2e32_v_f32m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_f32m1(float32_t *a, ptrdiff_t s, vfloat32m1_t v0, vfloat32m1_t v1, size_t vl)
{
  vfloat32m1x2_t ret = __riscv_vcreate_v_f32m1x2(v0, v1);
  __riscv_vssseg2e32_v_f32m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_f32m1_m(vbool32_t mask, float32_t *a, ptrdiff_t s, vfloat32m1_t v0, vfloat32m1_t v1, size_t vl)
{
  vfloat32m1x2_t ret = __riscv_vcreate_v_f32m1x2(v0, v1);
  __riscv_vssseg2e32_v_f32m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_f32m2(vfloat32m2_t *v0, vfloat32m2_t *v1, const float32_t *a, size_t vl)
{
  vfloat32m2x2_t ret = __riscv_vlseg2e32_v_f32m2x2(a, vl);
  *v0 = __riscv_vget_v_f32m2x2_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x2_f32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vbool16_t mask, vfloat32m2_t maskedoff0 __attribute__((__unused__)), vfloat32m2_t maskedoff1 __attribute__((__unused__)), const float32_t *a, size_t vl)
{
  vfloat32m2x2_t ret = __riscv_vlseg2e32_v_f32m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_f32m2x2_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x2_f32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_f32m2(vfloat32m2_t *v0, vfloat32m2_t *v1, const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m2x2_t ret = __riscv_vlseg2e32ff_v_f32m2x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m2x2_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x2_f32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vbool16_t mask, vfloat32m2_t maskedoff0 __attribute__((__unused__)), vfloat32m2_t maskedoff1 __attribute__((__unused__)), const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m2x2_t ret = __riscv_vlseg2e32ff_v_f32m2x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m2x2_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x2_f32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_f32m2(vfloat32m2_t *v0, vfloat32m2_t *v1, const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m2x2_t ret = __riscv_vlsseg2e32_v_f32m2x2(a, s, vl);
  *v0 = __riscv_vget_v_f32m2x2_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x2_f32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vbool16_t mask, vfloat32m2_t maskedoff0 __attribute__((__unused__)), vfloat32m2_t maskedoff1 __attribute__((__unused__)), const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m2x2_t ret = __riscv_vlsseg2e32_v_f32m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f32m2x2_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x2_f32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_f32m2(float32_t *a, vfloat32m2_t v0, vfloat32m2_t v1, size_t vl)
{
  vfloat32m2x2_t ret = __riscv_vcreate_v_f32m2x2(v0, v1);
  __riscv_vsseg2e32_v_f32m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_f32m2_m(vbool16_t mask, float32_t *a, vfloat32m2_t v0, vfloat32m2_t v1, size_t vl)
{
  vfloat32m2x2_t ret = __riscv_vcreate_v_f32m2x2(v0, v1);
  __riscv_vsseg2e32_v_f32m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_f32m2(float32_t *a, ptrdiff_t s, vfloat32m2_t v0, vfloat32m2_t v1, size_t vl)
{
  vfloat32m2x2_t ret = __riscv_vcreate_v_f32m2x2(v0, v1);
  __riscv_vssseg2e32_v_f32m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_f32m2_m(vbool16_t mask, float32_t *a, ptrdiff_t s, vfloat32m2_t v0, vfloat32m2_t v1, size_t vl)
{
  vfloat32m2x2_t ret = __riscv_vcreate_v_f32m2x2(v0, v1);
  __riscv_vssseg2e32_v_f32m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_f32m4(vfloat32m4_t *v0, vfloat32m4_t *v1, const float32_t *a, size_t vl)
{
  vfloat32m4x2_t ret = __riscv_vlseg2e32_v_f32m4x2(a, vl);
  *v0 = __riscv_vget_v_f32m4x2_f32m4(ret, 0);
  *v1 = __riscv_vget_v_f32m4x2_f32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32_v_f32m4_m(vfloat32m4_t *v0, vfloat32m4_t *v1, vbool8_t mask, vfloat32m4_t maskedoff0 __attribute__((__unused__)), vfloat32m4_t maskedoff1 __attribute__((__unused__)), const float32_t *a, size_t vl)
{
  vfloat32m4x2_t ret = __riscv_vlseg2e32_v_f32m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_f32m4x2_f32m4(ret, 0);
  *v1 = __riscv_vget_v_f32m4x2_f32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_f32m4(vfloat32m4_t *v0, vfloat32m4_t *v1, const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m4x2_t ret = __riscv_vlseg2e32ff_v_f32m4x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m4x2_f32m4(ret, 0);
  *v1 = __riscv_vget_v_f32m4x2_f32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e32ff_v_f32m4_m(vfloat32m4_t *v0, vfloat32m4_t *v1, vbool8_t mask, vfloat32m4_t maskedoff0 __attribute__((__unused__)), vfloat32m4_t maskedoff1 __attribute__((__unused__)), const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m4x2_t ret = __riscv_vlseg2e32ff_v_f32m4x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m4x2_f32m4(ret, 0);
  *v1 = __riscv_vget_v_f32m4x2_f32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_f32m4(vfloat32m4_t *v0, vfloat32m4_t *v1, const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m4x2_t ret = __riscv_vlsseg2e32_v_f32m4x2(a, s, vl);
  *v0 = __riscv_vget_v_f32m4x2_f32m4(ret, 0);
  *v1 = __riscv_vget_v_f32m4x2_f32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e32_v_f32m4_m(vfloat32m4_t *v0, vfloat32m4_t *v1, vbool8_t mask, vfloat32m4_t maskedoff0 __attribute__((__unused__)), vfloat32m4_t maskedoff1 __attribute__((__unused__)), const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m4x2_t ret = __riscv_vlsseg2e32_v_f32m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f32m4x2_f32m4(ret, 0);
  *v1 = __riscv_vget_v_f32m4x2_f32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_f32m4(float32_t *a, vfloat32m4_t v0, vfloat32m4_t v1, size_t vl)
{
  vfloat32m4x2_t ret = __riscv_vcreate_v_f32m4x2(v0, v1);
  __riscv_vsseg2e32_v_f32m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e32_v_f32m4_m(vbool8_t mask, float32_t *a, vfloat32m4_t v0, vfloat32m4_t v1, size_t vl)
{
  vfloat32m4x2_t ret = __riscv_vcreate_v_f32m4x2(v0, v1);
  __riscv_vsseg2e32_v_f32m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_f32m4(float32_t *a, ptrdiff_t s, vfloat32m4_t v0, vfloat32m4_t v1, size_t vl)
{
  vfloat32m4x2_t ret = __riscv_vcreate_v_f32m4x2(v0, v1);
  __riscv_vssseg2e32_v_f32m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e32_v_f32m4_m(vbool8_t mask, float32_t *a, ptrdiff_t s, vfloat32m4_t v0, vfloat32m4_t v1, size_t vl)
{
  vfloat32m4x2_t ret = __riscv_vcreate_v_f32m4x2(v0, v1);
  __riscv_vssseg2e32_v_f32m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, const float64_t *a, size_t vl)
{
  vfloat64m1x2_t ret = __riscv_vlseg2e64_v_f64m1x2(a, vl);
  *v0 = __riscv_vget_v_f64m1x2_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x2_f64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), const float64_t *a, size_t vl)
{
  vfloat64m1x2_t ret = __riscv_vlseg2e64_v_f64m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_f64m1x2_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x2_f64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m1x2_t ret = __riscv_vlseg2e64ff_v_f64m1x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m1x2_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x2_f64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m1x2_t ret = __riscv_vlseg2e64ff_v_f64m1x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m1x2_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x2_f64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m1x2_t ret = __riscv_vlsseg2e64_v_f64m1x2(a, s, vl);
  *v0 = __riscv_vget_v_f64m1x2_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x2_f64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m1x2_t ret = __riscv_vlsseg2e64_v_f64m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f64m1x2_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x2_f64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_f64m1(float64_t *a, vfloat64m1_t v0, vfloat64m1_t v1, size_t vl)
{
  vfloat64m1x2_t ret = __riscv_vcreate_v_f64m1x2(v0, v1);
  __riscv_vsseg2e64_v_f64m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_f64m1_m(vbool64_t mask, float64_t *a, vfloat64m1_t v0, vfloat64m1_t v1, size_t vl)
{
  vfloat64m1x2_t ret = __riscv_vcreate_v_f64m1x2(v0, v1);
  __riscv_vsseg2e64_v_f64m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_f64m1(float64_t *a, ptrdiff_t s, vfloat64m1_t v0, vfloat64m1_t v1, size_t vl)
{
  vfloat64m1x2_t ret = __riscv_vcreate_v_f64m1x2(v0, v1);
  __riscv_vssseg2e64_v_f64m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_f64m1_m(vbool64_t mask, float64_t *a, ptrdiff_t s, vfloat64m1_t v0, vfloat64m1_t v1, size_t vl)
{
  vfloat64m1x2_t ret = __riscv_vcreate_v_f64m1x2(v0, v1);
  __riscv_vssseg2e64_v_f64m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_f64m2(vfloat64m2_t *v0, vfloat64m2_t *v1, const float64_t *a, size_t vl)
{
  vfloat64m2x2_t ret = __riscv_vlseg2e64_v_f64m2x2(a, vl);
  *v0 = __riscv_vget_v_f64m2x2_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x2_f64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, vfloat64m2_t maskedoff0 __attribute__((__unused__)), vfloat64m2_t maskedoff1 __attribute__((__unused__)), const float64_t *a, size_t vl)
{
  vfloat64m2x2_t ret = __riscv_vlseg2e64_v_f64m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_f64m2x2_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x2_f64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_f64m2(vfloat64m2_t *v0, vfloat64m2_t *v1, const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m2x2_t ret = __riscv_vlseg2e64ff_v_f64m2x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m2x2_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x2_f64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, vfloat64m2_t maskedoff0 __attribute__((__unused__)), vfloat64m2_t maskedoff1 __attribute__((__unused__)), const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m2x2_t ret = __riscv_vlseg2e64ff_v_f64m2x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m2x2_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x2_f64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_f64m2(vfloat64m2_t *v0, vfloat64m2_t *v1, const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m2x2_t ret = __riscv_vlsseg2e64_v_f64m2x2(a, s, vl);
  *v0 = __riscv_vget_v_f64m2x2_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x2_f64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, vfloat64m2_t maskedoff0 __attribute__((__unused__)), vfloat64m2_t maskedoff1 __attribute__((__unused__)), const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m2x2_t ret = __riscv_vlsseg2e64_v_f64m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f64m2x2_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x2_f64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_f64m2(float64_t *a, vfloat64m2_t v0, vfloat64m2_t v1, size_t vl)
{
  vfloat64m2x2_t ret = __riscv_vcreate_v_f64m2x2(v0, v1);
  __riscv_vsseg2e64_v_f64m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_f64m2_m(vbool32_t mask, float64_t *a, vfloat64m2_t v0, vfloat64m2_t v1, size_t vl)
{
  vfloat64m2x2_t ret = __riscv_vcreate_v_f64m2x2(v0, v1);
  __riscv_vsseg2e64_v_f64m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_f64m2(float64_t *a, ptrdiff_t s, vfloat64m2_t v0, vfloat64m2_t v1, size_t vl)
{
  vfloat64m2x2_t ret = __riscv_vcreate_v_f64m2x2(v0, v1);
  __riscv_vssseg2e64_v_f64m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_f64m2_m(vbool32_t mask, float64_t *a, ptrdiff_t s, vfloat64m2_t v0, vfloat64m2_t v1, size_t vl)
{
  vfloat64m2x2_t ret = __riscv_vcreate_v_f64m2x2(v0, v1);
  __riscv_vssseg2e64_v_f64m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_f64m4(vfloat64m4_t *v0, vfloat64m4_t *v1, const float64_t *a, size_t vl)
{
  vfloat64m4x2_t ret = __riscv_vlseg2e64_v_f64m4x2(a, vl);
  *v0 = __riscv_vget_v_f64m4x2_f64m4(ret, 0);
  *v1 = __riscv_vget_v_f64m4x2_f64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64_v_f64m4_m(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, vfloat64m4_t maskedoff0 __attribute__((__unused__)), vfloat64m4_t maskedoff1 __attribute__((__unused__)), const float64_t *a, size_t vl)
{
  vfloat64m4x2_t ret = __riscv_vlseg2e64_v_f64m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_f64m4x2_f64m4(ret, 0);
  *v1 = __riscv_vget_v_f64m4x2_f64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_f64m4(vfloat64m4_t *v0, vfloat64m4_t *v1, const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m4x2_t ret = __riscv_vlseg2e64ff_v_f64m4x2(a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m4x2_f64m4(ret, 0);
  *v1 = __riscv_vget_v_f64m4x2_f64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2e64ff_v_f64m4_m(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, vfloat64m4_t maskedoff0 __attribute__((__unused__)), vfloat64m4_t maskedoff1 __attribute__((__unused__)), const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m4x2_t ret = __riscv_vlseg2e64ff_v_f64m4x2_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m4x2_f64m4(ret, 0);
  *v1 = __riscv_vget_v_f64m4x2_f64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_f64m4(vfloat64m4_t *v0, vfloat64m4_t *v1, const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m4x2_t ret = __riscv_vlsseg2e64_v_f64m4x2(a, s, vl);
  *v0 = __riscv_vget_v_f64m4x2_f64m4(ret, 0);
  *v1 = __riscv_vget_v_f64m4x2_f64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2e64_v_f64m4_m(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, vfloat64m4_t maskedoff0 __attribute__((__unused__)), vfloat64m4_t maskedoff1 __attribute__((__unused__)), const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m4x2_t ret = __riscv_vlsseg2e64_v_f64m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f64m4x2_f64m4(ret, 0);
  *v1 = __riscv_vget_v_f64m4x2_f64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_f64m4(float64_t *a, vfloat64m4_t v0, vfloat64m4_t v1, size_t vl)
{
  vfloat64m4x2_t ret = __riscv_vcreate_v_f64m4x2(v0, v1);
  __riscv_vsseg2e64_v_f64m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2e64_v_f64m4_m(vbool16_t mask, float64_t *a, vfloat64m4_t v0, vfloat64m4_t v1, size_t vl)
{
  vfloat64m4x2_t ret = __riscv_vcreate_v_f64m4x2(v0, v1);
  __riscv_vsseg2e64_v_f64m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_f64m4(float64_t *a, ptrdiff_t s, vfloat64m4_t v0, vfloat64m4_t v1, size_t vl)
{
  vfloat64m4x2_t ret = __riscv_vcreate_v_f64m4x2(v0, v1);
  __riscv_vssseg2e64_v_f64m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2e64_v_f64m4_m(vbool16_t mask, float64_t *a, ptrdiff_t s, vfloat64m4_t v0, vfloat64m4_t v1, size_t vl)
{
  vfloat64m4x2_t ret = __riscv_vcreate_v_f64m4x2(v0, v1);
  __riscv_vssseg2e64_v_f64m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, const int8_t *a, size_t vl)
{
  vint8m1x3_t ret = __riscv_vlseg3e8_v_i8m1x3(a, vl);
  *v0 = __riscv_vget_v_i8m1x3_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x3_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x3_i8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), const int8_t *a, size_t vl)
{
  vint8m1x3_t ret = __riscv_vlseg3e8_v_i8m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m1x3_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x3_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x3_i8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e8ff_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m1x3_t ret = __riscv_vlseg3e8ff_v_i8m1x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m1x3_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x3_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x3_i8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e8ff_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m1x3_t ret = __riscv_vlseg3e8ff_v_i8m1x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m1x3_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x3_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x3_i8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m1x3_t ret = __riscv_vlsseg3e8_v_i8m1x3(a, s, vl);
  *v0 = __riscv_vget_v_i8m1x3_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x3_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x3_i8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m1x3_t ret = __riscv_vlsseg3e8_v_i8m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m1x3_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x3_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x3_i8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e8_v_i8m1(int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, size_t vl)
{
  vint8m1x3_t ret = __riscv_vcreate_v_i8m1x3(v0, v1, v2);
  __riscv_vsseg3e8_v_i8m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e8_v_i8m1_m(vbool8_t mask, int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, size_t vl)
{
  vint8m1x3_t ret = __riscv_vcreate_v_i8m1x3(v0, v1, v2);
  __riscv_vsseg3e8_v_i8m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e8_v_i8m1(int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, size_t vl)
{
  vint8m1x3_t ret = __riscv_vcreate_v_i8m1x3(v0, v1, v2);
  __riscv_vssseg3e8_v_i8m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e8_v_i8m1_m(vbool8_t mask, int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, size_t vl)
{
  vint8m1x3_t ret = __riscv_vcreate_v_i8m1x3(v0, v1, v2);
  __riscv_vssseg3e8_v_i8m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e8_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, const int8_t *a, size_t vl)
{
  vint8m2x3_t ret = __riscv_vlseg3e8_v_i8m2x3(a, vl);
  *v0 = __riscv_vget_v_i8m2x3_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x3_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x3_i8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e8_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), vint8m2_t maskedoff2 __attribute__((__unused__)), const int8_t *a, size_t vl)
{
  vint8m2x3_t ret = __riscv_vlseg3e8_v_i8m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m2x3_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x3_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x3_i8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e8ff_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m2x3_t ret = __riscv_vlseg3e8ff_v_i8m2x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m2x3_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x3_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x3_i8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e8ff_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), vint8m2_t maskedoff2 __attribute__((__unused__)), const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m2x3_t ret = __riscv_vlseg3e8ff_v_i8m2x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m2x3_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x3_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x3_i8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e8_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m2x3_t ret = __riscv_vlsseg3e8_v_i8m2x3(a, s, vl);
  *v0 = __riscv_vget_v_i8m2x3_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x3_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x3_i8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e8_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), vint8m2_t maskedoff2 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m2x3_t ret = __riscv_vlsseg3e8_v_i8m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m2x3_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x3_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x3_i8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e8_v_i8m2(int8_t *a, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, size_t vl)
{
  vint8m2x3_t ret = __riscv_vcreate_v_i8m2x3(v0, v1, v2);
  __riscv_vsseg3e8_v_i8m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e8_v_i8m2_m(vbool4_t mask, int8_t *a, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, size_t vl)
{
  vint8m2x3_t ret = __riscv_vcreate_v_i8m2x3(v0, v1, v2);
  __riscv_vsseg3e8_v_i8m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e8_v_i8m2(int8_t *a, ptrdiff_t s, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, size_t vl)
{
  vint8m2x3_t ret = __riscv_vcreate_v_i8m2x3(v0, v1, v2);
  __riscv_vssseg3e8_v_i8m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e8_v_i8m2_m(vbool4_t mask, int8_t *a, ptrdiff_t s, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, size_t vl)
{
  vint8m2x3_t ret = __riscv_vcreate_v_i8m2x3(v0, v1, v2);
  __riscv_vssseg3e8_v_i8m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, const int16_t *a, size_t vl)
{
  vint16m1x3_t ret = __riscv_vlseg3e16_v_i16m1x3(a, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), const int16_t *a, size_t vl)
{
  vint16m1x3_t ret = __riscv_vlseg3e16_v_i16m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e16ff_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m1x3_t ret = __riscv_vlseg3e16ff_v_i16m1x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e16ff_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m1x3_t ret = __riscv_vlseg3e16ff_v_i16m1x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m1x3_t ret = __riscv_vlsseg3e16_v_i16m1x3(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m1x3_t ret = __riscv_vlsseg3e16_v_i16m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e16_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, size_t vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_vsseg3e16_v_i16m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e16_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, size_t vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_vsseg3e16_v_i16m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e16_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, size_t vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_vssseg3e16_v_i16m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e16_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, size_t vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_vssseg3e16_v_i16m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e16_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, const int16_t *a, size_t vl)
{
  vint16m2x3_t ret = __riscv_vlseg3e16_v_i16m2x3(a, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e16_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), const int16_t *a, size_t vl)
{
  vint16m2x3_t ret = __riscv_vlseg3e16_v_i16m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e16ff_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m2x3_t ret = __riscv_vlseg3e16ff_v_i16m2x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e16ff_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m2x3_t ret = __riscv_vlseg3e16ff_v_i16m2x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e16_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m2x3_t ret = __riscv_vlsseg3e16_v_i16m2x3(a, s, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e16_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m2x3_t ret = __riscv_vlsseg3e16_v_i16m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e16_v_i16m2(int16_t *a, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, size_t vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_vsseg3e16_v_i16m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e16_v_i16m2_m(vbool8_t mask, int16_t *a, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, size_t vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_vsseg3e16_v_i16m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e16_v_i16m2(int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, size_t vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_vssseg3e16_v_i16m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e16_v_i16m2_m(vbool8_t mask, int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, size_t vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_vssseg3e16_v_i16m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, const int32_t *a, size_t vl)
{
  vint32m1x3_t ret = __riscv_vlseg3e32_v_i32m1x3(a, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), const int32_t *a, size_t vl)
{
  vint32m1x3_t ret = __riscv_vlseg3e32_v_i32m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32ff_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m1x3_t ret = __riscv_vlseg3e32ff_v_i32m1x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32ff_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m1x3_t ret = __riscv_vlseg3e32ff_v_i32m1x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m1x3_t ret = __riscv_vlsseg3e32_v_i32m1x3(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m1x3_t ret = __riscv_vlsseg3e32_v_i32m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e32_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, size_t vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_vsseg3e32_v_i32m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e32_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, size_t vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_vsseg3e32_v_i32m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e32_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, size_t vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_vssseg3e32_v_i32m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e32_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, size_t vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_vssseg3e32_v_i32m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e32_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, const int32_t *a, size_t vl)
{
  vint32m2x3_t ret = __riscv_vlseg3e32_v_i32m2x3(a, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), const int32_t *a, size_t vl)
{
  vint32m2x3_t ret = __riscv_vlseg3e32_v_i32m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32ff_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m2x3_t ret = __riscv_vlseg3e32ff_v_i32m2x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32ff_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m2x3_t ret = __riscv_vlseg3e32ff_v_i32m2x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e32_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m2x3_t ret = __riscv_vlsseg3e32_v_i32m2x3(a, s, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e32_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m2x3_t ret = __riscv_vlsseg3e32_v_i32m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e32_v_i32m2(int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, size_t vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_vsseg3e32_v_i32m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e32_v_i32m2_m(vbool16_t mask, int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, size_t vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_vsseg3e32_v_i32m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e32_v_i32m2(int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, size_t vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_vssseg3e32_v_i32m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e32_v_i32m2_m(vbool16_t mask, int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, size_t vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_vssseg3e32_v_i32m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, const int64_t *a, size_t vl)
{
  vint64m1x3_t ret = __riscv_vlseg3e64_v_i64m1x3(a, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), const int64_t *a, size_t vl)
{
  vint64m1x3_t ret = __riscv_vlseg3e64_v_i64m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64ff_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m1x3_t ret = __riscv_vlseg3e64ff_v_i64m1x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64ff_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m1x3_t ret = __riscv_vlseg3e64ff_v_i64m1x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m1x3_t ret = __riscv_vlsseg3e64_v_i64m1x3(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m1x3_t ret = __riscv_vlsseg3e64_v_i64m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e64_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, size_t vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_vsseg3e64_v_i64m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e64_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, size_t vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_vsseg3e64_v_i64m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e64_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, size_t vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_vssseg3e64_v_i64m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e64_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, size_t vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_vssseg3e64_v_i64m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e64_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, const int64_t *a, size_t vl)
{
  vint64m2x3_t ret = __riscv_vlseg3e64_v_i64m2x3(a, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), const int64_t *a, size_t vl)
{
  vint64m2x3_t ret = __riscv_vlseg3e64_v_i64m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64ff_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m2x3_t ret = __riscv_vlseg3e64ff_v_i64m2x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64ff_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m2x3_t ret = __riscv_vlseg3e64ff_v_i64m2x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e64_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m2x3_t ret = __riscv_vlsseg3e64_v_i64m2x3(a, s, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e64_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m2x3_t ret = __riscv_vlsseg3e64_v_i64m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e64_v_i64m2(int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, size_t vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_vsseg3e64_v_i64m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e64_v_i64m2_m(vbool32_t mask, int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, size_t vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_vsseg3e64_v_i64m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e64_v_i64m2(int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, size_t vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_vssseg3e64_v_i64m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e64_v_i64m2_m(vbool32_t mask, int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, size_t vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_vssseg3e64_v_i64m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, const uint8_t *a, size_t vl)
{
  vuint8m1x3_t ret = __riscv_vlseg3e8_v_u8m1x3(a, vl);
  *v0 = __riscv_vget_v_u8m1x3_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x3_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x3_u8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), const uint8_t *a, size_t vl)
{
  vuint8m1x3_t ret = __riscv_vlseg3e8_v_u8m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m1x3_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x3_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x3_u8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e8ff_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m1x3_t ret = __riscv_vlseg3e8ff_v_u8m1x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m1x3_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x3_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x3_u8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e8ff_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m1x3_t ret = __riscv_vlseg3e8ff_v_u8m1x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m1x3_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x3_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x3_u8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m1x3_t ret = __riscv_vlsseg3e8_v_u8m1x3(a, s, vl);
  *v0 = __riscv_vget_v_u8m1x3_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x3_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x3_u8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m1x3_t ret = __riscv_vlsseg3e8_v_u8m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m1x3_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x3_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x3_u8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e8_v_u8m1(uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, size_t vl)
{
  vuint8m1x3_t ret = __riscv_vcreate_v_u8m1x3(v0, v1, v2);
  __riscv_vsseg3e8_v_u8m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e8_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, size_t vl)
{
  vuint8m1x3_t ret = __riscv_vcreate_v_u8m1x3(v0, v1, v2);
  __riscv_vsseg3e8_v_u8m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e8_v_u8m1(uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, size_t vl)
{
  vuint8m1x3_t ret = __riscv_vcreate_v_u8m1x3(v0, v1, v2);
  __riscv_vssseg3e8_v_u8m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e8_v_u8m1_m(vbool8_t mask, uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, size_t vl)
{
  vuint8m1x3_t ret = __riscv_vcreate_v_u8m1x3(v0, v1, v2);
  __riscv_vssseg3e8_v_u8m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e8_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, const uint8_t *a, size_t vl)
{
  vuint8m2x3_t ret = __riscv_vlseg3e8_v_u8m2x3(a, vl);
  *v0 = __riscv_vget_v_u8m2x3_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x3_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x3_u8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e8_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), vuint8m2_t maskedoff2 __attribute__((__unused__)), const uint8_t *a, size_t vl)
{
  vuint8m2x3_t ret = __riscv_vlseg3e8_v_u8m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m2x3_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x3_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x3_u8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e8ff_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m2x3_t ret = __riscv_vlseg3e8ff_v_u8m2x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m2x3_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x3_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x3_u8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e8ff_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), vuint8m2_t maskedoff2 __attribute__((__unused__)), const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m2x3_t ret = __riscv_vlseg3e8ff_v_u8m2x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m2x3_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x3_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x3_u8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e8_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m2x3_t ret = __riscv_vlsseg3e8_v_u8m2x3(a, s, vl);
  *v0 = __riscv_vget_v_u8m2x3_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x3_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x3_u8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e8_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), vuint8m2_t maskedoff2 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m2x3_t ret = __riscv_vlsseg3e8_v_u8m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m2x3_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x3_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x3_u8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e8_v_u8m2(uint8_t *a, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, size_t vl)
{
  vuint8m2x3_t ret = __riscv_vcreate_v_u8m2x3(v0, v1, v2);
  __riscv_vsseg3e8_v_u8m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e8_v_u8m2_m(vbool4_t mask, uint8_t *a, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, size_t vl)
{
  vuint8m2x3_t ret = __riscv_vcreate_v_u8m2x3(v0, v1, v2);
  __riscv_vsseg3e8_v_u8m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e8_v_u8m2(uint8_t *a, ptrdiff_t s, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, size_t vl)
{
  vuint8m2x3_t ret = __riscv_vcreate_v_u8m2x3(v0, v1, v2);
  __riscv_vssseg3e8_v_u8m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e8_v_u8m2_m(vbool4_t mask, uint8_t *a, ptrdiff_t s, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, size_t vl)
{
  vuint8m2x3_t ret = __riscv_vcreate_v_u8m2x3(v0, v1, v2);
  __riscv_vssseg3e8_v_u8m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, const uint16_t *a, size_t vl)
{
  vuint16m1x3_t ret = __riscv_vlseg3e16_v_u16m1x3(a, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, size_t vl)
{
  vuint16m1x3_t ret = __riscv_vlseg3e16_v_u16m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e16ff_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m1x3_t ret = __riscv_vlseg3e16ff_v_u16m1x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e16ff_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m1x3_t ret = __riscv_vlseg3e16ff_v_u16m1x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m1x3_t ret = __riscv_vlsseg3e16_v_u16m1x3(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m1x3_t ret = __riscv_vlsseg3e16_v_u16m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e16_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, size_t vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_vsseg3e16_v_u16m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e16_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, size_t vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_vsseg3e16_v_u16m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e16_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, size_t vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_vssseg3e16_v_u16m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e16_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, size_t vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_vssseg3e16_v_u16m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e16_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, const uint16_t *a, size_t vl)
{
  vuint16m2x3_t ret = __riscv_vlseg3e16_v_u16m2x3(a, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e16_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, size_t vl)
{
  vuint16m2x3_t ret = __riscv_vlseg3e16_v_u16m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e16ff_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m2x3_t ret = __riscv_vlseg3e16ff_v_u16m2x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e16ff_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m2x3_t ret = __riscv_vlseg3e16ff_v_u16m2x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e16_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m2x3_t ret = __riscv_vlsseg3e16_v_u16m2x3(a, s, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e16_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m2x3_t ret = __riscv_vlsseg3e16_v_u16m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e16_v_u16m2(uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, size_t vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_vsseg3e16_v_u16m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e16_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, size_t vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_vsseg3e16_v_u16m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e16_v_u16m2(uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, size_t vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_vssseg3e16_v_u16m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e16_v_u16m2_m(vbool8_t mask, uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, size_t vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_vssseg3e16_v_u16m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, const uint32_t *a, size_t vl)
{
  vuint32m1x3_t ret = __riscv_vlseg3e32_v_u32m1x3(a, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, size_t vl)
{
  vuint32m1x3_t ret = __riscv_vlseg3e32_v_u32m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32ff_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m1x3_t ret = __riscv_vlseg3e32ff_v_u32m1x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32ff_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m1x3_t ret = __riscv_vlseg3e32ff_v_u32m1x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m1x3_t ret = __riscv_vlsseg3e32_v_u32m1x3(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m1x3_t ret = __riscv_vlsseg3e32_v_u32m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e32_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, size_t vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_vsseg3e32_v_u32m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e32_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, size_t vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_vsseg3e32_v_u32m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e32_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, size_t vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_vssseg3e32_v_u32m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e32_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, size_t vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_vssseg3e32_v_u32m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e32_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, const uint32_t *a, size_t vl)
{
  vuint32m2x3_t ret = __riscv_vlseg3e32_v_u32m2x3(a, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, size_t vl)
{
  vuint32m2x3_t ret = __riscv_vlseg3e32_v_u32m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32ff_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m2x3_t ret = __riscv_vlseg3e32ff_v_u32m2x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32ff_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m2x3_t ret = __riscv_vlseg3e32ff_v_u32m2x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e32_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m2x3_t ret = __riscv_vlsseg3e32_v_u32m2x3(a, s, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e32_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m2x3_t ret = __riscv_vlsseg3e32_v_u32m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e32_v_u32m2(uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, size_t vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_vsseg3e32_v_u32m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e32_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, size_t vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_vsseg3e32_v_u32m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e32_v_u32m2(uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, size_t vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_vssseg3e32_v_u32m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e32_v_u32m2_m(vbool16_t mask, uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, size_t vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_vssseg3e32_v_u32m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, const uint64_t *a, size_t vl)
{
  vuint64m1x3_t ret = __riscv_vlseg3e64_v_u64m1x3(a, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, size_t vl)
{
  vuint64m1x3_t ret = __riscv_vlseg3e64_v_u64m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64ff_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m1x3_t ret = __riscv_vlseg3e64ff_v_u64m1x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64ff_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m1x3_t ret = __riscv_vlseg3e64ff_v_u64m1x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m1x3_t ret = __riscv_vlsseg3e64_v_u64m1x3(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m1x3_t ret = __riscv_vlsseg3e64_v_u64m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e64_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, size_t vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_vsseg3e64_v_u64m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e64_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, size_t vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_vsseg3e64_v_u64m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e64_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, size_t vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_vssseg3e64_v_u64m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e64_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, size_t vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_vssseg3e64_v_u64m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e64_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, const uint64_t *a, size_t vl)
{
  vuint64m2x3_t ret = __riscv_vlseg3e64_v_u64m2x3(a, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, size_t vl)
{
  vuint64m2x3_t ret = __riscv_vlseg3e64_v_u64m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64ff_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m2x3_t ret = __riscv_vlseg3e64ff_v_u64m2x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64ff_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m2x3_t ret = __riscv_vlseg3e64ff_v_u64m2x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e64_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m2x3_t ret = __riscv_vlsseg3e64_v_u64m2x3(a, s, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e64_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m2x3_t ret = __riscv_vlsseg3e64_v_u64m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e64_v_u64m2(uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, size_t vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_vsseg3e64_v_u64m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e64_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, size_t vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_vsseg3e64_v_u64m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e64_v_u64m2(uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, size_t vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_vssseg3e64_v_u64m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e64_v_u64m2_m(vbool32_t mask, uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, size_t vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_vssseg3e64_v_u64m2x3_m(mask, a, s, ret, vl);
}
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg3e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, const float16_t *a, size_t vl)
{
  vfloat16m1x3_t ret = __riscv_vlseg3e16_v_f16m1x3(a, vl);
  *v0 = __riscv_vget_v_f16m1x3_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x3_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x3_f16m1(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg3e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), const float16_t *a, size_t vl)
{
  vfloat16m1x3_t ret = __riscv_vlseg3e16_v_f16m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_f16m1x3_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x3_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x3_f16m1(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg3e16ff_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m1x3_t ret = __riscv_vlseg3e16ff_v_f16m1x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m1x3_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x3_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x3_f16m1(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg3e16ff_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m1x3_t ret = __riscv_vlseg3e16ff_v_f16m1x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m1x3_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x3_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x3_f16m1(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg3e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m1x3_t ret = __riscv_vlsseg3e16_v_f16m1x3(a, s, vl);
  *v0 = __riscv_vget_v_f16m1x3_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x3_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x3_f16m1(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg3e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m1x3_t ret = __riscv_vlsseg3e16_v_f16m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f16m1x3_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x3_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x3_f16m1(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg3e16_v_f16m1(float16_t *a, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, size_t vl)
{
  vfloat16m1x3_t ret = __riscv_vcreate_v_f16m1x3(v0, v1, v2);
  __riscv_vsseg3e16_v_f16m1x3(a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg3e16_v_f16m1_m(vbool16_t mask, float16_t *a, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, size_t vl)
{
  vfloat16m1x3_t ret = __riscv_vcreate_v_f16m1x3(v0, v1, v2);
  __riscv_vsseg3e16_v_f16m1x3_m(mask, a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg3e16_v_f16m1(float16_t *a, ptrdiff_t s, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, size_t vl)
{
  vfloat16m1x3_t ret = __riscv_vcreate_v_f16m1x3(v0, v1, v2);
  __riscv_vssseg3e16_v_f16m1x3(a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg3e16_v_f16m1_m(vbool16_t mask, float16_t *a, ptrdiff_t s, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, size_t vl)
{
  vfloat16m1x3_t ret = __riscv_vcreate_v_f16m1x3(v0, v1, v2);
  __riscv_vssseg3e16_v_f16m1x3_m(mask, a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg3e16_v_f16m2(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, const float16_t *a, size_t vl)
{
  vfloat16m2x3_t ret = __riscv_vlseg3e16_v_f16m2x3(a, vl);
  *v0 = __riscv_vget_v_f16m2x3_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x3_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x3_f16m2(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg3e16_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vbool8_t mask, vfloat16m2_t maskedoff0 __attribute__((__unused__)), vfloat16m2_t maskedoff1 __attribute__((__unused__)), vfloat16m2_t maskedoff2 __attribute__((__unused__)), const float16_t *a, size_t vl)
{
  vfloat16m2x3_t ret = __riscv_vlseg3e16_v_f16m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_f16m2x3_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x3_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x3_f16m2(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg3e16ff_v_f16m2(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m2x3_t ret = __riscv_vlseg3e16ff_v_f16m2x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m2x3_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x3_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x3_f16m2(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg3e16ff_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vbool8_t mask, vfloat16m2_t maskedoff0 __attribute__((__unused__)), vfloat16m2_t maskedoff1 __attribute__((__unused__)), vfloat16m2_t maskedoff2 __attribute__((__unused__)), const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m2x3_t ret = __riscv_vlseg3e16ff_v_f16m2x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m2x3_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x3_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x3_f16m2(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg3e16_v_f16m2(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m2x3_t ret = __riscv_vlsseg3e16_v_f16m2x3(a, s, vl);
  *v0 = __riscv_vget_v_f16m2x3_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x3_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x3_f16m2(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg3e16_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vbool8_t mask, vfloat16m2_t maskedoff0 __attribute__((__unused__)), vfloat16m2_t maskedoff1 __attribute__((__unused__)), vfloat16m2_t maskedoff2 __attribute__((__unused__)), const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m2x3_t ret = __riscv_vlsseg3e16_v_f16m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f16m2x3_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x3_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x3_f16m2(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg3e16_v_f16m2(float16_t *a, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, size_t vl)
{
  vfloat16m2x3_t ret = __riscv_vcreate_v_f16m2x3(v0, v1, v2);
  __riscv_vsseg3e16_v_f16m2x3(a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg3e16_v_f16m2_m(vbool8_t mask, float16_t *a, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, size_t vl)
{
  vfloat16m2x3_t ret = __riscv_vcreate_v_f16m2x3(v0, v1, v2);
  __riscv_vsseg3e16_v_f16m2x3_m(mask, a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg3e16_v_f16m2(float16_t *a, ptrdiff_t s, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, size_t vl)
{
  vfloat16m2x3_t ret = __riscv_vcreate_v_f16m2x3(v0, v1, v2);
  __riscv_vssseg3e16_v_f16m2x3(a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg3e16_v_f16m2_m(vbool8_t mask, float16_t *a, ptrdiff_t s, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, size_t vl)
{
  vfloat16m2x3_t ret = __riscv_vcreate_v_f16m2x3(v0, v1, v2);
  __riscv_vssseg3e16_v_f16m2x3_m(mask, a, s, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vlseg3e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, const float32_t *a, size_t vl)
{
  vfloat32m1x3_t ret = __riscv_vlseg3e32_v_f32m1x3(a, vl);
  *v0 = __riscv_vget_v_f32m1x3_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x3_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x3_f32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), const float32_t *a, size_t vl)
{
  vfloat32m1x3_t ret = __riscv_vlseg3e32_v_f32m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_f32m1x3_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x3_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x3_f32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32ff_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m1x3_t ret = __riscv_vlseg3e32ff_v_f32m1x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m1x3_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x3_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x3_f32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32ff_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m1x3_t ret = __riscv_vlseg3e32ff_v_f32m1x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m1x3_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x3_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x3_f32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m1x3_t ret = __riscv_vlsseg3e32_v_f32m1x3(a, s, vl);
  *v0 = __riscv_vget_v_f32m1x3_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x3_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x3_f32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m1x3_t ret = __riscv_vlsseg3e32_v_f32m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f32m1x3_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x3_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x3_f32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e32_v_f32m1(float32_t *a, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, size_t vl)
{
  vfloat32m1x3_t ret = __riscv_vcreate_v_f32m1x3(v0, v1, v2);
  __riscv_vsseg3e32_v_f32m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e32_v_f32m1_m(vbool32_t mask, float32_t *a, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, size_t vl)
{
  vfloat32m1x3_t ret = __riscv_vcreate_v_f32m1x3(v0, v1, v2);
  __riscv_vsseg3e32_v_f32m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e32_v_f32m1(float32_t *a, ptrdiff_t s, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, size_t vl)
{
  vfloat32m1x3_t ret = __riscv_vcreate_v_f32m1x3(v0, v1, v2);
  __riscv_vssseg3e32_v_f32m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e32_v_f32m1_m(vbool32_t mask, float32_t *a, ptrdiff_t s, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, size_t vl)
{
  vfloat32m1x3_t ret = __riscv_vcreate_v_f32m1x3(v0, v1, v2);
  __riscv_vssseg3e32_v_f32m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e32_v_f32m2(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, const float32_t *a, size_t vl)
{
  vfloat32m2x3_t ret = __riscv_vlseg3e32_v_f32m2x3(a, vl);
  *v0 = __riscv_vget_v_f32m2x3_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x3_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x3_f32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vbool16_t mask, vfloat32m2_t maskedoff0 __attribute__((__unused__)), vfloat32m2_t maskedoff1 __attribute__((__unused__)), vfloat32m2_t maskedoff2 __attribute__((__unused__)), const float32_t *a, size_t vl)
{
  vfloat32m2x3_t ret = __riscv_vlseg3e32_v_f32m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_f32m2x3_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x3_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x3_f32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32ff_v_f32m2(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m2x3_t ret = __riscv_vlseg3e32ff_v_f32m2x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m2x3_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x3_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x3_f32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e32ff_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vbool16_t mask, vfloat32m2_t maskedoff0 __attribute__((__unused__)), vfloat32m2_t maskedoff1 __attribute__((__unused__)), vfloat32m2_t maskedoff2 __attribute__((__unused__)), const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m2x3_t ret = __riscv_vlseg3e32ff_v_f32m2x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m2x3_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x3_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x3_f32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e32_v_f32m2(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m2x3_t ret = __riscv_vlsseg3e32_v_f32m2x3(a, s, vl);
  *v0 = __riscv_vget_v_f32m2x3_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x3_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x3_f32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e32_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vbool16_t mask, vfloat32m2_t maskedoff0 __attribute__((__unused__)), vfloat32m2_t maskedoff1 __attribute__((__unused__)), vfloat32m2_t maskedoff2 __attribute__((__unused__)), const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m2x3_t ret = __riscv_vlsseg3e32_v_f32m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f32m2x3_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x3_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x3_f32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e32_v_f32m2(float32_t *a, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, size_t vl)
{
  vfloat32m2x3_t ret = __riscv_vcreate_v_f32m2x3(v0, v1, v2);
  __riscv_vsseg3e32_v_f32m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e32_v_f32m2_m(vbool16_t mask, float32_t *a, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, size_t vl)
{
  vfloat32m2x3_t ret = __riscv_vcreate_v_f32m2x3(v0, v1, v2);
  __riscv_vsseg3e32_v_f32m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e32_v_f32m2(float32_t *a, ptrdiff_t s, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, size_t vl)
{
  vfloat32m2x3_t ret = __riscv_vcreate_v_f32m2x3(v0, v1, v2);
  __riscv_vssseg3e32_v_f32m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e32_v_f32m2_m(vbool16_t mask, float32_t *a, ptrdiff_t s, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, size_t vl)
{
  vfloat32m2x3_t ret = __riscv_vcreate_v_f32m2x3(v0, v1, v2);
  __riscv_vssseg3e32_v_f32m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, const float64_t *a, size_t vl)
{
  vfloat64m1x3_t ret = __riscv_vlseg3e64_v_f64m1x3(a, vl);
  *v0 = __riscv_vget_v_f64m1x3_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x3_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x3_f64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), const float64_t *a, size_t vl)
{
  vfloat64m1x3_t ret = __riscv_vlseg3e64_v_f64m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_f64m1x3_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x3_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x3_f64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64ff_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m1x3_t ret = __riscv_vlseg3e64ff_v_f64m1x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m1x3_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x3_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x3_f64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64ff_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m1x3_t ret = __riscv_vlseg3e64ff_v_f64m1x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m1x3_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x3_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x3_f64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m1x3_t ret = __riscv_vlsseg3e64_v_f64m1x3(a, s, vl);
  *v0 = __riscv_vget_v_f64m1x3_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x3_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x3_f64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m1x3_t ret = __riscv_vlsseg3e64_v_f64m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f64m1x3_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x3_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x3_f64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e64_v_f64m1(float64_t *a, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, size_t vl)
{
  vfloat64m1x3_t ret = __riscv_vcreate_v_f64m1x3(v0, v1, v2);
  __riscv_vsseg3e64_v_f64m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e64_v_f64m1_m(vbool64_t mask, float64_t *a, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, size_t vl)
{
  vfloat64m1x3_t ret = __riscv_vcreate_v_f64m1x3(v0, v1, v2);
  __riscv_vsseg3e64_v_f64m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e64_v_f64m1(float64_t *a, ptrdiff_t s, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, size_t vl)
{
  vfloat64m1x3_t ret = __riscv_vcreate_v_f64m1x3(v0, v1, v2);
  __riscv_vssseg3e64_v_f64m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e64_v_f64m1_m(vbool64_t mask, float64_t *a, ptrdiff_t s, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, size_t vl)
{
  vfloat64m1x3_t ret = __riscv_vcreate_v_f64m1x3(v0, v1, v2);
  __riscv_vssseg3e64_v_f64m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3e64_v_f64m2(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, const float64_t *a, size_t vl)
{
  vfloat64m2x3_t ret = __riscv_vlseg3e64_v_f64m2x3(a, vl);
  *v0 = __riscv_vget_v_f64m2x3_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x3_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x3_f64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vbool32_t mask, vfloat64m2_t maskedoff0 __attribute__((__unused__)), vfloat64m2_t maskedoff1 __attribute__((__unused__)), vfloat64m2_t maskedoff2 __attribute__((__unused__)), const float64_t *a, size_t vl)
{
  vfloat64m2x3_t ret = __riscv_vlseg3e64_v_f64m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_f64m2x3_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x3_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x3_f64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64ff_v_f64m2(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m2x3_t ret = __riscv_vlseg3e64ff_v_f64m2x3(a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m2x3_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x3_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x3_f64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3e64ff_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vbool32_t mask, vfloat64m2_t maskedoff0 __attribute__((__unused__)), vfloat64m2_t maskedoff1 __attribute__((__unused__)), vfloat64m2_t maskedoff2 __attribute__((__unused__)), const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m2x3_t ret = __riscv_vlseg3e64ff_v_f64m2x3_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m2x3_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x3_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x3_f64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e64_v_f64m2(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m2x3_t ret = __riscv_vlsseg3e64_v_f64m2x3(a, s, vl);
  *v0 = __riscv_vget_v_f64m2x3_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x3_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x3_f64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3e64_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vbool32_t mask, vfloat64m2_t maskedoff0 __attribute__((__unused__)), vfloat64m2_t maskedoff1 __attribute__((__unused__)), vfloat64m2_t maskedoff2 __attribute__((__unused__)), const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m2x3_t ret = __riscv_vlsseg3e64_v_f64m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f64m2x3_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x3_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x3_f64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3e64_v_f64m2(float64_t *a, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, size_t vl)
{
  vfloat64m2x3_t ret = __riscv_vcreate_v_f64m2x3(v0, v1, v2);
  __riscv_vsseg3e64_v_f64m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3e64_v_f64m2_m(vbool32_t mask, float64_t *a, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, size_t vl)
{
  vfloat64m2x3_t ret = __riscv_vcreate_v_f64m2x3(v0, v1, v2);
  __riscv_vsseg3e64_v_f64m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e64_v_f64m2(float64_t *a, ptrdiff_t s, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, size_t vl)
{
  vfloat64m2x3_t ret = __riscv_vcreate_v_f64m2x3(v0, v1, v2);
  __riscv_vssseg3e64_v_f64m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3e64_v_f64m2_m(vbool32_t mask, float64_t *a, ptrdiff_t s, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, size_t vl)
{
  vfloat64m2x3_t ret = __riscv_vcreate_v_f64m2x3(v0, v1, v2);
  __riscv_vssseg3e64_v_f64m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, const int8_t *a, size_t vl)
{
  vint8m1x4_t ret = __riscv_vlseg4e8_v_i8m1x4(a, vl);
  *v0 = __riscv_vget_v_i8m1x4_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x4_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x4_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x4_i8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), const int8_t *a, size_t vl)
{
  vint8m1x4_t ret = __riscv_vlseg4e8_v_i8m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m1x4_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x4_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x4_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x4_i8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e8ff_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m1x4_t ret = __riscv_vlseg4e8ff_v_i8m1x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m1x4_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x4_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x4_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x4_i8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e8ff_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m1x4_t ret = __riscv_vlseg4e8ff_v_i8m1x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m1x4_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x4_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x4_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x4_i8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m1x4_t ret = __riscv_vlsseg4e8_v_i8m1x4(a, s, vl);
  *v0 = __riscv_vget_v_i8m1x4_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x4_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x4_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x4_i8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m1x4_t ret = __riscv_vlsseg4e8_v_i8m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m1x4_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x4_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x4_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x4_i8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e8_v_i8m1(int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, size_t vl)
{
  vint8m1x4_t ret = __riscv_vcreate_v_i8m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e8_v_i8m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e8_v_i8m1_m(vbool8_t mask, int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, size_t vl)
{
  vint8m1x4_t ret = __riscv_vcreate_v_i8m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e8_v_i8m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e8_v_i8m1(int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, size_t vl)
{
  vint8m1x4_t ret = __riscv_vcreate_v_i8m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e8_v_i8m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e8_v_i8m1_m(vbool8_t mask, int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, size_t vl)
{
  vint8m1x4_t ret = __riscv_vcreate_v_i8m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e8_v_i8m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e8_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t *v3, const int8_t *a, size_t vl)
{
  vint8m2x4_t ret = __riscv_vlseg4e8_v_i8m2x4(a, vl);
  *v0 = __riscv_vget_v_i8m2x4_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x4_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x4_i8m2(ret, 2);
  *v3 = __riscv_vget_v_i8m2x4_i8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e8_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t *v3, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), vint8m2_t maskedoff2 __attribute__((__unused__)), vint8m2_t maskedoff3 __attribute__((__unused__)), const int8_t *a, size_t vl)
{
  vint8m2x4_t ret = __riscv_vlseg4e8_v_i8m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m2x4_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x4_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x4_i8m2(ret, 2);
  *v3 = __riscv_vget_v_i8m2x4_i8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e8ff_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t *v3, const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m2x4_t ret = __riscv_vlseg4e8ff_v_i8m2x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m2x4_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x4_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x4_i8m2(ret, 2);
  *v3 = __riscv_vget_v_i8m2x4_i8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e8ff_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t *v3, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), vint8m2_t maskedoff2 __attribute__((__unused__)), vint8m2_t maskedoff3 __attribute__((__unused__)), const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m2x4_t ret = __riscv_vlseg4e8ff_v_i8m2x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m2x4_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x4_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x4_i8m2(ret, 2);
  *v3 = __riscv_vget_v_i8m2x4_i8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e8_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t *v3, const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m2x4_t ret = __riscv_vlsseg4e8_v_i8m2x4(a, s, vl);
  *v0 = __riscv_vget_v_i8m2x4_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x4_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x4_i8m2(ret, 2);
  *v3 = __riscv_vget_v_i8m2x4_i8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e8_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t *v3, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), vint8m2_t maskedoff2 __attribute__((__unused__)), vint8m2_t maskedoff3 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m2x4_t ret = __riscv_vlsseg4e8_v_i8m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m2x4_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x4_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x4_i8m2(ret, 2);
  *v3 = __riscv_vget_v_i8m2x4_i8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e8_v_i8m2(int8_t *a, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3, size_t vl)
{
  vint8m2x4_t ret = __riscv_vcreate_v_i8m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e8_v_i8m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e8_v_i8m2_m(vbool4_t mask, int8_t *a, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3, size_t vl)
{
  vint8m2x4_t ret = __riscv_vcreate_v_i8m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e8_v_i8m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e8_v_i8m2(int8_t *a, ptrdiff_t s, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3, size_t vl)
{
  vint8m2x4_t ret = __riscv_vcreate_v_i8m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e8_v_i8m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e8_v_i8m2_m(vbool4_t mask, int8_t *a, ptrdiff_t s, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3, size_t vl)
{
  vint8m2x4_t ret = __riscv_vcreate_v_i8m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e8_v_i8m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, const int16_t *a, size_t vl)
{
  vint16m1x4_t ret = __riscv_vlseg4e16_v_i16m1x4(a, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), const int16_t *a, size_t vl)
{
  vint16m1x4_t ret = __riscv_vlseg4e16_v_i16m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e16ff_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m1x4_t ret = __riscv_vlseg4e16ff_v_i16m1x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e16ff_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m1x4_t ret = __riscv_vlseg4e16ff_v_i16m1x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m1x4_t ret = __riscv_vlsseg4e16_v_i16m1x4(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m1x4_t ret = __riscv_vlsseg4e16_v_i16m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e16_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, size_t vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e16_v_i16m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e16_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, size_t vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e16_v_i16m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e16_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, size_t vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e16_v_i16m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e16_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, size_t vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e16_v_i16m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e16_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, const int16_t *a, size_t vl)
{
  vint16m2x4_t ret = __riscv_vlseg4e16_v_i16m2x4(a, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e16_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), vint16m2_t maskedoff3 __attribute__((__unused__)), const int16_t *a, size_t vl)
{
  vint16m2x4_t ret = __riscv_vlseg4e16_v_i16m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e16ff_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m2x4_t ret = __riscv_vlseg4e16ff_v_i16m2x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e16ff_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), vint16m2_t maskedoff3 __attribute__((__unused__)), const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m2x4_t ret = __riscv_vlseg4e16ff_v_i16m2x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e16_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m2x4_t ret = __riscv_vlsseg4e16_v_i16m2x4(a, s, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e16_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), vint16m2_t maskedoff3 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m2x4_t ret = __riscv_vlsseg4e16_v_i16m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e16_v_i16m2(int16_t *a, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, size_t vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e16_v_i16m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e16_v_i16m2_m(vbool8_t mask, int16_t *a, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, size_t vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e16_v_i16m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e16_v_i16m2(int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, size_t vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e16_v_i16m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e16_v_i16m2_m(vbool8_t mask, int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, size_t vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e16_v_i16m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *a, size_t vl)
{
  vint32m1x4_t ret = __riscv_vlseg4e32_v_i32m1x4(a, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), const int32_t *a, size_t vl)
{
  vint32m1x4_t ret = __riscv_vlseg4e32_v_i32m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32ff_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m1x4_t ret = __riscv_vlseg4e32ff_v_i32m1x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32ff_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m1x4_t ret = __riscv_vlseg4e32ff_v_i32m1x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m1x4_t ret = __riscv_vlsseg4e32_v_i32m1x4(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m1x4_t ret = __riscv_vlsseg4e32_v_i32m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e32_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, size_t vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e32_v_i32m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e32_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, size_t vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e32_v_i32m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e32_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, size_t vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e32_v_i32m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e32_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, size_t vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e32_v_i32m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e32_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *a, size_t vl)
{
  vint32m2x4_t ret = __riscv_vlseg4e32_v_i32m2x4(a, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), vint32m2_t maskedoff3 __attribute__((__unused__)), const int32_t *a, size_t vl)
{
  vint32m2x4_t ret = __riscv_vlseg4e32_v_i32m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32ff_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m2x4_t ret = __riscv_vlseg4e32ff_v_i32m2x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32ff_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), vint32m2_t maskedoff3 __attribute__((__unused__)), const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m2x4_t ret = __riscv_vlseg4e32ff_v_i32m2x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e32_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m2x4_t ret = __riscv_vlsseg4e32_v_i32m2x4(a, s, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e32_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), vint32m2_t maskedoff3 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m2x4_t ret = __riscv_vlsseg4e32_v_i32m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e32_v_i32m2(int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, size_t vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e32_v_i32m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e32_v_i32m2_m(vbool16_t mask, int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, size_t vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e32_v_i32m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e32_v_i32m2(int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, size_t vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e32_v_i32m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e32_v_i32m2_m(vbool16_t mask, int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, size_t vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e32_v_i32m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, const int64_t *a, size_t vl)
{
  vint64m1x4_t ret = __riscv_vlseg4e64_v_i64m1x4(a, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), const int64_t *a, size_t vl)
{
  vint64m1x4_t ret = __riscv_vlseg4e64_v_i64m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64ff_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m1x4_t ret = __riscv_vlseg4e64ff_v_i64m1x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64ff_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m1x4_t ret = __riscv_vlseg4e64ff_v_i64m1x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m1x4_t ret = __riscv_vlsseg4e64_v_i64m1x4(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m1x4_t ret = __riscv_vlsseg4e64_v_i64m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e64_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, size_t vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e64_v_i64m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e64_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, size_t vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e64_v_i64m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e64_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, size_t vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e64_v_i64m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e64_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, size_t vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e64_v_i64m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e64_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, const int64_t *a, size_t vl)
{
  vint64m2x4_t ret = __riscv_vlseg4e64_v_i64m2x4(a, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), vint64m2_t maskedoff3 __attribute__((__unused__)), const int64_t *a, size_t vl)
{
  vint64m2x4_t ret = __riscv_vlseg4e64_v_i64m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64ff_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m2x4_t ret = __riscv_vlseg4e64ff_v_i64m2x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64ff_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), vint64m2_t maskedoff3 __attribute__((__unused__)), const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m2x4_t ret = __riscv_vlseg4e64ff_v_i64m2x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e64_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m2x4_t ret = __riscv_vlsseg4e64_v_i64m2x4(a, s, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e64_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), vint64m2_t maskedoff3 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m2x4_t ret = __riscv_vlsseg4e64_v_i64m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e64_v_i64m2(int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, size_t vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e64_v_i64m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e64_v_i64m2_m(vbool32_t mask, int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, size_t vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e64_v_i64m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e64_v_i64m2(int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, size_t vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e64_v_i64m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e64_v_i64m2_m(vbool32_t mask, int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, size_t vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e64_v_i64m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, const uint8_t *a, size_t vl)
{
  vuint8m1x4_t ret = __riscv_vlseg4e8_v_u8m1x4(a, vl);
  *v0 = __riscv_vget_v_u8m1x4_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x4_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x4_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x4_u8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), const uint8_t *a, size_t vl)
{
  vuint8m1x4_t ret = __riscv_vlseg4e8_v_u8m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m1x4_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x4_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x4_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x4_u8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e8ff_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m1x4_t ret = __riscv_vlseg4e8ff_v_u8m1x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m1x4_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x4_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x4_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x4_u8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e8ff_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m1x4_t ret = __riscv_vlseg4e8ff_v_u8m1x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m1x4_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x4_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x4_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x4_u8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m1x4_t ret = __riscv_vlsseg4e8_v_u8m1x4(a, s, vl);
  *v0 = __riscv_vget_v_u8m1x4_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x4_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x4_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x4_u8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m1x4_t ret = __riscv_vlsseg4e8_v_u8m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m1x4_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x4_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x4_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x4_u8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e8_v_u8m1(uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, size_t vl)
{
  vuint8m1x4_t ret = __riscv_vcreate_v_u8m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e8_v_u8m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e8_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, size_t vl)
{
  vuint8m1x4_t ret = __riscv_vcreate_v_u8m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e8_v_u8m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e8_v_u8m1(uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, size_t vl)
{
  vuint8m1x4_t ret = __riscv_vcreate_v_u8m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e8_v_u8m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e8_v_u8m1_m(vbool8_t mask, uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, size_t vl)
{
  vuint8m1x4_t ret = __riscv_vcreate_v_u8m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e8_v_u8m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e8_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t *v3, const uint8_t *a, size_t vl)
{
  vuint8m2x4_t ret = __riscv_vlseg4e8_v_u8m2x4(a, vl);
  *v0 = __riscv_vget_v_u8m2x4_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x4_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x4_u8m2(ret, 2);
  *v3 = __riscv_vget_v_u8m2x4_u8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e8_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t *v3, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), vuint8m2_t maskedoff2 __attribute__((__unused__)), vuint8m2_t maskedoff3 __attribute__((__unused__)), const uint8_t *a, size_t vl)
{
  vuint8m2x4_t ret = __riscv_vlseg4e8_v_u8m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m2x4_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x4_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x4_u8m2(ret, 2);
  *v3 = __riscv_vget_v_u8m2x4_u8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e8ff_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t *v3, const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m2x4_t ret = __riscv_vlseg4e8ff_v_u8m2x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m2x4_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x4_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x4_u8m2(ret, 2);
  *v3 = __riscv_vget_v_u8m2x4_u8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e8ff_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t *v3, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), vuint8m2_t maskedoff2 __attribute__((__unused__)), vuint8m2_t maskedoff3 __attribute__((__unused__)), const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m2x4_t ret = __riscv_vlseg4e8ff_v_u8m2x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m2x4_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x4_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x4_u8m2(ret, 2);
  *v3 = __riscv_vget_v_u8m2x4_u8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e8_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t *v3, const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m2x4_t ret = __riscv_vlsseg4e8_v_u8m2x4(a, s, vl);
  *v0 = __riscv_vget_v_u8m2x4_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x4_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x4_u8m2(ret, 2);
  *v3 = __riscv_vget_v_u8m2x4_u8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e8_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t *v3, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), vuint8m2_t maskedoff2 __attribute__((__unused__)), vuint8m2_t maskedoff3 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m2x4_t ret = __riscv_vlsseg4e8_v_u8m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m2x4_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x4_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x4_u8m2(ret, 2);
  *v3 = __riscv_vget_v_u8m2x4_u8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e8_v_u8m2(uint8_t *a, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, size_t vl)
{
  vuint8m2x4_t ret = __riscv_vcreate_v_u8m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e8_v_u8m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e8_v_u8m2_m(vbool4_t mask, uint8_t *a, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, size_t vl)
{
  vuint8m2x4_t ret = __riscv_vcreate_v_u8m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e8_v_u8m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e8_v_u8m2(uint8_t *a, ptrdiff_t s, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, size_t vl)
{
  vuint8m2x4_t ret = __riscv_vcreate_v_u8m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e8_v_u8m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e8_v_u8m2_m(vbool4_t mask, uint8_t *a, ptrdiff_t s, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, size_t vl)
{
  vuint8m2x4_t ret = __riscv_vcreate_v_u8m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e8_v_u8m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, const uint16_t *a, size_t vl)
{
  vuint16m1x4_t ret = __riscv_vlseg4e16_v_u16m1x4(a, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, size_t vl)
{
  vuint16m1x4_t ret = __riscv_vlseg4e16_v_u16m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e16ff_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m1x4_t ret = __riscv_vlseg4e16ff_v_u16m1x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e16ff_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m1x4_t ret = __riscv_vlseg4e16ff_v_u16m1x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m1x4_t ret = __riscv_vlsseg4e16_v_u16m1x4(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m1x4_t ret = __riscv_vlsseg4e16_v_u16m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e16_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, size_t vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e16_v_u16m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e16_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, size_t vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e16_v_u16m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e16_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, size_t vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e16_v_u16m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e16_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, size_t vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e16_v_u16m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e16_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, const uint16_t *a, size_t vl)
{
  vuint16m2x4_t ret = __riscv_vlseg4e16_v_u16m2x4(a, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e16_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), vuint16m2_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, size_t vl)
{
  vuint16m2x4_t ret = __riscv_vlseg4e16_v_u16m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e16ff_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m2x4_t ret = __riscv_vlseg4e16ff_v_u16m2x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e16ff_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), vuint16m2_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m2x4_t ret = __riscv_vlseg4e16ff_v_u16m2x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e16_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m2x4_t ret = __riscv_vlsseg4e16_v_u16m2x4(a, s, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e16_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), vuint16m2_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m2x4_t ret = __riscv_vlsseg4e16_v_u16m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e16_v_u16m2(uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, size_t vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e16_v_u16m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e16_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, size_t vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e16_v_u16m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e16_v_u16m2(uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, size_t vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e16_v_u16m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e16_v_u16m2_m(vbool8_t mask, uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, size_t vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e16_v_u16m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *a, size_t vl)
{
  vuint32m1x4_t ret = __riscv_vlseg4e32_v_u32m1x4(a, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, size_t vl)
{
  vuint32m1x4_t ret = __riscv_vlseg4e32_v_u32m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32ff_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m1x4_t ret = __riscv_vlseg4e32ff_v_u32m1x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32ff_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m1x4_t ret = __riscv_vlseg4e32ff_v_u32m1x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m1x4_t ret = __riscv_vlsseg4e32_v_u32m1x4(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m1x4_t ret = __riscv_vlsseg4e32_v_u32m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e32_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, size_t vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e32_v_u32m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e32_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, size_t vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e32_v_u32m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e32_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, size_t vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e32_v_u32m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e32_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, size_t vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e32_v_u32m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e32_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *a, size_t vl)
{
  vuint32m2x4_t ret = __riscv_vlseg4e32_v_u32m2x4(a, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), vuint32m2_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, size_t vl)
{
  vuint32m2x4_t ret = __riscv_vlseg4e32_v_u32m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32ff_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m2x4_t ret = __riscv_vlseg4e32ff_v_u32m2x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32ff_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), vuint32m2_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m2x4_t ret = __riscv_vlseg4e32ff_v_u32m2x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e32_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m2x4_t ret = __riscv_vlsseg4e32_v_u32m2x4(a, s, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e32_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), vuint32m2_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m2x4_t ret = __riscv_vlsseg4e32_v_u32m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e32_v_u32m2(uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, size_t vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e32_v_u32m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e32_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, size_t vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e32_v_u32m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e32_v_u32m2(uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, size_t vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e32_v_u32m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e32_v_u32m2_m(vbool16_t mask, uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, size_t vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e32_v_u32m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, const uint64_t *a, size_t vl)
{
  vuint64m1x4_t ret = __riscv_vlseg4e64_v_u64m1x4(a, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, size_t vl)
{
  vuint64m1x4_t ret = __riscv_vlseg4e64_v_u64m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64ff_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m1x4_t ret = __riscv_vlseg4e64ff_v_u64m1x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64ff_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m1x4_t ret = __riscv_vlseg4e64ff_v_u64m1x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m1x4_t ret = __riscv_vlsseg4e64_v_u64m1x4(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m1x4_t ret = __riscv_vlsseg4e64_v_u64m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e64_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, size_t vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e64_v_u64m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e64_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, size_t vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e64_v_u64m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e64_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, size_t vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e64_v_u64m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e64_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, size_t vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e64_v_u64m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e64_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, const uint64_t *a, size_t vl)
{
  vuint64m2x4_t ret = __riscv_vlseg4e64_v_u64m2x4(a, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), vuint64m2_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, size_t vl)
{
  vuint64m2x4_t ret = __riscv_vlseg4e64_v_u64m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64ff_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m2x4_t ret = __riscv_vlseg4e64ff_v_u64m2x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64ff_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), vuint64m2_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m2x4_t ret = __riscv_vlseg4e64ff_v_u64m2x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e64_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m2x4_t ret = __riscv_vlsseg4e64_v_u64m2x4(a, s, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e64_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), vuint64m2_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m2x4_t ret = __riscv_vlsseg4e64_v_u64m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e64_v_u64m2(uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, size_t vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e64_v_u64m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e64_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, size_t vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e64_v_u64m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e64_v_u64m2(uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, size_t vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e64_v_u64m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e64_v_u64m2_m(vbool32_t mask, uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, size_t vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e64_v_u64m2x4_m(mask, a, s, ret, vl);
}
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg4e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, const float16_t *a, size_t vl)
{
  vfloat16m1x4_t ret = __riscv_vlseg4e16_v_f16m1x4(a, vl);
  *v0 = __riscv_vget_v_f16m1x4_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x4_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x4_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x4_f16m1(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg4e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), const float16_t *a, size_t vl)
{
  vfloat16m1x4_t ret = __riscv_vlseg4e16_v_f16m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_f16m1x4_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x4_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x4_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x4_f16m1(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg4e16ff_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m1x4_t ret = __riscv_vlseg4e16ff_v_f16m1x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m1x4_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x4_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x4_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x4_f16m1(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg4e16ff_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m1x4_t ret = __riscv_vlseg4e16ff_v_f16m1x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m1x4_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x4_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x4_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x4_f16m1(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg4e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m1x4_t ret = __riscv_vlsseg4e16_v_f16m1x4(a, s, vl);
  *v0 = __riscv_vget_v_f16m1x4_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x4_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x4_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x4_f16m1(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg4e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m1x4_t ret = __riscv_vlsseg4e16_v_f16m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f16m1x4_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x4_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x4_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x4_f16m1(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg4e16_v_f16m1(float16_t *a, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, size_t vl)
{
  vfloat16m1x4_t ret = __riscv_vcreate_v_f16m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e16_v_f16m1x4(a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg4e16_v_f16m1_m(vbool16_t mask, float16_t *a, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, size_t vl)
{
  vfloat16m1x4_t ret = __riscv_vcreate_v_f16m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e16_v_f16m1x4_m(mask, a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg4e16_v_f16m1(float16_t *a, ptrdiff_t s, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, size_t vl)
{
  vfloat16m1x4_t ret = __riscv_vcreate_v_f16m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e16_v_f16m1x4(a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg4e16_v_f16m1_m(vbool16_t mask, float16_t *a, ptrdiff_t s, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, size_t vl)
{
  vfloat16m1x4_t ret = __riscv_vcreate_v_f16m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e16_v_f16m1x4_m(mask, a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg4e16_v_f16m2(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t *v3, const float16_t *a, size_t vl)
{
  vfloat16m2x4_t ret = __riscv_vlseg4e16_v_f16m2x4(a, vl);
  *v0 = __riscv_vget_v_f16m2x4_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x4_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x4_f16m2(ret, 2);
  *v3 = __riscv_vget_v_f16m2x4_f16m2(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg4e16_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t *v3, vbool8_t mask, vfloat16m2_t maskedoff0 __attribute__((__unused__)), vfloat16m2_t maskedoff1 __attribute__((__unused__)), vfloat16m2_t maskedoff2 __attribute__((__unused__)), vfloat16m2_t maskedoff3 __attribute__((__unused__)), const float16_t *a, size_t vl)
{
  vfloat16m2x4_t ret = __riscv_vlseg4e16_v_f16m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_f16m2x4_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x4_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x4_f16m2(ret, 2);
  *v3 = __riscv_vget_v_f16m2x4_f16m2(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg4e16ff_v_f16m2(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t *v3, const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m2x4_t ret = __riscv_vlseg4e16ff_v_f16m2x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m2x4_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x4_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x4_f16m2(ret, 2);
  *v3 = __riscv_vget_v_f16m2x4_f16m2(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg4e16ff_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t *v3, vbool8_t mask, vfloat16m2_t maskedoff0 __attribute__((__unused__)), vfloat16m2_t maskedoff1 __attribute__((__unused__)), vfloat16m2_t maskedoff2 __attribute__((__unused__)), vfloat16m2_t maskedoff3 __attribute__((__unused__)), const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m2x4_t ret = __riscv_vlseg4e16ff_v_f16m2x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m2x4_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x4_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x4_f16m2(ret, 2);
  *v3 = __riscv_vget_v_f16m2x4_f16m2(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg4e16_v_f16m2(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t *v3, const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m2x4_t ret = __riscv_vlsseg4e16_v_f16m2x4(a, s, vl);
  *v0 = __riscv_vget_v_f16m2x4_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x4_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x4_f16m2(ret, 2);
  *v3 = __riscv_vget_v_f16m2x4_f16m2(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg4e16_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t *v3, vbool8_t mask, vfloat16m2_t maskedoff0 __attribute__((__unused__)), vfloat16m2_t maskedoff1 __attribute__((__unused__)), vfloat16m2_t maskedoff2 __attribute__((__unused__)), vfloat16m2_t maskedoff3 __attribute__((__unused__)), const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m2x4_t ret = __riscv_vlsseg4e16_v_f16m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f16m2x4_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x4_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x4_f16m2(ret, 2);
  *v3 = __riscv_vget_v_f16m2x4_f16m2(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg4e16_v_f16m2(float16_t *a, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, vfloat16m2_t v3, size_t vl)
{
  vfloat16m2x4_t ret = __riscv_vcreate_v_f16m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e16_v_f16m2x4(a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg4e16_v_f16m2_m(vbool8_t mask, float16_t *a, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, vfloat16m2_t v3, size_t vl)
{
  vfloat16m2x4_t ret = __riscv_vcreate_v_f16m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e16_v_f16m2x4_m(mask, a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg4e16_v_f16m2(float16_t *a, ptrdiff_t s, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, vfloat16m2_t v3, size_t vl)
{
  vfloat16m2x4_t ret = __riscv_vcreate_v_f16m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e16_v_f16m2x4(a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg4e16_v_f16m2_m(vbool8_t mask, float16_t *a, ptrdiff_t s, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, vfloat16m2_t v3, size_t vl)
{
  vfloat16m2x4_t ret = __riscv_vcreate_v_f16m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e16_v_f16m2x4_m(mask, a, s, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vlseg4e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, const float32_t *a, size_t vl)
{
  vfloat32m1x4_t ret = __riscv_vlseg4e32_v_f32m1x4(a, vl);
  *v0 = __riscv_vget_v_f32m1x4_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x4_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x4_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x4_f32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), const float32_t *a, size_t vl)
{
  vfloat32m1x4_t ret = __riscv_vlseg4e32_v_f32m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_f32m1x4_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x4_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x4_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x4_f32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32ff_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m1x4_t ret = __riscv_vlseg4e32ff_v_f32m1x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m1x4_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x4_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x4_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x4_f32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32ff_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m1x4_t ret = __riscv_vlseg4e32ff_v_f32m1x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m1x4_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x4_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x4_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x4_f32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m1x4_t ret = __riscv_vlsseg4e32_v_f32m1x4(a, s, vl);
  *v0 = __riscv_vget_v_f32m1x4_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x4_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x4_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x4_f32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m1x4_t ret = __riscv_vlsseg4e32_v_f32m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f32m1x4_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x4_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x4_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x4_f32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e32_v_f32m1(float32_t *a, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, size_t vl)
{
  vfloat32m1x4_t ret = __riscv_vcreate_v_f32m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e32_v_f32m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e32_v_f32m1_m(vbool32_t mask, float32_t *a, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, size_t vl)
{
  vfloat32m1x4_t ret = __riscv_vcreate_v_f32m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e32_v_f32m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e32_v_f32m1(float32_t *a, ptrdiff_t s, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, size_t vl)
{
  vfloat32m1x4_t ret = __riscv_vcreate_v_f32m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e32_v_f32m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e32_v_f32m1_m(vbool32_t mask, float32_t *a, ptrdiff_t s, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, size_t vl)
{
  vfloat32m1x4_t ret = __riscv_vcreate_v_f32m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e32_v_f32m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e32_v_f32m2(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, const float32_t *a, size_t vl)
{
  vfloat32m2x4_t ret = __riscv_vlseg4e32_v_f32m2x4(a, vl);
  *v0 = __riscv_vget_v_f32m2x4_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x4_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x4_f32m2(ret, 2);
  *v3 = __riscv_vget_v_f32m2x4_f32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vbool16_t mask, vfloat32m2_t maskedoff0 __attribute__((__unused__)), vfloat32m2_t maskedoff1 __attribute__((__unused__)), vfloat32m2_t maskedoff2 __attribute__((__unused__)), vfloat32m2_t maskedoff3 __attribute__((__unused__)), const float32_t *a, size_t vl)
{
  vfloat32m2x4_t ret = __riscv_vlseg4e32_v_f32m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_f32m2x4_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x4_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x4_f32m2(ret, 2);
  *v3 = __riscv_vget_v_f32m2x4_f32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32ff_v_f32m2(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m2x4_t ret = __riscv_vlseg4e32ff_v_f32m2x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m2x4_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x4_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x4_f32m2(ret, 2);
  *v3 = __riscv_vget_v_f32m2x4_f32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e32ff_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vbool16_t mask, vfloat32m2_t maskedoff0 __attribute__((__unused__)), vfloat32m2_t maskedoff1 __attribute__((__unused__)), vfloat32m2_t maskedoff2 __attribute__((__unused__)), vfloat32m2_t maskedoff3 __attribute__((__unused__)), const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m2x4_t ret = __riscv_vlseg4e32ff_v_f32m2x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m2x4_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x4_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x4_f32m2(ret, 2);
  *v3 = __riscv_vget_v_f32m2x4_f32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e32_v_f32m2(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m2x4_t ret = __riscv_vlsseg4e32_v_f32m2x4(a, s, vl);
  *v0 = __riscv_vget_v_f32m2x4_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x4_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x4_f32m2(ret, 2);
  *v3 = __riscv_vget_v_f32m2x4_f32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e32_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vbool16_t mask, vfloat32m2_t maskedoff0 __attribute__((__unused__)), vfloat32m2_t maskedoff1 __attribute__((__unused__)), vfloat32m2_t maskedoff2 __attribute__((__unused__)), vfloat32m2_t maskedoff3 __attribute__((__unused__)), const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m2x4_t ret = __riscv_vlsseg4e32_v_f32m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f32m2x4_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x4_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x4_f32m2(ret, 2);
  *v3 = __riscv_vget_v_f32m2x4_f32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e32_v_f32m2(float32_t *a, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3, size_t vl)
{
  vfloat32m2x4_t ret = __riscv_vcreate_v_f32m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e32_v_f32m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e32_v_f32m2_m(vbool16_t mask, float32_t *a, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3, size_t vl)
{
  vfloat32m2x4_t ret = __riscv_vcreate_v_f32m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e32_v_f32m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e32_v_f32m2(float32_t *a, ptrdiff_t s, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3, size_t vl)
{
  vfloat32m2x4_t ret = __riscv_vcreate_v_f32m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e32_v_f32m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e32_v_f32m2_m(vbool16_t mask, float32_t *a, ptrdiff_t s, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3, size_t vl)
{
  vfloat32m2x4_t ret = __riscv_vcreate_v_f32m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e32_v_f32m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, const float64_t *a, size_t vl)
{
  vfloat64m1x4_t ret = __riscv_vlseg4e64_v_f64m1x4(a, vl);
  *v0 = __riscv_vget_v_f64m1x4_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x4_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x4_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x4_f64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), const float64_t *a, size_t vl)
{
  vfloat64m1x4_t ret = __riscv_vlseg4e64_v_f64m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_f64m1x4_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x4_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x4_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x4_f64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64ff_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m1x4_t ret = __riscv_vlseg4e64ff_v_f64m1x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m1x4_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x4_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x4_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x4_f64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64ff_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m1x4_t ret = __riscv_vlseg4e64ff_v_f64m1x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m1x4_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x4_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x4_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x4_f64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m1x4_t ret = __riscv_vlsseg4e64_v_f64m1x4(a, s, vl);
  *v0 = __riscv_vget_v_f64m1x4_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x4_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x4_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x4_f64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m1x4_t ret = __riscv_vlsseg4e64_v_f64m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f64m1x4_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x4_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x4_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x4_f64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e64_v_f64m1(float64_t *a, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, size_t vl)
{
  vfloat64m1x4_t ret = __riscv_vcreate_v_f64m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e64_v_f64m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e64_v_f64m1_m(vbool64_t mask, float64_t *a, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, size_t vl)
{
  vfloat64m1x4_t ret = __riscv_vcreate_v_f64m1x4(v0, v1, v2, v3);
  __riscv_vsseg4e64_v_f64m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e64_v_f64m1(float64_t *a, ptrdiff_t s, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, size_t vl)
{
  vfloat64m1x4_t ret = __riscv_vcreate_v_f64m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e64_v_f64m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e64_v_f64m1_m(vbool64_t mask, float64_t *a, ptrdiff_t s, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, size_t vl)
{
  vfloat64m1x4_t ret = __riscv_vcreate_v_f64m1x4(v0, v1, v2, v3);
  __riscv_vssseg4e64_v_f64m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4e64_v_f64m2(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t *v3, const float64_t *a, size_t vl)
{
  vfloat64m2x4_t ret = __riscv_vlseg4e64_v_f64m2x4(a, vl);
  *v0 = __riscv_vget_v_f64m2x4_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x4_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x4_f64m2(ret, 2);
  *v3 = __riscv_vget_v_f64m2x4_f64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t *v3, vbool32_t mask, vfloat64m2_t maskedoff0 __attribute__((__unused__)), vfloat64m2_t maskedoff1 __attribute__((__unused__)), vfloat64m2_t maskedoff2 __attribute__((__unused__)), vfloat64m2_t maskedoff3 __attribute__((__unused__)), const float64_t *a, size_t vl)
{
  vfloat64m2x4_t ret = __riscv_vlseg4e64_v_f64m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_f64m2x4_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x4_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x4_f64m2(ret, 2);
  *v3 = __riscv_vget_v_f64m2x4_f64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64ff_v_f64m2(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t *v3, const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m2x4_t ret = __riscv_vlseg4e64ff_v_f64m2x4(a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m2x4_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x4_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x4_f64m2(ret, 2);
  *v3 = __riscv_vget_v_f64m2x4_f64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4e64ff_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t *v3, vbool32_t mask, vfloat64m2_t maskedoff0 __attribute__((__unused__)), vfloat64m2_t maskedoff1 __attribute__((__unused__)), vfloat64m2_t maskedoff2 __attribute__((__unused__)), vfloat64m2_t maskedoff3 __attribute__((__unused__)), const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m2x4_t ret = __riscv_vlseg4e64ff_v_f64m2x4_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m2x4_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x4_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x4_f64m2(ret, 2);
  *v3 = __riscv_vget_v_f64m2x4_f64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e64_v_f64m2(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t *v3, const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m2x4_t ret = __riscv_vlsseg4e64_v_f64m2x4(a, s, vl);
  *v0 = __riscv_vget_v_f64m2x4_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x4_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x4_f64m2(ret, 2);
  *v3 = __riscv_vget_v_f64m2x4_f64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4e64_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t *v3, vbool32_t mask, vfloat64m2_t maskedoff0 __attribute__((__unused__)), vfloat64m2_t maskedoff1 __attribute__((__unused__)), vfloat64m2_t maskedoff2 __attribute__((__unused__)), vfloat64m2_t maskedoff3 __attribute__((__unused__)), const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m2x4_t ret = __riscv_vlsseg4e64_v_f64m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f64m2x4_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x4_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x4_f64m2(ret, 2);
  *v3 = __riscv_vget_v_f64m2x4_f64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4e64_v_f64m2(float64_t *a, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3, size_t vl)
{
  vfloat64m2x4_t ret = __riscv_vcreate_v_f64m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e64_v_f64m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4e64_v_f64m2_m(vbool32_t mask, float64_t *a, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3, size_t vl)
{
  vfloat64m2x4_t ret = __riscv_vcreate_v_f64m2x4(v0, v1, v2, v3);
  __riscv_vsseg4e64_v_f64m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e64_v_f64m2(float64_t *a, ptrdiff_t s, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3, size_t vl)
{
  vfloat64m2x4_t ret = __riscv_vcreate_v_f64m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e64_v_f64m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4e64_v_f64m2_m(vbool32_t mask, float64_t *a, ptrdiff_t s, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3, size_t vl)
{
  vfloat64m2x4_t ret = __riscv_vcreate_v_f64m2x4(v0, v1, v2, v3);
  __riscv_vssseg4e64_v_f64m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, const int8_t *a, size_t vl)
{
  vint8m1x5_t ret = __riscv_vlseg5e8_v_i8m1x5(a, vl);
  *v0 = __riscv_vget_v_i8m1x5_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x5_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x5_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x5_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x5_i8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), const int8_t *a, size_t vl)
{
  vint8m1x5_t ret = __riscv_vlseg5e8_v_i8m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m1x5_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x5_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x5_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x5_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x5_i8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e8ff_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m1x5_t ret = __riscv_vlseg5e8ff_v_i8m1x5(a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m1x5_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x5_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x5_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x5_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x5_i8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e8ff_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m1x5_t ret = __riscv_vlseg5e8ff_v_i8m1x5_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m1x5_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x5_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x5_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x5_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x5_i8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m1x5_t ret = __riscv_vlsseg5e8_v_i8m1x5(a, s, vl);
  *v0 = __riscv_vget_v_i8m1x5_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x5_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x5_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x5_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x5_i8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m1x5_t ret = __riscv_vlsseg5e8_v_i8m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m1x5_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x5_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x5_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x5_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x5_i8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5e8_v_i8m1(int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, size_t vl)
{
  vint8m1x5_t ret = __riscv_vcreate_v_i8m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e8_v_i8m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5e8_v_i8m1_m(vbool8_t mask, int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, size_t vl)
{
  vint8m1x5_t ret = __riscv_vcreate_v_i8m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e8_v_i8m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e8_v_i8m1(int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, size_t vl)
{
  vint8m1x5_t ret = __riscv_vcreate_v_i8m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e8_v_i8m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e8_v_i8m1_m(vbool8_t mask, int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, size_t vl)
{
  vint8m1x5_t ret = __riscv_vcreate_v_i8m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e8_v_i8m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, const int16_t *a, size_t vl)
{
  vint16m1x5_t ret = __riscv_vlseg5e16_v_i16m1x5(a, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), const int16_t *a, size_t vl)
{
  vint16m1x5_t ret = __riscv_vlseg5e16_v_i16m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e16ff_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m1x5_t ret = __riscv_vlseg5e16ff_v_i16m1x5(a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e16ff_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m1x5_t ret = __riscv_vlseg5e16ff_v_i16m1x5_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m1x5_t ret = __riscv_vlsseg5e16_v_i16m1x5(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m1x5_t ret = __riscv_vlsseg5e16_v_i16m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5e16_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, size_t vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e16_v_i16m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5e16_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, size_t vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e16_v_i16m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e16_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, size_t vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e16_v_i16m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e16_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, size_t vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e16_v_i16m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, const int32_t *a, size_t vl)
{
  vint32m1x5_t ret = __riscv_vlseg5e32_v_i32m1x5(a, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), const int32_t *a, size_t vl)
{
  vint32m1x5_t ret = __riscv_vlseg5e32_v_i32m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e32ff_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m1x5_t ret = __riscv_vlseg5e32ff_v_i32m1x5(a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e32ff_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m1x5_t ret = __riscv_vlseg5e32ff_v_i32m1x5_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m1x5_t ret = __riscv_vlsseg5e32_v_i32m1x5(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m1x5_t ret = __riscv_vlsseg5e32_v_i32m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5e32_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, size_t vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e32_v_i32m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5e32_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, size_t vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e32_v_i32m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e32_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, size_t vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e32_v_i32m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e32_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, size_t vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e32_v_i32m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *a, size_t vl)
{
  vint64m1x5_t ret = __riscv_vlseg5e64_v_i64m1x5(a, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), const int64_t *a, size_t vl)
{
  vint64m1x5_t ret = __riscv_vlseg5e64_v_i64m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e64ff_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m1x5_t ret = __riscv_vlseg5e64ff_v_i64m1x5(a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e64ff_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m1x5_t ret = __riscv_vlseg5e64ff_v_i64m1x5_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m1x5_t ret = __riscv_vlsseg5e64_v_i64m1x5(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m1x5_t ret = __riscv_vlsseg5e64_v_i64m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5e64_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, size_t vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e64_v_i64m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5e64_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, size_t vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e64_v_i64m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e64_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, size_t vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e64_v_i64m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e64_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, size_t vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e64_v_i64m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, const uint8_t *a, size_t vl)
{
  vuint8m1x5_t ret = __riscv_vlseg5e8_v_u8m1x5(a, vl);
  *v0 = __riscv_vget_v_u8m1x5_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x5_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x5_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x5_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x5_u8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), const uint8_t *a, size_t vl)
{
  vuint8m1x5_t ret = __riscv_vlseg5e8_v_u8m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m1x5_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x5_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x5_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x5_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x5_u8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e8ff_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m1x5_t ret = __riscv_vlseg5e8ff_v_u8m1x5(a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m1x5_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x5_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x5_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x5_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x5_u8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e8ff_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m1x5_t ret = __riscv_vlseg5e8ff_v_u8m1x5_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m1x5_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x5_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x5_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x5_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x5_u8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m1x5_t ret = __riscv_vlsseg5e8_v_u8m1x5(a, s, vl);
  *v0 = __riscv_vget_v_u8m1x5_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x5_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x5_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x5_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x5_u8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m1x5_t ret = __riscv_vlsseg5e8_v_u8m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m1x5_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x5_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x5_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x5_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x5_u8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5e8_v_u8m1(uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, size_t vl)
{
  vuint8m1x5_t ret = __riscv_vcreate_v_u8m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e8_v_u8m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5e8_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, size_t vl)
{
  vuint8m1x5_t ret = __riscv_vcreate_v_u8m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e8_v_u8m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e8_v_u8m1(uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, size_t vl)
{
  vuint8m1x5_t ret = __riscv_vcreate_v_u8m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e8_v_u8m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e8_v_u8m1_m(vbool8_t mask, uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, size_t vl)
{
  vuint8m1x5_t ret = __riscv_vcreate_v_u8m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e8_v_u8m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, const uint16_t *a, size_t vl)
{
  vuint16m1x5_t ret = __riscv_vlseg5e16_v_u16m1x5(a, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), const uint16_t *a, size_t vl)
{
  vuint16m1x5_t ret = __riscv_vlseg5e16_v_u16m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e16ff_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m1x5_t ret = __riscv_vlseg5e16ff_v_u16m1x5(a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e16ff_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m1x5_t ret = __riscv_vlseg5e16ff_v_u16m1x5_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m1x5_t ret = __riscv_vlsseg5e16_v_u16m1x5(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m1x5_t ret = __riscv_vlsseg5e16_v_u16m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5e16_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, size_t vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e16_v_u16m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5e16_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, size_t vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e16_v_u16m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e16_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, size_t vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e16_v_u16m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e16_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, size_t vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e16_v_u16m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, const uint32_t *a, size_t vl)
{
  vuint32m1x5_t ret = __riscv_vlseg5e32_v_u32m1x5(a, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), const uint32_t *a, size_t vl)
{
  vuint32m1x5_t ret = __riscv_vlseg5e32_v_u32m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e32ff_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m1x5_t ret = __riscv_vlseg5e32ff_v_u32m1x5(a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e32ff_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m1x5_t ret = __riscv_vlseg5e32ff_v_u32m1x5_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m1x5_t ret = __riscv_vlsseg5e32_v_u32m1x5(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m1x5_t ret = __riscv_vlsseg5e32_v_u32m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5e32_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, size_t vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e32_v_u32m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5e32_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, size_t vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e32_v_u32m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e32_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, size_t vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e32_v_u32m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e32_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, size_t vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e32_v_u32m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *a, size_t vl)
{
  vuint64m1x5_t ret = __riscv_vlseg5e64_v_u64m1x5(a, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), const uint64_t *a, size_t vl)
{
  vuint64m1x5_t ret = __riscv_vlseg5e64_v_u64m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e64ff_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m1x5_t ret = __riscv_vlseg5e64ff_v_u64m1x5(a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e64ff_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m1x5_t ret = __riscv_vlseg5e64ff_v_u64m1x5_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m1x5_t ret = __riscv_vlsseg5e64_v_u64m1x5(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m1x5_t ret = __riscv_vlsseg5e64_v_u64m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5e64_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, size_t vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e64_v_u64m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5e64_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, size_t vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e64_v_u64m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e64_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, size_t vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e64_v_u64m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e64_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, size_t vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e64_v_u64m1x5_m(mask, a, s, ret, vl);
}
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg5e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, const float16_t *a, size_t vl)
{
  vfloat16m1x5_t ret = __riscv_vlseg5e16_v_f16m1x5(a, vl);
  *v0 = __riscv_vget_v_f16m1x5_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x5_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x5_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x5_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x5_f16m1(ret, 4);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg5e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), const float16_t *a, size_t vl)
{
  vfloat16m1x5_t ret = __riscv_vlseg5e16_v_f16m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_f16m1x5_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x5_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x5_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x5_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x5_f16m1(ret, 4);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg5e16ff_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m1x5_t ret = __riscv_vlseg5e16ff_v_f16m1x5(a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m1x5_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x5_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x5_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x5_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x5_f16m1(ret, 4);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg5e16ff_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m1x5_t ret = __riscv_vlseg5e16ff_v_f16m1x5_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m1x5_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x5_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x5_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x5_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x5_f16m1(ret, 4);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg5e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m1x5_t ret = __riscv_vlsseg5e16_v_f16m1x5(a, s, vl);
  *v0 = __riscv_vget_v_f16m1x5_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x5_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x5_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x5_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x5_f16m1(ret, 4);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg5e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m1x5_t ret = __riscv_vlsseg5e16_v_f16m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f16m1x5_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x5_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x5_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x5_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x5_f16m1(ret, 4);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg5e16_v_f16m1(float16_t *a, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, size_t vl)
{
  vfloat16m1x5_t ret = __riscv_vcreate_v_f16m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e16_v_f16m1x5(a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg5e16_v_f16m1_m(vbool16_t mask, float16_t *a, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, size_t vl)
{
  vfloat16m1x5_t ret = __riscv_vcreate_v_f16m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e16_v_f16m1x5_m(mask, a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg5e16_v_f16m1(float16_t *a, ptrdiff_t s, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, size_t vl)
{
  vfloat16m1x5_t ret = __riscv_vcreate_v_f16m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e16_v_f16m1x5(a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg5e16_v_f16m1_m(vbool16_t mask, float16_t *a, ptrdiff_t s, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, size_t vl)
{
  vfloat16m1x5_t ret = __riscv_vcreate_v_f16m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e16_v_f16m1x5_m(mask, a, s, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vlseg5e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, const float32_t *a, size_t vl)
{
  vfloat32m1x5_t ret = __riscv_vlseg5e32_v_f32m1x5(a, vl);
  *v0 = __riscv_vget_v_f32m1x5_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x5_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x5_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x5_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x5_f32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), const float32_t *a, size_t vl)
{
  vfloat32m1x5_t ret = __riscv_vlseg5e32_v_f32m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_f32m1x5_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x5_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x5_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x5_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x5_f32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e32ff_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m1x5_t ret = __riscv_vlseg5e32ff_v_f32m1x5(a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m1x5_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x5_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x5_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x5_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x5_f32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e32ff_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m1x5_t ret = __riscv_vlseg5e32ff_v_f32m1x5_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m1x5_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x5_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x5_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x5_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x5_f32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m1x5_t ret = __riscv_vlsseg5e32_v_f32m1x5(a, s, vl);
  *v0 = __riscv_vget_v_f32m1x5_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x5_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x5_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x5_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x5_f32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m1x5_t ret = __riscv_vlsseg5e32_v_f32m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f32m1x5_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x5_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x5_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x5_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x5_f32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5e32_v_f32m1(float32_t *a, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, size_t vl)
{
  vfloat32m1x5_t ret = __riscv_vcreate_v_f32m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e32_v_f32m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5e32_v_f32m1_m(vbool32_t mask, float32_t *a, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, size_t vl)
{
  vfloat32m1x5_t ret = __riscv_vcreate_v_f32m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e32_v_f32m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e32_v_f32m1(float32_t *a, ptrdiff_t s, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, size_t vl)
{
  vfloat32m1x5_t ret = __riscv_vcreate_v_f32m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e32_v_f32m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e32_v_f32m1_m(vbool32_t mask, float32_t *a, ptrdiff_t s, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, size_t vl)
{
  vfloat32m1x5_t ret = __riscv_vcreate_v_f32m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e32_v_f32m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, const float64_t *a, size_t vl)
{
  vfloat64m1x5_t ret = __riscv_vlseg5e64_v_f64m1x5(a, vl);
  *v0 = __riscv_vget_v_f64m1x5_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x5_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x5_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x5_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x5_f64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), const float64_t *a, size_t vl)
{
  vfloat64m1x5_t ret = __riscv_vlseg5e64_v_f64m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_f64m1x5_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x5_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x5_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x5_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x5_f64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e64ff_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m1x5_t ret = __riscv_vlseg5e64ff_v_f64m1x5(a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m1x5_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x5_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x5_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x5_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x5_f64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5e64ff_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m1x5_t ret = __riscv_vlseg5e64ff_v_f64m1x5_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m1x5_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x5_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x5_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x5_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x5_f64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m1x5_t ret = __riscv_vlsseg5e64_v_f64m1x5(a, s, vl);
  *v0 = __riscv_vget_v_f64m1x5_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x5_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x5_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x5_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x5_f64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m1x5_t ret = __riscv_vlsseg5e64_v_f64m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f64m1x5_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x5_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x5_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x5_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x5_f64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5e64_v_f64m1(float64_t *a, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, size_t vl)
{
  vfloat64m1x5_t ret = __riscv_vcreate_v_f64m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e64_v_f64m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5e64_v_f64m1_m(vbool64_t mask, float64_t *a, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, size_t vl)
{
  vfloat64m1x5_t ret = __riscv_vcreate_v_f64m1x5(v0, v1, v2, v3, v4);
  __riscv_vsseg5e64_v_f64m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e64_v_f64m1(float64_t *a, ptrdiff_t s, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, size_t vl)
{
  vfloat64m1x5_t ret = __riscv_vcreate_v_f64m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e64_v_f64m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5e64_v_f64m1_m(vbool64_t mask, float64_t *a, ptrdiff_t s, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, size_t vl)
{
  vfloat64m1x5_t ret = __riscv_vcreate_v_f64m1x5(v0, v1, v2, v3, v4);
  __riscv_vssseg5e64_v_f64m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, const int8_t *a, size_t vl)
{
  vint8m1x6_t ret = __riscv_vlseg6e8_v_i8m1x6(a, vl);
  *v0 = __riscv_vget_v_i8m1x6_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x6_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x6_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x6_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x6_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x6_i8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), const int8_t *a, size_t vl)
{
  vint8m1x6_t ret = __riscv_vlseg6e8_v_i8m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m1x6_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x6_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x6_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x6_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x6_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x6_i8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e8ff_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m1x6_t ret = __riscv_vlseg6e8ff_v_i8m1x6(a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m1x6_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x6_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x6_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x6_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x6_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x6_i8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e8ff_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m1x6_t ret = __riscv_vlseg6e8ff_v_i8m1x6_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m1x6_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x6_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x6_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x6_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x6_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x6_i8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m1x6_t ret = __riscv_vlsseg6e8_v_i8m1x6(a, s, vl);
  *v0 = __riscv_vget_v_i8m1x6_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x6_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x6_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x6_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x6_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x6_i8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m1x6_t ret = __riscv_vlsseg6e8_v_i8m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m1x6_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x6_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x6_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x6_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x6_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x6_i8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6e8_v_i8m1(int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, size_t vl)
{
  vint8m1x6_t ret = __riscv_vcreate_v_i8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e8_v_i8m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6e8_v_i8m1_m(vbool8_t mask, int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, size_t vl)
{
  vint8m1x6_t ret = __riscv_vcreate_v_i8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e8_v_i8m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e8_v_i8m1(int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, size_t vl)
{
  vint8m1x6_t ret = __riscv_vcreate_v_i8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e8_v_i8m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e8_v_i8m1_m(vbool8_t mask, int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, size_t vl)
{
  vint8m1x6_t ret = __riscv_vcreate_v_i8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e8_v_i8m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, const int16_t *a, size_t vl)
{
  vint16m1x6_t ret = __riscv_vlseg6e16_v_i16m1x6(a, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), const int16_t *a, size_t vl)
{
  vint16m1x6_t ret = __riscv_vlseg6e16_v_i16m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e16ff_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m1x6_t ret = __riscv_vlseg6e16ff_v_i16m1x6(a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e16ff_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m1x6_t ret = __riscv_vlseg6e16ff_v_i16m1x6_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m1x6_t ret = __riscv_vlsseg6e16_v_i16m1x6(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m1x6_t ret = __riscv_vlsseg6e16_v_i16m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6e16_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, size_t vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e16_v_i16m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6e16_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, size_t vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e16_v_i16m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e16_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, size_t vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e16_v_i16m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e16_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, size_t vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e16_v_i16m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *a, size_t vl)
{
  vint32m1x6_t ret = __riscv_vlseg6e32_v_i32m1x6(a, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), const int32_t *a, size_t vl)
{
  vint32m1x6_t ret = __riscv_vlseg6e32_v_i32m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e32ff_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m1x6_t ret = __riscv_vlseg6e32ff_v_i32m1x6(a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e32ff_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m1x6_t ret = __riscv_vlseg6e32ff_v_i32m1x6_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m1x6_t ret = __riscv_vlsseg6e32_v_i32m1x6(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m1x6_t ret = __riscv_vlsseg6e32_v_i32m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6e32_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, size_t vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e32_v_i32m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6e32_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, size_t vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e32_v_i32m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e32_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, size_t vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e32_v_i32m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e32_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, size_t vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e32_v_i32m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *a, size_t vl)
{
  vint64m1x6_t ret = __riscv_vlseg6e64_v_i64m1x6(a, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), const int64_t *a, size_t vl)
{
  vint64m1x6_t ret = __riscv_vlseg6e64_v_i64m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e64ff_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m1x6_t ret = __riscv_vlseg6e64ff_v_i64m1x6(a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e64ff_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m1x6_t ret = __riscv_vlseg6e64ff_v_i64m1x6_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m1x6_t ret = __riscv_vlsseg6e64_v_i64m1x6(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m1x6_t ret = __riscv_vlsseg6e64_v_i64m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6e64_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, size_t vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e64_v_i64m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6e64_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, size_t vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e64_v_i64m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e64_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, size_t vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e64_v_i64m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e64_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, size_t vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e64_v_i64m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, const uint8_t *a, size_t vl)
{
  vuint8m1x6_t ret = __riscv_vlseg6e8_v_u8m1x6(a, vl);
  *v0 = __riscv_vget_v_u8m1x6_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x6_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x6_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x6_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x6_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x6_u8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), const uint8_t *a, size_t vl)
{
  vuint8m1x6_t ret = __riscv_vlseg6e8_v_u8m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m1x6_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x6_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x6_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x6_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x6_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x6_u8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e8ff_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m1x6_t ret = __riscv_vlseg6e8ff_v_u8m1x6(a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m1x6_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x6_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x6_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x6_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x6_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x6_u8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e8ff_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m1x6_t ret = __riscv_vlseg6e8ff_v_u8m1x6_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m1x6_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x6_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x6_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x6_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x6_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x6_u8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m1x6_t ret = __riscv_vlsseg6e8_v_u8m1x6(a, s, vl);
  *v0 = __riscv_vget_v_u8m1x6_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x6_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x6_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x6_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x6_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x6_u8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m1x6_t ret = __riscv_vlsseg6e8_v_u8m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m1x6_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x6_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x6_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x6_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x6_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x6_u8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6e8_v_u8m1(uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, size_t vl)
{
  vuint8m1x6_t ret = __riscv_vcreate_v_u8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e8_v_u8m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6e8_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, size_t vl)
{
  vuint8m1x6_t ret = __riscv_vcreate_v_u8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e8_v_u8m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e8_v_u8m1(uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, size_t vl)
{
  vuint8m1x6_t ret = __riscv_vcreate_v_u8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e8_v_u8m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e8_v_u8m1_m(vbool8_t mask, uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, size_t vl)
{
  vuint8m1x6_t ret = __riscv_vcreate_v_u8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e8_v_u8m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, const uint16_t *a, size_t vl)
{
  vuint16m1x6_t ret = __riscv_vlseg6e16_v_u16m1x6(a, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), const uint16_t *a, size_t vl)
{
  vuint16m1x6_t ret = __riscv_vlseg6e16_v_u16m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e16ff_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m1x6_t ret = __riscv_vlseg6e16ff_v_u16m1x6(a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e16ff_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m1x6_t ret = __riscv_vlseg6e16ff_v_u16m1x6_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m1x6_t ret = __riscv_vlsseg6e16_v_u16m1x6(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m1x6_t ret = __riscv_vlsseg6e16_v_u16m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6e16_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, size_t vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e16_v_u16m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6e16_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, size_t vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e16_v_u16m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e16_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, size_t vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e16_v_u16m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e16_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, size_t vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e16_v_u16m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *a, size_t vl)
{
  vuint32m1x6_t ret = __riscv_vlseg6e32_v_u32m1x6(a, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), const uint32_t *a, size_t vl)
{
  vuint32m1x6_t ret = __riscv_vlseg6e32_v_u32m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e32ff_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m1x6_t ret = __riscv_vlseg6e32ff_v_u32m1x6(a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e32ff_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m1x6_t ret = __riscv_vlseg6e32ff_v_u32m1x6_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m1x6_t ret = __riscv_vlsseg6e32_v_u32m1x6(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m1x6_t ret = __riscv_vlsseg6e32_v_u32m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6e32_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, size_t vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e32_v_u32m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6e32_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, size_t vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e32_v_u32m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e32_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, size_t vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e32_v_u32m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e32_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, size_t vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e32_v_u32m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *a, size_t vl)
{
  vuint64m1x6_t ret = __riscv_vlseg6e64_v_u64m1x6(a, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), const uint64_t *a, size_t vl)
{
  vuint64m1x6_t ret = __riscv_vlseg6e64_v_u64m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e64ff_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m1x6_t ret = __riscv_vlseg6e64ff_v_u64m1x6(a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e64ff_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m1x6_t ret = __riscv_vlseg6e64ff_v_u64m1x6_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m1x6_t ret = __riscv_vlsseg6e64_v_u64m1x6(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m1x6_t ret = __riscv_vlsseg6e64_v_u64m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6e64_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, size_t vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e64_v_u64m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6e64_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, size_t vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e64_v_u64m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e64_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, size_t vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e64_v_u64m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e64_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, size_t vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e64_v_u64m1x6_m(mask, a, s, ret, vl);
}
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg6e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, const float16_t *a, size_t vl)
{
  vfloat16m1x6_t ret = __riscv_vlseg6e16_v_f16m1x6(a, vl);
  *v0 = __riscv_vget_v_f16m1x6_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x6_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x6_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x6_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x6_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x6_f16m1(ret, 5);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg6e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), vfloat16m1_t maskedoff5 __attribute__((__unused__)), const float16_t *a, size_t vl)
{
  vfloat16m1x6_t ret = __riscv_vlseg6e16_v_f16m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_f16m1x6_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x6_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x6_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x6_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x6_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x6_f16m1(ret, 5);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg6e16ff_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m1x6_t ret = __riscv_vlseg6e16ff_v_f16m1x6(a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m1x6_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x6_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x6_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x6_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x6_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x6_f16m1(ret, 5);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg6e16ff_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), vfloat16m1_t maskedoff5 __attribute__((__unused__)), const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m1x6_t ret = __riscv_vlseg6e16ff_v_f16m1x6_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m1x6_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x6_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x6_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x6_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x6_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x6_f16m1(ret, 5);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg6e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m1x6_t ret = __riscv_vlsseg6e16_v_f16m1x6(a, s, vl);
  *v0 = __riscv_vget_v_f16m1x6_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x6_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x6_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x6_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x6_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x6_f16m1(ret, 5);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg6e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), vfloat16m1_t maskedoff5 __attribute__((__unused__)), const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m1x6_t ret = __riscv_vlsseg6e16_v_f16m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f16m1x6_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x6_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x6_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x6_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x6_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x6_f16m1(ret, 5);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg6e16_v_f16m1(float16_t *a, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, size_t vl)
{
  vfloat16m1x6_t ret = __riscv_vcreate_v_f16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e16_v_f16m1x6(a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg6e16_v_f16m1_m(vbool16_t mask, float16_t *a, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, size_t vl)
{
  vfloat16m1x6_t ret = __riscv_vcreate_v_f16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e16_v_f16m1x6_m(mask, a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg6e16_v_f16m1(float16_t *a, ptrdiff_t s, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, size_t vl)
{
  vfloat16m1x6_t ret = __riscv_vcreate_v_f16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e16_v_f16m1x6(a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg6e16_v_f16m1_m(vbool16_t mask, float16_t *a, ptrdiff_t s, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, size_t vl)
{
  vfloat16m1x6_t ret = __riscv_vcreate_v_f16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e16_v_f16m1x6_m(mask, a, s, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vlseg6e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, const float32_t *a, size_t vl)
{
  vfloat32m1x6_t ret = __riscv_vlseg6e32_v_f32m1x6(a, vl);
  *v0 = __riscv_vget_v_f32m1x6_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x6_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x6_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x6_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x6_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x6_f32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), vfloat32m1_t maskedoff5 __attribute__((__unused__)), const float32_t *a, size_t vl)
{
  vfloat32m1x6_t ret = __riscv_vlseg6e32_v_f32m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_f32m1x6_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x6_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x6_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x6_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x6_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x6_f32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e32ff_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m1x6_t ret = __riscv_vlseg6e32ff_v_f32m1x6(a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m1x6_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x6_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x6_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x6_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x6_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x6_f32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e32ff_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), vfloat32m1_t maskedoff5 __attribute__((__unused__)), const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m1x6_t ret = __riscv_vlseg6e32ff_v_f32m1x6_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m1x6_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x6_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x6_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x6_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x6_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x6_f32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m1x6_t ret = __riscv_vlsseg6e32_v_f32m1x6(a, s, vl);
  *v0 = __riscv_vget_v_f32m1x6_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x6_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x6_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x6_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x6_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x6_f32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), vfloat32m1_t maskedoff5 __attribute__((__unused__)), const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m1x6_t ret = __riscv_vlsseg6e32_v_f32m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f32m1x6_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x6_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x6_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x6_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x6_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x6_f32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6e32_v_f32m1(float32_t *a, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, size_t vl)
{
  vfloat32m1x6_t ret = __riscv_vcreate_v_f32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e32_v_f32m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6e32_v_f32m1_m(vbool32_t mask, float32_t *a, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, size_t vl)
{
  vfloat32m1x6_t ret = __riscv_vcreate_v_f32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e32_v_f32m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e32_v_f32m1(float32_t *a, ptrdiff_t s, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, size_t vl)
{
  vfloat32m1x6_t ret = __riscv_vcreate_v_f32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e32_v_f32m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e32_v_f32m1_m(vbool32_t mask, float32_t *a, ptrdiff_t s, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, size_t vl)
{
  vfloat32m1x6_t ret = __riscv_vcreate_v_f32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e32_v_f32m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, const float64_t *a, size_t vl)
{
  vfloat64m1x6_t ret = __riscv_vlseg6e64_v_f64m1x6(a, vl);
  *v0 = __riscv_vget_v_f64m1x6_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x6_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x6_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x6_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x6_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x6_f64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), vfloat64m1_t maskedoff5 __attribute__((__unused__)), const float64_t *a, size_t vl)
{
  vfloat64m1x6_t ret = __riscv_vlseg6e64_v_f64m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_f64m1x6_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x6_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x6_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x6_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x6_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x6_f64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e64ff_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m1x6_t ret = __riscv_vlseg6e64ff_v_f64m1x6(a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m1x6_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x6_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x6_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x6_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x6_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x6_f64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6e64ff_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), vfloat64m1_t maskedoff5 __attribute__((__unused__)), const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m1x6_t ret = __riscv_vlseg6e64ff_v_f64m1x6_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m1x6_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x6_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x6_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x6_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x6_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x6_f64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m1x6_t ret = __riscv_vlsseg6e64_v_f64m1x6(a, s, vl);
  *v0 = __riscv_vget_v_f64m1x6_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x6_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x6_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x6_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x6_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x6_f64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), vfloat64m1_t maskedoff5 __attribute__((__unused__)), const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m1x6_t ret = __riscv_vlsseg6e64_v_f64m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f64m1x6_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x6_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x6_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x6_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x6_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x6_f64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6e64_v_f64m1(float64_t *a, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, size_t vl)
{
  vfloat64m1x6_t ret = __riscv_vcreate_v_f64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e64_v_f64m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6e64_v_f64m1_m(vbool64_t mask, float64_t *a, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, size_t vl)
{
  vfloat64m1x6_t ret = __riscv_vcreate_v_f64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsseg6e64_v_f64m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e64_v_f64m1(float64_t *a, ptrdiff_t s, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, size_t vl)
{
  vfloat64m1x6_t ret = __riscv_vcreate_v_f64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e64_v_f64m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6e64_v_f64m1_m(vbool64_t mask, float64_t *a, ptrdiff_t s, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, size_t vl)
{
  vfloat64m1x6_t ret = __riscv_vcreate_v_f64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vssseg6e64_v_f64m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, const int8_t *a, size_t vl)
{
  vint8m1x7_t ret = __riscv_vlseg7e8_v_i8m1x7(a, vl);
  *v0 = __riscv_vget_v_i8m1x7_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x7_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x7_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x7_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x7_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x7_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x7_i8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), vint8m1_t maskedoff6 __attribute__((__unused__)), const int8_t *a, size_t vl)
{
  vint8m1x7_t ret = __riscv_vlseg7e8_v_i8m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m1x7_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x7_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x7_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x7_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x7_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x7_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x7_i8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e8ff_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m1x7_t ret = __riscv_vlseg7e8ff_v_i8m1x7(a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m1x7_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x7_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x7_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x7_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x7_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x7_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x7_i8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e8ff_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), vint8m1_t maskedoff6 __attribute__((__unused__)), const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m1x7_t ret = __riscv_vlseg7e8ff_v_i8m1x7_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m1x7_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x7_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x7_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x7_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x7_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x7_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x7_i8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m1x7_t ret = __riscv_vlsseg7e8_v_i8m1x7(a, s, vl);
  *v0 = __riscv_vget_v_i8m1x7_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x7_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x7_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x7_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x7_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x7_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x7_i8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), vint8m1_t maskedoff6 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m1x7_t ret = __riscv_vlsseg7e8_v_i8m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m1x7_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x7_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x7_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x7_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x7_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x7_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x7_i8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7e8_v_i8m1(int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, size_t vl)
{
  vint8m1x7_t ret = __riscv_vcreate_v_i8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e8_v_i8m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7e8_v_i8m1_m(vbool8_t mask, int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, size_t vl)
{
  vint8m1x7_t ret = __riscv_vcreate_v_i8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e8_v_i8m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e8_v_i8m1(int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, size_t vl)
{
  vint8m1x7_t ret = __riscv_vcreate_v_i8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e8_v_i8m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e8_v_i8m1_m(vbool8_t mask, int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, size_t vl)
{
  vint8m1x7_t ret = __riscv_vcreate_v_i8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e8_v_i8m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, const int16_t *a, size_t vl)
{
  vint16m1x7_t ret = __riscv_vlseg7e16_v_i16m1x7(a, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), const int16_t *a, size_t vl)
{
  vint16m1x7_t ret = __riscv_vlseg7e16_v_i16m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e16ff_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m1x7_t ret = __riscv_vlseg7e16ff_v_i16m1x7(a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e16ff_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m1x7_t ret = __riscv_vlseg7e16ff_v_i16m1x7_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m1x7_t ret = __riscv_vlsseg7e16_v_i16m1x7(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m1x7_t ret = __riscv_vlsseg7e16_v_i16m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7e16_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, size_t vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e16_v_i16m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7e16_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, size_t vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e16_v_i16m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e16_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, size_t vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e16_v_i16m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e16_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, size_t vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e16_v_i16m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, const int32_t *a, size_t vl)
{
  vint32m1x7_t ret = __riscv_vlseg7e32_v_i32m1x7(a, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), const int32_t *a, size_t vl)
{
  vint32m1x7_t ret = __riscv_vlseg7e32_v_i32m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e32ff_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m1x7_t ret = __riscv_vlseg7e32ff_v_i32m1x7(a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e32ff_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m1x7_t ret = __riscv_vlseg7e32ff_v_i32m1x7_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m1x7_t ret = __riscv_vlsseg7e32_v_i32m1x7(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m1x7_t ret = __riscv_vlsseg7e32_v_i32m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7e32_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, size_t vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e32_v_i32m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7e32_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, size_t vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e32_v_i32m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e32_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, size_t vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e32_v_i32m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e32_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, size_t vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e32_v_i32m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *a, size_t vl)
{
  vint64m1x7_t ret = __riscv_vlseg7e64_v_i64m1x7(a, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), const int64_t *a, size_t vl)
{
  vint64m1x7_t ret = __riscv_vlseg7e64_v_i64m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e64ff_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m1x7_t ret = __riscv_vlseg7e64ff_v_i64m1x7(a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e64ff_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m1x7_t ret = __riscv_vlseg7e64ff_v_i64m1x7_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m1x7_t ret = __riscv_vlsseg7e64_v_i64m1x7(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m1x7_t ret = __riscv_vlsseg7e64_v_i64m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7e64_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, size_t vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e64_v_i64m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7e64_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, size_t vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e64_v_i64m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e64_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, size_t vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e64_v_i64m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e64_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, size_t vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e64_v_i64m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, const uint8_t *a, size_t vl)
{
  vuint8m1x7_t ret = __riscv_vlseg7e8_v_u8m1x7(a, vl);
  *v0 = __riscv_vget_v_u8m1x7_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x7_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x7_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x7_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x7_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x7_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x7_u8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), vuint8m1_t maskedoff6 __attribute__((__unused__)), const uint8_t *a, size_t vl)
{
  vuint8m1x7_t ret = __riscv_vlseg7e8_v_u8m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m1x7_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x7_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x7_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x7_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x7_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x7_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x7_u8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e8ff_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m1x7_t ret = __riscv_vlseg7e8ff_v_u8m1x7(a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m1x7_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x7_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x7_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x7_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x7_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x7_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x7_u8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e8ff_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), vuint8m1_t maskedoff6 __attribute__((__unused__)), const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m1x7_t ret = __riscv_vlseg7e8ff_v_u8m1x7_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m1x7_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x7_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x7_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x7_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x7_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x7_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x7_u8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m1x7_t ret = __riscv_vlsseg7e8_v_u8m1x7(a, s, vl);
  *v0 = __riscv_vget_v_u8m1x7_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x7_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x7_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x7_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x7_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x7_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x7_u8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), vuint8m1_t maskedoff6 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m1x7_t ret = __riscv_vlsseg7e8_v_u8m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m1x7_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x7_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x7_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x7_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x7_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x7_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x7_u8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7e8_v_u8m1(uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, size_t vl)
{
  vuint8m1x7_t ret = __riscv_vcreate_v_u8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e8_v_u8m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7e8_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, size_t vl)
{
  vuint8m1x7_t ret = __riscv_vcreate_v_u8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e8_v_u8m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e8_v_u8m1(uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, size_t vl)
{
  vuint8m1x7_t ret = __riscv_vcreate_v_u8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e8_v_u8m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e8_v_u8m1_m(vbool8_t mask, uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, size_t vl)
{
  vuint8m1x7_t ret = __riscv_vcreate_v_u8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e8_v_u8m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, const uint16_t *a, size_t vl)
{
  vuint16m1x7_t ret = __riscv_vlseg7e16_v_u16m1x7(a, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), const uint16_t *a, size_t vl)
{
  vuint16m1x7_t ret = __riscv_vlseg7e16_v_u16m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e16ff_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m1x7_t ret = __riscv_vlseg7e16ff_v_u16m1x7(a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e16ff_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m1x7_t ret = __riscv_vlseg7e16ff_v_u16m1x7_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m1x7_t ret = __riscv_vlsseg7e16_v_u16m1x7(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m1x7_t ret = __riscv_vlsseg7e16_v_u16m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7e16_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, size_t vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e16_v_u16m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7e16_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, size_t vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e16_v_u16m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e16_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, size_t vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e16_v_u16m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e16_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, size_t vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e16_v_u16m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, const uint32_t *a, size_t vl)
{
  vuint32m1x7_t ret = __riscv_vlseg7e32_v_u32m1x7(a, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), const uint32_t *a, size_t vl)
{
  vuint32m1x7_t ret = __riscv_vlseg7e32_v_u32m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e32ff_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m1x7_t ret = __riscv_vlseg7e32ff_v_u32m1x7(a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e32ff_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m1x7_t ret = __riscv_vlseg7e32ff_v_u32m1x7_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m1x7_t ret = __riscv_vlsseg7e32_v_u32m1x7(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m1x7_t ret = __riscv_vlsseg7e32_v_u32m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7e32_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, size_t vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e32_v_u32m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7e32_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, size_t vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e32_v_u32m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e32_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, size_t vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e32_v_u32m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e32_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, size_t vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e32_v_u32m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *a, size_t vl)
{
  vuint64m1x7_t ret = __riscv_vlseg7e64_v_u64m1x7(a, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), const uint64_t *a, size_t vl)
{
  vuint64m1x7_t ret = __riscv_vlseg7e64_v_u64m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e64ff_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m1x7_t ret = __riscv_vlseg7e64ff_v_u64m1x7(a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e64ff_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m1x7_t ret = __riscv_vlseg7e64ff_v_u64m1x7_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m1x7_t ret = __riscv_vlsseg7e64_v_u64m1x7(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m1x7_t ret = __riscv_vlsseg7e64_v_u64m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7e64_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, size_t vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e64_v_u64m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7e64_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, size_t vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e64_v_u64m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e64_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, size_t vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e64_v_u64m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e64_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, size_t vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e64_v_u64m1x7_m(mask, a, s, ret, vl);
}
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg7e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, const float16_t *a, size_t vl)
{
  vfloat16m1x7_t ret = __riscv_vlseg7e16_v_f16m1x7(a, vl);
  *v0 = __riscv_vget_v_f16m1x7_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x7_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x7_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x7_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x7_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x7_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x7_f16m1(ret, 6);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg7e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), vfloat16m1_t maskedoff5 __attribute__((__unused__)), vfloat16m1_t maskedoff6 __attribute__((__unused__)), const float16_t *a, size_t vl)
{
  vfloat16m1x7_t ret = __riscv_vlseg7e16_v_f16m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_f16m1x7_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x7_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x7_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x7_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x7_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x7_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x7_f16m1(ret, 6);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg7e16ff_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m1x7_t ret = __riscv_vlseg7e16ff_v_f16m1x7(a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m1x7_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x7_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x7_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x7_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x7_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x7_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x7_f16m1(ret, 6);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg7e16ff_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), vfloat16m1_t maskedoff5 __attribute__((__unused__)), vfloat16m1_t maskedoff6 __attribute__((__unused__)), const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m1x7_t ret = __riscv_vlseg7e16ff_v_f16m1x7_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m1x7_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x7_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x7_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x7_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x7_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x7_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x7_f16m1(ret, 6);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg7e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m1x7_t ret = __riscv_vlsseg7e16_v_f16m1x7(a, s, vl);
  *v0 = __riscv_vget_v_f16m1x7_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x7_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x7_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x7_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x7_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x7_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x7_f16m1(ret, 6);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg7e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), vfloat16m1_t maskedoff5 __attribute__((__unused__)), vfloat16m1_t maskedoff6 __attribute__((__unused__)), const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m1x7_t ret = __riscv_vlsseg7e16_v_f16m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f16m1x7_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x7_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x7_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x7_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x7_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x7_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x7_f16m1(ret, 6);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg7e16_v_f16m1(float16_t *a, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, size_t vl)
{
  vfloat16m1x7_t ret = __riscv_vcreate_v_f16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e16_v_f16m1x7(a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg7e16_v_f16m1_m(vbool16_t mask, float16_t *a, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, size_t vl)
{
  vfloat16m1x7_t ret = __riscv_vcreate_v_f16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e16_v_f16m1x7_m(mask, a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg7e16_v_f16m1(float16_t *a, ptrdiff_t s, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, size_t vl)
{
  vfloat16m1x7_t ret = __riscv_vcreate_v_f16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e16_v_f16m1x7(a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg7e16_v_f16m1_m(vbool16_t mask, float16_t *a, ptrdiff_t s, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, size_t vl)
{
  vfloat16m1x7_t ret = __riscv_vcreate_v_f16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e16_v_f16m1x7_m(mask, a, s, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vlseg7e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, const float32_t *a, size_t vl)
{
  vfloat32m1x7_t ret = __riscv_vlseg7e32_v_f32m1x7(a, vl);
  *v0 = __riscv_vget_v_f32m1x7_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x7_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x7_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x7_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x7_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x7_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x7_f32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), vfloat32m1_t maskedoff5 __attribute__((__unused__)), vfloat32m1_t maskedoff6 __attribute__((__unused__)), const float32_t *a, size_t vl)
{
  vfloat32m1x7_t ret = __riscv_vlseg7e32_v_f32m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_f32m1x7_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x7_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x7_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x7_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x7_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x7_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x7_f32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e32ff_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m1x7_t ret = __riscv_vlseg7e32ff_v_f32m1x7(a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m1x7_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x7_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x7_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x7_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x7_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x7_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x7_f32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e32ff_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), vfloat32m1_t maskedoff5 __attribute__((__unused__)), vfloat32m1_t maskedoff6 __attribute__((__unused__)), const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m1x7_t ret = __riscv_vlseg7e32ff_v_f32m1x7_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m1x7_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x7_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x7_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x7_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x7_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x7_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x7_f32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m1x7_t ret = __riscv_vlsseg7e32_v_f32m1x7(a, s, vl);
  *v0 = __riscv_vget_v_f32m1x7_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x7_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x7_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x7_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x7_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x7_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x7_f32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), vfloat32m1_t maskedoff5 __attribute__((__unused__)), vfloat32m1_t maskedoff6 __attribute__((__unused__)), const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m1x7_t ret = __riscv_vlsseg7e32_v_f32m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f32m1x7_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x7_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x7_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x7_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x7_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x7_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x7_f32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7e32_v_f32m1(float32_t *a, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, size_t vl)
{
  vfloat32m1x7_t ret = __riscv_vcreate_v_f32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e32_v_f32m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7e32_v_f32m1_m(vbool32_t mask, float32_t *a, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, size_t vl)
{
  vfloat32m1x7_t ret = __riscv_vcreate_v_f32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e32_v_f32m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e32_v_f32m1(float32_t *a, ptrdiff_t s, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, size_t vl)
{
  vfloat32m1x7_t ret = __riscv_vcreate_v_f32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e32_v_f32m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e32_v_f32m1_m(vbool32_t mask, float32_t *a, ptrdiff_t s, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, size_t vl)
{
  vfloat32m1x7_t ret = __riscv_vcreate_v_f32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e32_v_f32m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, const float64_t *a, size_t vl)
{
  vfloat64m1x7_t ret = __riscv_vlseg7e64_v_f64m1x7(a, vl);
  *v0 = __riscv_vget_v_f64m1x7_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x7_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x7_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x7_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x7_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x7_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x7_f64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), vfloat64m1_t maskedoff5 __attribute__((__unused__)), vfloat64m1_t maskedoff6 __attribute__((__unused__)), const float64_t *a, size_t vl)
{
  vfloat64m1x7_t ret = __riscv_vlseg7e64_v_f64m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_f64m1x7_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x7_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x7_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x7_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x7_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x7_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x7_f64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e64ff_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m1x7_t ret = __riscv_vlseg7e64ff_v_f64m1x7(a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m1x7_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x7_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x7_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x7_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x7_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x7_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x7_f64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7e64ff_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), vfloat64m1_t maskedoff5 __attribute__((__unused__)), vfloat64m1_t maskedoff6 __attribute__((__unused__)), const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m1x7_t ret = __riscv_vlseg7e64ff_v_f64m1x7_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m1x7_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x7_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x7_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x7_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x7_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x7_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x7_f64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m1x7_t ret = __riscv_vlsseg7e64_v_f64m1x7(a, s, vl);
  *v0 = __riscv_vget_v_f64m1x7_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x7_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x7_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x7_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x7_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x7_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x7_f64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), vfloat64m1_t maskedoff5 __attribute__((__unused__)), vfloat64m1_t maskedoff6 __attribute__((__unused__)), const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m1x7_t ret = __riscv_vlsseg7e64_v_f64m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f64m1x7_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x7_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x7_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x7_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x7_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x7_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x7_f64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7e64_v_f64m1(float64_t *a, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, size_t vl)
{
  vfloat64m1x7_t ret = __riscv_vcreate_v_f64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e64_v_f64m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7e64_v_f64m1_m(vbool64_t mask, float64_t *a, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, size_t vl)
{
  vfloat64m1x7_t ret = __riscv_vcreate_v_f64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsseg7e64_v_f64m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e64_v_f64m1(float64_t *a, ptrdiff_t s, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, size_t vl)
{
  vfloat64m1x7_t ret = __riscv_vcreate_v_f64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e64_v_f64m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7e64_v_f64m1_m(vbool64_t mask, float64_t *a, ptrdiff_t s, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, size_t vl)
{
  vfloat64m1x7_t ret = __riscv_vcreate_v_f64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vssseg7e64_v_f64m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, const int8_t *a, size_t vl)
{
  vint8m1x8_t ret = __riscv_vlseg8e8_v_i8m1x8(a, vl);
  *v0 = __riscv_vget_v_i8m1x8_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x8_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x8_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x8_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x8_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x8_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x8_i8m1(ret, 6);
  *v7 = __riscv_vget_v_i8m1x8_i8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), vint8m1_t maskedoff6 __attribute__((__unused__)), vint8m1_t maskedoff7 __attribute__((__unused__)), const int8_t *a, size_t vl)
{
  vint8m1x8_t ret = __riscv_vlseg8e8_v_i8m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m1x8_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x8_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x8_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x8_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x8_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x8_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x8_i8m1(ret, 6);
  *v7 = __riscv_vget_v_i8m1x8_i8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e8ff_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m1x8_t ret = __riscv_vlseg8e8ff_v_i8m1x8(a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m1x8_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x8_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x8_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x8_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x8_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x8_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x8_i8m1(ret, 6);
  *v7 = __riscv_vget_v_i8m1x8_i8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e8ff_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), vint8m1_t maskedoff6 __attribute__((__unused__)), vint8m1_t maskedoff7 __attribute__((__unused__)), const int8_t *a, size_t *new_vl, size_t vl)
{
  vint8m1x8_t ret = __riscv_vlseg8e8ff_v_i8m1x8_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i8m1x8_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x8_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x8_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x8_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x8_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x8_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x8_i8m1(ret, 6);
  *v7 = __riscv_vget_v_i8m1x8_i8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m1x8_t ret = __riscv_vlsseg8e8_v_i8m1x8(a, s, vl);
  *v0 = __riscv_vget_v_i8m1x8_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x8_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x8_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x8_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x8_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x8_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x8_i8m1(ret, 6);
  *v7 = __riscv_vget_v_i8m1x8_i8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), vint8m1_t maskedoff6 __attribute__((__unused__)), vint8m1_t maskedoff7 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, size_t vl)
{
  vint8m1x8_t ret = __riscv_vlsseg8e8_v_i8m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m1x8_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x8_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x8_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x8_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x8_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x8_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x8_i8m1(ret, 6);
  *v7 = __riscv_vget_v_i8m1x8_i8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8e8_v_i8m1(int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7, size_t vl)
{
  vint8m1x8_t ret = __riscv_vcreate_v_i8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e8_v_i8m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8e8_v_i8m1_m(vbool8_t mask, int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7, size_t vl)
{
  vint8m1x8_t ret = __riscv_vcreate_v_i8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e8_v_i8m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e8_v_i8m1(int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7, size_t vl)
{
  vint8m1x8_t ret = __riscv_vcreate_v_i8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e8_v_i8m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e8_v_i8m1_m(vbool8_t mask, int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7, size_t vl)
{
  vint8m1x8_t ret = __riscv_vcreate_v_i8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e8_v_i8m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, const int16_t *a, size_t vl)
{
  vint16m1x8_t ret = __riscv_vlseg8e16_v_i16m1x8(a, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), vint16m1_t maskedoff7 __attribute__((__unused__)), const int16_t *a, size_t vl)
{
  vint16m1x8_t ret = __riscv_vlseg8e16_v_i16m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e16ff_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m1x8_t ret = __riscv_vlseg8e16ff_v_i16m1x8(a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e16ff_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), vint16m1_t maskedoff7 __attribute__((__unused__)), const int16_t *a, size_t *new_vl, size_t vl)
{
  vint16m1x8_t ret = __riscv_vlseg8e16ff_v_i16m1x8_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m1x8_t ret = __riscv_vlsseg8e16_v_i16m1x8(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), vint16m1_t maskedoff7 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, size_t vl)
{
  vint16m1x8_t ret = __riscv_vlsseg8e16_v_i16m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8e16_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, size_t vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e16_v_i16m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8e16_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, size_t vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e16_v_i16m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e16_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, size_t vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e16_v_i16m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e16_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, size_t vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e16_v_i16m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, const int32_t *a, size_t vl)
{
  vint32m1x8_t ret = __riscv_vlseg8e32_v_i32m1x8(a, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), vint32m1_t maskedoff7 __attribute__((__unused__)), const int32_t *a, size_t vl)
{
  vint32m1x8_t ret = __riscv_vlseg8e32_v_i32m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e32ff_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m1x8_t ret = __riscv_vlseg8e32ff_v_i32m1x8(a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e32ff_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), vint32m1_t maskedoff7 __attribute__((__unused__)), const int32_t *a, size_t *new_vl, size_t vl)
{
  vint32m1x8_t ret = __riscv_vlseg8e32ff_v_i32m1x8_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m1x8_t ret = __riscv_vlsseg8e32_v_i32m1x8(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), vint32m1_t maskedoff7 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, size_t vl)
{
  vint32m1x8_t ret = __riscv_vlsseg8e32_v_i32m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8e32_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, size_t vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e32_v_i32m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8e32_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, size_t vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e32_v_i32m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e32_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, size_t vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e32_v_i32m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e32_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, size_t vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e32_v_i32m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, const int64_t *a, size_t vl)
{
  vint64m1x8_t ret = __riscv_vlseg8e64_v_i64m1x8(a, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), vint64m1_t maskedoff7 __attribute__((__unused__)), const int64_t *a, size_t vl)
{
  vint64m1x8_t ret = __riscv_vlseg8e64_v_i64m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e64ff_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m1x8_t ret = __riscv_vlseg8e64ff_v_i64m1x8(a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e64ff_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), vint64m1_t maskedoff7 __attribute__((__unused__)), const int64_t *a, size_t *new_vl, size_t vl)
{
  vint64m1x8_t ret = __riscv_vlseg8e64ff_v_i64m1x8_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m1x8_t ret = __riscv_vlsseg8e64_v_i64m1x8(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), vint64m1_t maskedoff7 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, size_t vl)
{
  vint64m1x8_t ret = __riscv_vlsseg8e64_v_i64m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8e64_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, size_t vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e64_v_i64m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8e64_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, size_t vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e64_v_i64m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e64_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, size_t vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e64_v_i64m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e64_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, size_t vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e64_v_i64m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, const uint8_t *a, size_t vl)
{
  vuint8m1x8_t ret = __riscv_vlseg8e8_v_u8m1x8(a, vl);
  *v0 = __riscv_vget_v_u8m1x8_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x8_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x8_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x8_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x8_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x8_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x8_u8m1(ret, 6);
  *v7 = __riscv_vget_v_u8m1x8_u8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), vuint8m1_t maskedoff6 __attribute__((__unused__)), vuint8m1_t maskedoff7 __attribute__((__unused__)), const uint8_t *a, size_t vl)
{
  vuint8m1x8_t ret = __riscv_vlseg8e8_v_u8m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m1x8_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x8_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x8_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x8_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x8_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x8_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x8_u8m1(ret, 6);
  *v7 = __riscv_vget_v_u8m1x8_u8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e8ff_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m1x8_t ret = __riscv_vlseg8e8ff_v_u8m1x8(a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m1x8_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x8_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x8_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x8_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x8_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x8_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x8_u8m1(ret, 6);
  *v7 = __riscv_vget_v_u8m1x8_u8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e8ff_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), vuint8m1_t maskedoff6 __attribute__((__unused__)), vuint8m1_t maskedoff7 __attribute__((__unused__)), const uint8_t *a, size_t *new_vl, size_t vl)
{
  vuint8m1x8_t ret = __riscv_vlseg8e8ff_v_u8m1x8_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u8m1x8_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x8_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x8_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x8_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x8_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x8_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x8_u8m1(ret, 6);
  *v7 = __riscv_vget_v_u8m1x8_u8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m1x8_t ret = __riscv_vlsseg8e8_v_u8m1x8(a, s, vl);
  *v0 = __riscv_vget_v_u8m1x8_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x8_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x8_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x8_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x8_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x8_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x8_u8m1(ret, 6);
  *v7 = __riscv_vget_v_u8m1x8_u8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), vuint8m1_t maskedoff6 __attribute__((__unused__)), vuint8m1_t maskedoff7 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, size_t vl)
{
  vuint8m1x8_t ret = __riscv_vlsseg8e8_v_u8m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m1x8_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x8_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x8_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x8_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x8_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x8_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x8_u8m1(ret, 6);
  *v7 = __riscv_vget_v_u8m1x8_u8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8e8_v_u8m1(uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, size_t vl)
{
  vuint8m1x8_t ret = __riscv_vcreate_v_u8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e8_v_u8m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8e8_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, size_t vl)
{
  vuint8m1x8_t ret = __riscv_vcreate_v_u8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e8_v_u8m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e8_v_u8m1(uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, size_t vl)
{
  vuint8m1x8_t ret = __riscv_vcreate_v_u8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e8_v_u8m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e8_v_u8m1_m(vbool8_t mask, uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, size_t vl)
{
  vuint8m1x8_t ret = __riscv_vcreate_v_u8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e8_v_u8m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, const uint16_t *a, size_t vl)
{
  vuint16m1x8_t ret = __riscv_vlseg8e16_v_u16m1x8(a, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), vuint16m1_t maskedoff7 __attribute__((__unused__)), const uint16_t *a, size_t vl)
{
  vuint16m1x8_t ret = __riscv_vlseg8e16_v_u16m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e16ff_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m1x8_t ret = __riscv_vlseg8e16ff_v_u16m1x8(a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e16ff_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), vuint16m1_t maskedoff7 __attribute__((__unused__)), const uint16_t *a, size_t *new_vl, size_t vl)
{
  vuint16m1x8_t ret = __riscv_vlseg8e16ff_v_u16m1x8_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m1x8_t ret = __riscv_vlsseg8e16_v_u16m1x8(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), vuint16m1_t maskedoff7 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, size_t vl)
{
  vuint16m1x8_t ret = __riscv_vlsseg8e16_v_u16m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8e16_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, size_t vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e16_v_u16m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8e16_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, size_t vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e16_v_u16m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e16_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, size_t vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e16_v_u16m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e16_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, size_t vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e16_v_u16m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, const uint32_t *a, size_t vl)
{
  vuint32m1x8_t ret = __riscv_vlseg8e32_v_u32m1x8(a, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), vuint32m1_t maskedoff7 __attribute__((__unused__)), const uint32_t *a, size_t vl)
{
  vuint32m1x8_t ret = __riscv_vlseg8e32_v_u32m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e32ff_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m1x8_t ret = __riscv_vlseg8e32ff_v_u32m1x8(a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e32ff_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), vuint32m1_t maskedoff7 __attribute__((__unused__)), const uint32_t *a, size_t *new_vl, size_t vl)
{
  vuint32m1x8_t ret = __riscv_vlseg8e32ff_v_u32m1x8_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m1x8_t ret = __riscv_vlsseg8e32_v_u32m1x8(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), vuint32m1_t maskedoff7 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, size_t vl)
{
  vuint32m1x8_t ret = __riscv_vlsseg8e32_v_u32m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8e32_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, size_t vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e32_v_u32m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8e32_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, size_t vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e32_v_u32m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e32_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, size_t vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e32_v_u32m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e32_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, size_t vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e32_v_u32m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, const uint64_t *a, size_t vl)
{
  vuint64m1x8_t ret = __riscv_vlseg8e64_v_u64m1x8(a, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), vuint64m1_t maskedoff7 __attribute__((__unused__)), const uint64_t *a, size_t vl)
{
  vuint64m1x8_t ret = __riscv_vlseg8e64_v_u64m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e64ff_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m1x8_t ret = __riscv_vlseg8e64ff_v_u64m1x8(a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e64ff_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), vuint64m1_t maskedoff7 __attribute__((__unused__)), const uint64_t *a, size_t *new_vl, size_t vl)
{
  vuint64m1x8_t ret = __riscv_vlseg8e64ff_v_u64m1x8_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m1x8_t ret = __riscv_vlsseg8e64_v_u64m1x8(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), vuint64m1_t maskedoff7 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, size_t vl)
{
  vuint64m1x8_t ret = __riscv_vlsseg8e64_v_u64m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8e64_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, size_t vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e64_v_u64m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8e64_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, size_t vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e64_v_u64m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e64_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, size_t vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e64_v_u64m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e64_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, size_t vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e64_v_u64m1x8_m(mask, a, s, ret, vl);
}
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg8e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vfloat16m1_t *v7, const float16_t *a, size_t vl)
{
  vfloat16m1x8_t ret = __riscv_vlseg8e16_v_f16m1x8(a, vl);
  *v0 = __riscv_vget_v_f16m1x8_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x8_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x8_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x8_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x8_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x8_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x8_f16m1(ret, 6);
  *v7 = __riscv_vget_v_f16m1x8_f16m1(ret, 7);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg8e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vfloat16m1_t *v7, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), vfloat16m1_t maskedoff5 __attribute__((__unused__)), vfloat16m1_t maskedoff6 __attribute__((__unused__)), vfloat16m1_t maskedoff7 __attribute__((__unused__)), const float16_t *a, size_t vl)
{
  vfloat16m1x8_t ret = __riscv_vlseg8e16_v_f16m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_f16m1x8_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x8_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x8_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x8_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x8_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x8_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x8_f16m1(ret, 6);
  *v7 = __riscv_vget_v_f16m1x8_f16m1(ret, 7);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg8e16ff_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vfloat16m1_t *v7, const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m1x8_t ret = __riscv_vlseg8e16ff_v_f16m1x8(a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m1x8_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x8_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x8_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x8_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x8_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x8_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x8_f16m1(ret, 6);
  *v7 = __riscv_vget_v_f16m1x8_f16m1(ret, 7);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlseg8e16ff_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vfloat16m1_t *v7, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), vfloat16m1_t maskedoff5 __attribute__((__unused__)), vfloat16m1_t maskedoff6 __attribute__((__unused__)), vfloat16m1_t maskedoff7 __attribute__((__unused__)), const float16_t *a, size_t *new_vl, size_t vl)
{
  vfloat16m1x8_t ret = __riscv_vlseg8e16ff_v_f16m1x8_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f16m1x8_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x8_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x8_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x8_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x8_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x8_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x8_f16m1(ret, 6);
  *v7 = __riscv_vget_v_f16m1x8_f16m1(ret, 7);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg8e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vfloat16m1_t *v7, const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m1x8_t ret = __riscv_vlsseg8e16_v_f16m1x8(a, s, vl);
  *v0 = __riscv_vget_v_f16m1x8_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x8_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x8_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x8_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x8_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x8_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x8_f16m1(ret, 6);
  *v7 = __riscv_vget_v_f16m1x8_f16m1(ret, 7);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vlsseg8e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vfloat16m1_t *v7, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), vfloat16m1_t maskedoff5 __attribute__((__unused__)), vfloat16m1_t maskedoff6 __attribute__((__unused__)), vfloat16m1_t maskedoff7 __attribute__((__unused__)), const float16_t *a, ptrdiff_t s, size_t vl)
{
  vfloat16m1x8_t ret = __riscv_vlsseg8e16_v_f16m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f16m1x8_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x8_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x8_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x8_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x8_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x8_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x8_f16m1(ret, 6);
  *v7 = __riscv_vget_v_f16m1x8_f16m1(ret, 7);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg8e16_v_f16m1(float16_t *a, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7, size_t vl)
{
  vfloat16m1x8_t ret = __riscv_vcreate_v_f16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e16_v_f16m1x8(a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsseg8e16_v_f16m1_m(vbool16_t mask, float16_t *a, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7, size_t vl)
{
  vfloat16m1x8_t ret = __riscv_vcreate_v_f16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e16_v_f16m1x8_m(mask, a, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg8e16_v_f16m1(float16_t *a, ptrdiff_t s, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7, size_t vl)
{
  vfloat16m1x8_t ret = __riscv_vcreate_v_f16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e16_v_f16m1x8(a, s, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vssseg8e16_v_f16m1_m(vbool16_t mask, float16_t *a, ptrdiff_t s, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7, size_t vl)
{
  vfloat16m1x8_t ret = __riscv_vcreate_v_f16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e16_v_f16m1x8_m(mask, a, s, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vlseg8e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, const float32_t *a, size_t vl)
{
  vfloat32m1x8_t ret = __riscv_vlseg8e32_v_f32m1x8(a, vl);
  *v0 = __riscv_vget_v_f32m1x8_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x8_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x8_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x8_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x8_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x8_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x8_f32m1(ret, 6);
  *v7 = __riscv_vget_v_f32m1x8_f32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), vfloat32m1_t maskedoff5 __attribute__((__unused__)), vfloat32m1_t maskedoff6 __attribute__((__unused__)), vfloat32m1_t maskedoff7 __attribute__((__unused__)), const float32_t *a, size_t vl)
{
  vfloat32m1x8_t ret = __riscv_vlseg8e32_v_f32m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_f32m1x8_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x8_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x8_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x8_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x8_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x8_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x8_f32m1(ret, 6);
  *v7 = __riscv_vget_v_f32m1x8_f32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e32ff_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m1x8_t ret = __riscv_vlseg8e32ff_v_f32m1x8(a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m1x8_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x8_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x8_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x8_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x8_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x8_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x8_f32m1(ret, 6);
  *v7 = __riscv_vget_v_f32m1x8_f32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e32ff_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), vfloat32m1_t maskedoff5 __attribute__((__unused__)), vfloat32m1_t maskedoff6 __attribute__((__unused__)), vfloat32m1_t maskedoff7 __attribute__((__unused__)), const float32_t *a, size_t *new_vl, size_t vl)
{
  vfloat32m1x8_t ret = __riscv_vlseg8e32ff_v_f32m1x8_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f32m1x8_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x8_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x8_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x8_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x8_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x8_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x8_f32m1(ret, 6);
  *v7 = __riscv_vget_v_f32m1x8_f32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m1x8_t ret = __riscv_vlsseg8e32_v_f32m1x8(a, s, vl);
  *v0 = __riscv_vget_v_f32m1x8_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x8_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x8_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x8_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x8_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x8_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x8_f32m1(ret, 6);
  *v7 = __riscv_vget_v_f32m1x8_f32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), vfloat32m1_t maskedoff5 __attribute__((__unused__)), vfloat32m1_t maskedoff6 __attribute__((__unused__)), vfloat32m1_t maskedoff7 __attribute__((__unused__)), const float32_t *a, ptrdiff_t s, size_t vl)
{
  vfloat32m1x8_t ret = __riscv_vlsseg8e32_v_f32m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f32m1x8_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x8_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x8_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x8_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x8_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x8_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x8_f32m1(ret, 6);
  *v7 = __riscv_vget_v_f32m1x8_f32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8e32_v_f32m1(float32_t *a, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7, size_t vl)
{
  vfloat32m1x8_t ret = __riscv_vcreate_v_f32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e32_v_f32m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8e32_v_f32m1_m(vbool32_t mask, float32_t *a, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7, size_t vl)
{
  vfloat32m1x8_t ret = __riscv_vcreate_v_f32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e32_v_f32m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e32_v_f32m1(float32_t *a, ptrdiff_t s, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7, size_t vl)
{
  vfloat32m1x8_t ret = __riscv_vcreate_v_f32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e32_v_f32m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e32_v_f32m1_m(vbool32_t mask, float32_t *a, ptrdiff_t s, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7, size_t vl)
{
  vfloat32m1x8_t ret = __riscv_vcreate_v_f32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e32_v_f32m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t *v7, const float64_t *a, size_t vl)
{
  vfloat64m1x8_t ret = __riscv_vlseg8e64_v_f64m1x8(a, vl);
  *v0 = __riscv_vget_v_f64m1x8_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x8_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x8_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x8_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x8_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x8_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x8_f64m1(ret, 6);
  *v7 = __riscv_vget_v_f64m1x8_f64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t *v7, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), vfloat64m1_t maskedoff5 __attribute__((__unused__)), vfloat64m1_t maskedoff6 __attribute__((__unused__)), vfloat64m1_t maskedoff7 __attribute__((__unused__)), const float64_t *a, size_t vl)
{
  vfloat64m1x8_t ret = __riscv_vlseg8e64_v_f64m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_f64m1x8_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x8_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x8_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x8_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x8_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x8_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x8_f64m1(ret, 6);
  *v7 = __riscv_vget_v_f64m1x8_f64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e64ff_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t *v7, const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m1x8_t ret = __riscv_vlseg8e64ff_v_f64m1x8(a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m1x8_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x8_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x8_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x8_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x8_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x8_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x8_f64m1(ret, 6);
  *v7 = __riscv_vget_v_f64m1x8_f64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8e64ff_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t *v7, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), vfloat64m1_t maskedoff5 __attribute__((__unused__)), vfloat64m1_t maskedoff6 __attribute__((__unused__)), vfloat64m1_t maskedoff7 __attribute__((__unused__)), const float64_t *a, size_t *new_vl, size_t vl)
{
  vfloat64m1x8_t ret = __riscv_vlseg8e64ff_v_f64m1x8_m(mask, a, new_vl, vl);
  *v0 = __riscv_vget_v_f64m1x8_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x8_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x8_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x8_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x8_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x8_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x8_f64m1(ret, 6);
  *v7 = __riscv_vget_v_f64m1x8_f64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t *v7, const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m1x8_t ret = __riscv_vlsseg8e64_v_f64m1x8(a, s, vl);
  *v0 = __riscv_vget_v_f64m1x8_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x8_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x8_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x8_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x8_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x8_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x8_f64m1(ret, 6);
  *v7 = __riscv_vget_v_f64m1x8_f64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t *v7, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), vfloat64m1_t maskedoff5 __attribute__((__unused__)), vfloat64m1_t maskedoff6 __attribute__((__unused__)), vfloat64m1_t maskedoff7 __attribute__((__unused__)), const float64_t *a, ptrdiff_t s, size_t vl)
{
  vfloat64m1x8_t ret = __riscv_vlsseg8e64_v_f64m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_f64m1x8_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x8_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x8_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x8_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x8_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x8_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x8_f64m1(ret, 6);
  *v7 = __riscv_vget_v_f64m1x8_f64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8e64_v_f64m1(float64_t *a, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7, size_t vl)
{
  vfloat64m1x8_t ret = __riscv_vcreate_v_f64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e64_v_f64m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8e64_v_f64m1_m(vbool64_t mask, float64_t *a, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7, size_t vl)
{
  vfloat64m1x8_t ret = __riscv_vcreate_v_f64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsseg8e64_v_f64m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e64_v_f64m1(float64_t *a, ptrdiff_t s, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7, size_t vl)
{
  vfloat64m1x8_t ret = __riscv_vcreate_v_f64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e64_v_f64m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8e64_v_f64m1_m(vbool64_t mask, float64_t *a, ptrdiff_t s, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7, size_t vl)
{
  vfloat64m1x8_t ret = __riscv_vcreate_v_f64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vssseg8e64_v_f64m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, const int8_t *a, vuint8m1_t idx, size_t vl)
{
  vint8m1x2_t ret = __riscv_vloxseg2ei8_v_i8m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x2_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x2_i8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), const int8_t *a, vuint8m1_t idx, size_t vl)
{
  vint8m1x2_t ret = __riscv_vloxseg2ei8_v_i8m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x2_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x2_i8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei8_v_i8m1(int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, size_t vl)
{
  vint8m1x2_t ret = __riscv_vcreate_v_i8m1x2(v0, v1);
  __riscv_vsoxseg2ei8_v_i8m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei8_v_i8m1_m(vbool8_t mask, int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, size_t vl)
{
  vint8m1x2_t ret = __riscv_vcreate_v_i8m1x2(v0, v1);
  __riscv_vsoxseg2ei8_v_i8m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei8_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, const int8_t *a, vuint8m2_t idx, size_t vl)
{
  vint8m2x2_t ret = __riscv_vloxseg2ei8_v_i8m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_i8m2x2_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x2_i8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei8_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), const int8_t *a, vuint8m2_t idx, size_t vl)
{
  vint8m2x2_t ret = __riscv_vloxseg2ei8_v_i8m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m2x2_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x2_i8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei8_v_i8m2(int8_t *a, vuint8m2_t idx, vint8m2_t v0, vint8m2_t v1, size_t vl)
{
  vint8m2x2_t ret = __riscv_vcreate_v_i8m2x2(v0, v1);
  __riscv_vsoxseg2ei8_v_i8m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei8_v_i8m2_m(vbool4_t mask, int8_t *a, vuint8m2_t idx, vint8m2_t v0, vint8m2_t v1, size_t vl)
{
  vint8m2x2_t ret = __riscv_vcreate_v_i8m2x2(v0, v1);
  __riscv_vsoxseg2ei8_v_i8m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei8_v_i8m4(vint8m4_t *v0, vint8m4_t *v1, const int8_t *a, vuint8m4_t idx, size_t vl)
{
  vint8m4x2_t ret = __riscv_vloxseg2ei8_v_i8m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_i8m4x2_i8m4(ret, 0);
  *v1 = __riscv_vget_v_i8m4x2_i8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei8_v_i8m4_m(vint8m4_t *v0, vint8m4_t *v1, vbool2_t mask, vint8m4_t maskedoff0 __attribute__((__unused__)), vint8m4_t maskedoff1 __attribute__((__unused__)), const int8_t *a, vuint8m4_t idx, size_t vl)
{
  vint8m4x2_t ret = __riscv_vloxseg2ei8_v_i8m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m4x2_i8m4(ret, 0);
  *v1 = __riscv_vget_v_i8m4x2_i8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei8_v_i8m4(int8_t *a, vuint8m4_t idx, vint8m4_t v0, vint8m4_t v1, size_t vl)
{
  vint8m4x2_t ret = __riscv_vcreate_v_i8m4x2(v0, v1);
  __riscv_vsoxseg2ei8_v_i8m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei8_v_i8m4_m(vbool2_t mask, int8_t *a, vuint8m4_t idx, vint8m4_t v0, vint8m4_t v1, size_t vl)
{
  vint8m4x2_t ret = __riscv_vcreate_v_i8m4x2(v0, v1);
  __riscv_vsoxseg2ei8_v_i8m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, const int16_t *a, vuint16m1_t idx, size_t vl)
{
  vint16m1x2_t ret = __riscv_vloxseg2ei16_v_i16m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, size_t vl)
{
  vint16m1x2_t ret = __riscv_vloxseg2ei16_v_i16m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, size_t vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_vsoxseg2ei16_v_i16m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, size_t vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_vsoxseg2ei16_v_i16m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei16_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, const int16_t *a, vuint16m2_t idx, size_t vl)
{
  vint16m2x2_t ret = __riscv_vloxseg2ei16_v_i16m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei16_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), const int16_t *a, vuint16m2_t idx, size_t vl)
{
  vint16m2x2_t ret = __riscv_vloxseg2ei16_v_i16m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_i16m2(int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, size_t vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_vsoxseg2ei16_v_i16m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_i16m2_m(vbool8_t mask, int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, size_t vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_vsoxseg2ei16_v_i16m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei16_v_i16m4(vint16m4_t *v0, vint16m4_t *v1, const int16_t *a, vuint16m4_t idx, size_t vl)
{
  vint16m4x2_t ret = __riscv_vloxseg2ei16_v_i16m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei16_v_i16m4_m(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0 __attribute__((__unused__)), vint16m4_t maskedoff1 __attribute__((__unused__)), const int16_t *a, vuint16m4_t idx, size_t vl)
{
  vint16m4x2_t ret = __riscv_vloxseg2ei16_v_i16m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_i16m4(int16_t *a, vuint16m4_t idx, vint16m4_t v0, vint16m4_t v1, size_t vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_vsoxseg2ei16_v_i16m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_i16m4_m(vbool4_t mask, int16_t *a, vuint16m4_t idx, vint16m4_t v0, vint16m4_t v1, size_t vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_vsoxseg2ei16_v_i16m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, const int32_t *a, vuint32m1_t idx, size_t vl)
{
  vint32m1x2_t ret = __riscv_vloxseg2ei32_v_i32m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, size_t vl)
{
  vint32m1x2_t ret = __riscv_vloxseg2ei32_v_i32m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, size_t vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_vsoxseg2ei32_v_i32m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, size_t vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_vsoxseg2ei32_v_i32m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, const int32_t *a, vuint32m2_t idx, size_t vl)
{
  vint32m2x2_t ret = __riscv_vloxseg2ei32_v_i32m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), const int32_t *a, vuint32m2_t idx, size_t vl)
{
  vint32m2x2_t ret = __riscv_vloxseg2ei32_v_i32m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_i32m2(int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, size_t vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_vsoxseg2ei32_v_i32m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_i32m2_m(vbool16_t mask, int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, size_t vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_vsoxseg2ei32_v_i32m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_i32m4(vint32m4_t *v0, vint32m4_t *v1, const int32_t *a, vuint32m4_t idx, size_t vl)
{
  vint32m4x2_t ret = __riscv_vloxseg2ei32_v_i32m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0 __attribute__((__unused__)), vint32m4_t maskedoff1 __attribute__((__unused__)), const int32_t *a, vuint32m4_t idx, size_t vl)
{
  vint32m4x2_t ret = __riscv_vloxseg2ei32_v_i32m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_i32m4(int32_t *a, vuint32m4_t idx, vint32m4_t v0, vint32m4_t v1, size_t vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_vsoxseg2ei32_v_i32m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_i32m4_m(vbool8_t mask, int32_t *a, vuint32m4_t idx, vint32m4_t v0, vint32m4_t v1, size_t vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_vsoxseg2ei32_v_i32m4x2_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, const int64_t *a, vuint64m1_t idx, size_t vl)
{
  vint64m1x2_t ret = __riscv_vloxseg2ei64_v_i64m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, size_t vl)
{
  vint64m1x2_t ret = __riscv_vloxseg2ei64_v_i64m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, size_t vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_vsoxseg2ei64_v_i64m1x2(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, size_t vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_vsoxseg2ei64_v_i64m1x2_m(mask, a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, const int64_t *a, vuint64m2_t idx, size_t vl)
{
  vint64m2x2_t ret = __riscv_vloxseg2ei64_v_i64m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), const int64_t *a, vuint64m2_t idx, size_t vl)
{
  vint64m2x2_t ret = __riscv_vloxseg2ei64_v_i64m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_i64m2(int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, size_t vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_vsoxseg2ei64_v_i64m2x2(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_i64m2_m(vbool32_t mask, int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, size_t vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_vsoxseg2ei64_v_i64m2x2_m(mask, a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_i64m4(vint64m4_t *v0, vint64m4_t *v1, const int64_t *a, vuint64m4_t idx, size_t vl)
{
  vint64m4x2_t ret = __riscv_vloxseg2ei64_v_i64m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0 __attribute__((__unused__)), vint64m4_t maskedoff1 __attribute__((__unused__)), const int64_t *a, vuint64m4_t idx, size_t vl)
{
  vint64m4x2_t ret = __riscv_vloxseg2ei64_v_i64m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_i64m4(int64_t *a, vuint64m4_t idx, vint64m4_t v0, vint64m4_t v1, size_t vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_vsoxseg2ei64_v_i64m4x2(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_i64m4_m(vbool16_t mask, int64_t *a, vuint64m4_t idx, vint64m4_t v0, vint64m4_t v1, size_t vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_vsoxseg2ei64_v_i64m4x2_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg2ei8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, const uint8_t *a, vuint8m1_t idx, size_t vl)
{
  vuint8m1x2_t ret = __riscv_vloxseg2ei8_v_u8m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x2_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x2_u8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, vuint8m1_t idx, size_t vl)
{
  vuint8m1x2_t ret = __riscv_vloxseg2ei8_v_u8m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x2_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x2_u8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei8_v_u8m1(uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, size_t vl)
{
  vuint8m1x2_t ret = __riscv_vcreate_v_u8m1x2(v0, v1);
  __riscv_vsoxseg2ei8_v_u8m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei8_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, size_t vl)
{
  vuint8m1x2_t ret = __riscv_vcreate_v_u8m1x2(v0, v1);
  __riscv_vsoxseg2ei8_v_u8m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei8_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, const uint8_t *a, vuint8m2_t idx, size_t vl)
{
  vuint8m2x2_t ret = __riscv_vloxseg2ei8_v_u8m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_u8m2x2_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x2_u8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei8_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, vuint8m2_t idx, size_t vl)
{
  vuint8m2x2_t ret = __riscv_vloxseg2ei8_v_u8m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m2x2_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x2_u8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei8_v_u8m2(uint8_t *a, vuint8m2_t idx, vuint8m2_t v0, vuint8m2_t v1, size_t vl)
{
  vuint8m2x2_t ret = __riscv_vcreate_v_u8m2x2(v0, v1);
  __riscv_vsoxseg2ei8_v_u8m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei8_v_u8m2_m(vbool4_t mask, uint8_t *a, vuint8m2_t idx, vuint8m2_t v0, vuint8m2_t v1, size_t vl)
{
  vuint8m2x2_t ret = __riscv_vcreate_v_u8m2x2(v0, v1);
  __riscv_vsoxseg2ei8_v_u8m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei8_v_u8m4(vuint8m4_t *v0, vuint8m4_t *v1, const uint8_t *a, vuint8m4_t idx, size_t vl)
{
  vuint8m4x2_t ret = __riscv_vloxseg2ei8_v_u8m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_u8m4x2_u8m4(ret, 0);
  *v1 = __riscv_vget_v_u8m4x2_u8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei8_v_u8m4_m(vuint8m4_t *v0, vuint8m4_t *v1, vbool2_t mask, vuint8m4_t maskedoff0 __attribute__((__unused__)), vuint8m4_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, vuint8m4_t idx, size_t vl)
{
  vuint8m4x2_t ret = __riscv_vloxseg2ei8_v_u8m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m4x2_u8m4(ret, 0);
  *v1 = __riscv_vget_v_u8m4x2_u8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei8_v_u8m4(uint8_t *a, vuint8m4_t idx, vuint8m4_t v0, vuint8m4_t v1, size_t vl)
{
  vuint8m4x2_t ret = __riscv_vcreate_v_u8m4x2(v0, v1);
  __riscv_vsoxseg2ei8_v_u8m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei8_v_u8m4_m(vbool2_t mask, uint8_t *a, vuint8m4_t idx, vuint8m4_t v0, vuint8m4_t v1, size_t vl)
{
  vuint8m4x2_t ret = __riscv_vcreate_v_u8m4x2(v0, v1);
  __riscv_vsoxseg2ei8_v_u8m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, const uint16_t *a, vuint16m1_t idx, size_t vl)
{
  vuint16m1x2_t ret = __riscv_vloxseg2ei16_v_u16m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, size_t vl)
{
  vuint16m1x2_t ret = __riscv_vloxseg2ei16_v_u16m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, size_t vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_vsoxseg2ei16_v_u16m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, size_t vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_vsoxseg2ei16_v_u16m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei16_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, const uint16_t *a, vuint16m2_t idx, size_t vl)
{
  vuint16m2x2_t ret = __riscv_vloxseg2ei16_v_u16m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei16_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, vuint16m2_t idx, size_t vl)
{
  vuint16m2x2_t ret = __riscv_vloxseg2ei16_v_u16m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_u16m2(uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, size_t vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_vsoxseg2ei16_v_u16m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, size_t vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_vsoxseg2ei16_v_u16m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei16_v_u16m4(vuint16m4_t *v0, vuint16m4_t *v1, const uint16_t *a, vuint16m4_t idx, size_t vl)
{
  vuint16m4x2_t ret = __riscv_vloxseg2ei16_v_u16m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei16_v_u16m4_m(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0 __attribute__((__unused__)), vuint16m4_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, vuint16m4_t idx, size_t vl)
{
  vuint16m4x2_t ret = __riscv_vloxseg2ei16_v_u16m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_u16m4(uint16_t *a, vuint16m4_t idx, vuint16m4_t v0, vuint16m4_t v1, size_t vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_vsoxseg2ei16_v_u16m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_u16m4_m(vbool4_t mask, uint16_t *a, vuint16m4_t idx, vuint16m4_t v0, vuint16m4_t v1, size_t vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_vsoxseg2ei16_v_u16m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, const uint32_t *a, vuint32m1_t idx, size_t vl)
{
  vuint32m1x2_t ret = __riscv_vloxseg2ei32_v_u32m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, size_t vl)
{
  vuint32m1x2_t ret = __riscv_vloxseg2ei32_v_u32m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, size_t vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_vsoxseg2ei32_v_u32m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, size_t vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_vsoxseg2ei32_v_u32m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, const uint32_t *a, vuint32m2_t idx, size_t vl)
{
  vuint32m2x2_t ret = __riscv_vloxseg2ei32_v_u32m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, vuint32m2_t idx, size_t vl)
{
  vuint32m2x2_t ret = __riscv_vloxseg2ei32_v_u32m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_u32m2(uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, size_t vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_vsoxseg2ei32_v_u32m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, size_t vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_vsoxseg2ei32_v_u32m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_u32m4(vuint32m4_t *v0, vuint32m4_t *v1, const uint32_t *a, vuint32m4_t idx, size_t vl)
{
  vuint32m4x2_t ret = __riscv_vloxseg2ei32_v_u32m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0 __attribute__((__unused__)), vuint32m4_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, vuint32m4_t idx, size_t vl)
{
  vuint32m4x2_t ret = __riscv_vloxseg2ei32_v_u32m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_u32m4(uint32_t *a, vuint32m4_t idx, vuint32m4_t v0, vuint32m4_t v1, size_t vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_vsoxseg2ei32_v_u32m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_u32m4_m(vbool8_t mask, uint32_t *a, vuint32m4_t idx, vuint32m4_t v0, vuint32m4_t v1, size_t vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_vsoxseg2ei32_v_u32m4x2_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, const uint64_t *a, vuint64m1_t idx, size_t vl)
{
  vuint64m1x2_t ret = __riscv_vloxseg2ei64_v_u64m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, size_t vl)
{
  vuint64m1x2_t ret = __riscv_vloxseg2ei64_v_u64m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, size_t vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_vsoxseg2ei64_v_u64m1x2(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, size_t vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_vsoxseg2ei64_v_u64m1x2_m(mask, a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, const uint64_t *a, vuint64m2_t idx, size_t vl)
{
  vuint64m2x2_t ret = __riscv_vloxseg2ei64_v_u64m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, vuint64m2_t idx, size_t vl)
{
  vuint64m2x2_t ret = __riscv_vloxseg2ei64_v_u64m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_u64m2(uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, size_t vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_vsoxseg2ei64_v_u64m2x2(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, size_t vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_vsoxseg2ei64_v_u64m2x2_m(mask, a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_u64m4(vuint64m4_t *v0, vuint64m4_t *v1, const uint64_t *a, vuint64m4_t idx, size_t vl)
{
  vuint64m4x2_t ret = __riscv_vloxseg2ei64_v_u64m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0 __attribute__((__unused__)), vuint64m4_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, vuint64m4_t idx, size_t vl)
{
  vuint64m4x2_t ret = __riscv_vloxseg2ei64_v_u64m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_u64m4(uint64_t *a, vuint64m4_t idx, vuint64m4_t v0, vuint64m4_t v1, size_t vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_vsoxseg2ei64_v_u64m4x2(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_u64m4_m(vbool16_t mask, uint64_t *a, vuint64m4_t idx, vuint64m4_t v0, vuint64m4_t v1, size_t vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_vsoxseg2ei64_v_u64m4x2_m(mask, a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg2ei16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, const float16_t *a, vuint16m1_t idx, size_t vl)
{
  vfloat16m1x2_t ret = __riscv_vloxseg2ei16_v_f16m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_f16m1x2_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x2_f16m1(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg2ei16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), const float16_t *a, vuint16m1_t idx, size_t vl)
{
  vfloat16m1x2_t ret = __riscv_vloxseg2ei16_v_f16m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f16m1x2_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x2_f16m1(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_f16m1(float16_t *a, vuint16m1_t idx, vfloat16m1_t v0, vfloat16m1_t v1, size_t vl)
{
  vfloat16m1x2_t ret = __riscv_vcreate_v_f16m1x2(v0, v1);
  __riscv_vsoxseg2ei16_v_f16m1x2(a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_f16m1_m(vbool16_t mask, float16_t *a, vuint16m1_t idx, vfloat16m1_t v0, vfloat16m1_t v1, size_t vl)
{
  vfloat16m1x2_t ret = __riscv_vcreate_v_f16m1x2(v0, v1);
  __riscv_vsoxseg2ei16_v_f16m1x2_m(mask, a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg2ei16_v_f16m2(vfloat16m2_t *v0, vfloat16m2_t *v1, const float16_t *a, vuint16m2_t idx, size_t vl)
{
  vfloat16m2x2_t ret = __riscv_vloxseg2ei16_v_f16m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_f16m2x2_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x2_f16m2(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg2ei16_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vbool8_t mask, vfloat16m2_t maskedoff0 __attribute__((__unused__)), vfloat16m2_t maskedoff1 __attribute__((__unused__)), const float16_t *a, vuint16m2_t idx, size_t vl)
{
  vfloat16m2x2_t ret = __riscv_vloxseg2ei16_v_f16m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f16m2x2_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x2_f16m2(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_f16m2(float16_t *a, vuint16m2_t idx, vfloat16m2_t v0, vfloat16m2_t v1, size_t vl)
{
  vfloat16m2x2_t ret = __riscv_vcreate_v_f16m2x2(v0, v1);
  __riscv_vsoxseg2ei16_v_f16m2x2(a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_f16m2_m(vbool8_t mask, float16_t *a, vuint16m2_t idx, vfloat16m2_t v0, vfloat16m2_t v1, size_t vl)
{
  vfloat16m2x2_t ret = __riscv_vcreate_v_f16m2x2(v0, v1);
  __riscv_vsoxseg2ei16_v_f16m2x2_m(mask, a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg2ei16_v_f16m4(vfloat16m4_t *v0, vfloat16m4_t *v1, const float16_t *a, vuint16m4_t idx, size_t vl)
{
  vfloat16m4x2_t ret = __riscv_vloxseg2ei16_v_f16m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_f16m4x2_f16m4(ret, 0);
  *v1 = __riscv_vget_v_f16m4x2_f16m4(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg2ei16_v_f16m4_m(vfloat16m4_t *v0, vfloat16m4_t *v1, vbool4_t mask, vfloat16m4_t maskedoff0 __attribute__((__unused__)), vfloat16m4_t maskedoff1 __attribute__((__unused__)), const float16_t *a, vuint16m4_t idx, size_t vl)
{
  vfloat16m4x2_t ret = __riscv_vloxseg2ei16_v_f16m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f16m4x2_f16m4(ret, 0);
  *v1 = __riscv_vget_v_f16m4x2_f16m4(ret, 1);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_f16m4(float16_t *a, vuint16m4_t idx, vfloat16m4_t v0, vfloat16m4_t v1, size_t vl)
{
  vfloat16m4x2_t ret = __riscv_vcreate_v_f16m4x2(v0, v1);
  __riscv_vsoxseg2ei16_v_f16m4x2(a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg2ei16_v_f16m4_m(vbool4_t mask, float16_t *a, vuint16m4_t idx, vfloat16m4_t v0, vfloat16m4_t v1, size_t vl)
{
  vfloat16m4x2_t ret = __riscv_vcreate_v_f16m4x2(v0, v1);
  __riscv_vsoxseg2ei16_v_f16m4x2_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg2ei32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, const float32_t *a, vuint32m1_t idx, size_t vl)
{
  vfloat32m1x2_t ret = __riscv_vloxseg2ei32_v_f32m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_f32m1x2_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x2_f32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), const float32_t *a, vuint32m1_t idx, size_t vl)
{
  vfloat32m1x2_t ret = __riscv_vloxseg2ei32_v_f32m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f32m1x2_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x2_f32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_f32m1(float32_t *a, vuint32m1_t idx, vfloat32m1_t v0, vfloat32m1_t v1, size_t vl)
{
  vfloat32m1x2_t ret = __riscv_vcreate_v_f32m1x2(v0, v1);
  __riscv_vsoxseg2ei32_v_f32m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_f32m1_m(vbool32_t mask, float32_t *a, vuint32m1_t idx, vfloat32m1_t v0, vfloat32m1_t v1, size_t vl)
{
  vfloat32m1x2_t ret = __riscv_vcreate_v_f32m1x2(v0, v1);
  __riscv_vsoxseg2ei32_v_f32m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_f32m2(vfloat32m2_t *v0, vfloat32m2_t *v1, const float32_t *a, vuint32m2_t idx, size_t vl)
{
  vfloat32m2x2_t ret = __riscv_vloxseg2ei32_v_f32m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_f32m2x2_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x2_f32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vbool16_t mask, vfloat32m2_t maskedoff0 __attribute__((__unused__)), vfloat32m2_t maskedoff1 __attribute__((__unused__)), const float32_t *a, vuint32m2_t idx, size_t vl)
{
  vfloat32m2x2_t ret = __riscv_vloxseg2ei32_v_f32m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f32m2x2_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x2_f32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_f32m2(float32_t *a, vuint32m2_t idx, vfloat32m2_t v0, vfloat32m2_t v1, size_t vl)
{
  vfloat32m2x2_t ret = __riscv_vcreate_v_f32m2x2(v0, v1);
  __riscv_vsoxseg2ei32_v_f32m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_f32m2_m(vbool16_t mask, float32_t *a, vuint32m2_t idx, vfloat32m2_t v0, vfloat32m2_t v1, size_t vl)
{
  vfloat32m2x2_t ret = __riscv_vcreate_v_f32m2x2(v0, v1);
  __riscv_vsoxseg2ei32_v_f32m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_f32m4(vfloat32m4_t *v0, vfloat32m4_t *v1, const float32_t *a, vuint32m4_t idx, size_t vl)
{
  vfloat32m4x2_t ret = __riscv_vloxseg2ei32_v_f32m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_f32m4x2_f32m4(ret, 0);
  *v1 = __riscv_vget_v_f32m4x2_f32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vloxseg2ei32_v_f32m4_m(vfloat32m4_t *v0, vfloat32m4_t *v1, vbool8_t mask, vfloat32m4_t maskedoff0 __attribute__((__unused__)), vfloat32m4_t maskedoff1 __attribute__((__unused__)), const float32_t *a, vuint32m4_t idx, size_t vl)
{
  vfloat32m4x2_t ret = __riscv_vloxseg2ei32_v_f32m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f32m4x2_f32m4(ret, 0);
  *v1 = __riscv_vget_v_f32m4x2_f32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_f32m4(float32_t *a, vuint32m4_t idx, vfloat32m4_t v0, vfloat32m4_t v1, size_t vl)
{
  vfloat32m4x2_t ret = __riscv_vcreate_v_f32m4x2(v0, v1);
  __riscv_vsoxseg2ei32_v_f32m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg2ei32_v_f32m4_m(vbool8_t mask, float32_t *a, vuint32m4_t idx, vfloat32m4_t v0, vfloat32m4_t v1, size_t vl)
{
  vfloat32m4x2_t ret = __riscv_vcreate_v_f32m4x2(v0, v1);
  __riscv_vsoxseg2ei32_v_f32m4x2_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, const float64_t *a, vuint64m1_t idx, size_t vl)
{
  vfloat64m1x2_t ret = __riscv_vloxseg2ei64_v_f64m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_f64m1x2_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x2_f64m1(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), const float64_t *a, vuint64m1_t idx, size_t vl)
{
  vfloat64m1x2_t ret = __riscv_vloxseg2ei64_v_f64m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f64m1x2_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x2_f64m1(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_f64m1(float64_t *a, vuint64m1_t idx, vfloat64m1_t v0, vfloat64m1_t v1, size_t vl)
{
  vfloat64m1x2_t ret = __riscv_vcreate_v_f64m1x2(v0, v1);
  __riscv_vsoxseg2ei64_v_f64m1x2(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_f64m1_m(vbool64_t mask, float64_t *a, vuint64m1_t idx, vfloat64m1_t v0, vfloat64m1_t v1, size_t vl)
{
  vfloat64m1x2_t ret = __riscv_vcreate_v_f64m1x2(v0, v1);
  __riscv_vsoxseg2ei64_v_f64m1x2_m(mask, a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_f64m2(vfloat64m2_t *v0, vfloat64m2_t *v1, const float64_t *a, vuint64m2_t idx, size_t vl)
{
  vfloat64m2x2_t ret = __riscv_vloxseg2ei64_v_f64m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_f64m2x2_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x2_f64m2(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, vfloat64m2_t maskedoff0 __attribute__((__unused__)), vfloat64m2_t maskedoff1 __attribute__((__unused__)), const float64_t *a, vuint64m2_t idx, size_t vl)
{
  vfloat64m2x2_t ret = __riscv_vloxseg2ei64_v_f64m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f64m2x2_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x2_f64m2(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_f64m2(float64_t *a, vuint64m2_t idx, vfloat64m2_t v0, vfloat64m2_t v1, size_t vl)
{
  vfloat64m2x2_t ret = __riscv_vcreate_v_f64m2x2(v0, v1);
  __riscv_vsoxseg2ei64_v_f64m2x2(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_f64m2_m(vbool32_t mask, float64_t *a, vuint64m2_t idx, vfloat64m2_t v0, vfloat64m2_t v1, size_t vl)
{
  vfloat64m2x2_t ret = __riscv_vcreate_v_f64m2x2(v0, v1);
  __riscv_vsoxseg2ei64_v_f64m2x2_m(mask, a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_f64m4(vfloat64m4_t *v0, vfloat64m4_t *v1, const float64_t *a, vuint64m4_t idx, size_t vl)
{
  vfloat64m4x2_t ret = __riscv_vloxseg2ei64_v_f64m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_f64m4x2_f64m4(ret, 0);
  *v1 = __riscv_vget_v_f64m4x2_f64m4(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg2ei64_v_f64m4_m(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, vfloat64m4_t maskedoff0 __attribute__((__unused__)), vfloat64m4_t maskedoff1 __attribute__((__unused__)), const float64_t *a, vuint64m4_t idx, size_t vl)
{
  vfloat64m4x2_t ret = __riscv_vloxseg2ei64_v_f64m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f64m4x2_f64m4(ret, 0);
  *v1 = __riscv_vget_v_f64m4x2_f64m4(ret, 1);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_f64m4(float64_t *a, vuint64m4_t idx, vfloat64m4_t v0, vfloat64m4_t v1, size_t vl)
{
  vfloat64m4x2_t ret = __riscv_vcreate_v_f64m4x2(v0, v1);
  __riscv_vsoxseg2ei64_v_f64m4x2(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg2ei64_v_f64m4_m(vbool16_t mask, float64_t *a, vuint64m4_t idx, vfloat64m4_t v0, vfloat64m4_t v1, size_t vl)
{
  vfloat64m4x2_t ret = __riscv_vcreate_v_f64m4x2(v0, v1);
  __riscv_vsoxseg2ei64_v_f64m4x2_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg3ei8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, const int8_t *a, vuint8m1_t idx, size_t vl)
{
  vint8m1x3_t ret = __riscv_vloxseg3ei8_v_i8m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x3_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x3_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x3_i8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vloxseg3ei8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), const int8_t *a, vuint8m1_t idx, size_t vl)
{
  vint8m1x3_t ret = __riscv_vloxseg3ei8_v_i8m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x3_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x3_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x3_i8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsoxseg3ei8_v_i8m1(int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, size_t vl)
{
  vint8m1x3_t ret = __riscv_vcreate_v_i8m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei8_v_i8m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg3ei8_v_i8m1_m(vbool8_t mask, int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, size_t vl)
{
  vint8m1x3_t ret = __riscv_vcreate_v_i8m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei8_v_i8m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg3ei8_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, const int8_t *a, vuint8m2_t idx, size_t vl)
{
  vint8m2x3_t ret = __riscv_vloxseg3ei8_v_i8m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_i8m2x3_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x3_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x3_i8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vloxseg3ei8_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), vint8m2_t maskedoff2 __attribute__((__unused__)), const int8_t *a, vuint8m2_t idx, size_t vl)
{
  vint8m2x3_t ret = __riscv_vloxseg3ei8_v_i8m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m2x3_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x3_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x3_i8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsoxseg3ei8_v_i8m2(int8_t *a, vuint8m2_t idx, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, size_t vl)
{
  vint8m2x3_t ret = __riscv_vcreate_v_i8m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei8_v_i8m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg3ei8_v_i8m2_m(vbool4_t mask, int8_t *a, vuint8m2_t idx, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, size_t vl)
{
  vint8m2x3_t ret = __riscv_vcreate_v_i8m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei8_v_i8m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg3ei16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, const int16_t *a, vuint16m1_t idx, size_t vl)
{
  vint16m1x3_t ret = __riscv_vloxseg3ei16_v_i16m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vloxseg3ei16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, size_t vl)
{
  vint16m1x3_t ret = __riscv_vloxseg3ei16_v_i16m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsoxseg3ei16_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, size_t vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei16_v_i16m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg3ei16_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, size_t vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei16_v_i16m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg3ei16_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, const int16_t *a, vuint16m2_t idx, size_t vl)
{
  vint16m2x3_t ret = __riscv_vloxseg3ei16_v_i16m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vloxseg3ei16_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), const int16_t *a, vuint16m2_t idx, size_t vl)
{
  vint16m2x3_t ret = __riscv_vloxseg3ei16_v_i16m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsoxseg3ei16_v_i16m2(int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, size_t vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei16_v_i16m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg3ei16_v_i16m2_m(vbool8_t mask, int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, size_t vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei16_v_i16m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg3ei32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, const int32_t *a, vuint32m1_t idx, size_t vl)
{
  vint32m1x3_t ret = __riscv_vloxseg3ei32_v_i32m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vloxseg3ei32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, size_t vl)
{
  vint32m1x3_t ret = __riscv_vloxseg3ei32_v_i32m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsoxseg3ei32_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, size_t vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei32_v_i32m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg3ei32_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, size_t vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei32_v_i32m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg3ei32_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, const int32_t *a, vuint32m2_t idx, size_t vl)
{
  vint32m2x3_t ret = __riscv_vloxseg3ei32_v_i32m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vloxseg3ei32_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), const int32_t *a, vuint32m2_t idx, size_t vl)
{
  vint32m2x3_t ret = __riscv_vloxseg3ei32_v_i32m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsoxseg3ei32_v_i32m2(int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, size_t vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei32_v_i32m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg3ei32_v_i32m2_m(vbool16_t mask, int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, size_t vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei32_v_i32m2x3_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg3ei64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, const int64_t *a, vuint64m1_t idx, size_t vl)
{
  vint64m1x3_t ret = __riscv_vloxseg3ei64_v_i64m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg3ei64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, size_t vl)
{
  vint64m1x3_t ret = __riscv_vloxseg3ei64_v_i64m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg3ei64_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, size_t vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei64_v_i64m1x3(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg3ei64_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, size_t vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei64_v_i64m1x3_m(mask, a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg3ei64_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, const int64_t *a, vuint64m2_t idx, size_t vl)
{
  vint64m2x3_t ret = __riscv_vloxseg3ei64_v_i64m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg3ei64_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), const int64_t *a, vuint64m2_t idx, size_t vl)
{
  vint64m2x3_t ret = __riscv_vloxseg3ei64_v_i64m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg3ei64_v_i64m2(int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, size_t vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei64_v_i64m2x3(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg3ei64_v_i64m2_m(vbool32_t mask, int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, size_t vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei64_v_i64m2x3_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg3ei8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, const uint8_t *a, vuint8m1_t idx, size_t vl)
{
  vuint8m1x3_t ret = __riscv_vloxseg3ei8_v_u8m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x3_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x3_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x3_u8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vloxseg3ei8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), const uint8_t *a, vuint8m1_t idx, size_t vl)
{
  vuint8m1x3_t ret = __riscv_vloxseg3ei8_v_u8m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x3_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x3_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x3_u8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsoxseg3ei8_v_u8m1(uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, size_t vl)
{
  vuint8m1x3_t ret = __riscv_vcreate_v_u8m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei8_v_u8m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg3ei8_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, size_t vl)
{
  vuint8m1x3_t ret = __riscv_vcreate_v_u8m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei8_v_u8m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg3ei8_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, const uint8_t *a, vuint8m2_t idx, size_t vl)
{
  vuint8m2x3_t ret = __riscv_vloxseg3ei8_v_u8m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_u8m2x3_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x3_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x3_u8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vloxseg3ei8_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), vuint8m2_t maskedoff2 __attribute__((__unused__)), const uint8_t *a, vuint8m2_t idx, size_t vl)
{
  vuint8m2x3_t ret = __riscv_vloxseg3ei8_v_u8m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m2x3_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x3_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x3_u8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsoxseg3ei8_v_u8m2(uint8_t *a, vuint8m2_t idx, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, size_t vl)
{
  vuint8m2x3_t ret = __riscv_vcreate_v_u8m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei8_v_u8m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg3ei8_v_u8m2_m(vbool4_t mask, uint8_t *a, vuint8m2_t idx, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, size_t vl)
{
  vuint8m2x3_t ret = __riscv_vcreate_v_u8m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei8_v_u8m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg3ei16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, const uint16_t *a, vuint16m1_t idx, size_t vl)
{
  vuint16m1x3_t ret = __riscv_vloxseg3ei16_v_u16m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vloxseg3ei16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, size_t vl)
{
  vuint16m1x3_t ret = __riscv_vloxseg3ei16_v_u16m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsoxseg3ei16_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, size_t vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei16_v_u16m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg3ei16_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, size_t vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei16_v_u16m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg3ei16_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, const uint16_t *a, vuint16m2_t idx, size_t vl)
{
  vuint16m2x3_t ret = __riscv_vloxseg3ei16_v_u16m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vloxseg3ei16_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, vuint16m2_t idx, size_t vl)
{
  vuint16m2x3_t ret = __riscv_vloxseg3ei16_v_u16m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsoxseg3ei16_v_u16m2(uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, size_t vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei16_v_u16m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg3ei16_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, size_t vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei16_v_u16m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg3ei32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, const uint32_t *a, vuint32m1_t idx, size_t vl)
{
  vuint32m1x3_t ret = __riscv_vloxseg3ei32_v_u32m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vloxseg3ei32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, size_t vl)
{
  vuint32m1x3_t ret = __riscv_vloxseg3ei32_v_u32m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsoxseg3ei32_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, size_t vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei32_v_u32m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg3ei32_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, size_t vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei32_v_u32m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg3ei32_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, const uint32_t *a, vuint32m2_t idx, size_t vl)
{
  vuint32m2x3_t ret = __riscv_vloxseg3ei32_v_u32m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vloxseg3ei32_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, vuint32m2_t idx, size_t vl)
{
  vuint32m2x3_t ret = __riscv_vloxseg3ei32_v_u32m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsoxseg3ei32_v_u32m2(uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, size_t vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei32_v_u32m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg3ei32_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, size_t vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei32_v_u32m2x3_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg3ei64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, const uint64_t *a, vuint64m1_t idx, size_t vl)
{
  vuint64m1x3_t ret = __riscv_vloxseg3ei64_v_u64m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg3ei64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, size_t vl)
{
  vuint64m1x3_t ret = __riscv_vloxseg3ei64_v_u64m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg3ei64_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, size_t vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei64_v_u64m1x3(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg3ei64_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, size_t vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei64_v_u64m1x3_m(mask, a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg3ei64_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, const uint64_t *a, vuint64m2_t idx, size_t vl)
{
  vuint64m2x3_t ret = __riscv_vloxseg3ei64_v_u64m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg3ei64_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, vuint64m2_t idx, size_t vl)
{
  vuint64m2x3_t ret = __riscv_vloxseg3ei64_v_u64m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg3ei64_v_u64m2(uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, size_t vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei64_v_u64m2x3(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg3ei64_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, size_t vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei64_v_u64m2x3_m(mask, a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg3ei16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, const float16_t *a, vuint16m1_t idx, size_t vl)
{
  vfloat16m1x3_t ret = __riscv_vloxseg3ei16_v_f16m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_f16m1x3_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x3_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x3_f16m1(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg3ei16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), const float16_t *a, vuint16m1_t idx, size_t vl)
{
  vfloat16m1x3_t ret = __riscv_vloxseg3ei16_v_f16m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f16m1x3_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x3_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x3_f16m1(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg3ei16_v_f16m1(float16_t *a, vuint16m1_t idx, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, size_t vl)
{
  vfloat16m1x3_t ret = __riscv_vcreate_v_f16m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei16_v_f16m1x3(a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg3ei16_v_f16m1_m(vbool16_t mask, float16_t *a, vuint16m1_t idx, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, size_t vl)
{
  vfloat16m1x3_t ret = __riscv_vcreate_v_f16m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei16_v_f16m1x3_m(mask, a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg3ei16_v_f16m2(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, const float16_t *a, vuint16m2_t idx, size_t vl)
{
  vfloat16m2x3_t ret = __riscv_vloxseg3ei16_v_f16m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_f16m2x3_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x3_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x3_f16m2(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg3ei16_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vbool8_t mask, vfloat16m2_t maskedoff0 __attribute__((__unused__)), vfloat16m2_t maskedoff1 __attribute__((__unused__)), vfloat16m2_t maskedoff2 __attribute__((__unused__)), const float16_t *a, vuint16m2_t idx, size_t vl)
{
  vfloat16m2x3_t ret = __riscv_vloxseg3ei16_v_f16m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f16m2x3_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x3_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x3_f16m2(ret, 2);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg3ei16_v_f16m2(float16_t *a, vuint16m2_t idx, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, size_t vl)
{
  vfloat16m2x3_t ret = __riscv_vcreate_v_f16m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei16_v_f16m2x3(a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg3ei16_v_f16m2_m(vbool8_t mask, float16_t *a, vuint16m2_t idx, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, size_t vl)
{
  vfloat16m2x3_t ret = __riscv_vcreate_v_f16m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei16_v_f16m2x3_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg3ei32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, const float32_t *a, vuint32m1_t idx, size_t vl)
{
  vfloat32m1x3_t ret = __riscv_vloxseg3ei32_v_f32m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_f32m1x3_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x3_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x3_f32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vloxseg3ei32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), const float32_t *a, vuint32m1_t idx, size_t vl)
{
  vfloat32m1x3_t ret = __riscv_vloxseg3ei32_v_f32m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f32m1x3_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x3_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x3_f32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsoxseg3ei32_v_f32m1(float32_t *a, vuint32m1_t idx, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, size_t vl)
{
  vfloat32m1x3_t ret = __riscv_vcreate_v_f32m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei32_v_f32m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg3ei32_v_f32m1_m(vbool32_t mask, float32_t *a, vuint32m1_t idx, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, size_t vl)
{
  vfloat32m1x3_t ret = __riscv_vcreate_v_f32m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei32_v_f32m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg3ei32_v_f32m2(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, const float32_t *a, vuint32m2_t idx, size_t vl)
{
  vfloat32m2x3_t ret = __riscv_vloxseg3ei32_v_f32m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_f32m2x3_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x3_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x3_f32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vloxseg3ei32_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vbool16_t mask, vfloat32m2_t maskedoff0 __attribute__((__unused__)), vfloat32m2_t maskedoff1 __attribute__((__unused__)), vfloat32m2_t maskedoff2 __attribute__((__unused__)), const float32_t *a, vuint32m2_t idx, size_t vl)
{
  vfloat32m2x3_t ret = __riscv_vloxseg3ei32_v_f32m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f32m2x3_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x3_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x3_f32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsoxseg3ei32_v_f32m2(float32_t *a, vuint32m2_t idx, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, size_t vl)
{
  vfloat32m2x3_t ret = __riscv_vcreate_v_f32m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei32_v_f32m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg3ei32_v_f32m2_m(vbool16_t mask, float32_t *a, vuint32m2_t idx, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, size_t vl)
{
  vfloat32m2x3_t ret = __riscv_vcreate_v_f32m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei32_v_f32m2x3_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg3ei64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, const float64_t *a, vuint64m1_t idx, size_t vl)
{
  vfloat64m1x3_t ret = __riscv_vloxseg3ei64_v_f64m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_f64m1x3_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x3_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x3_f64m1(ret, 2);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg3ei64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), const float64_t *a, vuint64m1_t idx, size_t vl)
{
  vfloat64m1x3_t ret = __riscv_vloxseg3ei64_v_f64m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f64m1x3_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x3_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x3_f64m1(ret, 2);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg3ei64_v_f64m1(float64_t *a, vuint64m1_t idx, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, size_t vl)
{
  vfloat64m1x3_t ret = __riscv_vcreate_v_f64m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei64_v_f64m1x3(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg3ei64_v_f64m1_m(vbool64_t mask, float64_t *a, vuint64m1_t idx, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, size_t vl)
{
  vfloat64m1x3_t ret = __riscv_vcreate_v_f64m1x3(v0, v1, v2);
  __riscv_vsoxseg3ei64_v_f64m1x3_m(mask, a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg3ei64_v_f64m2(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, const float64_t *a, vuint64m2_t idx, size_t vl)
{
  vfloat64m2x3_t ret = __riscv_vloxseg3ei64_v_f64m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_f64m2x3_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x3_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x3_f64m2(ret, 2);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg3ei64_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vbool32_t mask, vfloat64m2_t maskedoff0 __attribute__((__unused__)), vfloat64m2_t maskedoff1 __attribute__((__unused__)), vfloat64m2_t maskedoff2 __attribute__((__unused__)), const float64_t *a, vuint64m2_t idx, size_t vl)
{
  vfloat64m2x3_t ret = __riscv_vloxseg3ei64_v_f64m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f64m2x3_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x3_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x3_f64m2(ret, 2);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg3ei64_v_f64m2(float64_t *a, vuint64m2_t idx, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, size_t vl)
{
  vfloat64m2x3_t ret = __riscv_vcreate_v_f64m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei64_v_f64m2x3(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg3ei64_v_f64m2_m(vbool32_t mask, float64_t *a, vuint64m2_t idx, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, size_t vl)
{
  vfloat64m2x3_t ret = __riscv_vcreate_v_f64m2x3(v0, v1, v2);
  __riscv_vsoxseg3ei64_v_f64m2x3_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg4ei8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, const int8_t *a, vuint8m1_t idx, size_t vl)
{
  vint8m1x4_t ret = __riscv_vloxseg4ei8_v_i8m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x4_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x4_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x4_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x4_i8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vloxseg4ei8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), const int8_t *a, vuint8m1_t idx, size_t vl)
{
  vint8m1x4_t ret = __riscv_vloxseg4ei8_v_i8m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x4_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x4_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x4_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x4_i8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsoxseg4ei8_v_i8m1(int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, size_t vl)
{
  vint8m1x4_t ret = __riscv_vcreate_v_i8m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei8_v_i8m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg4ei8_v_i8m1_m(vbool8_t mask, int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, size_t vl)
{
  vint8m1x4_t ret = __riscv_vcreate_v_i8m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei8_v_i8m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg4ei8_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t *v3, const int8_t *a, vuint8m2_t idx, size_t vl)
{
  vint8m2x4_t ret = __riscv_vloxseg4ei8_v_i8m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_i8m2x4_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x4_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x4_i8m2(ret, 2);
  *v3 = __riscv_vget_v_i8m2x4_i8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vloxseg4ei8_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t *v3, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), vint8m2_t maskedoff2 __attribute__((__unused__)), vint8m2_t maskedoff3 __attribute__((__unused__)), const int8_t *a, vuint8m2_t idx, size_t vl)
{
  vint8m2x4_t ret = __riscv_vloxseg4ei8_v_i8m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m2x4_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x4_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x4_i8m2(ret, 2);
  *v3 = __riscv_vget_v_i8m2x4_i8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsoxseg4ei8_v_i8m2(int8_t *a, vuint8m2_t idx, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3, size_t vl)
{
  vint8m2x4_t ret = __riscv_vcreate_v_i8m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei8_v_i8m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg4ei8_v_i8m2_m(vbool4_t mask, int8_t *a, vuint8m2_t idx, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3, size_t vl)
{
  vint8m2x4_t ret = __riscv_vcreate_v_i8m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei8_v_i8m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg4ei16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, const int16_t *a, vuint16m1_t idx, size_t vl)
{
  vint16m1x4_t ret = __riscv_vloxseg4ei16_v_i16m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vloxseg4ei16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, size_t vl)
{
  vint16m1x4_t ret = __riscv_vloxseg4ei16_v_i16m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsoxseg4ei16_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, size_t vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei16_v_i16m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg4ei16_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, size_t vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei16_v_i16m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg4ei16_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, const int16_t *a, vuint16m2_t idx, size_t vl)
{
  vint16m2x4_t ret = __riscv_vloxseg4ei16_v_i16m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vloxseg4ei16_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), vint16m2_t maskedoff3 __attribute__((__unused__)), const int16_t *a, vuint16m2_t idx, size_t vl)
{
  vint16m2x4_t ret = __riscv_vloxseg4ei16_v_i16m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsoxseg4ei16_v_i16m2(int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, size_t vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei16_v_i16m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg4ei16_v_i16m2_m(vbool8_t mask, int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, size_t vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei16_v_i16m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg4ei32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *a, vuint32m1_t idx, size_t vl)
{
  vint32m1x4_t ret = __riscv_vloxseg4ei32_v_i32m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vloxseg4ei32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, size_t vl)
{
  vint32m1x4_t ret = __riscv_vloxseg4ei32_v_i32m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsoxseg4ei32_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, size_t vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei32_v_i32m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg4ei32_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, size_t vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei32_v_i32m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg4ei32_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *a, vuint32m2_t idx, size_t vl)
{
  vint32m2x4_t ret = __riscv_vloxseg4ei32_v_i32m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vloxseg4ei32_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), vint32m2_t maskedoff3 __attribute__((__unused__)), const int32_t *a, vuint32m2_t idx, size_t vl)
{
  vint32m2x4_t ret = __riscv_vloxseg4ei32_v_i32m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsoxseg4ei32_v_i32m2(int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, size_t vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei32_v_i32m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg4ei32_v_i32m2_m(vbool16_t mask, int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, size_t vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei32_v_i32m2x4_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg4ei64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, const int64_t *a, vuint64m1_t idx, size_t vl)
{
  vint64m1x4_t ret = __riscv_vloxseg4ei64_v_i64m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg4ei64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, size_t vl)
{
  vint64m1x4_t ret = __riscv_vloxseg4ei64_v_i64m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg4ei64_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, size_t vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei64_v_i64m1x4(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg4ei64_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, size_t vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei64_v_i64m1x4_m(mask, a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg4ei64_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, const int64_t *a, vuint64m2_t idx, size_t vl)
{
  vint64m2x4_t ret = __riscv_vloxseg4ei64_v_i64m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg4ei64_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), vint64m2_t maskedoff3 __attribute__((__unused__)), const int64_t *a, vuint64m2_t idx, size_t vl)
{
  vint64m2x4_t ret = __riscv_vloxseg4ei64_v_i64m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg4ei64_v_i64m2(int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, size_t vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei64_v_i64m2x4(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg4ei64_v_i64m2_m(vbool32_t mask, int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, size_t vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei64_v_i64m2x4_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg4ei8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, const uint8_t *a, vuint8m1_t idx, size_t vl)
{
  vuint8m1x4_t ret = __riscv_vloxseg4ei8_v_u8m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x4_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x4_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x4_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x4_u8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vloxseg4ei8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), const uint8_t *a, vuint8m1_t idx, size_t vl)
{
  vuint8m1x4_t ret = __riscv_vloxseg4ei8_v_u8m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x4_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x4_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x4_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x4_u8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsoxseg4ei8_v_u8m1(uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, size_t vl)
{
  vuint8m1x4_t ret = __riscv_vcreate_v_u8m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei8_v_u8m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg4ei8_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, size_t vl)
{
  vuint8m1x4_t ret = __riscv_vcreate_v_u8m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei8_v_u8m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg4ei8_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t *v3, const uint8_t *a, vuint8m2_t idx, size_t vl)
{
  vuint8m2x4_t ret = __riscv_vloxseg4ei8_v_u8m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_u8m2x4_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x4_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x4_u8m2(ret, 2);
  *v3 = __riscv_vget_v_u8m2x4_u8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vloxseg4ei8_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t *v3, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), vuint8m2_t maskedoff2 __attribute__((__unused__)), vuint8m2_t maskedoff3 __attribute__((__unused__)), const uint8_t *a, vuint8m2_t idx, size_t vl)
{
  vuint8m2x4_t ret = __riscv_vloxseg4ei8_v_u8m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m2x4_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x4_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x4_u8m2(ret, 2);
  *v3 = __riscv_vget_v_u8m2x4_u8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsoxseg4ei8_v_u8m2(uint8_t *a, vuint8m2_t idx, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, size_t vl)
{
  vuint8m2x4_t ret = __riscv_vcreate_v_u8m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei8_v_u8m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg4ei8_v_u8m2_m(vbool4_t mask, uint8_t *a, vuint8m2_t idx, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, size_t vl)
{
  vuint8m2x4_t ret = __riscv_vcreate_v_u8m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei8_v_u8m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg4ei16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, const uint16_t *a, vuint16m1_t idx, size_t vl)
{
  vuint16m1x4_t ret = __riscv_vloxseg4ei16_v_u16m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vloxseg4ei16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, size_t vl)
{
  vuint16m1x4_t ret = __riscv_vloxseg4ei16_v_u16m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsoxseg4ei16_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, size_t vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei16_v_u16m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg4ei16_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, size_t vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei16_v_u16m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg4ei16_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, const uint16_t *a, vuint16m2_t idx, size_t vl)
{
  vuint16m2x4_t ret = __riscv_vloxseg4ei16_v_u16m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vloxseg4ei16_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), vuint16m2_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, vuint16m2_t idx, size_t vl)
{
  vuint16m2x4_t ret = __riscv_vloxseg4ei16_v_u16m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsoxseg4ei16_v_u16m2(uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, size_t vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei16_v_u16m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg4ei16_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, size_t vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei16_v_u16m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg4ei32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *a, vuint32m1_t idx, size_t vl)
{
  vuint32m1x4_t ret = __riscv_vloxseg4ei32_v_u32m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vloxseg4ei32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, size_t vl)
{
  vuint32m1x4_t ret = __riscv_vloxseg4ei32_v_u32m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsoxseg4ei32_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, size_t vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei32_v_u32m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg4ei32_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, size_t vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei32_v_u32m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg4ei32_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *a, vuint32m2_t idx, size_t vl)
{
  vuint32m2x4_t ret = __riscv_vloxseg4ei32_v_u32m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vloxseg4ei32_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), vuint32m2_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, vuint32m2_t idx, size_t vl)
{
  vuint32m2x4_t ret = __riscv_vloxseg4ei32_v_u32m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsoxseg4ei32_v_u32m2(uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, size_t vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei32_v_u32m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg4ei32_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, size_t vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei32_v_u32m2x4_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg4ei64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, const uint64_t *a, vuint64m1_t idx, size_t vl)
{
  vuint64m1x4_t ret = __riscv_vloxseg4ei64_v_u64m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg4ei64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, size_t vl)
{
  vuint64m1x4_t ret = __riscv_vloxseg4ei64_v_u64m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg4ei64_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, size_t vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei64_v_u64m1x4(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg4ei64_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, size_t vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei64_v_u64m1x4_m(mask, a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg4ei64_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, const uint64_t *a, vuint64m2_t idx, size_t vl)
{
  vuint64m2x4_t ret = __riscv_vloxseg4ei64_v_u64m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg4ei64_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), vuint64m2_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, vuint64m2_t idx, size_t vl)
{
  vuint64m2x4_t ret = __riscv_vloxseg4ei64_v_u64m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg4ei64_v_u64m2(uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, size_t vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei64_v_u64m2x4(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg4ei64_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, size_t vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei64_v_u64m2x4_m(mask, a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg4ei16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, const float16_t *a, vuint16m1_t idx, size_t vl)
{
  vfloat16m1x4_t ret = __riscv_vloxseg4ei16_v_f16m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_f16m1x4_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x4_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x4_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x4_f16m1(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg4ei16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), const float16_t *a, vuint16m1_t idx, size_t vl)
{
  vfloat16m1x4_t ret = __riscv_vloxseg4ei16_v_f16m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f16m1x4_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x4_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x4_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x4_f16m1(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg4ei16_v_f16m1(float16_t *a, vuint16m1_t idx, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, size_t vl)
{
  vfloat16m1x4_t ret = __riscv_vcreate_v_f16m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei16_v_f16m1x4(a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg4ei16_v_f16m1_m(vbool16_t mask, float16_t *a, vuint16m1_t idx, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, size_t vl)
{
  vfloat16m1x4_t ret = __riscv_vcreate_v_f16m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei16_v_f16m1x4_m(mask, a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg4ei16_v_f16m2(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t *v3, const float16_t *a, vuint16m2_t idx, size_t vl)
{
  vfloat16m2x4_t ret = __riscv_vloxseg4ei16_v_f16m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_f16m2x4_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x4_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x4_f16m2(ret, 2);
  *v3 = __riscv_vget_v_f16m2x4_f16m2(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg4ei16_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t *v3, vbool8_t mask, vfloat16m2_t maskedoff0 __attribute__((__unused__)), vfloat16m2_t maskedoff1 __attribute__((__unused__)), vfloat16m2_t maskedoff2 __attribute__((__unused__)), vfloat16m2_t maskedoff3 __attribute__((__unused__)), const float16_t *a, vuint16m2_t idx, size_t vl)
{
  vfloat16m2x4_t ret = __riscv_vloxseg4ei16_v_f16m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f16m2x4_f16m2(ret, 0);
  *v1 = __riscv_vget_v_f16m2x4_f16m2(ret, 1);
  *v2 = __riscv_vget_v_f16m2x4_f16m2(ret, 2);
  *v3 = __riscv_vget_v_f16m2x4_f16m2(ret, 3);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg4ei16_v_f16m2(float16_t *a, vuint16m2_t idx, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, vfloat16m2_t v3, size_t vl)
{
  vfloat16m2x4_t ret = __riscv_vcreate_v_f16m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei16_v_f16m2x4(a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg4ei16_v_f16m2_m(vbool8_t mask, float16_t *a, vuint16m2_t idx, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, vfloat16m2_t v3, size_t vl)
{
  vfloat16m2x4_t ret = __riscv_vcreate_v_f16m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei16_v_f16m2x4_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg4ei32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, const float32_t *a, vuint32m1_t idx, size_t vl)
{
  vfloat32m1x4_t ret = __riscv_vloxseg4ei32_v_f32m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_f32m1x4_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x4_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x4_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x4_f32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vloxseg4ei32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), const float32_t *a, vuint32m1_t idx, size_t vl)
{
  vfloat32m1x4_t ret = __riscv_vloxseg4ei32_v_f32m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f32m1x4_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x4_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x4_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x4_f32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsoxseg4ei32_v_f32m1(float32_t *a, vuint32m1_t idx, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, size_t vl)
{
  vfloat32m1x4_t ret = __riscv_vcreate_v_f32m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei32_v_f32m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg4ei32_v_f32m1_m(vbool32_t mask, float32_t *a, vuint32m1_t idx, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, size_t vl)
{
  vfloat32m1x4_t ret = __riscv_vcreate_v_f32m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei32_v_f32m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg4ei32_v_f32m2(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, const float32_t *a, vuint32m2_t idx, size_t vl)
{
  vfloat32m2x4_t ret = __riscv_vloxseg4ei32_v_f32m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_f32m2x4_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x4_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x4_f32m2(ret, 2);
  *v3 = __riscv_vget_v_f32m2x4_f32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vloxseg4ei32_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vbool16_t mask, vfloat32m2_t maskedoff0 __attribute__((__unused__)), vfloat32m2_t maskedoff1 __attribute__((__unused__)), vfloat32m2_t maskedoff2 __attribute__((__unused__)), vfloat32m2_t maskedoff3 __attribute__((__unused__)), const float32_t *a, vuint32m2_t idx, size_t vl)
{
  vfloat32m2x4_t ret = __riscv_vloxseg4ei32_v_f32m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f32m2x4_f32m2(ret, 0);
  *v1 = __riscv_vget_v_f32m2x4_f32m2(ret, 1);
  *v2 = __riscv_vget_v_f32m2x4_f32m2(ret, 2);
  *v3 = __riscv_vget_v_f32m2x4_f32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsoxseg4ei32_v_f32m2(float32_t *a, vuint32m2_t idx, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3, size_t vl)
{
  vfloat32m2x4_t ret = __riscv_vcreate_v_f32m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei32_v_f32m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg4ei32_v_f32m2_m(vbool16_t mask, float32_t *a, vuint32m2_t idx, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3, size_t vl)
{
  vfloat32m2x4_t ret = __riscv_vcreate_v_f32m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei32_v_f32m2x4_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg4ei64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, const float64_t *a, vuint64m1_t idx, size_t vl)
{
  vfloat64m1x4_t ret = __riscv_vloxseg4ei64_v_f64m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_f64m1x4_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x4_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x4_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x4_f64m1(ret, 3);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg4ei64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), const float64_t *a, vuint64m1_t idx, size_t vl)
{
  vfloat64m1x4_t ret = __riscv_vloxseg4ei64_v_f64m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f64m1x4_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x4_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x4_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x4_f64m1(ret, 3);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg4ei64_v_f64m1(float64_t *a, vuint64m1_t idx, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, size_t vl)
{
  vfloat64m1x4_t ret = __riscv_vcreate_v_f64m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei64_v_f64m1x4(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg4ei64_v_f64m1_m(vbool64_t mask, float64_t *a, vuint64m1_t idx, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, size_t vl)
{
  vfloat64m1x4_t ret = __riscv_vcreate_v_f64m1x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei64_v_f64m1x4_m(mask, a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg4ei64_v_f64m2(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t *v3, const float64_t *a, vuint64m2_t idx, size_t vl)
{
  vfloat64m2x4_t ret = __riscv_vloxseg4ei64_v_f64m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_f64m2x4_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x4_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x4_f64m2(ret, 2);
  *v3 = __riscv_vget_v_f64m2x4_f64m2(ret, 3);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg4ei64_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t *v3, vbool32_t mask, vfloat64m2_t maskedoff0 __attribute__((__unused__)), vfloat64m2_t maskedoff1 __attribute__((__unused__)), vfloat64m2_t maskedoff2 __attribute__((__unused__)), vfloat64m2_t maskedoff3 __attribute__((__unused__)), const float64_t *a, vuint64m2_t idx, size_t vl)
{
  vfloat64m2x4_t ret = __riscv_vloxseg4ei64_v_f64m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f64m2x4_f64m2(ret, 0);
  *v1 = __riscv_vget_v_f64m2x4_f64m2(ret, 1);
  *v2 = __riscv_vget_v_f64m2x4_f64m2(ret, 2);
  *v3 = __riscv_vget_v_f64m2x4_f64m2(ret, 3);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg4ei64_v_f64m2(float64_t *a, vuint64m2_t idx, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3, size_t vl)
{
  vfloat64m2x4_t ret = __riscv_vcreate_v_f64m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei64_v_f64m2x4(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg4ei64_v_f64m2_m(vbool32_t mask, float64_t *a, vuint64m2_t idx, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3, size_t vl)
{
  vfloat64m2x4_t ret = __riscv_vcreate_v_f64m2x4(v0, v1, v2, v3);
  __riscv_vsoxseg4ei64_v_f64m2x4_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg5ei8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, const int8_t *a, vuint8m1_t idx, size_t vl)
{
  vint8m1x5_t ret = __riscv_vloxseg5ei8_v_i8m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x5_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x5_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x5_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x5_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x5_i8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vloxseg5ei8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), const int8_t *a, vuint8m1_t idx, size_t vl)
{
  vint8m1x5_t ret = __riscv_vloxseg5ei8_v_i8m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x5_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x5_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x5_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x5_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x5_i8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsoxseg5ei8_v_i8m1(int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, size_t vl)
{
  vint8m1x5_t ret = __riscv_vcreate_v_i8m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei8_v_i8m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg5ei8_v_i8m1_m(vbool8_t mask, int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, size_t vl)
{
  vint8m1x5_t ret = __riscv_vcreate_v_i8m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei8_v_i8m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg5ei16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, const int16_t *a, vuint16m1_t idx, size_t vl)
{
  vint16m1x5_t ret = __riscv_vloxseg5ei16_v_i16m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vloxseg5ei16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, size_t vl)
{
  vint16m1x5_t ret = __riscv_vloxseg5ei16_v_i16m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsoxseg5ei16_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, size_t vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei16_v_i16m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg5ei16_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, size_t vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei16_v_i16m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg5ei32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, const int32_t *a, vuint32m1_t idx, size_t vl)
{
  vint32m1x5_t ret = __riscv_vloxseg5ei32_v_i32m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vloxseg5ei32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, size_t vl)
{
  vint32m1x5_t ret = __riscv_vloxseg5ei32_v_i32m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsoxseg5ei32_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, size_t vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei32_v_i32m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg5ei32_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, size_t vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei32_v_i32m1x5_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg5ei64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *a, vuint64m1_t idx, size_t vl)
{
  vint64m1x5_t ret = __riscv_vloxseg5ei64_v_i64m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg5ei64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, size_t vl)
{
  vint64m1x5_t ret = __riscv_vloxseg5ei64_v_i64m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg5ei64_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, size_t vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei64_v_i64m1x5(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg5ei64_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, size_t vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei64_v_i64m1x5_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg5ei8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, const uint8_t *a, vuint8m1_t idx, size_t vl)
{
  vuint8m1x5_t ret = __riscv_vloxseg5ei8_v_u8m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x5_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x5_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x5_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x5_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x5_u8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vloxseg5ei8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), const uint8_t *a, vuint8m1_t idx, size_t vl)
{
  vuint8m1x5_t ret = __riscv_vloxseg5ei8_v_u8m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x5_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x5_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x5_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x5_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x5_u8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsoxseg5ei8_v_u8m1(uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, size_t vl)
{
  vuint8m1x5_t ret = __riscv_vcreate_v_u8m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei8_v_u8m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg5ei8_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, size_t vl)
{
  vuint8m1x5_t ret = __riscv_vcreate_v_u8m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei8_v_u8m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg5ei16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, const uint16_t *a, vuint16m1_t idx, size_t vl)
{
  vuint16m1x5_t ret = __riscv_vloxseg5ei16_v_u16m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vloxseg5ei16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, size_t vl)
{
  vuint16m1x5_t ret = __riscv_vloxseg5ei16_v_u16m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsoxseg5ei16_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, size_t vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei16_v_u16m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg5ei16_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, size_t vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei16_v_u16m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg5ei32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, const uint32_t *a, vuint32m1_t idx, size_t vl)
{
  vuint32m1x5_t ret = __riscv_vloxseg5ei32_v_u32m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vloxseg5ei32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, size_t vl)
{
  vuint32m1x5_t ret = __riscv_vloxseg5ei32_v_u32m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsoxseg5ei32_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, size_t vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei32_v_u32m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg5ei32_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, size_t vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei32_v_u32m1x5_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg5ei64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *a, vuint64m1_t idx, size_t vl)
{
  vuint64m1x5_t ret = __riscv_vloxseg5ei64_v_u64m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg5ei64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, size_t vl)
{
  vuint64m1x5_t ret = __riscv_vloxseg5ei64_v_u64m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg5ei64_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, size_t vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei64_v_u64m1x5(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg5ei64_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, size_t vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei64_v_u64m1x5_m(mask, a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg5ei16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, const float16_t *a, vuint16m1_t idx, size_t vl)
{
  vfloat16m1x5_t ret = __riscv_vloxseg5ei16_v_f16m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_f16m1x5_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x5_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x5_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x5_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x5_f16m1(ret, 4);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg5ei16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), const float16_t *a, vuint16m1_t idx, size_t vl)
{
  vfloat16m1x5_t ret = __riscv_vloxseg5ei16_v_f16m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f16m1x5_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x5_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x5_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x5_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x5_f16m1(ret, 4);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg5ei16_v_f16m1(float16_t *a, vuint16m1_t idx, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, size_t vl)
{
  vfloat16m1x5_t ret = __riscv_vcreate_v_f16m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei16_v_f16m1x5(a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg5ei16_v_f16m1_m(vbool16_t mask, float16_t *a, vuint16m1_t idx, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, size_t vl)
{
  vfloat16m1x5_t ret = __riscv_vcreate_v_f16m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei16_v_f16m1x5_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg5ei32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, const float32_t *a, vuint32m1_t idx, size_t vl)
{
  vfloat32m1x5_t ret = __riscv_vloxseg5ei32_v_f32m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_f32m1x5_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x5_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x5_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x5_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x5_f32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vloxseg5ei32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), const float32_t *a, vuint32m1_t idx, size_t vl)
{
  vfloat32m1x5_t ret = __riscv_vloxseg5ei32_v_f32m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f32m1x5_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x5_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x5_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x5_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x5_f32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsoxseg5ei32_v_f32m1(float32_t *a, vuint32m1_t idx, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, size_t vl)
{
  vfloat32m1x5_t ret = __riscv_vcreate_v_f32m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei32_v_f32m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg5ei32_v_f32m1_m(vbool32_t mask, float32_t *a, vuint32m1_t idx, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, size_t vl)
{
  vfloat32m1x5_t ret = __riscv_vcreate_v_f32m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei32_v_f32m1x5_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg5ei64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, const float64_t *a, vuint64m1_t idx, size_t vl)
{
  vfloat64m1x5_t ret = __riscv_vloxseg5ei64_v_f64m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_f64m1x5_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x5_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x5_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x5_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x5_f64m1(ret, 4);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg5ei64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), const float64_t *a, vuint64m1_t idx, size_t vl)
{
  vfloat64m1x5_t ret = __riscv_vloxseg5ei64_v_f64m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f64m1x5_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x5_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x5_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x5_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x5_f64m1(ret, 4);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg5ei64_v_f64m1(float64_t *a, vuint64m1_t idx, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, size_t vl)
{
  vfloat64m1x5_t ret = __riscv_vcreate_v_f64m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei64_v_f64m1x5(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg5ei64_v_f64m1_m(vbool64_t mask, float64_t *a, vuint64m1_t idx, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, size_t vl)
{
  vfloat64m1x5_t ret = __riscv_vcreate_v_f64m1x5(v0, v1, v2, v3, v4);
  __riscv_vsoxseg5ei64_v_f64m1x5_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg6ei8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, const int8_t *a, vuint8m1_t idx, size_t vl)
{
  vint8m1x6_t ret = __riscv_vloxseg6ei8_v_i8m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x6_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x6_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x6_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x6_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x6_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x6_i8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vloxseg6ei8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), const int8_t *a, vuint8m1_t idx, size_t vl)
{
  vint8m1x6_t ret = __riscv_vloxseg6ei8_v_i8m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x6_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x6_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x6_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x6_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x6_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x6_i8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsoxseg6ei8_v_i8m1(int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, size_t vl)
{
  vint8m1x6_t ret = __riscv_vcreate_v_i8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei8_v_i8m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg6ei8_v_i8m1_m(vbool8_t mask, int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, size_t vl)
{
  vint8m1x6_t ret = __riscv_vcreate_v_i8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei8_v_i8m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg6ei16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, const int16_t *a, vuint16m1_t idx, size_t vl)
{
  vint16m1x6_t ret = __riscv_vloxseg6ei16_v_i16m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vloxseg6ei16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, size_t vl)
{
  vint16m1x6_t ret = __riscv_vloxseg6ei16_v_i16m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsoxseg6ei16_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, size_t vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei16_v_i16m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg6ei16_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, size_t vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei16_v_i16m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg6ei32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *a, vuint32m1_t idx, size_t vl)
{
  vint32m1x6_t ret = __riscv_vloxseg6ei32_v_i32m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vloxseg6ei32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, size_t vl)
{
  vint32m1x6_t ret = __riscv_vloxseg6ei32_v_i32m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsoxseg6ei32_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, size_t vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei32_v_i32m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg6ei32_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, size_t vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei32_v_i32m1x6_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg6ei64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *a, vuint64m1_t idx, size_t vl)
{
  vint64m1x6_t ret = __riscv_vloxseg6ei64_v_i64m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg6ei64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, size_t vl)
{
  vint64m1x6_t ret = __riscv_vloxseg6ei64_v_i64m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg6ei64_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, size_t vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei64_v_i64m1x6(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg6ei64_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, size_t vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei64_v_i64m1x6_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg6ei8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, const uint8_t *a, vuint8m1_t idx, size_t vl)
{
  vuint8m1x6_t ret = __riscv_vloxseg6ei8_v_u8m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x6_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x6_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x6_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x6_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x6_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x6_u8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vloxseg6ei8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), const uint8_t *a, vuint8m1_t idx, size_t vl)
{
  vuint8m1x6_t ret = __riscv_vloxseg6ei8_v_u8m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x6_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x6_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x6_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x6_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x6_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x6_u8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsoxseg6ei8_v_u8m1(uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, size_t vl)
{
  vuint8m1x6_t ret = __riscv_vcreate_v_u8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei8_v_u8m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg6ei8_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, size_t vl)
{
  vuint8m1x6_t ret = __riscv_vcreate_v_u8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei8_v_u8m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg6ei16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, const uint16_t *a, vuint16m1_t idx, size_t vl)
{
  vuint16m1x6_t ret = __riscv_vloxseg6ei16_v_u16m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vloxseg6ei16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, size_t vl)
{
  vuint16m1x6_t ret = __riscv_vloxseg6ei16_v_u16m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsoxseg6ei16_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, size_t vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei16_v_u16m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg6ei16_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, size_t vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei16_v_u16m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg6ei32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *a, vuint32m1_t idx, size_t vl)
{
  vuint32m1x6_t ret = __riscv_vloxseg6ei32_v_u32m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vloxseg6ei32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, size_t vl)
{
  vuint32m1x6_t ret = __riscv_vloxseg6ei32_v_u32m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsoxseg6ei32_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, size_t vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei32_v_u32m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg6ei32_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, size_t vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei32_v_u32m1x6_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg6ei64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *a, vuint64m1_t idx, size_t vl)
{
  vuint64m1x6_t ret = __riscv_vloxseg6ei64_v_u64m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg6ei64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, size_t vl)
{
  vuint64m1x6_t ret = __riscv_vloxseg6ei64_v_u64m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg6ei64_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, size_t vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei64_v_u64m1x6(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg6ei64_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, size_t vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei64_v_u64m1x6_m(mask, a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg6ei16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, const float16_t *a, vuint16m1_t idx, size_t vl)
{
  vfloat16m1x6_t ret = __riscv_vloxseg6ei16_v_f16m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_f16m1x6_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x6_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x6_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x6_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x6_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x6_f16m1(ret, 5);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg6ei16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), vfloat16m1_t maskedoff5 __attribute__((__unused__)), const float16_t *a, vuint16m1_t idx, size_t vl)
{
  vfloat16m1x6_t ret = __riscv_vloxseg6ei16_v_f16m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f16m1x6_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x6_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x6_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x6_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x6_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x6_f16m1(ret, 5);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg6ei16_v_f16m1(float16_t *a, vuint16m1_t idx, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, size_t vl)
{
  vfloat16m1x6_t ret = __riscv_vcreate_v_f16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei16_v_f16m1x6(a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg6ei16_v_f16m1_m(vbool16_t mask, float16_t *a, vuint16m1_t idx, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, size_t vl)
{
  vfloat16m1x6_t ret = __riscv_vcreate_v_f16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei16_v_f16m1x6_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg6ei32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, const float32_t *a, vuint32m1_t idx, size_t vl)
{
  vfloat32m1x6_t ret = __riscv_vloxseg6ei32_v_f32m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_f32m1x6_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x6_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x6_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x6_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x6_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x6_f32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vloxseg6ei32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), vfloat32m1_t maskedoff5 __attribute__((__unused__)), const float32_t *a, vuint32m1_t idx, size_t vl)
{
  vfloat32m1x6_t ret = __riscv_vloxseg6ei32_v_f32m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f32m1x6_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x6_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x6_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x6_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x6_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x6_f32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsoxseg6ei32_v_f32m1(float32_t *a, vuint32m1_t idx, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, size_t vl)
{
  vfloat32m1x6_t ret = __riscv_vcreate_v_f32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei32_v_f32m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg6ei32_v_f32m1_m(vbool32_t mask, float32_t *a, vuint32m1_t idx, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, size_t vl)
{
  vfloat32m1x6_t ret = __riscv_vcreate_v_f32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei32_v_f32m1x6_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg6ei64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, const float64_t *a, vuint64m1_t idx, size_t vl)
{
  vfloat64m1x6_t ret = __riscv_vloxseg6ei64_v_f64m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_f64m1x6_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x6_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x6_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x6_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x6_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x6_f64m1(ret, 5);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg6ei64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), vfloat64m1_t maskedoff5 __attribute__((__unused__)), const float64_t *a, vuint64m1_t idx, size_t vl)
{
  vfloat64m1x6_t ret = __riscv_vloxseg6ei64_v_f64m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f64m1x6_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x6_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x6_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x6_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x6_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x6_f64m1(ret, 5);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg6ei64_v_f64m1(float64_t *a, vuint64m1_t idx, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, size_t vl)
{
  vfloat64m1x6_t ret = __riscv_vcreate_v_f64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei64_v_f64m1x6(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg6ei64_v_f64m1_m(vbool64_t mask, float64_t *a, vuint64m1_t idx, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, size_t vl)
{
  vfloat64m1x6_t ret = __riscv_vcreate_v_f64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_vsoxseg6ei64_v_f64m1x6_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg7ei8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, const int8_t *a, vuint8m1_t idx, size_t vl)
{
  vint8m1x7_t ret = __riscv_vloxseg7ei8_v_i8m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x7_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x7_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x7_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x7_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x7_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x7_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x7_i8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vloxseg7ei8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), vint8m1_t maskedoff6 __attribute__((__unused__)), const int8_t *a, vuint8m1_t idx, size_t vl)
{
  vint8m1x7_t ret = __riscv_vloxseg7ei8_v_i8m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x7_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x7_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x7_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x7_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x7_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x7_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x7_i8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsoxseg7ei8_v_i8m1(int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, size_t vl)
{
  vint8m1x7_t ret = __riscv_vcreate_v_i8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei8_v_i8m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg7ei8_v_i8m1_m(vbool8_t mask, int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, size_t vl)
{
  vint8m1x7_t ret = __riscv_vcreate_v_i8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei8_v_i8m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg7ei16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, const int16_t *a, vuint16m1_t idx, size_t vl)
{
  vint16m1x7_t ret = __riscv_vloxseg7ei16_v_i16m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vloxseg7ei16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, size_t vl)
{
  vint16m1x7_t ret = __riscv_vloxseg7ei16_v_i16m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsoxseg7ei16_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, size_t vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei16_v_i16m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg7ei16_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, size_t vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei16_v_i16m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg7ei32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, const int32_t *a, vuint32m1_t idx, size_t vl)
{
  vint32m1x7_t ret = __riscv_vloxseg7ei32_v_i32m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vloxseg7ei32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, size_t vl)
{
  vint32m1x7_t ret = __riscv_vloxseg7ei32_v_i32m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsoxseg7ei32_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, size_t vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei32_v_i32m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg7ei32_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, size_t vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei32_v_i32m1x7_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg7ei64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *a, vuint64m1_t idx, size_t vl)
{
  vint64m1x7_t ret = __riscv_vloxseg7ei64_v_i64m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg7ei64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, size_t vl)
{
  vint64m1x7_t ret = __riscv_vloxseg7ei64_v_i64m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg7ei64_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, size_t vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei64_v_i64m1x7(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg7ei64_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, size_t vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei64_v_i64m1x7_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg7ei8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, const uint8_t *a, vuint8m1_t idx, size_t vl)
{
  vuint8m1x7_t ret = __riscv_vloxseg7ei8_v_u8m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x7_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x7_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x7_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x7_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x7_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x7_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x7_u8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vloxseg7ei8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), vuint8m1_t maskedoff6 __attribute__((__unused__)), const uint8_t *a, vuint8m1_t idx, size_t vl)
{
  vuint8m1x7_t ret = __riscv_vloxseg7ei8_v_u8m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x7_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x7_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x7_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x7_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x7_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x7_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x7_u8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsoxseg7ei8_v_u8m1(uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, size_t vl)
{
  vuint8m1x7_t ret = __riscv_vcreate_v_u8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei8_v_u8m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg7ei8_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, size_t vl)
{
  vuint8m1x7_t ret = __riscv_vcreate_v_u8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei8_v_u8m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg7ei16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, const uint16_t *a, vuint16m1_t idx, size_t vl)
{
  vuint16m1x7_t ret = __riscv_vloxseg7ei16_v_u16m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vloxseg7ei16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, size_t vl)
{
  vuint16m1x7_t ret = __riscv_vloxseg7ei16_v_u16m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsoxseg7ei16_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, size_t vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei16_v_u16m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg7ei16_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, size_t vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei16_v_u16m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg7ei32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, const uint32_t *a, vuint32m1_t idx, size_t vl)
{
  vuint32m1x7_t ret = __riscv_vloxseg7ei32_v_u32m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vloxseg7ei32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, size_t vl)
{
  vuint32m1x7_t ret = __riscv_vloxseg7ei32_v_u32m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsoxseg7ei32_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, size_t vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei32_v_u32m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg7ei32_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, size_t vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei32_v_u32m1x7_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg7ei64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *a, vuint64m1_t idx, size_t vl)
{
  vuint64m1x7_t ret = __riscv_vloxseg7ei64_v_u64m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg7ei64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, size_t vl)
{
  vuint64m1x7_t ret = __riscv_vloxseg7ei64_v_u64m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg7ei64_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, size_t vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei64_v_u64m1x7(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg7ei64_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, size_t vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei64_v_u64m1x7_m(mask, a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg7ei16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, const float16_t *a, vuint16m1_t idx, size_t vl)
{
  vfloat16m1x7_t ret = __riscv_vloxseg7ei16_v_f16m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_f16m1x7_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x7_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x7_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x7_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x7_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x7_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x7_f16m1(ret, 6);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg7ei16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), vfloat16m1_t maskedoff5 __attribute__((__unused__)), vfloat16m1_t maskedoff6 __attribute__((__unused__)), const float16_t *a, vuint16m1_t idx, size_t vl)
{
  vfloat16m1x7_t ret = __riscv_vloxseg7ei16_v_f16m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f16m1x7_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x7_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x7_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x7_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x7_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x7_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x7_f16m1(ret, 6);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg7ei16_v_f16m1(float16_t *a, vuint16m1_t idx, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, size_t vl)
{
  vfloat16m1x7_t ret = __riscv_vcreate_v_f16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei16_v_f16m1x7(a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg7ei16_v_f16m1_m(vbool16_t mask, float16_t *a, vuint16m1_t idx, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, size_t vl)
{
  vfloat16m1x7_t ret = __riscv_vcreate_v_f16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei16_v_f16m1x7_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg7ei32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, const float32_t *a, vuint32m1_t idx, size_t vl)
{
  vfloat32m1x7_t ret = __riscv_vloxseg7ei32_v_f32m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_f32m1x7_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x7_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x7_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x7_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x7_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x7_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x7_f32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vloxseg7ei32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), vfloat32m1_t maskedoff5 __attribute__((__unused__)), vfloat32m1_t maskedoff6 __attribute__((__unused__)), const float32_t *a, vuint32m1_t idx, size_t vl)
{
  vfloat32m1x7_t ret = __riscv_vloxseg7ei32_v_f32m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f32m1x7_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x7_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x7_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x7_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x7_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x7_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x7_f32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsoxseg7ei32_v_f32m1(float32_t *a, vuint32m1_t idx, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, size_t vl)
{
  vfloat32m1x7_t ret = __riscv_vcreate_v_f32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei32_v_f32m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg7ei32_v_f32m1_m(vbool32_t mask, float32_t *a, vuint32m1_t idx, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, size_t vl)
{
  vfloat32m1x7_t ret = __riscv_vcreate_v_f32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei32_v_f32m1x7_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg7ei64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, const float64_t *a, vuint64m1_t idx, size_t vl)
{
  vfloat64m1x7_t ret = __riscv_vloxseg7ei64_v_f64m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_f64m1x7_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x7_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x7_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x7_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x7_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x7_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x7_f64m1(ret, 6);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg7ei64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), vfloat64m1_t maskedoff5 __attribute__((__unused__)), vfloat64m1_t maskedoff6 __attribute__((__unused__)), const float64_t *a, vuint64m1_t idx, size_t vl)
{
  vfloat64m1x7_t ret = __riscv_vloxseg7ei64_v_f64m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f64m1x7_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x7_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x7_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x7_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x7_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x7_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x7_f64m1(ret, 6);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg7ei64_v_f64m1(float64_t *a, vuint64m1_t idx, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, size_t vl)
{
  vfloat64m1x7_t ret = __riscv_vcreate_v_f64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei64_v_f64m1x7(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg7ei64_v_f64m1_m(vbool64_t mask, float64_t *a, vuint64m1_t idx, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, size_t vl)
{
  vfloat64m1x7_t ret = __riscv_vcreate_v_f64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_vsoxseg7ei64_v_f64m1x7_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg8ei8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, const int8_t *a, vuint8m1_t idx, size_t vl)
{
  vint8m1x8_t ret = __riscv_vloxseg8ei8_v_i8m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x8_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x8_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x8_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x8_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x8_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x8_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x8_i8m1(ret, 6);
  *v7 = __riscv_vget_v_i8m1x8_i8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vloxseg8ei8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), vint8m1_t maskedoff6 __attribute__((__unused__)), vint8m1_t maskedoff7 __attribute__((__unused__)), const int8_t *a, vuint8m1_t idx, size_t vl)
{
  vint8m1x8_t ret = __riscv_vloxseg8ei8_v_i8m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x8_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x8_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x8_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x8_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x8_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x8_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x8_i8m1(ret, 6);
  *v7 = __riscv_vget_v_i8m1x8_i8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsoxseg8ei8_v_i8m1(int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7, size_t vl)
{
  vint8m1x8_t ret = __riscv_vcreate_v_i8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei8_v_i8m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg8ei8_v_i8m1_m(vbool8_t mask, int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7, size_t vl)
{
  vint8m1x8_t ret = __riscv_vcreate_v_i8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei8_v_i8m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg8ei16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, const int16_t *a, vuint16m1_t idx, size_t vl)
{
  vint16m1x8_t ret = __riscv_vloxseg8ei16_v_i16m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vloxseg8ei16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), vint16m1_t maskedoff7 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, size_t vl)
{
  vint16m1x8_t ret = __riscv_vloxseg8ei16_v_i16m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsoxseg8ei16_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, size_t vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei16_v_i16m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg8ei16_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, size_t vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei16_v_i16m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg8ei32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, const int32_t *a, vuint32m1_t idx, size_t vl)
{
  vint32m1x8_t ret = __riscv_vloxseg8ei32_v_i32m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vloxseg8ei32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), vint32m1_t maskedoff7 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, size_t vl)
{
  vint32m1x8_t ret = __riscv_vloxseg8ei32_v_i32m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsoxseg8ei32_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, size_t vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei32_v_i32m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg8ei32_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, size_t vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei32_v_i32m1x8_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg8ei64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, const int64_t *a, vuint64m1_t idx, size_t vl)
{
  vint64m1x8_t ret = __riscv_vloxseg8ei64_v_i64m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg8ei64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), vint64m1_t maskedoff7 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, size_t vl)
{
  vint64m1x8_t ret = __riscv_vloxseg8ei64_v_i64m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg8ei64_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, size_t vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei64_v_i64m1x8(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg8ei64_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, size_t vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei64_v_i64m1x8_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg8ei8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, const uint8_t *a, vuint8m1_t idx, size_t vl)
{
  vuint8m1x8_t ret = __riscv_vloxseg8ei8_v_u8m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x8_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x8_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x8_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x8_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x8_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x8_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x8_u8m1(ret, 6);
  *v7 = __riscv_vget_v_u8m1x8_u8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vloxseg8ei8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), vuint8m1_t maskedoff6 __attribute__((__unused__)), vuint8m1_t maskedoff7 __attribute__((__unused__)), const uint8_t *a, vuint8m1_t idx, size_t vl)
{
  vuint8m1x8_t ret = __riscv_vloxseg8ei8_v_u8m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x8_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x8_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x8_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x8_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x8_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x8_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x8_u8m1(ret, 6);
  *v7 = __riscv_vget_v_u8m1x8_u8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsoxseg8ei8_v_u8m1(uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, size_t vl)
{
  vuint8m1x8_t ret = __riscv_vcreate_v_u8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei8_v_u8m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg8ei8_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, size_t vl)
{
  vuint8m1x8_t ret = __riscv_vcreate_v_u8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei8_v_u8m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg8ei16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, const uint16_t *a, vuint16m1_t idx, size_t vl)
{
  vuint16m1x8_t ret = __riscv_vloxseg8ei16_v_u16m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vloxseg8ei16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), vuint16m1_t maskedoff7 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, size_t vl)
{
  vuint16m1x8_t ret = __riscv_vloxseg8ei16_v_u16m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsoxseg8ei16_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, size_t vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei16_v_u16m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg8ei16_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, size_t vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei16_v_u16m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vloxseg8ei32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, const uint32_t *a, vuint32m1_t idx, size_t vl)
{
  vuint32m1x8_t ret = __riscv_vloxseg8ei32_v_u32m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vloxseg8ei32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), vuint32m1_t maskedoff7 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, size_t vl)
{
  vuint32m1x8_t ret = __riscv_vloxseg8ei32_v_u32m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsoxseg8ei32_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, size_t vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei32_v_u32m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg8ei32_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, size_t vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei32_v_u32m1x8_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg8ei64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, const uint64_t *a, vuint64m1_t idx, size_t vl)
{
  vuint64m1x8_t ret = __riscv_vloxseg8ei64_v_u64m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg8ei64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), vuint64m1_t maskedoff7 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, size_t vl)
{
  vuint64m1x8_t ret = __riscv_vloxseg8ei64_v_u64m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg8ei64_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, size_t vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei64_v_u64m1x8(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg8ei64_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, size_t vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei64_v_u64m1x8_m(mask, a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg8ei16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vfloat16m1_t *v7, const float16_t *a, vuint16m1_t idx, size_t vl)
{
  vfloat16m1x8_t ret = __riscv_vloxseg8ei16_v_f16m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_f16m1x8_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x8_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x8_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x8_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x8_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x8_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x8_f16m1(ret, 6);
  *v7 = __riscv_vget_v_f16m1x8_f16m1(ret, 7);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vloxseg8ei16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vfloat16m1_t *v7, vbool16_t mask, vfloat16m1_t maskedoff0 __attribute__((__unused__)), vfloat16m1_t maskedoff1 __attribute__((__unused__)), vfloat16m1_t maskedoff2 __attribute__((__unused__)), vfloat16m1_t maskedoff3 __attribute__((__unused__)), vfloat16m1_t maskedoff4 __attribute__((__unused__)), vfloat16m1_t maskedoff5 __attribute__((__unused__)), vfloat16m1_t maskedoff6 __attribute__((__unused__)), vfloat16m1_t maskedoff7 __attribute__((__unused__)), const float16_t *a, vuint16m1_t idx, size_t vl)
{
  vfloat16m1x8_t ret = __riscv_vloxseg8ei16_v_f16m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f16m1x8_f16m1(ret, 0);
  *v1 = __riscv_vget_v_f16m1x8_f16m1(ret, 1);
  *v2 = __riscv_vget_v_f16m1x8_f16m1(ret, 2);
  *v3 = __riscv_vget_v_f16m1x8_f16m1(ret, 3);
  *v4 = __riscv_vget_v_f16m1x8_f16m1(ret, 4);
  *v5 = __riscv_vget_v_f16m1x8_f16m1(ret, 5);
  *v6 = __riscv_vget_v_f16m1x8_f16m1(ret, 6);
  *v7 = __riscv_vget_v_f16m1x8_f16m1(ret, 7);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg8ei16_v_f16m1(float16_t *a, vuint16m1_t idx, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7, size_t vl)
{
  vfloat16m1x8_t ret = __riscv_vcreate_v_f16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei16_v_f16m1x8(a, idx, ret, vl);
}
#endif
#ifdef __riscv_vector_fp16
ATTRIBUTE_PREFIX void vsoxseg8ei16_v_f16m1_m(vbool16_t mask, float16_t *a, vuint16m1_t idx, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7, size_t vl)
{
  vfloat16m1x8_t ret = __riscv_vcreate_v_f16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei16_v_f16m1x8_m(mask, a, idx, ret, vl);
}
#endif
ATTRIBUTE_PREFIX void vloxseg8ei32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, const float32_t *a, vuint32m1_t idx, size_t vl)
{
  vfloat32m1x8_t ret = __riscv_vloxseg8ei32_v_f32m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_f32m1x8_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x8_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x8_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x8_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x8_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x8_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x8_f32m1(ret, 6);
  *v7 = __riscv_vget_v_f32m1x8_f32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vloxseg8ei32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, vbool32_t mask, vfloat32m1_t maskedoff0 __attribute__((__unused__)), vfloat32m1_t maskedoff1 __attribute__((__unused__)), vfloat32m1_t maskedoff2 __attribute__((__unused__)), vfloat32m1_t maskedoff3 __attribute__((__unused__)), vfloat32m1_t maskedoff4 __attribute__((__unused__)), vfloat32m1_t maskedoff5 __attribute__((__unused__)), vfloat32m1_t maskedoff6 __attribute__((__unused__)), vfloat32m1_t maskedoff7 __attribute__((__unused__)), const float32_t *a, vuint32m1_t idx, size_t vl)
{
  vfloat32m1x8_t ret = __riscv_vloxseg8ei32_v_f32m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f32m1x8_f32m1(ret, 0);
  *v1 = __riscv_vget_v_f32m1x8_f32m1(ret, 1);
  *v2 = __riscv_vget_v_f32m1x8_f32m1(ret, 2);
  *v3 = __riscv_vget_v_f32m1x8_f32m1(ret, 3);
  *v4 = __riscv_vget_v_f32m1x8_f32m1(ret, 4);
  *v5 = __riscv_vget_v_f32m1x8_f32m1(ret, 5);
  *v6 = __riscv_vget_v_f32m1x8_f32m1(ret, 6);
  *v7 = __riscv_vget_v_f32m1x8_f32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsoxseg8ei32_v_f32m1(float32_t *a, vuint32m1_t idx, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7, size_t vl)
{
  vfloat32m1x8_t ret = __riscv_vcreate_v_f32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei32_v_f32m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsoxseg8ei32_v_f32m1_m(vbool32_t mask, float32_t *a, vuint32m1_t idx, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7, size_t vl)
{
  vfloat32m1x8_t ret = __riscv_vcreate_v_f32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei32_v_f32m1x8_m(mask, a, idx, ret, vl);
}
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg8ei64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t *v7, const float64_t *a, vuint64m1_t idx, size_t vl)
{
  vfloat64m1x8_t ret = __riscv_vloxseg8ei64_v_f64m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_f64m1x8_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x8_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x8_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x8_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x8_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x8_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x8_f64m1(ret, 6);
  *v7 = __riscv_vget_v_f64m1x8_f64m1(ret, 7);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vloxseg8ei64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t *v7, vbool64_t mask, vfloat64m1_t maskedoff0 __attribute__((__unused__)), vfloat64m1_t maskedoff1 __attribute__((__unused__)), vfloat64m1_t maskedoff2 __attribute__((__unused__)), vfloat64m1_t maskedoff3 __attribute__((__unused__)), vfloat64m1_t maskedoff4 __attribute__((__unused__)), vfloat64m1_t maskedoff5 __attribute__((__unused__)), vfloat64m1_t maskedoff6 __attribute__((__unused__)), vfloat64m1_t maskedoff7 __attribute__((__unused__)), const float64_t *a, vuint64m1_t idx, size_t vl)
{
  vfloat64m1x8_t ret = __riscv_vloxseg8ei64_v_f64m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_f64m1x8_f64m1(ret, 0);
  *v1 = __riscv_vget_v_f64m1x8_f64m1(ret, 1);
  *v2 = __riscv_vget_v_f64m1x8_f64m1(ret, 2);
  *v3 = __riscv_vget_v_f64m1x8_f64m1(ret, 3);
  *v4 = __riscv_vget_v_f64m1x8_f64m1(ret, 4);
  *v5 = __riscv_vget_v_f64m1x8_f64m1(ret, 5);
  *v6 = __riscv_vget_v_f64m1x8_f64m1(ret, 6);
  *v7 = __riscv_vget_v_f64m1x8_f64m1(ret, 7);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg8ei64_v_f64m1(float64_t *a, vuint64m1_t idx, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7, size_t vl)
{
  vfloat64m1x8_t ret = __riscv_vcreate_v_f64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei64_v_f64m1x8(a, idx, ret, vl);
}
#endif
#if (__riscv_xlen == 64)
ATTRIBUTE_PREFIX void vsoxseg8ei64_v_f64m1_m(vbool64_t mask, float64_t *a, vuint64m1_t idx, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7, size_t vl)
{
  vfloat64m1x8_t ret = __riscv_vcreate_v_f64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_vsoxseg8ei64_v_f64m1x8_m(mask, a, idx, ret, vl);
}
#endif
#undef ATTRIBUTE_PREFIX
#endif