#ifndef __RISCV_VECTOR_V0P10_VSSEG_XTHEADVECTOR_H
#define __RISCV_VECTOR_V0P10_VSSEG_XTHEADVECTOR_H

#define ATTRIBUTE_PREFIX __extension__ extern __inline __attribute__ ((__always_inline__, __gnu_inline__, __artificial__))

ATTRIBUTE_PREFIX void vlseg2b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, const int8_t *a, word_type vl)
{
  vint8m1x2_t ret = __riscv_th_vlseg2b_v_i8m1x2(a, vl);
  *v0 = __riscv_vget_v_i8m1x2_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x2_i8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), const int8_t *a, word_type vl)
{
  vint8m1x2_t ret = __riscv_th_vlseg2b_v_i8m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m1x2_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x2_i8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m1x2_t ret = __riscv_th_vlsseg2b_v_i8m1x2(a, s, vl);
  *v0 = __riscv_vget_v_i8m1x2_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x2_i8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m1x2_t ret = __riscv_th_vlsseg2b_v_i8m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m1x2_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x2_i8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, const uint8_t *a, word_type vl)
{
  vuint8m1x2_t ret = __riscv_th_vlseg2bu_v_u8m1x2(a, vl);
  *v0 = __riscv_vget_v_u8m1x2_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x2_u8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, word_type vl)
{
  vuint8m1x2_t ret = __riscv_th_vlseg2bu_v_u8m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m1x2_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x2_u8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m1x2_t ret = __riscv_th_vlsseg2bu_v_u8m1x2(a, s, vl);
  *v0 = __riscv_vget_v_u8m1x2_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x2_u8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m1x2_t ret = __riscv_th_vlsseg2bu_v_u8m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m1x2_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x2_u8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u8m1(uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, word_type vl)
{
  vuint8m1x2_t ret = __riscv_vcreate_v_u8m1x2(v0, v1);
  __riscv_th_vsseg2b_v_u8m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, word_type vl)
{
  vuint8m1x2_t ret = __riscv_vcreate_v_u8m1x2(v0, v1);
  __riscv_th_vsseg2b_v_u8m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i8m1(int8_t *a, vint8m1_t v0, vint8m1_t v1, word_type vl)
{
  vint8m1x2_t ret = __riscv_vcreate_v_i8m1x2(v0, v1);
  __riscv_th_vsseg2b_v_i8m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i8m1_m(vbool8_t mask, int8_t *a, vint8m1_t v0, vint8m1_t v1, word_type vl)
{
  vint8m1x2_t ret = __riscv_vcreate_v_i8m1x2(v0, v1);
  __riscv_th_vsseg2b_v_i8m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u8m1(uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, word_type vl)
{
  vuint8m1x2_t ret = __riscv_vcreate_v_u8m1x2(v0, v1);
  __riscv_th_vssseg2b_v_u8m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u8m1_m(vbool8_t mask, uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, word_type vl)
{
  vuint8m1x2_t ret = __riscv_vcreate_v_u8m1x2(v0, v1);
  __riscv_th_vssseg2b_v_u8m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i8m1(int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, word_type vl)
{
  vint8m1x2_t ret = __riscv_vcreate_v_i8m1x2(v0, v1);
  __riscv_th_vssseg2b_v_i8m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i8m1_m(vbool8_t mask, int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, word_type vl)
{
  vint8m1x2_t ret = __riscv_vcreate_v_i8m1x2(v0, v1);
  __riscv_th_vssseg2b_v_i8m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, const int8_t *a, vuint8m1_t idx, word_type vl)
{
  vint8m1x2_t ret = __riscv_th_vlxseg2b_v_i8m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x2_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x2_i8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), const int8_t *a, vuint8m1_t idx, word_type vl)
{
  vint8m1x2_t ret = __riscv_th_vlxseg2b_v_i8m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x2_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x2_i8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, const uint8_t *a, vuint8m1_t idx, word_type vl)
{
  vuint8m1x2_t ret = __riscv_th_vlxseg2bu_v_u8m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x2_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x2_u8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, vuint8m1_t idx, word_type vl)
{
  vuint8m1x2_t ret = __riscv_th_vlxseg2bu_v_u8m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x2_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x2_u8m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u8m1(uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, word_type vl)
{
  vuint8m1x2_t ret = __riscv_vcreate_v_u8m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_u8m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i8m1(int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, word_type vl)
{
  vint8m1x2_t ret = __riscv_vcreate_v_i8m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_i8m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, word_type vl)
{
  vuint8m1x2_t ret = __riscv_vcreate_v_u8m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_u8m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i8m1_m(vbool8_t mask, int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, word_type vl)
{
  vint8m1x2_t ret = __riscv_vcreate_v_i8m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_i8m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, const int8_t *a, word_type vl)
{
  vint8m2x2_t ret = __riscv_th_vlseg2b_v_i8m2x2(a, vl);
  *v0 = __riscv_vget_v_i8m2x2_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x2_i8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), const int8_t *a, word_type vl)
{
  vint8m2x2_t ret = __riscv_th_vlseg2b_v_i8m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m2x2_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x2_i8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m2x2_t ret = __riscv_th_vlsseg2b_v_i8m2x2(a, s, vl);
  *v0 = __riscv_vget_v_i8m2x2_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x2_i8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m2x2_t ret = __riscv_th_vlsseg2b_v_i8m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m2x2_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x2_i8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, const uint8_t *a, word_type vl)
{
  vuint8m2x2_t ret = __riscv_th_vlseg2bu_v_u8m2x2(a, vl);
  *v0 = __riscv_vget_v_u8m2x2_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x2_u8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, word_type vl)
{
  vuint8m2x2_t ret = __riscv_th_vlseg2bu_v_u8m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m2x2_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x2_u8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m2x2_t ret = __riscv_th_vlsseg2bu_v_u8m2x2(a, s, vl);
  *v0 = __riscv_vget_v_u8m2x2_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x2_u8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m2x2_t ret = __riscv_th_vlsseg2bu_v_u8m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m2x2_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x2_u8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u8m2(uint8_t *a, vuint8m2_t v0, vuint8m2_t v1, word_type vl)
{
  vuint8m2x2_t ret = __riscv_vcreate_v_u8m2x2(v0, v1);
  __riscv_th_vsseg2b_v_u8m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u8m2_m(vbool4_t mask, uint8_t *a, vuint8m2_t v0, vuint8m2_t v1, word_type vl)
{
  vuint8m2x2_t ret = __riscv_vcreate_v_u8m2x2(v0, v1);
  __riscv_th_vsseg2b_v_u8m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i8m2(int8_t *a, vint8m2_t v0, vint8m2_t v1, word_type vl)
{
  vint8m2x2_t ret = __riscv_vcreate_v_i8m2x2(v0, v1);
  __riscv_th_vsseg2b_v_i8m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i8m2_m(vbool4_t mask, int8_t *a, vint8m2_t v0, vint8m2_t v1, word_type vl)
{
  vint8m2x2_t ret = __riscv_vcreate_v_i8m2x2(v0, v1);
  __riscv_th_vsseg2b_v_i8m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u8m2(uint8_t *a, ptrdiff_t s, vuint8m2_t v0, vuint8m2_t v1, word_type vl)
{
  vuint8m2x2_t ret = __riscv_vcreate_v_u8m2x2(v0, v1);
  __riscv_th_vssseg2b_v_u8m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u8m2_m(vbool4_t mask, uint8_t *a, ptrdiff_t s, vuint8m2_t v0, vuint8m2_t v1, word_type vl)
{
  vuint8m2x2_t ret = __riscv_vcreate_v_u8m2x2(v0, v1);
  __riscv_th_vssseg2b_v_u8m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i8m2(int8_t *a, ptrdiff_t s, vint8m2_t v0, vint8m2_t v1, word_type vl)
{
  vint8m2x2_t ret = __riscv_vcreate_v_i8m2x2(v0, v1);
  __riscv_th_vssseg2b_v_i8m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i8m2_m(vbool4_t mask, int8_t *a, ptrdiff_t s, vint8m2_t v0, vint8m2_t v1, word_type vl)
{
  vint8m2x2_t ret = __riscv_vcreate_v_i8m2x2(v0, v1);
  __riscv_th_vssseg2b_v_i8m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, const int8_t *a, vuint8m2_t idx, word_type vl)
{
  vint8m2x2_t ret = __riscv_th_vlxseg2b_v_i8m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_i8m2x2_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x2_i8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), const int8_t *a, vuint8m2_t idx, word_type vl)
{
  vint8m2x2_t ret = __riscv_th_vlxseg2b_v_i8m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m2x2_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x2_i8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, const uint8_t *a, vuint8m2_t idx, word_type vl)
{
  vuint8m2x2_t ret = __riscv_th_vlxseg2bu_v_u8m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_u8m2x2_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x2_u8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, vuint8m2_t idx, word_type vl)
{
  vuint8m2x2_t ret = __riscv_th_vlxseg2bu_v_u8m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m2x2_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x2_u8m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u8m2(uint8_t *a, vuint8m2_t idx, vuint8m2_t v0, vuint8m2_t v1, word_type vl)
{
  vuint8m2x2_t ret = __riscv_vcreate_v_u8m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_u8m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i8m2(int8_t *a, vuint8m2_t idx, vint8m2_t v0, vint8m2_t v1, word_type vl)
{
  vint8m2x2_t ret = __riscv_vcreate_v_i8m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_i8m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u8m2_m(vbool4_t mask, uint8_t *a, vuint8m2_t idx, vuint8m2_t v0, vuint8m2_t v1, word_type vl)
{
  vuint8m2x2_t ret = __riscv_vcreate_v_u8m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_u8m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i8m2_m(vbool4_t mask, int8_t *a, vuint8m2_t idx, vint8m2_t v0, vint8m2_t v1, word_type vl)
{
  vint8m2x2_t ret = __riscv_vcreate_v_i8m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_i8m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i8m4(vint8m4_t *v0, vint8m4_t *v1, const int8_t *a, word_type vl)
{
  vint8m4x2_t ret = __riscv_th_vlseg2b_v_i8m4x2(a, vl);
  *v0 = __riscv_vget_v_i8m4x2_i8m4(ret, 0);
  *v1 = __riscv_vget_v_i8m4x2_i8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i8m4_m(vint8m4_t *v0, vint8m4_t *v1, vbool2_t mask, vint8m4_t maskedoff0 __attribute__((__unused__)), vint8m4_t maskedoff1 __attribute__((__unused__)), const int8_t *a, word_type vl)
{
  vint8m4x2_t ret = __riscv_th_vlseg2b_v_i8m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m4x2_i8m4(ret, 0);
  *v1 = __riscv_vget_v_i8m4x2_i8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i8m4(vint8m4_t *v0, vint8m4_t *v1, const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m4x2_t ret = __riscv_th_vlsseg2b_v_i8m4x2(a, s, vl);
  *v0 = __riscv_vget_v_i8m4x2_i8m4(ret, 0);
  *v1 = __riscv_vget_v_i8m4x2_i8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i8m4_m(vint8m4_t *v0, vint8m4_t *v1, vbool2_t mask, vint8m4_t maskedoff0 __attribute__((__unused__)), vint8m4_t maskedoff1 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m4x2_t ret = __riscv_th_vlsseg2b_v_i8m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m4x2_i8m4(ret, 0);
  *v1 = __riscv_vget_v_i8m4x2_i8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u8m4(vuint8m4_t *v0, vuint8m4_t *v1, const uint8_t *a, word_type vl)
{
  vuint8m4x2_t ret = __riscv_th_vlseg2bu_v_u8m4x2(a, vl);
  *v0 = __riscv_vget_v_u8m4x2_u8m4(ret, 0);
  *v1 = __riscv_vget_v_u8m4x2_u8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u8m4_m(vuint8m4_t *v0, vuint8m4_t *v1, vbool2_t mask, vuint8m4_t maskedoff0 __attribute__((__unused__)), vuint8m4_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, word_type vl)
{
  vuint8m4x2_t ret = __riscv_th_vlseg2bu_v_u8m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m4x2_u8m4(ret, 0);
  *v1 = __riscv_vget_v_u8m4x2_u8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u8m4(vuint8m4_t *v0, vuint8m4_t *v1, const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m4x2_t ret = __riscv_th_vlsseg2bu_v_u8m4x2(a, s, vl);
  *v0 = __riscv_vget_v_u8m4x2_u8m4(ret, 0);
  *v1 = __riscv_vget_v_u8m4x2_u8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u8m4_m(vuint8m4_t *v0, vuint8m4_t *v1, vbool2_t mask, vuint8m4_t maskedoff0 __attribute__((__unused__)), vuint8m4_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m4x2_t ret = __riscv_th_vlsseg2bu_v_u8m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m4x2_u8m4(ret, 0);
  *v1 = __riscv_vget_v_u8m4x2_u8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u8m4(uint8_t *a, vuint8m4_t v0, vuint8m4_t v1, word_type vl)
{
  vuint8m4x2_t ret = __riscv_vcreate_v_u8m4x2(v0, v1);
  __riscv_th_vsseg2b_v_u8m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u8m4_m(vbool2_t mask, uint8_t *a, vuint8m4_t v0, vuint8m4_t v1, word_type vl)
{
  vuint8m4x2_t ret = __riscv_vcreate_v_u8m4x2(v0, v1);
  __riscv_th_vsseg2b_v_u8m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i8m4(int8_t *a, vint8m4_t v0, vint8m4_t v1, word_type vl)
{
  vint8m4x2_t ret = __riscv_vcreate_v_i8m4x2(v0, v1);
  __riscv_th_vsseg2b_v_i8m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i8m4_m(vbool2_t mask, int8_t *a, vint8m4_t v0, vint8m4_t v1, word_type vl)
{
  vint8m4x2_t ret = __riscv_vcreate_v_i8m4x2(v0, v1);
  __riscv_th_vsseg2b_v_i8m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u8m4(uint8_t *a, ptrdiff_t s, vuint8m4_t v0, vuint8m4_t v1, word_type vl)
{
  vuint8m4x2_t ret = __riscv_vcreate_v_u8m4x2(v0, v1);
  __riscv_th_vssseg2b_v_u8m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u8m4_m(vbool2_t mask, uint8_t *a, ptrdiff_t s, vuint8m4_t v0, vuint8m4_t v1, word_type vl)
{
  vuint8m4x2_t ret = __riscv_vcreate_v_u8m4x2(v0, v1);
  __riscv_th_vssseg2b_v_u8m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i8m4(int8_t *a, ptrdiff_t s, vint8m4_t v0, vint8m4_t v1, word_type vl)
{
  vint8m4x2_t ret = __riscv_vcreate_v_i8m4x2(v0, v1);
  __riscv_th_vssseg2b_v_i8m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i8m4_m(vbool2_t mask, int8_t *a, ptrdiff_t s, vint8m4_t v0, vint8m4_t v1, word_type vl)
{
  vint8m4x2_t ret = __riscv_vcreate_v_i8m4x2(v0, v1);
  __riscv_th_vssseg2b_v_i8m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i8m4(vint8m4_t *v0, vint8m4_t *v1, const int8_t *a, vuint8m4_t idx, word_type vl)
{
  vint8m4x2_t ret = __riscv_th_vlxseg2b_v_i8m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_i8m4x2_i8m4(ret, 0);
  *v1 = __riscv_vget_v_i8m4x2_i8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i8m4_m(vint8m4_t *v0, vint8m4_t *v1, vbool2_t mask, vint8m4_t maskedoff0 __attribute__((__unused__)), vint8m4_t maskedoff1 __attribute__((__unused__)), const int8_t *a, vuint8m4_t idx, word_type vl)
{
  vint8m4x2_t ret = __riscv_th_vlxseg2b_v_i8m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m4x2_i8m4(ret, 0);
  *v1 = __riscv_vget_v_i8m4x2_i8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u8m4(vuint8m4_t *v0, vuint8m4_t *v1, const uint8_t *a, vuint8m4_t idx, word_type vl)
{
  vuint8m4x2_t ret = __riscv_th_vlxseg2bu_v_u8m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_u8m4x2_u8m4(ret, 0);
  *v1 = __riscv_vget_v_u8m4x2_u8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u8m4_m(vuint8m4_t *v0, vuint8m4_t *v1, vbool2_t mask, vuint8m4_t maskedoff0 __attribute__((__unused__)), vuint8m4_t maskedoff1 __attribute__((__unused__)), const uint8_t *a, vuint8m4_t idx, word_type vl)
{
  vuint8m4x2_t ret = __riscv_th_vlxseg2bu_v_u8m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m4x2_u8m4(ret, 0);
  *v1 = __riscv_vget_v_u8m4x2_u8m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u8m4(uint8_t *a, vuint8m4_t idx, vuint8m4_t v0, vuint8m4_t v1, word_type vl)
{
  vuint8m4x2_t ret = __riscv_vcreate_v_u8m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_u8m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i8m4(int8_t *a, vuint8m4_t idx, vint8m4_t v0, vint8m4_t v1, word_type vl)
{
  vint8m4x2_t ret = __riscv_vcreate_v_i8m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_i8m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u8m4_m(vbool2_t mask, uint8_t *a, vuint8m4_t idx, vuint8m4_t v0, vuint8m4_t v1, word_type vl)
{
  vuint8m4x2_t ret = __riscv_vcreate_v_u8m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_u8m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i8m4_m(vbool2_t mask, int8_t *a, vuint8m4_t idx, vint8m4_t v0, vint8m4_t v1, word_type vl)
{
  vint8m4x2_t ret = __riscv_vcreate_v_i8m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_i8m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, const int16_t *a, word_type vl)
{
  vint16m1x2_t ret = __riscv_th_vlseg2b_v_i16m1x2(a, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m1x2_t ret = __riscv_th_vlseg2b_v_i16m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x2_t ret = __riscv_th_vlsseg2b_v_i16m1x2(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x2_t ret = __riscv_th_vlsseg2b_v_i16m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, const uint16_t *a, word_type vl)
{
  vuint16m1x2_t ret = __riscv_th_vlseg2bu_v_u16m1x2(a, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m1x2_t ret = __riscv_th_vlseg2bu_v_u16m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x2_t ret = __riscv_th_vlsseg2bu_v_u16m1x2(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x2_t ret = __riscv_th_vlsseg2bu_v_u16m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, word_type vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_th_vsseg2b_v_u16m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, word_type vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_th_vsseg2b_v_u16m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, word_type vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_th_vsseg2b_v_i16m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, word_type vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_th_vsseg2b_v_i16m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, word_type vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_th_vssseg2b_v_u16m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, word_type vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_th_vssseg2b_v_u16m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, word_type vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_th_vssseg2b_v_i16m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, word_type vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_th_vssseg2b_v_i16m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x2_t ret = __riscv_th_vlxseg2b_v_i16m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x2_t ret = __riscv_th_vlxseg2b_v_i16m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x2_t ret = __riscv_th_vlxseg2bu_v_u16m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x2_t ret = __riscv_th_vlxseg2bu_v_u16m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, word_type vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_u16m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, word_type vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_i16m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, word_type vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_u16m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, word_type vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_i16m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, const int16_t *a, word_type vl)
{
  vint16m2x2_t ret = __riscv_th_vlseg2b_v_i16m2x2(a, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m2x2_t ret = __riscv_th_vlseg2b_v_i16m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m2x2_t ret = __riscv_th_vlsseg2b_v_i16m2x2(a, s, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m2x2_t ret = __riscv_th_vlsseg2b_v_i16m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, const uint16_t *a, word_type vl)
{
  vuint16m2x2_t ret = __riscv_th_vlseg2bu_v_u16m2x2(a, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m2x2_t ret = __riscv_th_vlseg2bu_v_u16m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m2x2_t ret = __riscv_th_vlsseg2bu_v_u16m2x2(a, s, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m2x2_t ret = __riscv_th_vlsseg2bu_v_u16m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u16m2(uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, word_type vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_th_vsseg2b_v_u16m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, word_type vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_th_vsseg2b_v_u16m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i16m2(int16_t *a, vint16m2_t v0, vint16m2_t v1, word_type vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_th_vsseg2b_v_i16m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i16m2_m(vbool8_t mask, int16_t *a, vint16m2_t v0, vint16m2_t v1, word_type vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_th_vsseg2b_v_i16m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u16m2(uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, word_type vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_th_vssseg2b_v_u16m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u16m2_m(vbool8_t mask, uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, word_type vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_th_vssseg2b_v_u16m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i16m2(int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, word_type vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_th_vssseg2b_v_i16m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i16m2_m(vbool8_t mask, int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, word_type vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_th_vssseg2b_v_i16m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, const int16_t *a, vuint16m2_t idx, word_type vl)
{
  vint16m2x2_t ret = __riscv_th_vlxseg2b_v_i16m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), const int16_t *a, vuint16m2_t idx, word_type vl)
{
  vint16m2x2_t ret = __riscv_th_vlxseg2b_v_i16m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, const uint16_t *a, vuint16m2_t idx, word_type vl)
{
  vuint16m2x2_t ret = __riscv_th_vlxseg2bu_v_u16m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, vuint16m2_t idx, word_type vl)
{
  vuint16m2x2_t ret = __riscv_th_vlxseg2bu_v_u16m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u16m2(uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, word_type vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_u16m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i16m2(int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, word_type vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_i16m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, word_type vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_u16m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i16m2_m(vbool8_t mask, int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, word_type vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_i16m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i16m4(vint16m4_t *v0, vint16m4_t *v1, const int16_t *a, word_type vl)
{
  vint16m4x2_t ret = __riscv_th_vlseg2b_v_i16m4x2(a, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i16m4_m(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0 __attribute__((__unused__)), vint16m4_t maskedoff1 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m4x2_t ret = __riscv_th_vlseg2b_v_i16m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i16m4(vint16m4_t *v0, vint16m4_t *v1, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m4x2_t ret = __riscv_th_vlsseg2b_v_i16m4x2(a, s, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i16m4_m(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0 __attribute__((__unused__)), vint16m4_t maskedoff1 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m4x2_t ret = __riscv_th_vlsseg2b_v_i16m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u16m4(vuint16m4_t *v0, vuint16m4_t *v1, const uint16_t *a, word_type vl)
{
  vuint16m4x2_t ret = __riscv_th_vlseg2bu_v_u16m4x2(a, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u16m4_m(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0 __attribute__((__unused__)), vuint16m4_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m4x2_t ret = __riscv_th_vlseg2bu_v_u16m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u16m4(vuint16m4_t *v0, vuint16m4_t *v1, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m4x2_t ret = __riscv_th_vlsseg2bu_v_u16m4x2(a, s, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u16m4_m(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0 __attribute__((__unused__)), vuint16m4_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m4x2_t ret = __riscv_th_vlsseg2bu_v_u16m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u16m4(uint16_t *a, vuint16m4_t v0, vuint16m4_t v1, word_type vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_th_vsseg2b_v_u16m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u16m4_m(vbool4_t mask, uint16_t *a, vuint16m4_t v0, vuint16m4_t v1, word_type vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_th_vsseg2b_v_u16m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i16m4(int16_t *a, vint16m4_t v0, vint16m4_t v1, word_type vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_th_vsseg2b_v_i16m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i16m4_m(vbool4_t mask, int16_t *a, vint16m4_t v0, vint16m4_t v1, word_type vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_th_vsseg2b_v_i16m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u16m4(uint16_t *a, ptrdiff_t s, vuint16m4_t v0, vuint16m4_t v1, word_type vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_th_vssseg2b_v_u16m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u16m4_m(vbool4_t mask, uint16_t *a, ptrdiff_t s, vuint16m4_t v0, vuint16m4_t v1, word_type vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_th_vssseg2b_v_u16m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i16m4(int16_t *a, ptrdiff_t s, vint16m4_t v0, vint16m4_t v1, word_type vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_th_vssseg2b_v_i16m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i16m4_m(vbool4_t mask, int16_t *a, ptrdiff_t s, vint16m4_t v0, vint16m4_t v1, word_type vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_th_vssseg2b_v_i16m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i16m4(vint16m4_t *v0, vint16m4_t *v1, const int16_t *a, vuint16m4_t idx, word_type vl)
{
  vint16m4x2_t ret = __riscv_th_vlxseg2b_v_i16m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i16m4_m(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0 __attribute__((__unused__)), vint16m4_t maskedoff1 __attribute__((__unused__)), const int16_t *a, vuint16m4_t idx, word_type vl)
{
  vint16m4x2_t ret = __riscv_th_vlxseg2b_v_i16m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u16m4(vuint16m4_t *v0, vuint16m4_t *v1, const uint16_t *a, vuint16m4_t idx, word_type vl)
{
  vuint16m4x2_t ret = __riscv_th_vlxseg2bu_v_u16m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u16m4_m(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0 __attribute__((__unused__)), vuint16m4_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, vuint16m4_t idx, word_type vl)
{
  vuint16m4x2_t ret = __riscv_th_vlxseg2bu_v_u16m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u16m4(uint16_t *a, vuint16m4_t idx, vuint16m4_t v0, vuint16m4_t v1, word_type vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_u16m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i16m4(int16_t *a, vuint16m4_t idx, vint16m4_t v0, vint16m4_t v1, word_type vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_i16m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u16m4_m(vbool4_t mask, uint16_t *a, vuint16m4_t idx, vuint16m4_t v0, vuint16m4_t v1, word_type vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_u16m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i16m4_m(vbool4_t mask, int16_t *a, vuint16m4_t idx, vint16m4_t v0, vint16m4_t v1, word_type vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_i16m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, const int32_t *a, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlseg2b_v_i32m1x2(a, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlseg2b_v_i32m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlsseg2b_v_i32m1x2(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlsseg2b_v_i32m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, const uint32_t *a, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlseg2bu_v_u32m1x2(a, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlseg2bu_v_u32m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlsseg2bu_v_u32m1x2(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlsseg2bu_v_u32m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vsseg2b_v_u32m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vsseg2b_v_u32m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vsseg2b_v_i32m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vsseg2b_v_i32m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vssseg2b_v_u32m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vssseg2b_v_u32m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vssseg2b_v_i32m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vssseg2b_v_i32m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlxseg2b_v_i32m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlxseg2b_v_i32m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlxseg2bu_v_u32m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlxseg2bu_v_u32m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_u32m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_i32m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_u32m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_i32m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, const int32_t *a, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlseg2b_v_i32m2x2(a, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlseg2b_v_i32m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlsseg2b_v_i32m2x2(a, s, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlsseg2b_v_i32m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, const uint32_t *a, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlseg2bu_v_u32m2x2(a, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlseg2bu_v_u32m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlsseg2bu_v_u32m2x2(a, s, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlsseg2bu_v_u32m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u32m2(uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vsseg2b_v_u32m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vsseg2b_v_u32m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i32m2(int32_t *a, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vsseg2b_v_i32m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i32m2_m(vbool16_t mask, int32_t *a, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vsseg2b_v_i32m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u32m2(uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vssseg2b_v_u32m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u32m2_m(vbool16_t mask, uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vssseg2b_v_u32m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i32m2(int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vssseg2b_v_i32m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i32m2_m(vbool16_t mask, int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vssseg2b_v_i32m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlxseg2b_v_i32m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlxseg2b_v_i32m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlxseg2bu_v_u32m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlxseg2bu_v_u32m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u32m2(uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_u32m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i32m2(int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_i32m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_u32m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i32m2_m(vbool16_t mask, int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_i32m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i32m4(vint32m4_t *v0, vint32m4_t *v1, const int32_t *a, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlseg2b_v_i32m4x2(a, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0 __attribute__((__unused__)), vint32m4_t maskedoff1 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlseg2b_v_i32m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i32m4(vint32m4_t *v0, vint32m4_t *v1, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlsseg2b_v_i32m4x2(a, s, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0 __attribute__((__unused__)), vint32m4_t maskedoff1 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlsseg2b_v_i32m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u32m4(vuint32m4_t *v0, vuint32m4_t *v1, const uint32_t *a, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlseg2bu_v_u32m4x2(a, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0 __attribute__((__unused__)), vuint32m4_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlseg2bu_v_u32m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u32m4(vuint32m4_t *v0, vuint32m4_t *v1, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlsseg2bu_v_u32m4x2(a, s, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0 __attribute__((__unused__)), vuint32m4_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlsseg2bu_v_u32m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u32m4(uint32_t *a, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vsseg2b_v_u32m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u32m4_m(vbool8_t mask, uint32_t *a, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vsseg2b_v_u32m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i32m4(int32_t *a, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vsseg2b_v_i32m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i32m4_m(vbool8_t mask, int32_t *a, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vsseg2b_v_i32m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u32m4(uint32_t *a, ptrdiff_t s, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vssseg2b_v_u32m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u32m4_m(vbool8_t mask, uint32_t *a, ptrdiff_t s, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vssseg2b_v_u32m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i32m4(int32_t *a, ptrdiff_t s, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vssseg2b_v_i32m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i32m4_m(vbool8_t mask, int32_t *a, ptrdiff_t s, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vssseg2b_v_i32m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i32m4(vint32m4_t *v0, vint32m4_t *v1, const int32_t *a, vuint32m4_t idx, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlxseg2b_v_i32m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0 __attribute__((__unused__)), vint32m4_t maskedoff1 __attribute__((__unused__)), const int32_t *a, vuint32m4_t idx, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlxseg2b_v_i32m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u32m4(vuint32m4_t *v0, vuint32m4_t *v1, const uint32_t *a, vuint32m4_t idx, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlxseg2bu_v_u32m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0 __attribute__((__unused__)), vuint32m4_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, vuint32m4_t idx, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlxseg2bu_v_u32m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u32m4(uint32_t *a, vuint32m4_t idx, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_u32m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i32m4(int32_t *a, vuint32m4_t idx, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_i32m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u32m4_m(vbool8_t mask, uint32_t *a, vuint32m4_t idx, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_u32m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i32m4_m(vbool8_t mask, int32_t *a, vuint32m4_t idx, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_i32m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, const int64_t *a, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlseg2b_v_i64m1x2(a, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlseg2b_v_i64m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlsseg2b_v_i64m1x2(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlsseg2b_v_i64m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, const uint64_t *a, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlseg2bu_v_u64m1x2(a, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlseg2bu_v_u64m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlsseg2bu_v_u64m1x2(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlsseg2bu_v_u64m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vsseg2b_v_u64m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vsseg2b_v_u64m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vsseg2b_v_i64m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vsseg2b_v_i64m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vssseg2b_v_u64m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vssseg2b_v_u64m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vssseg2b_v_i64m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vssseg2b_v_i64m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlxseg2b_v_i64m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlxseg2b_v_i64m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlxseg2bu_v_u64m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlxseg2bu_v_u64m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_u64m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_i64m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_u64m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vsxseg2b_v_i64m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, const int64_t *a, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlseg2b_v_i64m2x2(a, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlseg2b_v_i64m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlsseg2b_v_i64m2x2(a, s, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlsseg2b_v_i64m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, const uint64_t *a, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlseg2bu_v_u64m2x2(a, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlseg2bu_v_u64m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlsseg2bu_v_u64m2x2(a, s, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlsseg2bu_v_u64m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u64m2(uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vsseg2b_v_u64m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vsseg2b_v_u64m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i64m2(int64_t *a, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vsseg2b_v_i64m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i64m2_m(vbool32_t mask, int64_t *a, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vsseg2b_v_i64m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u64m2(uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vssseg2b_v_u64m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u64m2_m(vbool32_t mask, uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vssseg2b_v_u64m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i64m2(int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vssseg2b_v_i64m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i64m2_m(vbool32_t mask, int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vssseg2b_v_i64m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlxseg2b_v_i64m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlxseg2b_v_i64m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlxseg2bu_v_u64m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlxseg2bu_v_u64m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u64m2(uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_u64m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i64m2(int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_i64m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_u64m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i64m2_m(vbool32_t mask, int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vsxseg2b_v_i64m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i64m4(vint64m4_t *v0, vint64m4_t *v1, const int64_t *a, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlseg2b_v_i64m4x2(a, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2b_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0 __attribute__((__unused__)), vint64m4_t maskedoff1 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlseg2b_v_i64m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i64m4(vint64m4_t *v0, vint64m4_t *v1, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlsseg2b_v_i64m4x2(a, s, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2b_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0 __attribute__((__unused__)), vint64m4_t maskedoff1 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlsseg2b_v_i64m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u64m4(vuint64m4_t *v0, vuint64m4_t *v1, const uint64_t *a, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlseg2bu_v_u64m4x2(a, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2bu_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0 __attribute__((__unused__)), vuint64m4_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlseg2bu_v_u64m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u64m4(vuint64m4_t *v0, vuint64m4_t *v1, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlsseg2bu_v_u64m4x2(a, s, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2bu_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0 __attribute__((__unused__)), vuint64m4_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlsseg2bu_v_u64m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u64m4(uint64_t *a, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vsseg2b_v_u64m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_u64m4_m(vbool16_t mask, uint64_t *a, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vsseg2b_v_u64m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i64m4(int64_t *a, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vsseg2b_v_i64m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2b_v_i64m4_m(vbool16_t mask, int64_t *a, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vsseg2b_v_i64m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u64m4(uint64_t *a, ptrdiff_t s, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vssseg2b_v_u64m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_u64m4_m(vbool16_t mask, uint64_t *a, ptrdiff_t s, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vssseg2b_v_u64m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i64m4(int64_t *a, ptrdiff_t s, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vssseg2b_v_i64m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2b_v_i64m4_m(vbool16_t mask, int64_t *a, ptrdiff_t s, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vssseg2b_v_i64m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i64m4(vint64m4_t *v0, vint64m4_t *v1, const int64_t *a, vuint64m4_t idx, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlxseg2b_v_i64m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2b_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0 __attribute__((__unused__)), vint64m4_t maskedoff1 __attribute__((__unused__)), const int64_t *a, vuint64m4_t idx, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlxseg2b_v_i64m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u64m4(vuint64m4_t *v0, vuint64m4_t *v1, const uint64_t *a, vuint64m4_t idx, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlxseg2bu_v_u64m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2bu_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0 __attribute__((__unused__)), vuint64m4_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, vuint64m4_t idx, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlxseg2bu_v_u64m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u64m4(uint64_t *a, vuint64m4_t idx, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_u64m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i64m4(int64_t *a, vuint64m4_t idx, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_i64m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_u64m4_m(vbool16_t mask, uint64_t *a, vuint64m4_t idx, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_u64m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2b_v_i64m4_m(vbool16_t mask, int64_t *a, vuint64m4_t idx, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vsxseg2b_v_i64m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, const int16_t *a, word_type vl)
{
  vint16m1x2_t ret = __riscv_th_vlseg2h_v_i16m1x2(a, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m1x2_t ret = __riscv_th_vlseg2h_v_i16m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x2_t ret = __riscv_th_vlsseg2h_v_i16m1x2(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x2_t ret = __riscv_th_vlsseg2h_v_i16m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, const uint16_t *a, word_type vl)
{
  vuint16m1x2_t ret = __riscv_th_vlseg2hu_v_u16m1x2(a, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m1x2_t ret = __riscv_th_vlseg2hu_v_u16m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x2_t ret = __riscv_th_vlsseg2hu_v_u16m1x2(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x2_t ret = __riscv_th_vlsseg2hu_v_u16m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, word_type vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_th_vsseg2h_v_u16m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, word_type vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_th_vsseg2h_v_u16m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, word_type vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_th_vsseg2h_v_i16m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, word_type vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_th_vsseg2h_v_i16m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, word_type vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_th_vssseg2h_v_u16m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, word_type vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_th_vssseg2h_v_u16m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, word_type vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_th_vssseg2h_v_i16m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, word_type vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_th_vssseg2h_v_i16m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x2_t ret = __riscv_th_vlxseg2h_v_i16m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x2_t ret = __riscv_th_vlxseg2h_v_i16m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x2_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x2_i16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x2_t ret = __riscv_th_vlxseg2hu_v_u16m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x2_t ret = __riscv_th_vlxseg2hu_v_u16m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x2_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x2_u16m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, word_type vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_th_vsxseg2h_v_u16m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, word_type vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_th_vsxseg2h_v_i16m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, word_type vl)
{
  vuint16m1x2_t ret = __riscv_vcreate_v_u16m1x2(v0, v1);
  __riscv_th_vsxseg2h_v_u16m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, word_type vl)
{
  vint16m1x2_t ret = __riscv_vcreate_v_i16m1x2(v0, v1);
  __riscv_th_vsxseg2h_v_i16m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, const int16_t *a, word_type vl)
{
  vint16m2x2_t ret = __riscv_th_vlseg2h_v_i16m2x2(a, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m2x2_t ret = __riscv_th_vlseg2h_v_i16m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m2x2_t ret = __riscv_th_vlsseg2h_v_i16m2x2(a, s, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m2x2_t ret = __riscv_th_vlsseg2h_v_i16m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, const uint16_t *a, word_type vl)
{
  vuint16m2x2_t ret = __riscv_th_vlseg2hu_v_u16m2x2(a, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m2x2_t ret = __riscv_th_vlseg2hu_v_u16m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m2x2_t ret = __riscv_th_vlsseg2hu_v_u16m2x2(a, s, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m2x2_t ret = __riscv_th_vlsseg2hu_v_u16m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u16m2(uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, word_type vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_th_vsseg2h_v_u16m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, word_type vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_th_vsseg2h_v_u16m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i16m2(int16_t *a, vint16m2_t v0, vint16m2_t v1, word_type vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_th_vsseg2h_v_i16m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i16m2_m(vbool8_t mask, int16_t *a, vint16m2_t v0, vint16m2_t v1, word_type vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_th_vsseg2h_v_i16m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u16m2(uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, word_type vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_th_vssseg2h_v_u16m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u16m2_m(vbool8_t mask, uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, word_type vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_th_vssseg2h_v_u16m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i16m2(int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, word_type vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_th_vssseg2h_v_i16m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i16m2_m(vbool8_t mask, int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, word_type vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_th_vssseg2h_v_i16m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, const int16_t *a, vuint16m2_t idx, word_type vl)
{
  vint16m2x2_t ret = __riscv_th_vlxseg2h_v_i16m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), const int16_t *a, vuint16m2_t idx, word_type vl)
{
  vint16m2x2_t ret = __riscv_th_vlxseg2h_v_i16m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x2_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x2_i16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, const uint16_t *a, vuint16m2_t idx, word_type vl)
{
  vuint16m2x2_t ret = __riscv_th_vlxseg2hu_v_u16m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, vuint16m2_t idx, word_type vl)
{
  vuint16m2x2_t ret = __riscv_th_vlxseg2hu_v_u16m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x2_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x2_u16m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u16m2(uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, word_type vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_th_vsxseg2h_v_u16m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i16m2(int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, word_type vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_th_vsxseg2h_v_i16m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, word_type vl)
{
  vuint16m2x2_t ret = __riscv_vcreate_v_u16m2x2(v0, v1);
  __riscv_th_vsxseg2h_v_u16m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i16m2_m(vbool8_t mask, int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, word_type vl)
{
  vint16m2x2_t ret = __riscv_vcreate_v_i16m2x2(v0, v1);
  __riscv_th_vsxseg2h_v_i16m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i16m4(vint16m4_t *v0, vint16m4_t *v1, const int16_t *a, word_type vl)
{
  vint16m4x2_t ret = __riscv_th_vlseg2h_v_i16m4x2(a, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i16m4_m(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0 __attribute__((__unused__)), vint16m4_t maskedoff1 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m4x2_t ret = __riscv_th_vlseg2h_v_i16m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i16m4(vint16m4_t *v0, vint16m4_t *v1, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m4x2_t ret = __riscv_th_vlsseg2h_v_i16m4x2(a, s, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i16m4_m(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0 __attribute__((__unused__)), vint16m4_t maskedoff1 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m4x2_t ret = __riscv_th_vlsseg2h_v_i16m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u16m4(vuint16m4_t *v0, vuint16m4_t *v1, const uint16_t *a, word_type vl)
{
  vuint16m4x2_t ret = __riscv_th_vlseg2hu_v_u16m4x2(a, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u16m4_m(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0 __attribute__((__unused__)), vuint16m4_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m4x2_t ret = __riscv_th_vlseg2hu_v_u16m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u16m4(vuint16m4_t *v0, vuint16m4_t *v1, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m4x2_t ret = __riscv_th_vlsseg2hu_v_u16m4x2(a, s, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u16m4_m(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0 __attribute__((__unused__)), vuint16m4_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m4x2_t ret = __riscv_th_vlsseg2hu_v_u16m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u16m4(uint16_t *a, vuint16m4_t v0, vuint16m4_t v1, word_type vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_th_vsseg2h_v_u16m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u16m4_m(vbool4_t mask, uint16_t *a, vuint16m4_t v0, vuint16m4_t v1, word_type vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_th_vsseg2h_v_u16m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i16m4(int16_t *a, vint16m4_t v0, vint16m4_t v1, word_type vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_th_vsseg2h_v_i16m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i16m4_m(vbool4_t mask, int16_t *a, vint16m4_t v0, vint16m4_t v1, word_type vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_th_vsseg2h_v_i16m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u16m4(uint16_t *a, ptrdiff_t s, vuint16m4_t v0, vuint16m4_t v1, word_type vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_th_vssseg2h_v_u16m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u16m4_m(vbool4_t mask, uint16_t *a, ptrdiff_t s, vuint16m4_t v0, vuint16m4_t v1, word_type vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_th_vssseg2h_v_u16m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i16m4(int16_t *a, ptrdiff_t s, vint16m4_t v0, vint16m4_t v1, word_type vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_th_vssseg2h_v_i16m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i16m4_m(vbool4_t mask, int16_t *a, ptrdiff_t s, vint16m4_t v0, vint16m4_t v1, word_type vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_th_vssseg2h_v_i16m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i16m4(vint16m4_t *v0, vint16m4_t *v1, const int16_t *a, vuint16m4_t idx, word_type vl)
{
  vint16m4x2_t ret = __riscv_th_vlxseg2h_v_i16m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i16m4_m(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0 __attribute__((__unused__)), vint16m4_t maskedoff1 __attribute__((__unused__)), const int16_t *a, vuint16m4_t idx, word_type vl)
{
  vint16m4x2_t ret = __riscv_th_vlxseg2h_v_i16m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m4x2_i16m4(ret, 0);
  *v1 = __riscv_vget_v_i16m4x2_i16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u16m4(vuint16m4_t *v0, vuint16m4_t *v1, const uint16_t *a, vuint16m4_t idx, word_type vl)
{
  vuint16m4x2_t ret = __riscv_th_vlxseg2hu_v_u16m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u16m4_m(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0 __attribute__((__unused__)), vuint16m4_t maskedoff1 __attribute__((__unused__)), const uint16_t *a, vuint16m4_t idx, word_type vl)
{
  vuint16m4x2_t ret = __riscv_th_vlxseg2hu_v_u16m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m4x2_u16m4(ret, 0);
  *v1 = __riscv_vget_v_u16m4x2_u16m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u16m4(uint16_t *a, vuint16m4_t idx, vuint16m4_t v0, vuint16m4_t v1, word_type vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_th_vsxseg2h_v_u16m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i16m4(int16_t *a, vuint16m4_t idx, vint16m4_t v0, vint16m4_t v1, word_type vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_th_vsxseg2h_v_i16m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u16m4_m(vbool4_t mask, uint16_t *a, vuint16m4_t idx, vuint16m4_t v0, vuint16m4_t v1, word_type vl)
{
  vuint16m4x2_t ret = __riscv_vcreate_v_u16m4x2(v0, v1);
  __riscv_th_vsxseg2h_v_u16m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i16m4_m(vbool4_t mask, int16_t *a, vuint16m4_t idx, vint16m4_t v0, vint16m4_t v1, word_type vl)
{
  vint16m4x2_t ret = __riscv_vcreate_v_i16m4x2(v0, v1);
  __riscv_th_vsxseg2h_v_i16m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, const int32_t *a, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlseg2h_v_i32m1x2(a, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlseg2h_v_i32m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlsseg2h_v_i32m1x2(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlsseg2h_v_i32m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, const uint32_t *a, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlseg2hu_v_u32m1x2(a, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlseg2hu_v_u32m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlsseg2hu_v_u32m1x2(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlsseg2hu_v_u32m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vsseg2h_v_u32m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vsseg2h_v_u32m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vsseg2h_v_i32m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vsseg2h_v_i32m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vssseg2h_v_u32m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vssseg2h_v_u32m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vssseg2h_v_i32m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vssseg2h_v_i32m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlxseg2h_v_i32m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlxseg2h_v_i32m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlxseg2hu_v_u32m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlxseg2hu_v_u32m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vsxseg2h_v_u32m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vsxseg2h_v_i32m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vsxseg2h_v_u32m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vsxseg2h_v_i32m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, const int32_t *a, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlseg2h_v_i32m2x2(a, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlseg2h_v_i32m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlsseg2h_v_i32m2x2(a, s, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlsseg2h_v_i32m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, const uint32_t *a, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlseg2hu_v_u32m2x2(a, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlseg2hu_v_u32m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlsseg2hu_v_u32m2x2(a, s, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlsseg2hu_v_u32m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u32m2(uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vsseg2h_v_u32m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vsseg2h_v_u32m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i32m2(int32_t *a, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vsseg2h_v_i32m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i32m2_m(vbool16_t mask, int32_t *a, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vsseg2h_v_i32m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u32m2(uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vssseg2h_v_u32m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u32m2_m(vbool16_t mask, uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vssseg2h_v_u32m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i32m2(int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vssseg2h_v_i32m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i32m2_m(vbool16_t mask, int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vssseg2h_v_i32m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlxseg2h_v_i32m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlxseg2h_v_i32m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlxseg2hu_v_u32m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlxseg2hu_v_u32m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u32m2(uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vsxseg2h_v_u32m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i32m2(int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vsxseg2h_v_i32m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vsxseg2h_v_u32m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i32m2_m(vbool16_t mask, int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vsxseg2h_v_i32m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i32m4(vint32m4_t *v0, vint32m4_t *v1, const int32_t *a, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlseg2h_v_i32m4x2(a, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0 __attribute__((__unused__)), vint32m4_t maskedoff1 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlseg2h_v_i32m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i32m4(vint32m4_t *v0, vint32m4_t *v1, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlsseg2h_v_i32m4x2(a, s, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0 __attribute__((__unused__)), vint32m4_t maskedoff1 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlsseg2h_v_i32m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u32m4(vuint32m4_t *v0, vuint32m4_t *v1, const uint32_t *a, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlseg2hu_v_u32m4x2(a, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0 __attribute__((__unused__)), vuint32m4_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlseg2hu_v_u32m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u32m4(vuint32m4_t *v0, vuint32m4_t *v1, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlsseg2hu_v_u32m4x2(a, s, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0 __attribute__((__unused__)), vuint32m4_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlsseg2hu_v_u32m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u32m4(uint32_t *a, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vsseg2h_v_u32m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u32m4_m(vbool8_t mask, uint32_t *a, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vsseg2h_v_u32m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i32m4(int32_t *a, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vsseg2h_v_i32m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i32m4_m(vbool8_t mask, int32_t *a, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vsseg2h_v_i32m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u32m4(uint32_t *a, ptrdiff_t s, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vssseg2h_v_u32m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u32m4_m(vbool8_t mask, uint32_t *a, ptrdiff_t s, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vssseg2h_v_u32m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i32m4(int32_t *a, ptrdiff_t s, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vssseg2h_v_i32m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i32m4_m(vbool8_t mask, int32_t *a, ptrdiff_t s, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vssseg2h_v_i32m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i32m4(vint32m4_t *v0, vint32m4_t *v1, const int32_t *a, vuint32m4_t idx, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlxseg2h_v_i32m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0 __attribute__((__unused__)), vint32m4_t maskedoff1 __attribute__((__unused__)), const int32_t *a, vuint32m4_t idx, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlxseg2h_v_i32m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u32m4(vuint32m4_t *v0, vuint32m4_t *v1, const uint32_t *a, vuint32m4_t idx, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlxseg2hu_v_u32m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0 __attribute__((__unused__)), vuint32m4_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, vuint32m4_t idx, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlxseg2hu_v_u32m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u32m4(uint32_t *a, vuint32m4_t idx, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vsxseg2h_v_u32m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i32m4(int32_t *a, vuint32m4_t idx, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vsxseg2h_v_i32m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u32m4_m(vbool8_t mask, uint32_t *a, vuint32m4_t idx, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vsxseg2h_v_u32m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i32m4_m(vbool8_t mask, int32_t *a, vuint32m4_t idx, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vsxseg2h_v_i32m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, const int64_t *a, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlseg2h_v_i64m1x2(a, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlseg2h_v_i64m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlsseg2h_v_i64m1x2(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlsseg2h_v_i64m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, const uint64_t *a, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlseg2hu_v_u64m1x2(a, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlseg2hu_v_u64m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlsseg2hu_v_u64m1x2(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlsseg2hu_v_u64m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vsseg2h_v_u64m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vsseg2h_v_u64m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vsseg2h_v_i64m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vsseg2h_v_i64m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vssseg2h_v_u64m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vssseg2h_v_u64m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vssseg2h_v_i64m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vssseg2h_v_i64m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlxseg2h_v_i64m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlxseg2h_v_i64m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlxseg2hu_v_u64m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlxseg2hu_v_u64m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vsxseg2h_v_u64m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vsxseg2h_v_i64m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vsxseg2h_v_u64m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vsxseg2h_v_i64m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, const int64_t *a, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlseg2h_v_i64m2x2(a, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlseg2h_v_i64m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlsseg2h_v_i64m2x2(a, s, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlsseg2h_v_i64m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, const uint64_t *a, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlseg2hu_v_u64m2x2(a, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlseg2hu_v_u64m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlsseg2hu_v_u64m2x2(a, s, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlsseg2hu_v_u64m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u64m2(uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vsseg2h_v_u64m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vsseg2h_v_u64m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i64m2(int64_t *a, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vsseg2h_v_i64m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i64m2_m(vbool32_t mask, int64_t *a, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vsseg2h_v_i64m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u64m2(uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vssseg2h_v_u64m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u64m2_m(vbool32_t mask, uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vssseg2h_v_u64m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i64m2(int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vssseg2h_v_i64m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i64m2_m(vbool32_t mask, int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vssseg2h_v_i64m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlxseg2h_v_i64m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlxseg2h_v_i64m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlxseg2hu_v_u64m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlxseg2hu_v_u64m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u64m2(uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vsxseg2h_v_u64m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i64m2(int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vsxseg2h_v_i64m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vsxseg2h_v_u64m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i64m2_m(vbool32_t mask, int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vsxseg2h_v_i64m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i64m4(vint64m4_t *v0, vint64m4_t *v1, const int64_t *a, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlseg2h_v_i64m4x2(a, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2h_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0 __attribute__((__unused__)), vint64m4_t maskedoff1 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlseg2h_v_i64m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i64m4(vint64m4_t *v0, vint64m4_t *v1, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlsseg2h_v_i64m4x2(a, s, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2h_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0 __attribute__((__unused__)), vint64m4_t maskedoff1 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlsseg2h_v_i64m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u64m4(vuint64m4_t *v0, vuint64m4_t *v1, const uint64_t *a, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlseg2hu_v_u64m4x2(a, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2hu_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0 __attribute__((__unused__)), vuint64m4_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlseg2hu_v_u64m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u64m4(vuint64m4_t *v0, vuint64m4_t *v1, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlsseg2hu_v_u64m4x2(a, s, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2hu_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0 __attribute__((__unused__)), vuint64m4_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlsseg2hu_v_u64m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u64m4(uint64_t *a, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vsseg2h_v_u64m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_u64m4_m(vbool16_t mask, uint64_t *a, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vsseg2h_v_u64m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i64m4(int64_t *a, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vsseg2h_v_i64m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2h_v_i64m4_m(vbool16_t mask, int64_t *a, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vsseg2h_v_i64m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u64m4(uint64_t *a, ptrdiff_t s, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vssseg2h_v_u64m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_u64m4_m(vbool16_t mask, uint64_t *a, ptrdiff_t s, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vssseg2h_v_u64m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i64m4(int64_t *a, ptrdiff_t s, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vssseg2h_v_i64m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2h_v_i64m4_m(vbool16_t mask, int64_t *a, ptrdiff_t s, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vssseg2h_v_i64m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i64m4(vint64m4_t *v0, vint64m4_t *v1, const int64_t *a, vuint64m4_t idx, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlxseg2h_v_i64m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2h_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0 __attribute__((__unused__)), vint64m4_t maskedoff1 __attribute__((__unused__)), const int64_t *a, vuint64m4_t idx, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlxseg2h_v_i64m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u64m4(vuint64m4_t *v0, vuint64m4_t *v1, const uint64_t *a, vuint64m4_t idx, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlxseg2hu_v_u64m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2hu_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0 __attribute__((__unused__)), vuint64m4_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, vuint64m4_t idx, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlxseg2hu_v_u64m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u64m4(uint64_t *a, vuint64m4_t idx, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vsxseg2h_v_u64m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i64m4(int64_t *a, vuint64m4_t idx, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vsxseg2h_v_i64m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_u64m4_m(vbool16_t mask, uint64_t *a, vuint64m4_t idx, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vsxseg2h_v_u64m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2h_v_i64m4_m(vbool16_t mask, int64_t *a, vuint64m4_t idx, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vsxseg2h_v_i64m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, const int32_t *a, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlseg2w_v_i32m1x2(a, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlseg2w_v_i32m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlsseg2w_v_i32m1x2(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlsseg2w_v_i32m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, const uint32_t *a, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlseg2wu_v_u32m1x2(a, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlseg2wu_v_u32m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlsseg2wu_v_u32m1x2(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlsseg2wu_v_u32m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2w_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vsseg2w_v_u32m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vsseg2w_v_u32m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vsseg2w_v_i32m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vsseg2w_v_i32m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vssseg2w_v_u32m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vssseg2w_v_u32m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vssseg2w_v_i32m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vssseg2w_v_i32m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlxseg2w_v_i32m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x2_t ret = __riscv_th_vlxseg2w_v_i32m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x2_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x2_i32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlxseg2wu_v_u32m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x2_t ret = __riscv_th_vlxseg2wu_v_u32m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x2_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x2_u32m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vsxseg2w_v_u32m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vsxseg2w_v_i32m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, word_type vl)
{
  vuint32m1x2_t ret = __riscv_vcreate_v_u32m1x2(v0, v1);
  __riscv_th_vsxseg2w_v_u32m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, word_type vl)
{
  vint32m1x2_t ret = __riscv_vcreate_v_i32m1x2(v0, v1);
  __riscv_th_vsxseg2w_v_i32m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2w_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, const int32_t *a, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlseg2w_v_i32m2x2(a, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2w_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlseg2w_v_i32m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2w_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlsseg2w_v_i32m2x2(a, s, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2w_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlsseg2w_v_i32m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2wu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, const uint32_t *a, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlseg2wu_v_u32m2x2(a, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2wu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlseg2wu_v_u32m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2wu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlsseg2wu_v_u32m2x2(a, s, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2wu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlsseg2wu_v_u32m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2w_v_u32m2(uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vsseg2w_v_u32m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vsseg2w_v_u32m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_i32m2(int32_t *a, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vsseg2w_v_i32m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_i32m2_m(vbool16_t mask, int32_t *a, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vsseg2w_v_i32m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_u32m2(uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vssseg2w_v_u32m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_u32m2_m(vbool16_t mask, uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vssseg2w_v_u32m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_i32m2(int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vssseg2w_v_i32m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_i32m2_m(vbool16_t mask, int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vssseg2w_v_i32m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2w_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlxseg2w_v_i32m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2w_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x2_t ret = __riscv_th_vlxseg2w_v_i32m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x2_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x2_i32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2wu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlxseg2wu_v_u32m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2wu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x2_t ret = __riscv_th_vlxseg2wu_v_u32m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x2_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x2_u32m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_u32m2(uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vsxseg2w_v_u32m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_i32m2(int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vsxseg2w_v_i32m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, word_type vl)
{
  vuint32m2x2_t ret = __riscv_vcreate_v_u32m2x2(v0, v1);
  __riscv_th_vsxseg2w_v_u32m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_i32m2_m(vbool16_t mask, int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, word_type vl)
{
  vint32m2x2_t ret = __riscv_vcreate_v_i32m2x2(v0, v1);
  __riscv_th_vsxseg2w_v_i32m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2w_v_i32m4(vint32m4_t *v0, vint32m4_t *v1, const int32_t *a, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlseg2w_v_i32m4x2(a, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2w_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0 __attribute__((__unused__)), vint32m4_t maskedoff1 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlseg2w_v_i32m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2w_v_i32m4(vint32m4_t *v0, vint32m4_t *v1, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlsseg2w_v_i32m4x2(a, s, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2w_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0 __attribute__((__unused__)), vint32m4_t maskedoff1 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlsseg2w_v_i32m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2wu_v_u32m4(vuint32m4_t *v0, vuint32m4_t *v1, const uint32_t *a, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlseg2wu_v_u32m4x2(a, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2wu_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0 __attribute__((__unused__)), vuint32m4_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlseg2wu_v_u32m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2wu_v_u32m4(vuint32m4_t *v0, vuint32m4_t *v1, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlsseg2wu_v_u32m4x2(a, s, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2wu_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0 __attribute__((__unused__)), vuint32m4_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlsseg2wu_v_u32m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2w_v_u32m4(uint32_t *a, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vsseg2w_v_u32m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_u32m4_m(vbool8_t mask, uint32_t *a, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vsseg2w_v_u32m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_i32m4(int32_t *a, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vsseg2w_v_i32m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_i32m4_m(vbool8_t mask, int32_t *a, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vsseg2w_v_i32m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_u32m4(uint32_t *a, ptrdiff_t s, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vssseg2w_v_u32m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_u32m4_m(vbool8_t mask, uint32_t *a, ptrdiff_t s, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vssseg2w_v_u32m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_i32m4(int32_t *a, ptrdiff_t s, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vssseg2w_v_i32m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_i32m4_m(vbool8_t mask, int32_t *a, ptrdiff_t s, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vssseg2w_v_i32m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2w_v_i32m4(vint32m4_t *v0, vint32m4_t *v1, const int32_t *a, vuint32m4_t idx, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlxseg2w_v_i32m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2w_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0 __attribute__((__unused__)), vint32m4_t maskedoff1 __attribute__((__unused__)), const int32_t *a, vuint32m4_t idx, word_type vl)
{
  vint32m4x2_t ret = __riscv_th_vlxseg2w_v_i32m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m4x2_i32m4(ret, 0);
  *v1 = __riscv_vget_v_i32m4x2_i32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2wu_v_u32m4(vuint32m4_t *v0, vuint32m4_t *v1, const uint32_t *a, vuint32m4_t idx, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlxseg2wu_v_u32m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2wu_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0 __attribute__((__unused__)), vuint32m4_t maskedoff1 __attribute__((__unused__)), const uint32_t *a, vuint32m4_t idx, word_type vl)
{
  vuint32m4x2_t ret = __riscv_th_vlxseg2wu_v_u32m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m4x2_u32m4(ret, 0);
  *v1 = __riscv_vget_v_u32m4x2_u32m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_u32m4(uint32_t *a, vuint32m4_t idx, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vsxseg2w_v_u32m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_i32m4(int32_t *a, vuint32m4_t idx, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vsxseg2w_v_i32m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_u32m4_m(vbool8_t mask, uint32_t *a, vuint32m4_t idx, vuint32m4_t v0, vuint32m4_t v1, word_type vl)
{
  vuint32m4x2_t ret = __riscv_vcreate_v_u32m4x2(v0, v1);
  __riscv_th_vsxseg2w_v_u32m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_i32m4_m(vbool8_t mask, int32_t *a, vuint32m4_t idx, vint32m4_t v0, vint32m4_t v1, word_type vl)
{
  vint32m4x2_t ret = __riscv_vcreate_v_i32m4x2(v0, v1);
  __riscv_th_vsxseg2w_v_i32m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, const int64_t *a, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlseg2w_v_i64m1x2(a, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlseg2w_v_i64m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlsseg2w_v_i64m1x2(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlsseg2w_v_i64m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, const uint64_t *a, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlseg2wu_v_u64m1x2(a, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlseg2wu_v_u64m1x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlsseg2wu_v_u64m1x2(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlsseg2wu_v_u64m1x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2w_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vsseg2w_v_u64m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vsseg2w_v_u64m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vsseg2w_v_i64m1x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vsseg2w_v_i64m1x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vssseg2w_v_u64m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vssseg2w_v_u64m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vssseg2w_v_i64m1x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vssseg2w_v_i64m1x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlxseg2w_v_i64m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x2_t ret = __riscv_th_vlxseg2w_v_i64m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x2_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x2_i64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlxseg2wu_v_u64m1x2(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x2_t ret = __riscv_th_vlxseg2wu_v_u64m1x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x2_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x2_u64m1(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vsxseg2w_v_u64m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vsxseg2w_v_i64m1x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, word_type vl)
{
  vuint64m1x2_t ret = __riscv_vcreate_v_u64m1x2(v0, v1);
  __riscv_th_vsxseg2w_v_u64m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, word_type vl)
{
  vint64m1x2_t ret = __riscv_vcreate_v_i64m1x2(v0, v1);
  __riscv_th_vsxseg2w_v_i64m1x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2w_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, const int64_t *a, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlseg2w_v_i64m2x2(a, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2w_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlseg2w_v_i64m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2w_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlsseg2w_v_i64m2x2(a, s, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2w_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlsseg2w_v_i64m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2wu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, const uint64_t *a, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlseg2wu_v_u64m2x2(a, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2wu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlseg2wu_v_u64m2x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2wu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlsseg2wu_v_u64m2x2(a, s, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2wu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlsseg2wu_v_u64m2x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2w_v_u64m2(uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vsseg2w_v_u64m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vsseg2w_v_u64m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_i64m2(int64_t *a, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vsseg2w_v_i64m2x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_i64m2_m(vbool32_t mask, int64_t *a, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vsseg2w_v_i64m2x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_u64m2(uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vssseg2w_v_u64m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_u64m2_m(vbool32_t mask, uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vssseg2w_v_u64m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_i64m2(int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vssseg2w_v_i64m2x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_i64m2_m(vbool32_t mask, int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vssseg2w_v_i64m2x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2w_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlxseg2w_v_i64m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2w_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x2_t ret = __riscv_th_vlxseg2w_v_i64m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x2_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x2_i64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2wu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlxseg2wu_v_u64m2x2(a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2wu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x2_t ret = __riscv_th_vlxseg2wu_v_u64m2x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x2_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x2_u64m2(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_u64m2(uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vsxseg2w_v_u64m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_i64m2(int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vsxseg2w_v_i64m2x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, word_type vl)
{
  vuint64m2x2_t ret = __riscv_vcreate_v_u64m2x2(v0, v1);
  __riscv_th_vsxseg2w_v_u64m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_i64m2_m(vbool32_t mask, int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, word_type vl)
{
  vint64m2x2_t ret = __riscv_vcreate_v_i64m2x2(v0, v1);
  __riscv_th_vsxseg2w_v_i64m2x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg2w_v_i64m4(vint64m4_t *v0, vint64m4_t *v1, const int64_t *a, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlseg2w_v_i64m4x2(a, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2w_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0 __attribute__((__unused__)), vint64m4_t maskedoff1 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlseg2w_v_i64m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2w_v_i64m4(vint64m4_t *v0, vint64m4_t *v1, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlsseg2w_v_i64m4x2(a, s, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2w_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0 __attribute__((__unused__)), vint64m4_t maskedoff1 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlsseg2w_v_i64m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2wu_v_u64m4(vuint64m4_t *v0, vuint64m4_t *v1, const uint64_t *a, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlseg2wu_v_u64m4x2(a, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlseg2wu_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0 __attribute__((__unused__)), vuint64m4_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlseg2wu_v_u64m4x2_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2wu_v_u64m4(vuint64m4_t *v0, vuint64m4_t *v1, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlsseg2wu_v_u64m4x2(a, s, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlsseg2wu_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0 __attribute__((__unused__)), vuint64m4_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlsseg2wu_v_u64m4x2_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsseg2w_v_u64m4(uint64_t *a, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vsseg2w_v_u64m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_u64m4_m(vbool16_t mask, uint64_t *a, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vsseg2w_v_u64m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_i64m4(int64_t *a, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vsseg2w_v_i64m4x2(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg2w_v_i64m4_m(vbool16_t mask, int64_t *a, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vsseg2w_v_i64m4x2_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_u64m4(uint64_t *a, ptrdiff_t s, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vssseg2w_v_u64m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_u64m4_m(vbool16_t mask, uint64_t *a, ptrdiff_t s, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vssseg2w_v_u64m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_i64m4(int64_t *a, ptrdiff_t s, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vssseg2w_v_i64m4x2(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg2w_v_i64m4_m(vbool16_t mask, int64_t *a, ptrdiff_t s, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vssseg2w_v_i64m4x2_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg2w_v_i64m4(vint64m4_t *v0, vint64m4_t *v1, const int64_t *a, vuint64m4_t idx, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlxseg2w_v_i64m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2w_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0 __attribute__((__unused__)), vint64m4_t maskedoff1 __attribute__((__unused__)), const int64_t *a, vuint64m4_t idx, word_type vl)
{
  vint64m4x2_t ret = __riscv_th_vlxseg2w_v_i64m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m4x2_i64m4(ret, 0);
  *v1 = __riscv_vget_v_i64m4x2_i64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2wu_v_u64m4(vuint64m4_t *v0, vuint64m4_t *v1, const uint64_t *a, vuint64m4_t idx, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlxseg2wu_v_u64m4x2(a, idx, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vlxseg2wu_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0 __attribute__((__unused__)), vuint64m4_t maskedoff1 __attribute__((__unused__)), const uint64_t *a, vuint64m4_t idx, word_type vl)
{
  vuint64m4x2_t ret = __riscv_th_vlxseg2wu_v_u64m4x2_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m4x2_u64m4(ret, 0);
  *v1 = __riscv_vget_v_u64m4x2_u64m4(ret, 1);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_u64m4(uint64_t *a, vuint64m4_t idx, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vsxseg2w_v_u64m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_i64m4(int64_t *a, vuint64m4_t idx, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vsxseg2w_v_i64m4x2(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_u64m4_m(vbool16_t mask, uint64_t *a, vuint64m4_t idx, vuint64m4_t v0, vuint64m4_t v1, word_type vl)
{
  vuint64m4x2_t ret = __riscv_vcreate_v_u64m4x2(v0, v1);
  __riscv_th_vsxseg2w_v_u64m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg2w_v_i64m4_m(vbool16_t mask, int64_t *a, vuint64m4_t idx, vint64m4_t v0, vint64m4_t v1, word_type vl)
{
  vint64m4x2_t ret = __riscv_vcreate_v_i64m4x2(v0, v1);
  __riscv_th_vsxseg2w_v_i64m4x2_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, const int8_t *a, word_type vl)
{
  vint8m1x3_t ret = __riscv_th_vlseg3b_v_i8m1x3(a, vl);
  *v0 = __riscv_vget_v_i8m1x3_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x3_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x3_i8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), const int8_t *a, word_type vl)
{
  vint8m1x3_t ret = __riscv_th_vlseg3b_v_i8m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m1x3_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x3_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x3_i8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m1x3_t ret = __riscv_th_vlsseg3b_v_i8m1x3(a, s, vl);
  *v0 = __riscv_vget_v_i8m1x3_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x3_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x3_i8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m1x3_t ret = __riscv_th_vlsseg3b_v_i8m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m1x3_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x3_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x3_i8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, const uint8_t *a, word_type vl)
{
  vuint8m1x3_t ret = __riscv_th_vlseg3bu_v_u8m1x3(a, vl);
  *v0 = __riscv_vget_v_u8m1x3_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x3_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x3_u8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), const uint8_t *a, word_type vl)
{
  vuint8m1x3_t ret = __riscv_th_vlseg3bu_v_u8m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m1x3_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x3_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x3_u8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m1x3_t ret = __riscv_th_vlsseg3bu_v_u8m1x3(a, s, vl);
  *v0 = __riscv_vget_v_u8m1x3_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x3_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x3_u8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m1x3_t ret = __riscv_th_vlsseg3bu_v_u8m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m1x3_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x3_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x3_u8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u8m1(uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, word_type vl)
{
  vuint8m1x3_t ret = __riscv_vcreate_v_u8m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u8m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, word_type vl)
{
  vuint8m1x3_t ret = __riscv_vcreate_v_u8m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u8m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i8m1(int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, word_type vl)
{
  vint8m1x3_t ret = __riscv_vcreate_v_i8m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i8m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i8m1_m(vbool8_t mask, int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, word_type vl)
{
  vint8m1x3_t ret = __riscv_vcreate_v_i8m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i8m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u8m1(uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, word_type vl)
{
  vuint8m1x3_t ret = __riscv_vcreate_v_u8m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u8m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u8m1_m(vbool8_t mask, uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, word_type vl)
{
  vuint8m1x3_t ret = __riscv_vcreate_v_u8m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u8m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i8m1(int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, word_type vl)
{
  vint8m1x3_t ret = __riscv_vcreate_v_i8m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i8m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i8m1_m(vbool8_t mask, int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, word_type vl)
{
  vint8m1x3_t ret = __riscv_vcreate_v_i8m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i8m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, const int8_t *a, vuint8m1_t idx, word_type vl)
{
  vint8m1x3_t ret = __riscv_th_vlxseg3b_v_i8m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x3_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x3_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x3_i8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), const int8_t *a, vuint8m1_t idx, word_type vl)
{
  vint8m1x3_t ret = __riscv_th_vlxseg3b_v_i8m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x3_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x3_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x3_i8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, const uint8_t *a, vuint8m1_t idx, word_type vl)
{
  vuint8m1x3_t ret = __riscv_th_vlxseg3bu_v_u8m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x3_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x3_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x3_u8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), const uint8_t *a, vuint8m1_t idx, word_type vl)
{
  vuint8m1x3_t ret = __riscv_th_vlxseg3bu_v_u8m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x3_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x3_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x3_u8m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u8m1(uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, word_type vl)
{
  vuint8m1x3_t ret = __riscv_vcreate_v_u8m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u8m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i8m1(int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, word_type vl)
{
  vint8m1x3_t ret = __riscv_vcreate_v_i8m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i8m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, word_type vl)
{
  vuint8m1x3_t ret = __riscv_vcreate_v_u8m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u8m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i8m1_m(vbool8_t mask, int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, word_type vl)
{
  vint8m1x3_t ret = __riscv_vcreate_v_i8m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i8m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, const int8_t *a, word_type vl)
{
  vint8m2x3_t ret = __riscv_th_vlseg3b_v_i8m2x3(a, vl);
  *v0 = __riscv_vget_v_i8m2x3_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x3_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x3_i8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), vint8m2_t maskedoff2 __attribute__((__unused__)), const int8_t *a, word_type vl)
{
  vint8m2x3_t ret = __riscv_th_vlseg3b_v_i8m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m2x3_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x3_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x3_i8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m2x3_t ret = __riscv_th_vlsseg3b_v_i8m2x3(a, s, vl);
  *v0 = __riscv_vget_v_i8m2x3_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x3_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x3_i8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), vint8m2_t maskedoff2 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m2x3_t ret = __riscv_th_vlsseg3b_v_i8m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m2x3_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x3_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x3_i8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, const uint8_t *a, word_type vl)
{
  vuint8m2x3_t ret = __riscv_th_vlseg3bu_v_u8m2x3(a, vl);
  *v0 = __riscv_vget_v_u8m2x3_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x3_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x3_u8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), vuint8m2_t maskedoff2 __attribute__((__unused__)), const uint8_t *a, word_type vl)
{
  vuint8m2x3_t ret = __riscv_th_vlseg3bu_v_u8m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m2x3_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x3_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x3_u8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m2x3_t ret = __riscv_th_vlsseg3bu_v_u8m2x3(a, s, vl);
  *v0 = __riscv_vget_v_u8m2x3_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x3_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x3_u8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), vuint8m2_t maskedoff2 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m2x3_t ret = __riscv_th_vlsseg3bu_v_u8m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m2x3_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x3_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x3_u8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u8m2(uint8_t *a, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, word_type vl)
{
  vuint8m2x3_t ret = __riscv_vcreate_v_u8m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u8m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u8m2_m(vbool4_t mask, uint8_t *a, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, word_type vl)
{
  vuint8m2x3_t ret = __riscv_vcreate_v_u8m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u8m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i8m2(int8_t *a, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, word_type vl)
{
  vint8m2x3_t ret = __riscv_vcreate_v_i8m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i8m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i8m2_m(vbool4_t mask, int8_t *a, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, word_type vl)
{
  vint8m2x3_t ret = __riscv_vcreate_v_i8m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i8m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u8m2(uint8_t *a, ptrdiff_t s, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, word_type vl)
{
  vuint8m2x3_t ret = __riscv_vcreate_v_u8m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u8m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u8m2_m(vbool4_t mask, uint8_t *a, ptrdiff_t s, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, word_type vl)
{
  vuint8m2x3_t ret = __riscv_vcreate_v_u8m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u8m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i8m2(int8_t *a, ptrdiff_t s, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, word_type vl)
{
  vint8m2x3_t ret = __riscv_vcreate_v_i8m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i8m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i8m2_m(vbool4_t mask, int8_t *a, ptrdiff_t s, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, word_type vl)
{
  vint8m2x3_t ret = __riscv_vcreate_v_i8m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i8m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, const int8_t *a, vuint8m2_t idx, word_type vl)
{
  vint8m2x3_t ret = __riscv_th_vlxseg3b_v_i8m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_i8m2x3_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x3_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x3_i8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), vint8m2_t maskedoff2 __attribute__((__unused__)), const int8_t *a, vuint8m2_t idx, word_type vl)
{
  vint8m2x3_t ret = __riscv_th_vlxseg3b_v_i8m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m2x3_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x3_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x3_i8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, const uint8_t *a, vuint8m2_t idx, word_type vl)
{
  vuint8m2x3_t ret = __riscv_th_vlxseg3bu_v_u8m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_u8m2x3_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x3_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x3_u8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), vuint8m2_t maskedoff2 __attribute__((__unused__)), const uint8_t *a, vuint8m2_t idx, word_type vl)
{
  vuint8m2x3_t ret = __riscv_th_vlxseg3bu_v_u8m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m2x3_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x3_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x3_u8m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u8m2(uint8_t *a, vuint8m2_t idx, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, word_type vl)
{
  vuint8m2x3_t ret = __riscv_vcreate_v_u8m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u8m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i8m2(int8_t *a, vuint8m2_t idx, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, word_type vl)
{
  vint8m2x3_t ret = __riscv_vcreate_v_i8m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i8m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u8m2_m(vbool4_t mask, uint8_t *a, vuint8m2_t idx, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, word_type vl)
{
  vuint8m2x3_t ret = __riscv_vcreate_v_u8m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u8m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i8m2_m(vbool4_t mask, int8_t *a, vuint8m2_t idx, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, word_type vl)
{
  vint8m2x3_t ret = __riscv_vcreate_v_i8m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i8m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, const int16_t *a, word_type vl)
{
  vint16m1x3_t ret = __riscv_th_vlseg3b_v_i16m1x3(a, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m1x3_t ret = __riscv_th_vlseg3b_v_i16m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x3_t ret = __riscv_th_vlsseg3b_v_i16m1x3(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x3_t ret = __riscv_th_vlsseg3b_v_i16m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, const uint16_t *a, word_type vl)
{
  vuint16m1x3_t ret = __riscv_th_vlseg3bu_v_u16m1x3(a, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m1x3_t ret = __riscv_th_vlseg3bu_v_u16m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x3_t ret = __riscv_th_vlsseg3bu_v_u16m1x3(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x3_t ret = __riscv_th_vlsseg3bu_v_u16m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, word_type vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u16m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, word_type vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u16m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, word_type vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i16m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, word_type vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i16m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, word_type vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u16m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, word_type vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u16m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, word_type vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i16m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, word_type vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i16m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x3_t ret = __riscv_th_vlxseg3b_v_i16m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x3_t ret = __riscv_th_vlxseg3b_v_i16m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x3_t ret = __riscv_th_vlxseg3bu_v_u16m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x3_t ret = __riscv_th_vlxseg3bu_v_u16m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, word_type vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u16m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, word_type vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i16m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, word_type vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u16m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, word_type vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i16m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, const int16_t *a, word_type vl)
{
  vint16m2x3_t ret = __riscv_th_vlseg3b_v_i16m2x3(a, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m2x3_t ret = __riscv_th_vlseg3b_v_i16m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m2x3_t ret = __riscv_th_vlsseg3b_v_i16m2x3(a, s, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m2x3_t ret = __riscv_th_vlsseg3b_v_i16m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, const uint16_t *a, word_type vl)
{
  vuint16m2x3_t ret = __riscv_th_vlseg3bu_v_u16m2x3(a, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m2x3_t ret = __riscv_th_vlseg3bu_v_u16m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m2x3_t ret = __riscv_th_vlsseg3bu_v_u16m2x3(a, s, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m2x3_t ret = __riscv_th_vlsseg3bu_v_u16m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u16m2(uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, word_type vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u16m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, word_type vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u16m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i16m2(int16_t *a, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, word_type vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i16m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i16m2_m(vbool8_t mask, int16_t *a, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, word_type vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i16m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u16m2(uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, word_type vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u16m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u16m2_m(vbool8_t mask, uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, word_type vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u16m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i16m2(int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, word_type vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i16m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i16m2_m(vbool8_t mask, int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, word_type vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i16m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, const int16_t *a, vuint16m2_t idx, word_type vl)
{
  vint16m2x3_t ret = __riscv_th_vlxseg3b_v_i16m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), const int16_t *a, vuint16m2_t idx, word_type vl)
{
  vint16m2x3_t ret = __riscv_th_vlxseg3b_v_i16m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, const uint16_t *a, vuint16m2_t idx, word_type vl)
{
  vuint16m2x3_t ret = __riscv_th_vlxseg3bu_v_u16m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, vuint16m2_t idx, word_type vl)
{
  vuint16m2x3_t ret = __riscv_th_vlxseg3bu_v_u16m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u16m2(uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, word_type vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u16m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i16m2(int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, word_type vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i16m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, word_type vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u16m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i16m2_m(vbool8_t mask, int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, word_type vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i16m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, const int32_t *a, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlseg3b_v_i32m1x3(a, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlseg3b_v_i32m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlsseg3b_v_i32m1x3(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlsseg3b_v_i32m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, const uint32_t *a, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlseg3bu_v_u32m1x3(a, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlseg3bu_v_u32m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlsseg3bu_v_u32m1x3(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlsseg3bu_v_u32m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u32m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u32m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i32m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i32m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u32m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u32m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i32m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i32m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlxseg3b_v_i32m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlxseg3b_v_i32m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlxseg3bu_v_u32m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlxseg3bu_v_u32m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u32m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i32m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u32m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i32m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, const int32_t *a, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlseg3b_v_i32m2x3(a, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlseg3b_v_i32m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlsseg3b_v_i32m2x3(a, s, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlsseg3b_v_i32m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, const uint32_t *a, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlseg3bu_v_u32m2x3(a, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlseg3bu_v_u32m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlsseg3bu_v_u32m2x3(a, s, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlsseg3bu_v_u32m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u32m2(uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u32m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u32m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i32m2(int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i32m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i32m2_m(vbool16_t mask, int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i32m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u32m2(uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u32m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u32m2_m(vbool16_t mask, uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u32m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i32m2(int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i32m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i32m2_m(vbool16_t mask, int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i32m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlxseg3b_v_i32m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlxseg3b_v_i32m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlxseg3bu_v_u32m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlxseg3bu_v_u32m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u32m2(uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u32m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i32m2(int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i32m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u32m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i32m2_m(vbool16_t mask, int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i32m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, const int64_t *a, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlseg3b_v_i64m1x3(a, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlseg3b_v_i64m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlsseg3b_v_i64m1x3(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlsseg3b_v_i64m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, const uint64_t *a, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlseg3bu_v_u64m1x3(a, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlseg3bu_v_u64m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlsseg3bu_v_u64m1x3(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlsseg3bu_v_u64m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u64m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u64m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i64m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i64m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u64m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u64m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i64m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i64m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlxseg3b_v_i64m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlxseg3b_v_i64m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlxseg3bu_v_u64m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlxseg3bu_v_u64m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u64m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i64m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u64m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i64m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, const int64_t *a, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlseg3b_v_i64m2x3(a, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3b_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlseg3b_v_i64m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlsseg3b_v_i64m2x3(a, s, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3b_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlsseg3b_v_i64m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, const uint64_t *a, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlseg3bu_v_u64m2x3(a, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3bu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlseg3bu_v_u64m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlsseg3bu_v_u64m2x3(a, s, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3bu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlsseg3bu_v_u64m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u64m2(uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u64m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_u64m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i64m2(int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i64m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3b_v_i64m2_m(vbool32_t mask, int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vsseg3b_v_i64m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u64m2(uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u64m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_u64m2_m(vbool32_t mask, uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_u64m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i64m2(int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i64m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3b_v_i64m2_m(vbool32_t mask, int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vssseg3b_v_i64m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlxseg3b_v_i64m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3b_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlxseg3b_v_i64m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlxseg3bu_v_u64m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3bu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlxseg3bu_v_u64m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u64m2(uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u64m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i64m2(int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i64m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_u64m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3b_v_i64m2_m(vbool32_t mask, int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vsxseg3b_v_i64m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, const int16_t *a, word_type vl)
{
  vint16m1x3_t ret = __riscv_th_vlseg3h_v_i16m1x3(a, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m1x3_t ret = __riscv_th_vlseg3h_v_i16m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x3_t ret = __riscv_th_vlsseg3h_v_i16m1x3(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x3_t ret = __riscv_th_vlsseg3h_v_i16m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, const uint16_t *a, word_type vl)
{
  vuint16m1x3_t ret = __riscv_th_vlseg3hu_v_u16m1x3(a, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m1x3_t ret = __riscv_th_vlseg3hu_v_u16m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x3_t ret = __riscv_th_vlsseg3hu_v_u16m1x3(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x3_t ret = __riscv_th_vlsseg3hu_v_u16m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3h_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, word_type vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_u16m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, word_type vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_u16m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, word_type vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_i16m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, word_type vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_i16m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, word_type vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_u16m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, word_type vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_u16m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, word_type vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_i16m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, word_type vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_i16m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x3_t ret = __riscv_th_vlxseg3h_v_i16m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x3_t ret = __riscv_th_vlxseg3h_v_i16m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x3_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x3_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x3_i16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x3_t ret = __riscv_th_vlxseg3hu_v_u16m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x3_t ret = __riscv_th_vlxseg3hu_v_u16m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x3_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x3_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x3_u16m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, word_type vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_u16m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, word_type vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_i16m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, word_type vl)
{
  vuint16m1x3_t ret = __riscv_vcreate_v_u16m1x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_u16m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, word_type vl)
{
  vint16m1x3_t ret = __riscv_vcreate_v_i16m1x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_i16m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3h_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, const int16_t *a, word_type vl)
{
  vint16m2x3_t ret = __riscv_th_vlseg3h_v_i16m2x3(a, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3h_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m2x3_t ret = __riscv_th_vlseg3h_v_i16m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3h_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m2x3_t ret = __riscv_th_vlsseg3h_v_i16m2x3(a, s, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3h_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m2x3_t ret = __riscv_th_vlsseg3h_v_i16m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3hu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, const uint16_t *a, word_type vl)
{
  vuint16m2x3_t ret = __riscv_th_vlseg3hu_v_u16m2x3(a, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3hu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m2x3_t ret = __riscv_th_vlseg3hu_v_u16m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3hu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m2x3_t ret = __riscv_th_vlsseg3hu_v_u16m2x3(a, s, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3hu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m2x3_t ret = __riscv_th_vlsseg3hu_v_u16m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3h_v_u16m2(uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, word_type vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_u16m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, word_type vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_u16m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_i16m2(int16_t *a, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, word_type vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_i16m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_i16m2_m(vbool8_t mask, int16_t *a, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, word_type vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_i16m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_u16m2(uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, word_type vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_u16m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_u16m2_m(vbool8_t mask, uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, word_type vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_u16m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_i16m2(int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, word_type vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_i16m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_i16m2_m(vbool8_t mask, int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, word_type vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_i16m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3h_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, const int16_t *a, vuint16m2_t idx, word_type vl)
{
  vint16m2x3_t ret = __riscv_th_vlxseg3h_v_i16m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3h_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), const int16_t *a, vuint16m2_t idx, word_type vl)
{
  vint16m2x3_t ret = __riscv_th_vlxseg3h_v_i16m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x3_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x3_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x3_i16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3hu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, const uint16_t *a, vuint16m2_t idx, word_type vl)
{
  vuint16m2x3_t ret = __riscv_th_vlxseg3hu_v_u16m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3hu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), const uint16_t *a, vuint16m2_t idx, word_type vl)
{
  vuint16m2x3_t ret = __riscv_th_vlxseg3hu_v_u16m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x3_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x3_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x3_u16m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_u16m2(uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, word_type vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_u16m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_i16m2(int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, word_type vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_i16m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, word_type vl)
{
  vuint16m2x3_t ret = __riscv_vcreate_v_u16m2x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_u16m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_i16m2_m(vbool8_t mask, int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, word_type vl)
{
  vint16m2x3_t ret = __riscv_vcreate_v_i16m2x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_i16m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, const int32_t *a, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlseg3h_v_i32m1x3(a, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlseg3h_v_i32m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlsseg3h_v_i32m1x3(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlsseg3h_v_i32m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, const uint32_t *a, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlseg3hu_v_u32m1x3(a, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlseg3hu_v_u32m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlsseg3hu_v_u32m1x3(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlsseg3hu_v_u32m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3h_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_u32m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_u32m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_i32m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_i32m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_u32m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_u32m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_i32m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_i32m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlxseg3h_v_i32m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlxseg3h_v_i32m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlxseg3hu_v_u32m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlxseg3hu_v_u32m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_u32m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_i32m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_u32m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_i32m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3h_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, const int32_t *a, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlseg3h_v_i32m2x3(a, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3h_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlseg3h_v_i32m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3h_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlsseg3h_v_i32m2x3(a, s, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3h_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlsseg3h_v_i32m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3hu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, const uint32_t *a, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlseg3hu_v_u32m2x3(a, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3hu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlseg3hu_v_u32m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3hu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlsseg3hu_v_u32m2x3(a, s, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3hu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlsseg3hu_v_u32m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3h_v_u32m2(uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_u32m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_u32m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_i32m2(int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_i32m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_i32m2_m(vbool16_t mask, int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_i32m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_u32m2(uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_u32m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_u32m2_m(vbool16_t mask, uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_u32m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_i32m2(int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_i32m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_i32m2_m(vbool16_t mask, int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_i32m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3h_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlxseg3h_v_i32m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3h_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlxseg3h_v_i32m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3hu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlxseg3hu_v_u32m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3hu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlxseg3hu_v_u32m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_u32m2(uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_u32m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_i32m2(int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_i32m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_u32m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_i32m2_m(vbool16_t mask, int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_i32m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, const int64_t *a, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlseg3h_v_i64m1x3(a, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlseg3h_v_i64m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlsseg3h_v_i64m1x3(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlsseg3h_v_i64m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, const uint64_t *a, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlseg3hu_v_u64m1x3(a, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlseg3hu_v_u64m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlsseg3hu_v_u64m1x3(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlsseg3hu_v_u64m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3h_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_u64m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_u64m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_i64m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_i64m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_u64m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_u64m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_i64m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_i64m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlxseg3h_v_i64m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlxseg3h_v_i64m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlxseg3hu_v_u64m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlxseg3hu_v_u64m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_u64m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_i64m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_u64m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_i64m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3h_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, const int64_t *a, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlseg3h_v_i64m2x3(a, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3h_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlseg3h_v_i64m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3h_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlsseg3h_v_i64m2x3(a, s, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3h_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlsseg3h_v_i64m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3hu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, const uint64_t *a, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlseg3hu_v_u64m2x3(a, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3hu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlseg3hu_v_u64m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3hu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlsseg3hu_v_u64m2x3(a, s, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3hu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlsseg3hu_v_u64m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3h_v_u64m2(uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_u64m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_u64m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_i64m2(int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_i64m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3h_v_i64m2_m(vbool32_t mask, int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vsseg3h_v_i64m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_u64m2(uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_u64m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_u64m2_m(vbool32_t mask, uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_u64m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_i64m2(int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_i64m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3h_v_i64m2_m(vbool32_t mask, int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vssseg3h_v_i64m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3h_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlxseg3h_v_i64m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3h_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlxseg3h_v_i64m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3hu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlxseg3hu_v_u64m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3hu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlxseg3hu_v_u64m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_u64m2(uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_u64m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_i64m2(int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_i64m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_u64m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3h_v_i64m2_m(vbool32_t mask, int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vsxseg3h_v_i64m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, const int32_t *a, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlseg3w_v_i32m1x3(a, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlseg3w_v_i32m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlsseg3w_v_i32m1x3(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlsseg3w_v_i32m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, const uint32_t *a, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlseg3wu_v_u32m1x3(a, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlseg3wu_v_u32m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlsseg3wu_v_u32m1x3(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlsseg3wu_v_u32m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3w_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_u32m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3w_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_u32m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3w_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_i32m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3w_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_i32m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_u32m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_u32m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_i32m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_i32m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlxseg3w_v_i32m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x3_t ret = __riscv_th_vlxseg3w_v_i32m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x3_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x3_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x3_i32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlxseg3wu_v_u32m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x3_t ret = __riscv_th_vlxseg3wu_v_u32m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x3_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x3_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x3_u32m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_u32m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_i32m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, word_type vl)
{
  vuint32m1x3_t ret = __riscv_vcreate_v_u32m1x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_u32m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, word_type vl)
{
  vint32m1x3_t ret = __riscv_vcreate_v_i32m1x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_i32m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3w_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, const int32_t *a, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlseg3w_v_i32m2x3(a, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3w_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlseg3w_v_i32m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3w_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlsseg3w_v_i32m2x3(a, s, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3w_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlsseg3w_v_i32m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3wu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, const uint32_t *a, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlseg3wu_v_u32m2x3(a, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3wu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlseg3wu_v_u32m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3wu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlsseg3wu_v_u32m2x3(a, s, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3wu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlsseg3wu_v_u32m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3w_v_u32m2(uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_u32m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3w_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_u32m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3w_v_i32m2(int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_i32m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3w_v_i32m2_m(vbool16_t mask, int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_i32m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_u32m2(uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_u32m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_u32m2_m(vbool16_t mask, uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_u32m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_i32m2(int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_i32m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_i32m2_m(vbool16_t mask, int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_i32m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3w_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlxseg3w_v_i32m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3w_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x3_t ret = __riscv_th_vlxseg3w_v_i32m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x3_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x3_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x3_i32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3wu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlxseg3wu_v_u32m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3wu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x3_t ret = __riscv_th_vlxseg3wu_v_u32m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x3_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x3_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x3_u32m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_u32m2(uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_u32m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_i32m2(int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_i32m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, word_type vl)
{
  vuint32m2x3_t ret = __riscv_vcreate_v_u32m2x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_u32m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_i32m2_m(vbool16_t mask, int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, word_type vl)
{
  vint32m2x3_t ret = __riscv_vcreate_v_i32m2x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_i32m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, const int64_t *a, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlseg3w_v_i64m1x3(a, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlseg3w_v_i64m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlsseg3w_v_i64m1x3(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlsseg3w_v_i64m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, const uint64_t *a, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlseg3wu_v_u64m1x3(a, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlseg3wu_v_u64m1x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlsseg3wu_v_u64m1x3(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlsseg3wu_v_u64m1x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3w_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_u64m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3w_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_u64m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3w_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_i64m1x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3w_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_i64m1x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_u64m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_u64m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_i64m1x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_i64m1x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlxseg3w_v_i64m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x3_t ret = __riscv_th_vlxseg3w_v_i64m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x3_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x3_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x3_i64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlxseg3wu_v_u64m1x3(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x3_t ret = __riscv_th_vlxseg3wu_v_u64m1x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x3_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x3_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x3_u64m1(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_u64m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_i64m1x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, word_type vl)
{
  vuint64m1x3_t ret = __riscv_vcreate_v_u64m1x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_u64m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, word_type vl)
{
  vint64m1x3_t ret = __riscv_vcreate_v_i64m1x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_i64m1x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg3w_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, const int64_t *a, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlseg3w_v_i64m2x3(a, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3w_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlseg3w_v_i64m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3w_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlsseg3w_v_i64m2x3(a, s, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3w_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlsseg3w_v_i64m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3wu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, const uint64_t *a, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlseg3wu_v_u64m2x3(a, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlseg3wu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlseg3wu_v_u64m2x3_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3wu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlsseg3wu_v_u64m2x3(a, s, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlsseg3wu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlsseg3wu_v_u64m2x3_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsseg3w_v_u64m2(uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_u64m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3w_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_u64m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3w_v_i64m2(int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_i64m2x3(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg3w_v_i64m2_m(vbool32_t mask, int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vsseg3w_v_i64m2x3_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_u64m2(uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_u64m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_u64m2_m(vbool32_t mask, uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_u64m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_i64m2(int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_i64m2x3(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg3w_v_i64m2_m(vbool32_t mask, int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vssseg3w_v_i64m2x3_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg3w_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlxseg3w_v_i64m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3w_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x3_t ret = __riscv_th_vlxseg3w_v_i64m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x3_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x3_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x3_i64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3wu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlxseg3wu_v_u64m2x3(a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vlxseg3wu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x3_t ret = __riscv_th_vlxseg3wu_v_u64m2x3_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x3_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x3_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x3_u64m2(ret, 2);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_u64m2(uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_u64m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_i64m2(int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_i64m2x3(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, word_type vl)
{
  vuint64m2x3_t ret = __riscv_vcreate_v_u64m2x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_u64m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg3w_v_i64m2_m(vbool32_t mask, int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, word_type vl)
{
  vint64m2x3_t ret = __riscv_vcreate_v_i64m2x3(v0, v1, v2);
  __riscv_th_vsxseg3w_v_i64m2x3_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, const int8_t *a, word_type vl)
{
  vint8m1x4_t ret = __riscv_th_vlseg4b_v_i8m1x4(a, vl);
  *v0 = __riscv_vget_v_i8m1x4_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x4_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x4_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x4_i8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), const int8_t *a, word_type vl)
{
  vint8m1x4_t ret = __riscv_th_vlseg4b_v_i8m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m1x4_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x4_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x4_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x4_i8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m1x4_t ret = __riscv_th_vlsseg4b_v_i8m1x4(a, s, vl);
  *v0 = __riscv_vget_v_i8m1x4_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x4_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x4_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x4_i8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m1x4_t ret = __riscv_th_vlsseg4b_v_i8m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m1x4_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x4_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x4_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x4_i8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, const uint8_t *a, word_type vl)
{
  vuint8m1x4_t ret = __riscv_th_vlseg4bu_v_u8m1x4(a, vl);
  *v0 = __riscv_vget_v_u8m1x4_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x4_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x4_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x4_u8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), const uint8_t *a, word_type vl)
{
  vuint8m1x4_t ret = __riscv_th_vlseg4bu_v_u8m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m1x4_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x4_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x4_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x4_u8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m1x4_t ret = __riscv_th_vlsseg4bu_v_u8m1x4(a, s, vl);
  *v0 = __riscv_vget_v_u8m1x4_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x4_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x4_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x4_u8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m1x4_t ret = __riscv_th_vlsseg4bu_v_u8m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m1x4_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x4_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x4_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x4_u8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u8m1(uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, word_type vl)
{
  vuint8m1x4_t ret = __riscv_vcreate_v_u8m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u8m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, word_type vl)
{
  vuint8m1x4_t ret = __riscv_vcreate_v_u8m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u8m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i8m1(int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, word_type vl)
{
  vint8m1x4_t ret = __riscv_vcreate_v_i8m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i8m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i8m1_m(vbool8_t mask, int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, word_type vl)
{
  vint8m1x4_t ret = __riscv_vcreate_v_i8m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i8m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u8m1(uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, word_type vl)
{
  vuint8m1x4_t ret = __riscv_vcreate_v_u8m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u8m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u8m1_m(vbool8_t mask, uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, word_type vl)
{
  vuint8m1x4_t ret = __riscv_vcreate_v_u8m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u8m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i8m1(int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, word_type vl)
{
  vint8m1x4_t ret = __riscv_vcreate_v_i8m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i8m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i8m1_m(vbool8_t mask, int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, word_type vl)
{
  vint8m1x4_t ret = __riscv_vcreate_v_i8m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i8m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, const int8_t *a, vuint8m1_t idx, word_type vl)
{
  vint8m1x4_t ret = __riscv_th_vlxseg4b_v_i8m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x4_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x4_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x4_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x4_i8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), const int8_t *a, vuint8m1_t idx, word_type vl)
{
  vint8m1x4_t ret = __riscv_th_vlxseg4b_v_i8m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x4_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x4_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x4_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x4_i8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, const uint8_t *a, vuint8m1_t idx, word_type vl)
{
  vuint8m1x4_t ret = __riscv_th_vlxseg4bu_v_u8m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x4_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x4_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x4_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x4_u8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), const uint8_t *a, vuint8m1_t idx, word_type vl)
{
  vuint8m1x4_t ret = __riscv_th_vlxseg4bu_v_u8m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x4_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x4_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x4_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x4_u8m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u8m1(uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, word_type vl)
{
  vuint8m1x4_t ret = __riscv_vcreate_v_u8m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u8m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i8m1(int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, word_type vl)
{
  vint8m1x4_t ret = __riscv_vcreate_v_i8m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i8m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, word_type vl)
{
  vuint8m1x4_t ret = __riscv_vcreate_v_u8m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u8m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i8m1_m(vbool8_t mask, int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, word_type vl)
{
  vint8m1x4_t ret = __riscv_vcreate_v_i8m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i8m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t *v3, const int8_t *a, word_type vl)
{
  vint8m2x4_t ret = __riscv_th_vlseg4b_v_i8m2x4(a, vl);
  *v0 = __riscv_vget_v_i8m2x4_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x4_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x4_i8m2(ret, 2);
  *v3 = __riscv_vget_v_i8m2x4_i8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t *v3, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), vint8m2_t maskedoff2 __attribute__((__unused__)), vint8m2_t maskedoff3 __attribute__((__unused__)), const int8_t *a, word_type vl)
{
  vint8m2x4_t ret = __riscv_th_vlseg4b_v_i8m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m2x4_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x4_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x4_i8m2(ret, 2);
  *v3 = __riscv_vget_v_i8m2x4_i8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t *v3, const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m2x4_t ret = __riscv_th_vlsseg4b_v_i8m2x4(a, s, vl);
  *v0 = __riscv_vget_v_i8m2x4_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x4_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x4_i8m2(ret, 2);
  *v3 = __riscv_vget_v_i8m2x4_i8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t *v3, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), vint8m2_t maskedoff2 __attribute__((__unused__)), vint8m2_t maskedoff3 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m2x4_t ret = __riscv_th_vlsseg4b_v_i8m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m2x4_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x4_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x4_i8m2(ret, 2);
  *v3 = __riscv_vget_v_i8m2x4_i8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t *v3, const uint8_t *a, word_type vl)
{
  vuint8m2x4_t ret = __riscv_th_vlseg4bu_v_u8m2x4(a, vl);
  *v0 = __riscv_vget_v_u8m2x4_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x4_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x4_u8m2(ret, 2);
  *v3 = __riscv_vget_v_u8m2x4_u8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t *v3, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), vuint8m2_t maskedoff2 __attribute__((__unused__)), vuint8m2_t maskedoff3 __attribute__((__unused__)), const uint8_t *a, word_type vl)
{
  vuint8m2x4_t ret = __riscv_th_vlseg4bu_v_u8m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m2x4_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x4_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x4_u8m2(ret, 2);
  *v3 = __riscv_vget_v_u8m2x4_u8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t *v3, const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m2x4_t ret = __riscv_th_vlsseg4bu_v_u8m2x4(a, s, vl);
  *v0 = __riscv_vget_v_u8m2x4_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x4_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x4_u8m2(ret, 2);
  *v3 = __riscv_vget_v_u8m2x4_u8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t *v3, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), vuint8m2_t maskedoff2 __attribute__((__unused__)), vuint8m2_t maskedoff3 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m2x4_t ret = __riscv_th_vlsseg4bu_v_u8m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m2x4_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x4_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x4_u8m2(ret, 2);
  *v3 = __riscv_vget_v_u8m2x4_u8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u8m2(uint8_t *a, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, word_type vl)
{
  vuint8m2x4_t ret = __riscv_vcreate_v_u8m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u8m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u8m2_m(vbool4_t mask, uint8_t *a, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, word_type vl)
{
  vuint8m2x4_t ret = __riscv_vcreate_v_u8m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u8m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i8m2(int8_t *a, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3, word_type vl)
{
  vint8m2x4_t ret = __riscv_vcreate_v_i8m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i8m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i8m2_m(vbool4_t mask, int8_t *a, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3, word_type vl)
{
  vint8m2x4_t ret = __riscv_vcreate_v_i8m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i8m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u8m2(uint8_t *a, ptrdiff_t s, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, word_type vl)
{
  vuint8m2x4_t ret = __riscv_vcreate_v_u8m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u8m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u8m2_m(vbool4_t mask, uint8_t *a, ptrdiff_t s, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, word_type vl)
{
  vuint8m2x4_t ret = __riscv_vcreate_v_u8m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u8m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i8m2(int8_t *a, ptrdiff_t s, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3, word_type vl)
{
  vint8m2x4_t ret = __riscv_vcreate_v_i8m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i8m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i8m2_m(vbool4_t mask, int8_t *a, ptrdiff_t s, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3, word_type vl)
{
  vint8m2x4_t ret = __riscv_vcreate_v_i8m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i8m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t *v3, const int8_t *a, vuint8m2_t idx, word_type vl)
{
  vint8m2x4_t ret = __riscv_th_vlxseg4b_v_i8m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_i8m2x4_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x4_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x4_i8m2(ret, 2);
  *v3 = __riscv_vget_v_i8m2x4_i8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t *v3, vbool4_t mask, vint8m2_t maskedoff0 __attribute__((__unused__)), vint8m2_t maskedoff1 __attribute__((__unused__)), vint8m2_t maskedoff2 __attribute__((__unused__)), vint8m2_t maskedoff3 __attribute__((__unused__)), const int8_t *a, vuint8m2_t idx, word_type vl)
{
  vint8m2x4_t ret = __riscv_th_vlxseg4b_v_i8m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m2x4_i8m2(ret, 0);
  *v1 = __riscv_vget_v_i8m2x4_i8m2(ret, 1);
  *v2 = __riscv_vget_v_i8m2x4_i8m2(ret, 2);
  *v3 = __riscv_vget_v_i8m2x4_i8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t *v3, const uint8_t *a, vuint8m2_t idx, word_type vl)
{
  vuint8m2x4_t ret = __riscv_th_vlxseg4bu_v_u8m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_u8m2x4_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x4_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x4_u8m2(ret, 2);
  *v3 = __riscv_vget_v_u8m2x4_u8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t *v3, vbool4_t mask, vuint8m2_t maskedoff0 __attribute__((__unused__)), vuint8m2_t maskedoff1 __attribute__((__unused__)), vuint8m2_t maskedoff2 __attribute__((__unused__)), vuint8m2_t maskedoff3 __attribute__((__unused__)), const uint8_t *a, vuint8m2_t idx, word_type vl)
{
  vuint8m2x4_t ret = __riscv_th_vlxseg4bu_v_u8m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m2x4_u8m2(ret, 0);
  *v1 = __riscv_vget_v_u8m2x4_u8m2(ret, 1);
  *v2 = __riscv_vget_v_u8m2x4_u8m2(ret, 2);
  *v3 = __riscv_vget_v_u8m2x4_u8m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u8m2(uint8_t *a, vuint8m2_t idx, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, word_type vl)
{
  vuint8m2x4_t ret = __riscv_vcreate_v_u8m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u8m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i8m2(int8_t *a, vuint8m2_t idx, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3, word_type vl)
{
  vint8m2x4_t ret = __riscv_vcreate_v_i8m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i8m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u8m2_m(vbool4_t mask, uint8_t *a, vuint8m2_t idx, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, word_type vl)
{
  vuint8m2x4_t ret = __riscv_vcreate_v_u8m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u8m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i8m2_m(vbool4_t mask, int8_t *a, vuint8m2_t idx, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3, word_type vl)
{
  vint8m2x4_t ret = __riscv_vcreate_v_i8m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i8m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, const int16_t *a, word_type vl)
{
  vint16m1x4_t ret = __riscv_th_vlseg4b_v_i16m1x4(a, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m1x4_t ret = __riscv_th_vlseg4b_v_i16m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x4_t ret = __riscv_th_vlsseg4b_v_i16m1x4(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x4_t ret = __riscv_th_vlsseg4b_v_i16m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, const uint16_t *a, word_type vl)
{
  vuint16m1x4_t ret = __riscv_th_vlseg4bu_v_u16m1x4(a, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m1x4_t ret = __riscv_th_vlseg4bu_v_u16m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x4_t ret = __riscv_th_vlsseg4bu_v_u16m1x4(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x4_t ret = __riscv_th_vlsseg4bu_v_u16m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, word_type vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u16m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, word_type vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u16m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, word_type vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i16m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, word_type vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i16m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, word_type vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u16m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, word_type vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u16m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, word_type vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i16m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, word_type vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i16m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x4_t ret = __riscv_th_vlxseg4b_v_i16m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x4_t ret = __riscv_th_vlxseg4b_v_i16m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x4_t ret = __riscv_th_vlxseg4bu_v_u16m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x4_t ret = __riscv_th_vlxseg4bu_v_u16m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, word_type vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u16m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, word_type vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i16m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, word_type vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u16m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, word_type vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i16m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, const int16_t *a, word_type vl)
{
  vint16m2x4_t ret = __riscv_th_vlseg4b_v_i16m2x4(a, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), vint16m2_t maskedoff3 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m2x4_t ret = __riscv_th_vlseg4b_v_i16m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m2x4_t ret = __riscv_th_vlsseg4b_v_i16m2x4(a, s, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), vint16m2_t maskedoff3 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m2x4_t ret = __riscv_th_vlsseg4b_v_i16m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, const uint16_t *a, word_type vl)
{
  vuint16m2x4_t ret = __riscv_th_vlseg4bu_v_u16m2x4(a, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), vuint16m2_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m2x4_t ret = __riscv_th_vlseg4bu_v_u16m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m2x4_t ret = __riscv_th_vlsseg4bu_v_u16m2x4(a, s, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), vuint16m2_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m2x4_t ret = __riscv_th_vlsseg4bu_v_u16m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u16m2(uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, word_type vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u16m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, word_type vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u16m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i16m2(int16_t *a, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, word_type vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i16m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i16m2_m(vbool8_t mask, int16_t *a, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, word_type vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i16m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u16m2(uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, word_type vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u16m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u16m2_m(vbool8_t mask, uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, word_type vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u16m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i16m2(int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, word_type vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i16m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i16m2_m(vbool8_t mask, int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, word_type vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i16m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, const int16_t *a, vuint16m2_t idx, word_type vl)
{
  vint16m2x4_t ret = __riscv_th_vlxseg4b_v_i16m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), vint16m2_t maskedoff3 __attribute__((__unused__)), const int16_t *a, vuint16m2_t idx, word_type vl)
{
  vint16m2x4_t ret = __riscv_th_vlxseg4b_v_i16m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, const uint16_t *a, vuint16m2_t idx, word_type vl)
{
  vuint16m2x4_t ret = __riscv_th_vlxseg4bu_v_u16m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), vuint16m2_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, vuint16m2_t idx, word_type vl)
{
  vuint16m2x4_t ret = __riscv_th_vlxseg4bu_v_u16m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u16m2(uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, word_type vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u16m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i16m2(int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, word_type vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i16m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, word_type vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u16m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i16m2_m(vbool8_t mask, int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, word_type vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i16m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *a, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlseg4b_v_i32m1x4(a, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlseg4b_v_i32m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlsseg4b_v_i32m1x4(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlsseg4b_v_i32m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *a, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlseg4bu_v_u32m1x4(a, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlseg4bu_v_u32m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlsseg4bu_v_u32m1x4(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlsseg4bu_v_u32m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u32m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u32m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i32m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i32m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u32m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u32m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i32m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i32m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlxseg4b_v_i32m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlxseg4b_v_i32m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlxseg4bu_v_u32m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlxseg4bu_v_u32m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u32m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i32m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u32m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i32m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *a, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlseg4b_v_i32m2x4(a, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), vint32m2_t maskedoff3 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlseg4b_v_i32m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlsseg4b_v_i32m2x4(a, s, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), vint32m2_t maskedoff3 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlsseg4b_v_i32m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *a, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlseg4bu_v_u32m2x4(a, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), vuint32m2_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlseg4bu_v_u32m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlsseg4bu_v_u32m2x4(a, s, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), vuint32m2_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlsseg4bu_v_u32m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u32m2(uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u32m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u32m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i32m2(int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i32m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i32m2_m(vbool16_t mask, int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i32m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u32m2(uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u32m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u32m2_m(vbool16_t mask, uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u32m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i32m2(int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i32m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i32m2_m(vbool16_t mask, int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i32m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlxseg4b_v_i32m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), vint32m2_t maskedoff3 __attribute__((__unused__)), const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlxseg4b_v_i32m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlxseg4bu_v_u32m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), vuint32m2_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlxseg4bu_v_u32m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u32m2(uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u32m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i32m2(int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i32m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u32m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i32m2_m(vbool16_t mask, int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i32m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, const int64_t *a, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlseg4b_v_i64m1x4(a, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlseg4b_v_i64m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlsseg4b_v_i64m1x4(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlsseg4b_v_i64m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, const uint64_t *a, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlseg4bu_v_u64m1x4(a, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlseg4bu_v_u64m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlsseg4bu_v_u64m1x4(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlsseg4bu_v_u64m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u64m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u64m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i64m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i64m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u64m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u64m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i64m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i64m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlxseg4b_v_i64m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlxseg4b_v_i64m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlxseg4bu_v_u64m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlxseg4bu_v_u64m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u64m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i64m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u64m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i64m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, const int64_t *a, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlseg4b_v_i64m2x4(a, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4b_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), vint64m2_t maskedoff3 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlseg4b_v_i64m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlsseg4b_v_i64m2x4(a, s, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4b_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), vint64m2_t maskedoff3 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlsseg4b_v_i64m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, const uint64_t *a, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlseg4bu_v_u64m2x4(a, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4bu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), vuint64m2_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlseg4bu_v_u64m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlsseg4bu_v_u64m2x4(a, s, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4bu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), vuint64m2_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlsseg4bu_v_u64m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u64m2(uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u64m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_u64m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i64m2(int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i64m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4b_v_i64m2_m(vbool32_t mask, int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4b_v_i64m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u64m2(uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u64m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_u64m2_m(vbool32_t mask, uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_u64m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i64m2(int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i64m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4b_v_i64m2_m(vbool32_t mask, int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4b_v_i64m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlxseg4b_v_i64m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4b_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), vint64m2_t maskedoff3 __attribute__((__unused__)), const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlxseg4b_v_i64m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlxseg4bu_v_u64m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4bu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), vuint64m2_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlxseg4bu_v_u64m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u64m2(uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u64m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i64m2(int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i64m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_u64m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4b_v_i64m2_m(vbool32_t mask, int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4b_v_i64m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, const int16_t *a, word_type vl)
{
  vint16m1x4_t ret = __riscv_th_vlseg4h_v_i16m1x4(a, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m1x4_t ret = __riscv_th_vlseg4h_v_i16m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x4_t ret = __riscv_th_vlsseg4h_v_i16m1x4(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x4_t ret = __riscv_th_vlsseg4h_v_i16m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, const uint16_t *a, word_type vl)
{
  vuint16m1x4_t ret = __riscv_th_vlseg4hu_v_u16m1x4(a, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m1x4_t ret = __riscv_th_vlseg4hu_v_u16m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x4_t ret = __riscv_th_vlsseg4hu_v_u16m1x4(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x4_t ret = __riscv_th_vlsseg4hu_v_u16m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4h_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, word_type vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_u16m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, word_type vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_u16m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, word_type vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_i16m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, word_type vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_i16m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, word_type vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_u16m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, word_type vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_u16m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, word_type vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_i16m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, word_type vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_i16m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x4_t ret = __riscv_th_vlxseg4h_v_i16m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x4_t ret = __riscv_th_vlxseg4h_v_i16m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x4_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x4_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x4_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x4_i16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x4_t ret = __riscv_th_vlxseg4hu_v_u16m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x4_t ret = __riscv_th_vlxseg4hu_v_u16m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x4_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x4_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x4_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x4_u16m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, word_type vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_u16m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, word_type vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_i16m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, word_type vl)
{
  vuint16m1x4_t ret = __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_u16m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, word_type vl)
{
  vint16m1x4_t ret = __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_i16m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4h_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, const int16_t *a, word_type vl)
{
  vint16m2x4_t ret = __riscv_th_vlseg4h_v_i16m2x4(a, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4h_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), vint16m2_t maskedoff3 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m2x4_t ret = __riscv_th_vlseg4h_v_i16m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4h_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m2x4_t ret = __riscv_th_vlsseg4h_v_i16m2x4(a, s, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4h_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), vint16m2_t maskedoff3 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m2x4_t ret = __riscv_th_vlsseg4h_v_i16m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4hu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, const uint16_t *a, word_type vl)
{
  vuint16m2x4_t ret = __riscv_th_vlseg4hu_v_u16m2x4(a, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4hu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), vuint16m2_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m2x4_t ret = __riscv_th_vlseg4hu_v_u16m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4hu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m2x4_t ret = __riscv_th_vlsseg4hu_v_u16m2x4(a, s, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4hu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), vuint16m2_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m2x4_t ret = __riscv_th_vlsseg4hu_v_u16m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4h_v_u16m2(uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, word_type vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_u16m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, word_type vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_u16m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_i16m2(int16_t *a, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, word_type vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_i16m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_i16m2_m(vbool8_t mask, int16_t *a, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, word_type vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_i16m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_u16m2(uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, word_type vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_u16m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_u16m2_m(vbool8_t mask, uint16_t *a, ptrdiff_t s, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, word_type vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_u16m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_i16m2(int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, word_type vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_i16m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_i16m2_m(vbool8_t mask, int16_t *a, ptrdiff_t s, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, word_type vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_i16m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4h_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, const int16_t *a, vuint16m2_t idx, word_type vl)
{
  vint16m2x4_t ret = __riscv_th_vlxseg4h_v_i16m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4h_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vbool8_t mask, vint16m2_t maskedoff0 __attribute__((__unused__)), vint16m2_t maskedoff1 __attribute__((__unused__)), vint16m2_t maskedoff2 __attribute__((__unused__)), vint16m2_t maskedoff3 __attribute__((__unused__)), const int16_t *a, vuint16m2_t idx, word_type vl)
{
  vint16m2x4_t ret = __riscv_th_vlxseg4h_v_i16m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m2x4_i16m2(ret, 0);
  *v1 = __riscv_vget_v_i16m2x4_i16m2(ret, 1);
  *v2 = __riscv_vget_v_i16m2x4_i16m2(ret, 2);
  *v3 = __riscv_vget_v_i16m2x4_i16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4hu_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, const uint16_t *a, vuint16m2_t idx, word_type vl)
{
  vuint16m2x4_t ret = __riscv_th_vlxseg4hu_v_u16m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4hu_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vbool8_t mask, vuint16m2_t maskedoff0 __attribute__((__unused__)), vuint16m2_t maskedoff1 __attribute__((__unused__)), vuint16m2_t maskedoff2 __attribute__((__unused__)), vuint16m2_t maskedoff3 __attribute__((__unused__)), const uint16_t *a, vuint16m2_t idx, word_type vl)
{
  vuint16m2x4_t ret = __riscv_th_vlxseg4hu_v_u16m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m2x4_u16m2(ret, 0);
  *v1 = __riscv_vget_v_u16m2x4_u16m2(ret, 1);
  *v2 = __riscv_vget_v_u16m2x4_u16m2(ret, 2);
  *v3 = __riscv_vget_v_u16m2x4_u16m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_u16m2(uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, word_type vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_u16m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_i16m2(int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, word_type vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_i16m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_u16m2_m(vbool8_t mask, uint16_t *a, vuint16m2_t idx, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, word_type vl)
{
  vuint16m2x4_t ret = __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_u16m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_i16m2_m(vbool8_t mask, int16_t *a, vuint16m2_t idx, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3, word_type vl)
{
  vint16m2x4_t ret = __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_i16m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *a, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlseg4h_v_i32m1x4(a, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlseg4h_v_i32m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlsseg4h_v_i32m1x4(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlsseg4h_v_i32m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *a, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlseg4hu_v_u32m1x4(a, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlseg4hu_v_u32m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlsseg4hu_v_u32m1x4(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlsseg4hu_v_u32m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4h_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_u32m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_u32m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_i32m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_i32m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_u32m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_u32m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_i32m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_i32m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlxseg4h_v_i32m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlxseg4h_v_i32m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlxseg4hu_v_u32m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlxseg4hu_v_u32m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_u32m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_i32m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_u32m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_i32m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4h_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *a, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlseg4h_v_i32m2x4(a, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4h_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), vint32m2_t maskedoff3 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlseg4h_v_i32m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4h_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlsseg4h_v_i32m2x4(a, s, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4h_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), vint32m2_t maskedoff3 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlsseg4h_v_i32m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4hu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *a, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlseg4hu_v_u32m2x4(a, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4hu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), vuint32m2_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlseg4hu_v_u32m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4hu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlsseg4hu_v_u32m2x4(a, s, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4hu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), vuint32m2_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlsseg4hu_v_u32m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4h_v_u32m2(uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_u32m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_u32m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_i32m2(int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_i32m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_i32m2_m(vbool16_t mask, int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_i32m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_u32m2(uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_u32m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_u32m2_m(vbool16_t mask, uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_u32m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_i32m2(int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_i32m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_i32m2_m(vbool16_t mask, int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_i32m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4h_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlxseg4h_v_i32m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4h_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), vint32m2_t maskedoff3 __attribute__((__unused__)), const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlxseg4h_v_i32m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4hu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlxseg4hu_v_u32m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4hu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), vuint32m2_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlxseg4hu_v_u32m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_u32m2(uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_u32m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_i32m2(int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_i32m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_u32m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_i32m2_m(vbool16_t mask, int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_i32m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, const int64_t *a, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlseg4h_v_i64m1x4(a, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlseg4h_v_i64m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlsseg4h_v_i64m1x4(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlsseg4h_v_i64m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, const uint64_t *a, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlseg4hu_v_u64m1x4(a, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlseg4hu_v_u64m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlsseg4hu_v_u64m1x4(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlsseg4hu_v_u64m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4h_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_u64m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_u64m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_i64m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_i64m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_u64m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_u64m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_i64m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_i64m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlxseg4h_v_i64m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlxseg4h_v_i64m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlxseg4hu_v_u64m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlxseg4hu_v_u64m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_u64m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_i64m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_u64m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_i64m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4h_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, const int64_t *a, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlseg4h_v_i64m2x4(a, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4h_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), vint64m2_t maskedoff3 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlseg4h_v_i64m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4h_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlsseg4h_v_i64m2x4(a, s, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4h_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), vint64m2_t maskedoff3 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlsseg4h_v_i64m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4hu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, const uint64_t *a, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlseg4hu_v_u64m2x4(a, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4hu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), vuint64m2_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlseg4hu_v_u64m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4hu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlsseg4hu_v_u64m2x4(a, s, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4hu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), vuint64m2_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlsseg4hu_v_u64m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4h_v_u64m2(uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_u64m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_u64m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_i64m2(int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_i64m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4h_v_i64m2_m(vbool32_t mask, int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4h_v_i64m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_u64m2(uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_u64m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_u64m2_m(vbool32_t mask, uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_u64m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_i64m2(int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_i64m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4h_v_i64m2_m(vbool32_t mask, int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4h_v_i64m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4h_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlxseg4h_v_i64m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4h_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), vint64m2_t maskedoff3 __attribute__((__unused__)), const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlxseg4h_v_i64m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4hu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlxseg4hu_v_u64m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4hu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), vuint64m2_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlxseg4hu_v_u64m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_u64m2(uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_u64m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_i64m2(int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_i64m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_u64m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4h_v_i64m2_m(vbool32_t mask, int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4h_v_i64m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *a, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlseg4w_v_i32m1x4(a, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlseg4w_v_i32m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlsseg4w_v_i32m1x4(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlsseg4w_v_i32m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *a, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlseg4wu_v_u32m1x4(a, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlseg4wu_v_u32m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlsseg4wu_v_u32m1x4(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlsseg4wu_v_u32m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4w_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_u32m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4w_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_u32m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4w_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_i32m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4w_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_i32m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_u32m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_u32m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_i32m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_i32m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlxseg4w_v_i32m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x4_t ret = __riscv_th_vlxseg4w_v_i32m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x4_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x4_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x4_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x4_i32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlxseg4wu_v_u32m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x4_t ret = __riscv_th_vlxseg4wu_v_u32m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x4_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x4_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x4_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x4_u32m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_u32m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_i32m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, word_type vl)
{
  vuint32m1x4_t ret = __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_u32m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, word_type vl)
{
  vint32m1x4_t ret = __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_i32m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4w_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *a, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlseg4w_v_i32m2x4(a, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4w_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), vint32m2_t maskedoff3 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlseg4w_v_i32m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4w_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlsseg4w_v_i32m2x4(a, s, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4w_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), vint32m2_t maskedoff3 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlsseg4w_v_i32m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4wu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *a, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlseg4wu_v_u32m2x4(a, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4wu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), vuint32m2_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlseg4wu_v_u32m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4wu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlsseg4wu_v_u32m2x4(a, s, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4wu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), vuint32m2_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlsseg4wu_v_u32m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4w_v_u32m2(uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_u32m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4w_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_u32m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4w_v_i32m2(int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_i32m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4w_v_i32m2_m(vbool16_t mask, int32_t *a, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_i32m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_u32m2(uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_u32m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_u32m2_m(vbool16_t mask, uint32_t *a, ptrdiff_t s, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_u32m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_i32m2(int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_i32m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_i32m2_m(vbool16_t mask, int32_t *a, ptrdiff_t s, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_i32m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4w_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlxseg4w_v_i32m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4w_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0 __attribute__((__unused__)), vint32m2_t maskedoff1 __attribute__((__unused__)), vint32m2_t maskedoff2 __attribute__((__unused__)), vint32m2_t maskedoff3 __attribute__((__unused__)), const int32_t *a, vuint32m2_t idx, word_type vl)
{
  vint32m2x4_t ret = __riscv_th_vlxseg4w_v_i32m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m2x4_i32m2(ret, 0);
  *v1 = __riscv_vget_v_i32m2x4_i32m2(ret, 1);
  *v2 = __riscv_vget_v_i32m2x4_i32m2(ret, 2);
  *v3 = __riscv_vget_v_i32m2x4_i32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4wu_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlxseg4wu_v_u32m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4wu_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0 __attribute__((__unused__)), vuint32m2_t maskedoff1 __attribute__((__unused__)), vuint32m2_t maskedoff2 __attribute__((__unused__)), vuint32m2_t maskedoff3 __attribute__((__unused__)), const uint32_t *a, vuint32m2_t idx, word_type vl)
{
  vuint32m2x4_t ret = __riscv_th_vlxseg4wu_v_u32m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m2x4_u32m2(ret, 0);
  *v1 = __riscv_vget_v_u32m2x4_u32m2(ret, 1);
  *v2 = __riscv_vget_v_u32m2x4_u32m2(ret, 2);
  *v3 = __riscv_vget_v_u32m2x4_u32m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_u32m2(uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_u32m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_i32m2(int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_i32m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_u32m2_m(vbool16_t mask, uint32_t *a, vuint32m2_t idx, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, word_type vl)
{
  vuint32m2x4_t ret = __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_u32m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_i32m2_m(vbool16_t mask, int32_t *a, vuint32m2_t idx, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, word_type vl)
{
  vint32m2x4_t ret = __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_i32m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, const int64_t *a, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlseg4w_v_i64m1x4(a, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlseg4w_v_i64m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlsseg4w_v_i64m1x4(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlsseg4w_v_i64m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, const uint64_t *a, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlseg4wu_v_u64m1x4(a, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlseg4wu_v_u64m1x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlsseg4wu_v_u64m1x4(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlsseg4wu_v_u64m1x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4w_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_u64m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4w_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_u64m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4w_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_i64m1x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4w_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_i64m1x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_u64m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_u64m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_i64m1x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_i64m1x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlxseg4w_v_i64m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x4_t ret = __riscv_th_vlxseg4w_v_i64m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x4_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x4_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x4_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x4_i64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlxseg4wu_v_u64m1x4(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x4_t ret = __riscv_th_vlxseg4wu_v_u64m1x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x4_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x4_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x4_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x4_u64m1(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_u64m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_i64m1x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, word_type vl)
{
  vuint64m1x4_t ret = __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_u64m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, word_type vl)
{
  vint64m1x4_t ret = __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_i64m1x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg4w_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, const int64_t *a, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlseg4w_v_i64m2x4(a, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4w_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), vint64m2_t maskedoff3 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlseg4w_v_i64m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4w_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlsseg4w_v_i64m2x4(a, s, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4w_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), vint64m2_t maskedoff3 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlsseg4w_v_i64m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4wu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, const uint64_t *a, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlseg4wu_v_u64m2x4(a, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlseg4wu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), vuint64m2_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlseg4wu_v_u64m2x4_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4wu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlsseg4wu_v_u64m2x4(a, s, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlsseg4wu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), vuint64m2_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlsseg4wu_v_u64m2x4_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsseg4w_v_u64m2(uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_u64m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4w_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_u64m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4w_v_i64m2(int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_i64m2x4(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg4w_v_i64m2_m(vbool32_t mask, int64_t *a, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vsseg4w_v_i64m2x4_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_u64m2(uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_u64m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_u64m2_m(vbool32_t mask, uint64_t *a, ptrdiff_t s, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_u64m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_i64m2(int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_i64m2x4(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg4w_v_i64m2_m(vbool32_t mask, int64_t *a, ptrdiff_t s, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vssseg4w_v_i64m2x4_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg4w_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlxseg4w_v_i64m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4w_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0 __attribute__((__unused__)), vint64m2_t maskedoff1 __attribute__((__unused__)), vint64m2_t maskedoff2 __attribute__((__unused__)), vint64m2_t maskedoff3 __attribute__((__unused__)), const int64_t *a, vuint64m2_t idx, word_type vl)
{
  vint64m2x4_t ret = __riscv_th_vlxseg4w_v_i64m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m2x4_i64m2(ret, 0);
  *v1 = __riscv_vget_v_i64m2x4_i64m2(ret, 1);
  *v2 = __riscv_vget_v_i64m2x4_i64m2(ret, 2);
  *v3 = __riscv_vget_v_i64m2x4_i64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4wu_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlxseg4wu_v_u64m2x4(a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vlxseg4wu_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0 __attribute__((__unused__)), vuint64m2_t maskedoff1 __attribute__((__unused__)), vuint64m2_t maskedoff2 __attribute__((__unused__)), vuint64m2_t maskedoff3 __attribute__((__unused__)), const uint64_t *a, vuint64m2_t idx, word_type vl)
{
  vuint64m2x4_t ret = __riscv_th_vlxseg4wu_v_u64m2x4_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m2x4_u64m2(ret, 0);
  *v1 = __riscv_vget_v_u64m2x4_u64m2(ret, 1);
  *v2 = __riscv_vget_v_u64m2x4_u64m2(ret, 2);
  *v3 = __riscv_vget_v_u64m2x4_u64m2(ret, 3);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_u64m2(uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_u64m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_i64m2(int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_i64m2x4(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_u64m2_m(vbool32_t mask, uint64_t *a, vuint64m2_t idx, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, word_type vl)
{
  vuint64m2x4_t ret = __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_u64m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg4w_v_i64m2_m(vbool32_t mask, int64_t *a, vuint64m2_t idx, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, word_type vl)
{
  vint64m2x4_t ret = __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
  __riscv_th_vsxseg4w_v_i64m2x4_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, const int8_t *a, word_type vl)
{
  vint8m1x5_t ret = __riscv_th_vlseg5b_v_i8m1x5(a, vl);
  *v0 = __riscv_vget_v_i8m1x5_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x5_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x5_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x5_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x5_i8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), const int8_t *a, word_type vl)
{
  vint8m1x5_t ret = __riscv_th_vlseg5b_v_i8m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m1x5_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x5_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x5_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x5_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x5_i8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m1x5_t ret = __riscv_th_vlsseg5b_v_i8m1x5(a, s, vl);
  *v0 = __riscv_vget_v_i8m1x5_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x5_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x5_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x5_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x5_i8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m1x5_t ret = __riscv_th_vlsseg5b_v_i8m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m1x5_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x5_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x5_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x5_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x5_i8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, const uint8_t *a, word_type vl)
{
  vuint8m1x5_t ret = __riscv_th_vlseg5bu_v_u8m1x5(a, vl);
  *v0 = __riscv_vget_v_u8m1x5_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x5_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x5_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x5_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x5_u8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), const uint8_t *a, word_type vl)
{
  vuint8m1x5_t ret = __riscv_th_vlseg5bu_v_u8m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m1x5_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x5_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x5_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x5_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x5_u8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m1x5_t ret = __riscv_th_vlsseg5bu_v_u8m1x5(a, s, vl);
  *v0 = __riscv_vget_v_u8m1x5_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x5_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x5_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x5_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x5_u8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m1x5_t ret = __riscv_th_vlsseg5bu_v_u8m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m1x5_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x5_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x5_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x5_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x5_u8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5b_v_u8m1(uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, word_type vl)
{
  vuint8m1x5_t ret = __riscv_vcreate_v_u8m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_u8m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5b_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, word_type vl)
{
  vuint8m1x5_t ret = __riscv_vcreate_v_u8m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_u8m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5b_v_i8m1(int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, word_type vl)
{
  vint8m1x5_t ret = __riscv_vcreate_v_i8m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_i8m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5b_v_i8m1_m(vbool8_t mask, int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, word_type vl)
{
  vint8m1x5_t ret = __riscv_vcreate_v_i8m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_i8m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_u8m1(uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, word_type vl)
{
  vuint8m1x5_t ret = __riscv_vcreate_v_u8m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_u8m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_u8m1_m(vbool8_t mask, uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, word_type vl)
{
  vuint8m1x5_t ret = __riscv_vcreate_v_u8m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_u8m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_i8m1(int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, word_type vl)
{
  vint8m1x5_t ret = __riscv_vcreate_v_i8m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_i8m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_i8m1_m(vbool8_t mask, int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, word_type vl)
{
  vint8m1x5_t ret = __riscv_vcreate_v_i8m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_i8m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg5b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, const int8_t *a, vuint8m1_t idx, word_type vl)
{
  vint8m1x5_t ret = __riscv_th_vlxseg5b_v_i8m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x5_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x5_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x5_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x5_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x5_i8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), const int8_t *a, vuint8m1_t idx, word_type vl)
{
  vint8m1x5_t ret = __riscv_th_vlxseg5b_v_i8m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x5_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x5_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x5_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x5_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x5_i8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, const uint8_t *a, vuint8m1_t idx, word_type vl)
{
  vuint8m1x5_t ret = __riscv_th_vlxseg5bu_v_u8m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x5_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x5_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x5_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x5_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x5_u8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), const uint8_t *a, vuint8m1_t idx, word_type vl)
{
  vuint8m1x5_t ret = __riscv_th_vlxseg5bu_v_u8m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x5_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x5_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x5_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x5_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x5_u8m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_u8m1(uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, word_type vl)
{
  vuint8m1x5_t ret = __riscv_vcreate_v_u8m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_u8m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_i8m1(int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, word_type vl)
{
  vint8m1x5_t ret = __riscv_vcreate_v_i8m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_i8m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, word_type vl)
{
  vuint8m1x5_t ret = __riscv_vcreate_v_u8m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_u8m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_i8m1_m(vbool8_t mask, int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, word_type vl)
{
  vint8m1x5_t ret = __riscv_vcreate_v_i8m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_i8m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, const int16_t *a, word_type vl)
{
  vint16m1x5_t ret = __riscv_th_vlseg5b_v_i16m1x5(a, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m1x5_t ret = __riscv_th_vlseg5b_v_i16m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x5_t ret = __riscv_th_vlsseg5b_v_i16m1x5(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x5_t ret = __riscv_th_vlsseg5b_v_i16m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, const uint16_t *a, word_type vl)
{
  vuint16m1x5_t ret = __riscv_th_vlseg5bu_v_u16m1x5(a, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m1x5_t ret = __riscv_th_vlseg5bu_v_u16m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x5_t ret = __riscv_th_vlsseg5bu_v_u16m1x5(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x5_t ret = __riscv_th_vlsseg5bu_v_u16m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5b_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, word_type vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_u16m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5b_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, word_type vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_u16m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5b_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, word_type vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_i16m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5b_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, word_type vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_i16m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, word_type vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_u16m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, word_type vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_u16m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, word_type vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_i16m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, word_type vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_i16m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg5b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x5_t ret = __riscv_th_vlxseg5b_v_i16m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x5_t ret = __riscv_th_vlxseg5b_v_i16m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x5_t ret = __riscv_th_vlxseg5bu_v_u16m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x5_t ret = __riscv_th_vlxseg5bu_v_u16m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, word_type vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_u16m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, word_type vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_i16m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, word_type vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_u16m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, word_type vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_i16m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, const int32_t *a, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlseg5b_v_i32m1x5(a, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlseg5b_v_i32m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlsseg5b_v_i32m1x5(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlsseg5b_v_i32m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, const uint32_t *a, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlseg5bu_v_u32m1x5(a, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlseg5bu_v_u32m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlsseg5bu_v_u32m1x5(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlsseg5bu_v_u32m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5b_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_u32m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5b_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_u32m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5b_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_i32m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5b_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_i32m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_u32m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_u32m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_i32m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_i32m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg5b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlxseg5b_v_i32m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlxseg5b_v_i32m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlxseg5bu_v_u32m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlxseg5bu_v_u32m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_u32m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_i32m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_u32m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_i32m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *a, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlseg5b_v_i64m1x5(a, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlseg5b_v_i64m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlsseg5b_v_i64m1x5(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlsseg5b_v_i64m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *a, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlseg5bu_v_u64m1x5(a, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlseg5bu_v_u64m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlsseg5bu_v_u64m1x5(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlsseg5bu_v_u64m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5b_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_u64m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5b_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_u64m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5b_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_i64m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5b_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5b_v_i64m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_u64m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_u64m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_i64m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5b_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5b_v_i64m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg5b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlxseg5b_v_i64m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlxseg5b_v_i64m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlxseg5bu_v_u64m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlxseg5bu_v_u64m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_u64m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_i64m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_u64m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5b_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5b_v_i64m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, const int16_t *a, word_type vl)
{
  vint16m1x5_t ret = __riscv_th_vlseg5h_v_i16m1x5(a, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m1x5_t ret = __riscv_th_vlseg5h_v_i16m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x5_t ret = __riscv_th_vlsseg5h_v_i16m1x5(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x5_t ret = __riscv_th_vlsseg5h_v_i16m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, const uint16_t *a, word_type vl)
{
  vuint16m1x5_t ret = __riscv_th_vlseg5hu_v_u16m1x5(a, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m1x5_t ret = __riscv_th_vlseg5hu_v_u16m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x5_t ret = __riscv_th_vlsseg5hu_v_u16m1x5(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x5_t ret = __riscv_th_vlsseg5hu_v_u16m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5h_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, word_type vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5h_v_u16m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5h_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, word_type vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5h_v_u16m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5h_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, word_type vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5h_v_i16m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5h_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, word_type vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5h_v_i16m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5h_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, word_type vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5h_v_u16m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5h_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, word_type vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5h_v_u16m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5h_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, word_type vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5h_v_i16m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5h_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, word_type vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5h_v_i16m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg5h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x5_t ret = __riscv_th_vlxseg5h_v_i16m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x5_t ret = __riscv_th_vlxseg5h_v_i16m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x5_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x5_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x5_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x5_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x5_i16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x5_t ret = __riscv_th_vlxseg5hu_v_u16m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x5_t ret = __riscv_th_vlxseg5hu_v_u16m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x5_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x5_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x5_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x5_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x5_u16m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsxseg5h_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, word_type vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5h_v_u16m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5h_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, word_type vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5h_v_i16m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5h_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, word_type vl)
{
  vuint16m1x5_t ret = __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5h_v_u16m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5h_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, word_type vl)
{
  vint16m1x5_t ret = __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5h_v_i16m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, const int32_t *a, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlseg5h_v_i32m1x5(a, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlseg5h_v_i32m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlsseg5h_v_i32m1x5(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlsseg5h_v_i32m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, const uint32_t *a, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlseg5hu_v_u32m1x5(a, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlseg5hu_v_u32m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlsseg5hu_v_u32m1x5(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlsseg5hu_v_u32m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5h_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5h_v_u32m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5h_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5h_v_u32m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5h_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5h_v_i32m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5h_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5h_v_i32m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5h_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5h_v_u32m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5h_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5h_v_u32m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5h_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5h_v_i32m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5h_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5h_v_i32m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg5h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlxseg5h_v_i32m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlxseg5h_v_i32m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlxseg5hu_v_u32m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlxseg5hu_v_u32m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsxseg5h_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5h_v_u32m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5h_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5h_v_i32m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5h_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5h_v_u32m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5h_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5h_v_i32m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *a, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlseg5h_v_i64m1x5(a, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlseg5h_v_i64m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlsseg5h_v_i64m1x5(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlsseg5h_v_i64m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *a, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlseg5hu_v_u64m1x5(a, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlseg5hu_v_u64m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlsseg5hu_v_u64m1x5(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlsseg5hu_v_u64m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5h_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5h_v_u64m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5h_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5h_v_u64m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5h_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5h_v_i64m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5h_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5h_v_i64m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5h_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5h_v_u64m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5h_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5h_v_u64m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5h_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5h_v_i64m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5h_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5h_v_i64m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg5h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlxseg5h_v_i64m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlxseg5h_v_i64m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlxseg5hu_v_u64m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlxseg5hu_v_u64m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsxseg5h_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5h_v_u64m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5h_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5h_v_i64m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5h_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5h_v_u64m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5h_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5h_v_i64m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, const int32_t *a, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlseg5w_v_i32m1x5(a, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlseg5w_v_i32m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlsseg5w_v_i32m1x5(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlsseg5w_v_i32m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, const uint32_t *a, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlseg5wu_v_u32m1x5(a, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlseg5wu_v_u32m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlsseg5wu_v_u32m1x5(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlsseg5wu_v_u32m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5w_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5w_v_u32m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5w_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5w_v_u32m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5w_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5w_v_i32m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5w_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5w_v_i32m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5w_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5w_v_u32m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5w_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5w_v_u32m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5w_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5w_v_i32m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5w_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5w_v_i32m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg5w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlxseg5w_v_i32m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x5_t ret = __riscv_th_vlxseg5w_v_i32m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x5_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x5_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x5_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x5_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x5_i32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlxseg5wu_v_u32m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x5_t ret = __riscv_th_vlxseg5wu_v_u32m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x5_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x5_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x5_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x5_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x5_u32m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsxseg5w_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5w_v_u32m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5w_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5w_v_i32m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5w_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, word_type vl)
{
  vuint32m1x5_t ret = __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5w_v_u32m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5w_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, word_type vl)
{
  vint32m1x5_t ret = __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5w_v_i32m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg5w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *a, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlseg5w_v_i64m1x5(a, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlseg5w_v_i64m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlsseg5w_v_i64m1x5(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlsseg5w_v_i64m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *a, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlseg5wu_v_u64m1x5(a, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlseg5wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlseg5wu_v_u64m1x5_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlsseg5wu_v_u64m1x5(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlsseg5wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlsseg5wu_v_u64m1x5_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsseg5w_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5w_v_u64m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5w_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5w_v_u64m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5w_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5w_v_i64m1x5(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg5w_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsseg5w_v_i64m1x5_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5w_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5w_v_u64m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5w_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5w_v_u64m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5w_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5w_v_i64m1x5(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg5w_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vssseg5w_v_i64m1x5_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg5w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlxseg5w_v_i64m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x5_t ret = __riscv_th_vlxseg5w_v_i64m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x5_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x5_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x5_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x5_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x5_i64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlxseg5wu_v_u64m1x5(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vlxseg5wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x5_t ret = __riscv_th_vlxseg5wu_v_u64m1x5_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x5_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x5_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x5_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x5_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x5_u64m1(ret, 4);
}
ATTRIBUTE_PREFIX void vsxseg5w_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5w_v_u64m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5w_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5w_v_i64m1x5(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5w_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, word_type vl)
{
  vuint64m1x5_t ret = __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5w_v_u64m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg5w_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, word_type vl)
{
  vint64m1x5_t ret = __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
  __riscv_th_vsxseg5w_v_i64m1x5_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, const int8_t *a, word_type vl)
{
  vint8m1x6_t ret = __riscv_th_vlseg6b_v_i8m1x6(a, vl);
  *v0 = __riscv_vget_v_i8m1x6_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x6_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x6_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x6_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x6_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x6_i8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), const int8_t *a, word_type vl)
{
  vint8m1x6_t ret = __riscv_th_vlseg6b_v_i8m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m1x6_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x6_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x6_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x6_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x6_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x6_i8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m1x6_t ret = __riscv_th_vlsseg6b_v_i8m1x6(a, s, vl);
  *v0 = __riscv_vget_v_i8m1x6_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x6_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x6_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x6_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x6_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x6_i8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m1x6_t ret = __riscv_th_vlsseg6b_v_i8m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m1x6_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x6_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x6_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x6_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x6_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x6_i8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, const uint8_t *a, word_type vl)
{
  vuint8m1x6_t ret = __riscv_th_vlseg6bu_v_u8m1x6(a, vl);
  *v0 = __riscv_vget_v_u8m1x6_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x6_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x6_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x6_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x6_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x6_u8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), const uint8_t *a, word_type vl)
{
  vuint8m1x6_t ret = __riscv_th_vlseg6bu_v_u8m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m1x6_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x6_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x6_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x6_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x6_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x6_u8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m1x6_t ret = __riscv_th_vlsseg6bu_v_u8m1x6(a, s, vl);
  *v0 = __riscv_vget_v_u8m1x6_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x6_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x6_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x6_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x6_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x6_u8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m1x6_t ret = __riscv_th_vlsseg6bu_v_u8m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m1x6_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x6_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x6_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x6_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x6_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x6_u8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6b_v_u8m1(uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, word_type vl)
{
  vuint8m1x6_t ret = __riscv_vcreate_v_u8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_u8m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6b_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, word_type vl)
{
  vuint8m1x6_t ret = __riscv_vcreate_v_u8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_u8m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6b_v_i8m1(int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, word_type vl)
{
  vint8m1x6_t ret = __riscv_vcreate_v_i8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_i8m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6b_v_i8m1_m(vbool8_t mask, int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, word_type vl)
{
  vint8m1x6_t ret = __riscv_vcreate_v_i8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_i8m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_u8m1(uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, word_type vl)
{
  vuint8m1x6_t ret = __riscv_vcreate_v_u8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_u8m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_u8m1_m(vbool8_t mask, uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, word_type vl)
{
  vuint8m1x6_t ret = __riscv_vcreate_v_u8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_u8m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_i8m1(int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, word_type vl)
{
  vint8m1x6_t ret = __riscv_vcreate_v_i8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_i8m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_i8m1_m(vbool8_t mask, int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, word_type vl)
{
  vint8m1x6_t ret = __riscv_vcreate_v_i8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_i8m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg6b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, const int8_t *a, vuint8m1_t idx, word_type vl)
{
  vint8m1x6_t ret = __riscv_th_vlxseg6b_v_i8m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x6_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x6_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x6_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x6_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x6_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x6_i8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), const int8_t *a, vuint8m1_t idx, word_type vl)
{
  vint8m1x6_t ret = __riscv_th_vlxseg6b_v_i8m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x6_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x6_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x6_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x6_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x6_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x6_i8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, const uint8_t *a, vuint8m1_t idx, word_type vl)
{
  vuint8m1x6_t ret = __riscv_th_vlxseg6bu_v_u8m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x6_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x6_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x6_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x6_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x6_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x6_u8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), const uint8_t *a, vuint8m1_t idx, word_type vl)
{
  vuint8m1x6_t ret = __riscv_th_vlxseg6bu_v_u8m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x6_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x6_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x6_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x6_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x6_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x6_u8m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_u8m1(uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, word_type vl)
{
  vuint8m1x6_t ret = __riscv_vcreate_v_u8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_u8m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_i8m1(int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, word_type vl)
{
  vint8m1x6_t ret = __riscv_vcreate_v_i8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_i8m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, word_type vl)
{
  vuint8m1x6_t ret = __riscv_vcreate_v_u8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_u8m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_i8m1_m(vbool8_t mask, int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, word_type vl)
{
  vint8m1x6_t ret = __riscv_vcreate_v_i8m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_i8m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, const int16_t *a, word_type vl)
{
  vint16m1x6_t ret = __riscv_th_vlseg6b_v_i16m1x6(a, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m1x6_t ret = __riscv_th_vlseg6b_v_i16m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x6_t ret = __riscv_th_vlsseg6b_v_i16m1x6(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x6_t ret = __riscv_th_vlsseg6b_v_i16m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, const uint16_t *a, word_type vl)
{
  vuint16m1x6_t ret = __riscv_th_vlseg6bu_v_u16m1x6(a, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m1x6_t ret = __riscv_th_vlseg6bu_v_u16m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x6_t ret = __riscv_th_vlsseg6bu_v_u16m1x6(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x6_t ret = __riscv_th_vlsseg6bu_v_u16m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6b_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, word_type vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_u16m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6b_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, word_type vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_u16m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6b_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, word_type vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_i16m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6b_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, word_type vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_i16m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, word_type vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_u16m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, word_type vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_u16m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, word_type vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_i16m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, word_type vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_i16m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg6b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x6_t ret = __riscv_th_vlxseg6b_v_i16m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x6_t ret = __riscv_th_vlxseg6b_v_i16m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x6_t ret = __riscv_th_vlxseg6bu_v_u16m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x6_t ret = __riscv_th_vlxseg6bu_v_u16m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, word_type vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_u16m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, word_type vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_i16m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, word_type vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_u16m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, word_type vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_i16m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *a, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlseg6b_v_i32m1x6(a, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlseg6b_v_i32m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlsseg6b_v_i32m1x6(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlsseg6b_v_i32m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *a, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlseg6bu_v_u32m1x6(a, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlseg6bu_v_u32m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlsseg6bu_v_u32m1x6(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlsseg6bu_v_u32m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6b_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_u32m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6b_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_u32m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6b_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_i32m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6b_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_i32m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_u32m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_u32m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_i32m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_i32m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg6b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlxseg6b_v_i32m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlxseg6b_v_i32m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlxseg6bu_v_u32m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlxseg6bu_v_u32m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_u32m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_i32m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_u32m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_i32m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *a, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlseg6b_v_i64m1x6(a, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlseg6b_v_i64m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlsseg6b_v_i64m1x6(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlsseg6b_v_i64m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *a, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlseg6bu_v_u64m1x6(a, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlseg6bu_v_u64m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlsseg6bu_v_u64m1x6(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlsseg6bu_v_u64m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6b_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_u64m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6b_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_u64m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6b_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_i64m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6b_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6b_v_i64m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_u64m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_u64m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_i64m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6b_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6b_v_i64m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg6b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlxseg6b_v_i64m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlxseg6b_v_i64m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlxseg6bu_v_u64m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlxseg6bu_v_u64m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_u64m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_i64m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_u64m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6b_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6b_v_i64m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, const int16_t *a, word_type vl)
{
  vint16m1x6_t ret = __riscv_th_vlseg6h_v_i16m1x6(a, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m1x6_t ret = __riscv_th_vlseg6h_v_i16m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x6_t ret = __riscv_th_vlsseg6h_v_i16m1x6(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x6_t ret = __riscv_th_vlsseg6h_v_i16m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, const uint16_t *a, word_type vl)
{
  vuint16m1x6_t ret = __riscv_th_vlseg6hu_v_u16m1x6(a, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m1x6_t ret = __riscv_th_vlseg6hu_v_u16m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x6_t ret = __riscv_th_vlsseg6hu_v_u16m1x6(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x6_t ret = __riscv_th_vlsseg6hu_v_u16m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6h_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, word_type vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6h_v_u16m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6h_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, word_type vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6h_v_u16m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6h_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, word_type vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6h_v_i16m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6h_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, word_type vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6h_v_i16m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6h_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, word_type vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6h_v_u16m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6h_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, word_type vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6h_v_u16m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6h_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, word_type vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6h_v_i16m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6h_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, word_type vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6h_v_i16m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg6h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x6_t ret = __riscv_th_vlxseg6h_v_i16m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x6_t ret = __riscv_th_vlxseg6h_v_i16m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x6_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x6_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x6_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x6_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x6_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x6_i16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x6_t ret = __riscv_th_vlxseg6hu_v_u16m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x6_t ret = __riscv_th_vlxseg6hu_v_u16m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x6_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x6_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x6_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x6_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x6_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x6_u16m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsxseg6h_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, word_type vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6h_v_u16m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6h_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, word_type vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6h_v_i16m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6h_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, word_type vl)
{
  vuint16m1x6_t ret = __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6h_v_u16m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6h_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, word_type vl)
{
  vint16m1x6_t ret = __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6h_v_i16m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *a, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlseg6h_v_i32m1x6(a, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlseg6h_v_i32m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlsseg6h_v_i32m1x6(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlsseg6h_v_i32m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *a, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlseg6hu_v_u32m1x6(a, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlseg6hu_v_u32m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlsseg6hu_v_u32m1x6(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlsseg6hu_v_u32m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6h_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6h_v_u32m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6h_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6h_v_u32m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6h_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6h_v_i32m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6h_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6h_v_i32m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6h_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6h_v_u32m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6h_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6h_v_u32m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6h_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6h_v_i32m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6h_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6h_v_i32m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg6h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlxseg6h_v_i32m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlxseg6h_v_i32m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlxseg6hu_v_u32m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlxseg6hu_v_u32m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsxseg6h_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6h_v_u32m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6h_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6h_v_i32m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6h_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6h_v_u32m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6h_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6h_v_i32m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *a, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlseg6h_v_i64m1x6(a, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlseg6h_v_i64m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlsseg6h_v_i64m1x6(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlsseg6h_v_i64m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *a, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlseg6hu_v_u64m1x6(a, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlseg6hu_v_u64m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlsseg6hu_v_u64m1x6(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlsseg6hu_v_u64m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6h_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6h_v_u64m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6h_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6h_v_u64m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6h_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6h_v_i64m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6h_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6h_v_i64m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6h_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6h_v_u64m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6h_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6h_v_u64m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6h_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6h_v_i64m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6h_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6h_v_i64m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg6h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlxseg6h_v_i64m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlxseg6h_v_i64m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlxseg6hu_v_u64m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlxseg6hu_v_u64m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsxseg6h_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6h_v_u64m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6h_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6h_v_i64m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6h_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6h_v_u64m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6h_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6h_v_i64m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *a, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlseg6w_v_i32m1x6(a, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlseg6w_v_i32m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlsseg6w_v_i32m1x6(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlsseg6w_v_i32m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *a, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlseg6wu_v_u32m1x6(a, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlseg6wu_v_u32m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlsseg6wu_v_u32m1x6(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlsseg6wu_v_u32m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6w_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6w_v_u32m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6w_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6w_v_u32m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6w_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6w_v_i32m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6w_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6w_v_i32m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6w_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6w_v_u32m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6w_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6w_v_u32m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6w_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6w_v_i32m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6w_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6w_v_i32m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg6w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlxseg6w_v_i32m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x6_t ret = __riscv_th_vlxseg6w_v_i32m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x6_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x6_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x6_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x6_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x6_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x6_i32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlxseg6wu_v_u32m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x6_t ret = __riscv_th_vlxseg6wu_v_u32m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x6_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x6_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x6_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x6_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x6_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x6_u32m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsxseg6w_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6w_v_u32m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6w_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6w_v_i32m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6w_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, word_type vl)
{
  vuint32m1x6_t ret = __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6w_v_u32m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6w_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, word_type vl)
{
  vint32m1x6_t ret = __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6w_v_i32m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg6w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *a, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlseg6w_v_i64m1x6(a, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlseg6w_v_i64m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlsseg6w_v_i64m1x6(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlsseg6w_v_i64m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *a, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlseg6wu_v_u64m1x6(a, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlseg6wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlseg6wu_v_u64m1x6_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlsseg6wu_v_u64m1x6(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlsseg6wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlsseg6wu_v_u64m1x6_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsseg6w_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6w_v_u64m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6w_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6w_v_u64m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6w_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6w_v_i64m1x6(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg6w_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsseg6w_v_i64m1x6_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6w_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6w_v_u64m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6w_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6w_v_u64m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6w_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6w_v_i64m1x6(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg6w_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vssseg6w_v_i64m1x6_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg6w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlxseg6w_v_i64m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x6_t ret = __riscv_th_vlxseg6w_v_i64m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x6_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x6_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x6_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x6_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x6_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x6_i64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlxseg6wu_v_u64m1x6(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vlxseg6wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x6_t ret = __riscv_th_vlxseg6wu_v_u64m1x6_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x6_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x6_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x6_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x6_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x6_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x6_u64m1(ret, 5);
}
ATTRIBUTE_PREFIX void vsxseg6w_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6w_v_u64m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6w_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6w_v_i64m1x6(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6w_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, word_type vl)
{
  vuint64m1x6_t ret = __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6w_v_u64m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg6w_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, word_type vl)
{
  vint64m1x6_t ret = __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
  __riscv_th_vsxseg6w_v_i64m1x6_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, const int8_t *a, word_type vl)
{
  vint8m1x7_t ret = __riscv_th_vlseg7b_v_i8m1x7(a, vl);
  *v0 = __riscv_vget_v_i8m1x7_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x7_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x7_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x7_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x7_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x7_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x7_i8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), vint8m1_t maskedoff6 __attribute__((__unused__)), const int8_t *a, word_type vl)
{
  vint8m1x7_t ret = __riscv_th_vlseg7b_v_i8m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m1x7_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x7_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x7_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x7_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x7_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x7_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x7_i8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m1x7_t ret = __riscv_th_vlsseg7b_v_i8m1x7(a, s, vl);
  *v0 = __riscv_vget_v_i8m1x7_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x7_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x7_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x7_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x7_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x7_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x7_i8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), vint8m1_t maskedoff6 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m1x7_t ret = __riscv_th_vlsseg7b_v_i8m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m1x7_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x7_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x7_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x7_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x7_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x7_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x7_i8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, const uint8_t *a, word_type vl)
{
  vuint8m1x7_t ret = __riscv_th_vlseg7bu_v_u8m1x7(a, vl);
  *v0 = __riscv_vget_v_u8m1x7_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x7_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x7_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x7_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x7_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x7_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x7_u8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), vuint8m1_t maskedoff6 __attribute__((__unused__)), const uint8_t *a, word_type vl)
{
  vuint8m1x7_t ret = __riscv_th_vlseg7bu_v_u8m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m1x7_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x7_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x7_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x7_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x7_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x7_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x7_u8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m1x7_t ret = __riscv_th_vlsseg7bu_v_u8m1x7(a, s, vl);
  *v0 = __riscv_vget_v_u8m1x7_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x7_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x7_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x7_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x7_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x7_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x7_u8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), vuint8m1_t maskedoff6 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m1x7_t ret = __riscv_th_vlsseg7bu_v_u8m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m1x7_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x7_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x7_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x7_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x7_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x7_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x7_u8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7b_v_u8m1(uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, word_type vl)
{
  vuint8m1x7_t ret = __riscv_vcreate_v_u8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_u8m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7b_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, word_type vl)
{
  vuint8m1x7_t ret = __riscv_vcreate_v_u8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_u8m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7b_v_i8m1(int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, word_type vl)
{
  vint8m1x7_t ret = __riscv_vcreate_v_i8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_i8m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7b_v_i8m1_m(vbool8_t mask, int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, word_type vl)
{
  vint8m1x7_t ret = __riscv_vcreate_v_i8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_i8m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_u8m1(uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, word_type vl)
{
  vuint8m1x7_t ret = __riscv_vcreate_v_u8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_u8m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_u8m1_m(vbool8_t mask, uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, word_type vl)
{
  vuint8m1x7_t ret = __riscv_vcreate_v_u8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_u8m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_i8m1(int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, word_type vl)
{
  vint8m1x7_t ret = __riscv_vcreate_v_i8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_i8m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_i8m1_m(vbool8_t mask, int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, word_type vl)
{
  vint8m1x7_t ret = __riscv_vcreate_v_i8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_i8m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg7b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, const int8_t *a, vuint8m1_t idx, word_type vl)
{
  vint8m1x7_t ret = __riscv_th_vlxseg7b_v_i8m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x7_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x7_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x7_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x7_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x7_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x7_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x7_i8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), vint8m1_t maskedoff6 __attribute__((__unused__)), const int8_t *a, vuint8m1_t idx, word_type vl)
{
  vint8m1x7_t ret = __riscv_th_vlxseg7b_v_i8m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x7_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x7_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x7_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x7_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x7_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x7_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x7_i8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, const uint8_t *a, vuint8m1_t idx, word_type vl)
{
  vuint8m1x7_t ret = __riscv_th_vlxseg7bu_v_u8m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x7_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x7_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x7_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x7_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x7_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x7_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x7_u8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), vuint8m1_t maskedoff6 __attribute__((__unused__)), const uint8_t *a, vuint8m1_t idx, word_type vl)
{
  vuint8m1x7_t ret = __riscv_th_vlxseg7bu_v_u8m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x7_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x7_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x7_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x7_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x7_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x7_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x7_u8m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_u8m1(uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, word_type vl)
{
  vuint8m1x7_t ret = __riscv_vcreate_v_u8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_u8m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_i8m1(int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, word_type vl)
{
  vint8m1x7_t ret = __riscv_vcreate_v_i8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_i8m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, word_type vl)
{
  vuint8m1x7_t ret = __riscv_vcreate_v_u8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_u8m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_i8m1_m(vbool8_t mask, int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, word_type vl)
{
  vint8m1x7_t ret = __riscv_vcreate_v_i8m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_i8m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, const int16_t *a, word_type vl)
{
  vint16m1x7_t ret = __riscv_th_vlseg7b_v_i16m1x7(a, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m1x7_t ret = __riscv_th_vlseg7b_v_i16m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x7_t ret = __riscv_th_vlsseg7b_v_i16m1x7(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x7_t ret = __riscv_th_vlsseg7b_v_i16m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, const uint16_t *a, word_type vl)
{
  vuint16m1x7_t ret = __riscv_th_vlseg7bu_v_u16m1x7(a, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m1x7_t ret = __riscv_th_vlseg7bu_v_u16m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x7_t ret = __riscv_th_vlsseg7bu_v_u16m1x7(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x7_t ret = __riscv_th_vlsseg7bu_v_u16m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7b_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, word_type vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_u16m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7b_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, word_type vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_u16m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7b_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, word_type vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_i16m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7b_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, word_type vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_i16m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, word_type vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_u16m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, word_type vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_u16m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, word_type vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_i16m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, word_type vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_i16m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg7b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x7_t ret = __riscv_th_vlxseg7b_v_i16m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x7_t ret = __riscv_th_vlxseg7b_v_i16m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x7_t ret = __riscv_th_vlxseg7bu_v_u16m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x7_t ret = __riscv_th_vlxseg7bu_v_u16m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, word_type vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_u16m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, word_type vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_i16m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, word_type vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_u16m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, word_type vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_i16m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, const int32_t *a, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlseg7b_v_i32m1x7(a, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlseg7b_v_i32m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlsseg7b_v_i32m1x7(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlsseg7b_v_i32m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, const uint32_t *a, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlseg7bu_v_u32m1x7(a, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlseg7bu_v_u32m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlsseg7bu_v_u32m1x7(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlsseg7bu_v_u32m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7b_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_u32m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7b_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_u32m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7b_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_i32m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7b_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_i32m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_u32m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_u32m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_i32m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_i32m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg7b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlxseg7b_v_i32m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlxseg7b_v_i32m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlxseg7bu_v_u32m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlxseg7bu_v_u32m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_u32m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_i32m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_u32m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_i32m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *a, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlseg7b_v_i64m1x7(a, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlseg7b_v_i64m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlsseg7b_v_i64m1x7(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlsseg7b_v_i64m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *a, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlseg7bu_v_u64m1x7(a, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlseg7bu_v_u64m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlsseg7bu_v_u64m1x7(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlsseg7bu_v_u64m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7b_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_u64m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7b_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_u64m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7b_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_i64m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7b_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7b_v_i64m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_u64m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_u64m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_i64m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7b_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7b_v_i64m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg7b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlxseg7b_v_i64m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlxseg7b_v_i64m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlxseg7bu_v_u64m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlxseg7bu_v_u64m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_u64m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_i64m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_u64m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7b_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7b_v_i64m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, const int16_t *a, word_type vl)
{
  vint16m1x7_t ret = __riscv_th_vlseg7h_v_i16m1x7(a, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m1x7_t ret = __riscv_th_vlseg7h_v_i16m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x7_t ret = __riscv_th_vlsseg7h_v_i16m1x7(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x7_t ret = __riscv_th_vlsseg7h_v_i16m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, const uint16_t *a, word_type vl)
{
  vuint16m1x7_t ret = __riscv_th_vlseg7hu_v_u16m1x7(a, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m1x7_t ret = __riscv_th_vlseg7hu_v_u16m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x7_t ret = __riscv_th_vlsseg7hu_v_u16m1x7(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x7_t ret = __riscv_th_vlsseg7hu_v_u16m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7h_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, word_type vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7h_v_u16m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7h_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, word_type vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7h_v_u16m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7h_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, word_type vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7h_v_i16m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7h_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, word_type vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7h_v_i16m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7h_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, word_type vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7h_v_u16m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7h_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, word_type vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7h_v_u16m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7h_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, word_type vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7h_v_i16m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7h_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, word_type vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7h_v_i16m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg7h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x7_t ret = __riscv_th_vlxseg7h_v_i16m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x7_t ret = __riscv_th_vlxseg7h_v_i16m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x7_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x7_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x7_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x7_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x7_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x7_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x7_i16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x7_t ret = __riscv_th_vlxseg7hu_v_u16m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x7_t ret = __riscv_th_vlxseg7hu_v_u16m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x7_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x7_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x7_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x7_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x7_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x7_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x7_u16m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsxseg7h_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, word_type vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7h_v_u16m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7h_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, word_type vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7h_v_i16m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7h_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, word_type vl)
{
  vuint16m1x7_t ret = __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7h_v_u16m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7h_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, word_type vl)
{
  vint16m1x7_t ret = __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7h_v_i16m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, const int32_t *a, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlseg7h_v_i32m1x7(a, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlseg7h_v_i32m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlsseg7h_v_i32m1x7(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlsseg7h_v_i32m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, const uint32_t *a, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlseg7hu_v_u32m1x7(a, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlseg7hu_v_u32m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlsseg7hu_v_u32m1x7(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlsseg7hu_v_u32m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7h_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7h_v_u32m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7h_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7h_v_u32m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7h_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7h_v_i32m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7h_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7h_v_i32m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7h_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7h_v_u32m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7h_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7h_v_u32m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7h_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7h_v_i32m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7h_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7h_v_i32m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg7h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlxseg7h_v_i32m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlxseg7h_v_i32m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlxseg7hu_v_u32m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlxseg7hu_v_u32m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsxseg7h_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7h_v_u32m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7h_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7h_v_i32m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7h_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7h_v_u32m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7h_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7h_v_i32m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *a, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlseg7h_v_i64m1x7(a, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlseg7h_v_i64m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlsseg7h_v_i64m1x7(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlsseg7h_v_i64m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *a, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlseg7hu_v_u64m1x7(a, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlseg7hu_v_u64m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlsseg7hu_v_u64m1x7(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlsseg7hu_v_u64m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7h_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7h_v_u64m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7h_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7h_v_u64m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7h_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7h_v_i64m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7h_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7h_v_i64m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7h_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7h_v_u64m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7h_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7h_v_u64m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7h_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7h_v_i64m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7h_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7h_v_i64m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg7h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlxseg7h_v_i64m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlxseg7h_v_i64m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlxseg7hu_v_u64m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlxseg7hu_v_u64m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsxseg7h_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7h_v_u64m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7h_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7h_v_i64m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7h_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7h_v_u64m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7h_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7h_v_i64m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, const int32_t *a, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlseg7w_v_i32m1x7(a, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlseg7w_v_i32m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlsseg7w_v_i32m1x7(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlsseg7w_v_i32m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, const uint32_t *a, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlseg7wu_v_u32m1x7(a, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlseg7wu_v_u32m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlsseg7wu_v_u32m1x7(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlsseg7wu_v_u32m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7w_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7w_v_u32m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7w_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7w_v_u32m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7w_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7w_v_i32m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7w_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7w_v_i32m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7w_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7w_v_u32m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7w_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7w_v_u32m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7w_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7w_v_i32m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7w_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7w_v_i32m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg7w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlxseg7w_v_i32m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x7_t ret = __riscv_th_vlxseg7w_v_i32m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x7_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x7_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x7_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x7_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x7_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x7_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x7_i32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlxseg7wu_v_u32m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x7_t ret = __riscv_th_vlxseg7wu_v_u32m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x7_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x7_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x7_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x7_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x7_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x7_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x7_u32m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsxseg7w_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7w_v_u32m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7w_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7w_v_i32m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7w_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, word_type vl)
{
  vuint32m1x7_t ret = __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7w_v_u32m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7w_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, word_type vl)
{
  vint32m1x7_t ret = __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7w_v_i32m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg7w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *a, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlseg7w_v_i64m1x7(a, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlseg7w_v_i64m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlsseg7w_v_i64m1x7(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlsseg7w_v_i64m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *a, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlseg7wu_v_u64m1x7(a, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlseg7wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlseg7wu_v_u64m1x7_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlsseg7wu_v_u64m1x7(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlsseg7wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlsseg7wu_v_u64m1x7_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsseg7w_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7w_v_u64m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7w_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7w_v_u64m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7w_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7w_v_i64m1x7(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg7w_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsseg7w_v_i64m1x7_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7w_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7w_v_u64m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7w_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7w_v_u64m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7w_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7w_v_i64m1x7(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg7w_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vssseg7w_v_i64m1x7_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg7w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlxseg7w_v_i64m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x7_t ret = __riscv_th_vlxseg7w_v_i64m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x7_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x7_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x7_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x7_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x7_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x7_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x7_i64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlxseg7wu_v_u64m1x7(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vlxseg7wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x7_t ret = __riscv_th_vlxseg7wu_v_u64m1x7_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x7_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x7_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x7_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x7_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x7_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x7_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x7_u64m1(ret, 6);
}
ATTRIBUTE_PREFIX void vsxseg7w_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7w_v_u64m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7w_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7w_v_i64m1x7(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7w_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, word_type vl)
{
  vuint64m1x7_t ret = __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7w_v_u64m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg7w_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, word_type vl)
{
  vint64m1x7_t ret = __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
  __riscv_th_vsxseg7w_v_i64m1x7_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, const int8_t *a, word_type vl)
{
  vint8m1x8_t ret = __riscv_th_vlseg8b_v_i8m1x8(a, vl);
  *v0 = __riscv_vget_v_i8m1x8_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x8_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x8_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x8_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x8_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x8_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x8_i8m1(ret, 6);
  *v7 = __riscv_vget_v_i8m1x8_i8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), vint8m1_t maskedoff6 __attribute__((__unused__)), vint8m1_t maskedoff7 __attribute__((__unused__)), const int8_t *a, word_type vl)
{
  vint8m1x8_t ret = __riscv_th_vlseg8b_v_i8m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_i8m1x8_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x8_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x8_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x8_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x8_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x8_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x8_i8m1(ret, 6);
  *v7 = __riscv_vget_v_i8m1x8_i8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m1x8_t ret = __riscv_th_vlsseg8b_v_i8m1x8(a, s, vl);
  *v0 = __riscv_vget_v_i8m1x8_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x8_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x8_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x8_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x8_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x8_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x8_i8m1(ret, 6);
  *v7 = __riscv_vget_v_i8m1x8_i8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), vint8m1_t maskedoff6 __attribute__((__unused__)), vint8m1_t maskedoff7 __attribute__((__unused__)), const int8_t *a, ptrdiff_t s, word_type vl)
{
  vint8m1x8_t ret = __riscv_th_vlsseg8b_v_i8m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i8m1x8_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x8_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x8_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x8_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x8_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x8_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x8_i8m1(ret, 6);
  *v7 = __riscv_vget_v_i8m1x8_i8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, const uint8_t *a, word_type vl)
{
  vuint8m1x8_t ret = __riscv_th_vlseg8bu_v_u8m1x8(a, vl);
  *v0 = __riscv_vget_v_u8m1x8_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x8_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x8_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x8_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x8_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x8_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x8_u8m1(ret, 6);
  *v7 = __riscv_vget_v_u8m1x8_u8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), vuint8m1_t maskedoff6 __attribute__((__unused__)), vuint8m1_t maskedoff7 __attribute__((__unused__)), const uint8_t *a, word_type vl)
{
  vuint8m1x8_t ret = __riscv_th_vlseg8bu_v_u8m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_u8m1x8_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x8_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x8_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x8_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x8_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x8_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x8_u8m1(ret, 6);
  *v7 = __riscv_vget_v_u8m1x8_u8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m1x8_t ret = __riscv_th_vlsseg8bu_v_u8m1x8(a, s, vl);
  *v0 = __riscv_vget_v_u8m1x8_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x8_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x8_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x8_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x8_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x8_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x8_u8m1(ret, 6);
  *v7 = __riscv_vget_v_u8m1x8_u8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), vuint8m1_t maskedoff6 __attribute__((__unused__)), vuint8m1_t maskedoff7 __attribute__((__unused__)), const uint8_t *a, ptrdiff_t s, word_type vl)
{
  vuint8m1x8_t ret = __riscv_th_vlsseg8bu_v_u8m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u8m1x8_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x8_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x8_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x8_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x8_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x8_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x8_u8m1(ret, 6);
  *v7 = __riscv_vget_v_u8m1x8_u8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8b_v_u8m1(uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, word_type vl)
{
  vuint8m1x8_t ret = __riscv_vcreate_v_u8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_u8m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8b_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, word_type vl)
{
  vuint8m1x8_t ret = __riscv_vcreate_v_u8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_u8m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8b_v_i8m1(int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7, word_type vl)
{
  vint8m1x8_t ret = __riscv_vcreate_v_i8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_i8m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8b_v_i8m1_m(vbool8_t mask, int8_t *a, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7, word_type vl)
{
  vint8m1x8_t ret = __riscv_vcreate_v_i8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_i8m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_u8m1(uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, word_type vl)
{
  vuint8m1x8_t ret = __riscv_vcreate_v_u8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_u8m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_u8m1_m(vbool8_t mask, uint8_t *a, ptrdiff_t s, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, word_type vl)
{
  vuint8m1x8_t ret = __riscv_vcreate_v_u8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_u8m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_i8m1(int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7, word_type vl)
{
  vint8m1x8_t ret = __riscv_vcreate_v_i8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_i8m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_i8m1_m(vbool8_t mask, int8_t *a, ptrdiff_t s, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7, word_type vl)
{
  vint8m1x8_t ret = __riscv_vcreate_v_i8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_i8m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg8b_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, const int8_t *a, vuint8m1_t idx, word_type vl)
{
  vint8m1x8_t ret = __riscv_th_vlxseg8b_v_i8m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x8_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x8_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x8_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x8_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x8_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x8_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x8_i8m1(ret, 6);
  *v7 = __riscv_vget_v_i8m1x8_i8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8b_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, vbool8_t mask, vint8m1_t maskedoff0 __attribute__((__unused__)), vint8m1_t maskedoff1 __attribute__((__unused__)), vint8m1_t maskedoff2 __attribute__((__unused__)), vint8m1_t maskedoff3 __attribute__((__unused__)), vint8m1_t maskedoff4 __attribute__((__unused__)), vint8m1_t maskedoff5 __attribute__((__unused__)), vint8m1_t maskedoff6 __attribute__((__unused__)), vint8m1_t maskedoff7 __attribute__((__unused__)), const int8_t *a, vuint8m1_t idx, word_type vl)
{
  vint8m1x8_t ret = __riscv_th_vlxseg8b_v_i8m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i8m1x8_i8m1(ret, 0);
  *v1 = __riscv_vget_v_i8m1x8_i8m1(ret, 1);
  *v2 = __riscv_vget_v_i8m1x8_i8m1(ret, 2);
  *v3 = __riscv_vget_v_i8m1x8_i8m1(ret, 3);
  *v4 = __riscv_vget_v_i8m1x8_i8m1(ret, 4);
  *v5 = __riscv_vget_v_i8m1x8_i8m1(ret, 5);
  *v6 = __riscv_vget_v_i8m1x8_i8m1(ret, 6);
  *v7 = __riscv_vget_v_i8m1x8_i8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8bu_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, const uint8_t *a, vuint8m1_t idx, word_type vl)
{
  vuint8m1x8_t ret = __riscv_th_vlxseg8bu_v_u8m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x8_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x8_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x8_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x8_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x8_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x8_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x8_u8m1(ret, 6);
  *v7 = __riscv_vget_v_u8m1x8_u8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8bu_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, vbool8_t mask, vuint8m1_t maskedoff0 __attribute__((__unused__)), vuint8m1_t maskedoff1 __attribute__((__unused__)), vuint8m1_t maskedoff2 __attribute__((__unused__)), vuint8m1_t maskedoff3 __attribute__((__unused__)), vuint8m1_t maskedoff4 __attribute__((__unused__)), vuint8m1_t maskedoff5 __attribute__((__unused__)), vuint8m1_t maskedoff6 __attribute__((__unused__)), vuint8m1_t maskedoff7 __attribute__((__unused__)), const uint8_t *a, vuint8m1_t idx, word_type vl)
{
  vuint8m1x8_t ret = __riscv_th_vlxseg8bu_v_u8m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u8m1x8_u8m1(ret, 0);
  *v1 = __riscv_vget_v_u8m1x8_u8m1(ret, 1);
  *v2 = __riscv_vget_v_u8m1x8_u8m1(ret, 2);
  *v3 = __riscv_vget_v_u8m1x8_u8m1(ret, 3);
  *v4 = __riscv_vget_v_u8m1x8_u8m1(ret, 4);
  *v5 = __riscv_vget_v_u8m1x8_u8m1(ret, 5);
  *v6 = __riscv_vget_v_u8m1x8_u8m1(ret, 6);
  *v7 = __riscv_vget_v_u8m1x8_u8m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_u8m1(uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, word_type vl)
{
  vuint8m1x8_t ret = __riscv_vcreate_v_u8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_u8m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_i8m1(int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7, word_type vl)
{
  vint8m1x8_t ret = __riscv_vcreate_v_i8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_i8m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_u8m1_m(vbool8_t mask, uint8_t *a, vuint8m1_t idx, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, word_type vl)
{
  vuint8m1x8_t ret = __riscv_vcreate_v_u8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_u8m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_i8m1_m(vbool8_t mask, int8_t *a, vuint8m1_t idx, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7, word_type vl)
{
  vint8m1x8_t ret = __riscv_vcreate_v_i8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_i8m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, const int16_t *a, word_type vl)
{
  vint16m1x8_t ret = __riscv_th_vlseg8b_v_i16m1x8(a, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), vint16m1_t maskedoff7 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m1x8_t ret = __riscv_th_vlseg8b_v_i16m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x8_t ret = __riscv_th_vlsseg8b_v_i16m1x8(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), vint16m1_t maskedoff7 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x8_t ret = __riscv_th_vlsseg8b_v_i16m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, const uint16_t *a, word_type vl)
{
  vuint16m1x8_t ret = __riscv_th_vlseg8bu_v_u16m1x8(a, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), vuint16m1_t maskedoff7 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m1x8_t ret = __riscv_th_vlseg8bu_v_u16m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x8_t ret = __riscv_th_vlsseg8bu_v_u16m1x8(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), vuint16m1_t maskedoff7 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x8_t ret = __riscv_th_vlsseg8bu_v_u16m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8b_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, word_type vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_u16m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8b_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, word_type vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_u16m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8b_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, word_type vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_i16m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8b_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, word_type vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_i16m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, word_type vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_u16m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, word_type vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_u16m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, word_type vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_i16m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, word_type vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_i16m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg8b_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x8_t ret = __riscv_th_vlxseg8b_v_i16m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8b_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), vint16m1_t maskedoff7 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x8_t ret = __riscv_th_vlxseg8b_v_i16m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8bu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x8_t ret = __riscv_th_vlxseg8bu_v_u16m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8bu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), vuint16m1_t maskedoff7 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x8_t ret = __riscv_th_vlxseg8bu_v_u16m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, word_type vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_u16m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, word_type vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_i16m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, word_type vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_u16m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, word_type vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_i16m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, const int32_t *a, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlseg8b_v_i32m1x8(a, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), vint32m1_t maskedoff7 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlseg8b_v_i32m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlsseg8b_v_i32m1x8(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), vint32m1_t maskedoff7 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlsseg8b_v_i32m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, const uint32_t *a, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlseg8bu_v_u32m1x8(a, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), vuint32m1_t maskedoff7 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlseg8bu_v_u32m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlsseg8bu_v_u32m1x8(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), vuint32m1_t maskedoff7 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlsseg8bu_v_u32m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8b_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_u32m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8b_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_u32m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8b_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_i32m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8b_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_i32m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_u32m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_u32m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_i32m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_i32m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg8b_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlxseg8b_v_i32m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8b_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), vint32m1_t maskedoff7 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlxseg8b_v_i32m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8bu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlxseg8bu_v_u32m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8bu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), vuint32m1_t maskedoff7 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlxseg8bu_v_u32m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_u32m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_i32m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_u32m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_i32m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, const int64_t *a, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlseg8b_v_i64m1x8(a, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), vint64m1_t maskedoff7 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlseg8b_v_i64m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlsseg8b_v_i64m1x8(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), vint64m1_t maskedoff7 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlsseg8b_v_i64m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, const uint64_t *a, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlseg8bu_v_u64m1x8(a, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), vuint64m1_t maskedoff7 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlseg8bu_v_u64m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlsseg8bu_v_u64m1x8(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), vuint64m1_t maskedoff7 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlsseg8bu_v_u64m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8b_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_u64m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8b_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_u64m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8b_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_i64m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8b_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8b_v_i64m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_u64m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_u64m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_i64m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8b_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8b_v_i64m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg8b_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlxseg8b_v_i64m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8b_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), vint64m1_t maskedoff7 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlxseg8b_v_i64m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8bu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlxseg8bu_v_u64m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8bu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), vuint64m1_t maskedoff7 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlxseg8bu_v_u64m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_u64m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_i64m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_u64m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8b_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8b_v_i64m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, const int16_t *a, word_type vl)
{
  vint16m1x8_t ret = __riscv_th_vlseg8h_v_i16m1x8(a, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), vint16m1_t maskedoff7 __attribute__((__unused__)), const int16_t *a, word_type vl)
{
  vint16m1x8_t ret = __riscv_th_vlseg8h_v_i16m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x8_t ret = __riscv_th_vlsseg8h_v_i16m1x8(a, s, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), vint16m1_t maskedoff7 __attribute__((__unused__)), const int16_t *a, ptrdiff_t s, word_type vl)
{
  vint16m1x8_t ret = __riscv_th_vlsseg8h_v_i16m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, const uint16_t *a, word_type vl)
{
  vuint16m1x8_t ret = __riscv_th_vlseg8hu_v_u16m1x8(a, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), vuint16m1_t maskedoff7 __attribute__((__unused__)), const uint16_t *a, word_type vl)
{
  vuint16m1x8_t ret = __riscv_th_vlseg8hu_v_u16m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x8_t ret = __riscv_th_vlsseg8hu_v_u16m1x8(a, s, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), vuint16m1_t maskedoff7 __attribute__((__unused__)), const uint16_t *a, ptrdiff_t s, word_type vl)
{
  vuint16m1x8_t ret = __riscv_th_vlsseg8hu_v_u16m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8h_v_u16m1(uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, word_type vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8h_v_u16m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8h_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, word_type vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8h_v_u16m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8h_v_i16m1(int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, word_type vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8h_v_i16m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8h_v_i16m1_m(vbool16_t mask, int16_t *a, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, word_type vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8h_v_i16m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8h_v_u16m1(uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, word_type vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8h_v_u16m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8h_v_u16m1_m(vbool16_t mask, uint16_t *a, ptrdiff_t s, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, word_type vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8h_v_u16m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8h_v_i16m1(int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, word_type vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8h_v_i16m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8h_v_i16m1_m(vbool16_t mask, int16_t *a, ptrdiff_t s, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, word_type vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8h_v_i16m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg8h_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x8_t ret = __riscv_th_vlxseg8h_v_i16m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8h_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vbool16_t mask, vint16m1_t maskedoff0 __attribute__((__unused__)), vint16m1_t maskedoff1 __attribute__((__unused__)), vint16m1_t maskedoff2 __attribute__((__unused__)), vint16m1_t maskedoff3 __attribute__((__unused__)), vint16m1_t maskedoff4 __attribute__((__unused__)), vint16m1_t maskedoff5 __attribute__((__unused__)), vint16m1_t maskedoff6 __attribute__((__unused__)), vint16m1_t maskedoff7 __attribute__((__unused__)), const int16_t *a, vuint16m1_t idx, word_type vl)
{
  vint16m1x8_t ret = __riscv_th_vlxseg8h_v_i16m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i16m1x8_i16m1(ret, 0);
  *v1 = __riscv_vget_v_i16m1x8_i16m1(ret, 1);
  *v2 = __riscv_vget_v_i16m1x8_i16m1(ret, 2);
  *v3 = __riscv_vget_v_i16m1x8_i16m1(ret, 3);
  *v4 = __riscv_vget_v_i16m1x8_i16m1(ret, 4);
  *v5 = __riscv_vget_v_i16m1x8_i16m1(ret, 5);
  *v6 = __riscv_vget_v_i16m1x8_i16m1(ret, 6);
  *v7 = __riscv_vget_v_i16m1x8_i16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8hu_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x8_t ret = __riscv_th_vlxseg8hu_v_u16m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8hu_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vbool16_t mask, vuint16m1_t maskedoff0 __attribute__((__unused__)), vuint16m1_t maskedoff1 __attribute__((__unused__)), vuint16m1_t maskedoff2 __attribute__((__unused__)), vuint16m1_t maskedoff3 __attribute__((__unused__)), vuint16m1_t maskedoff4 __attribute__((__unused__)), vuint16m1_t maskedoff5 __attribute__((__unused__)), vuint16m1_t maskedoff6 __attribute__((__unused__)), vuint16m1_t maskedoff7 __attribute__((__unused__)), const uint16_t *a, vuint16m1_t idx, word_type vl)
{
  vuint16m1x8_t ret = __riscv_th_vlxseg8hu_v_u16m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u16m1x8_u16m1(ret, 0);
  *v1 = __riscv_vget_v_u16m1x8_u16m1(ret, 1);
  *v2 = __riscv_vget_v_u16m1x8_u16m1(ret, 2);
  *v3 = __riscv_vget_v_u16m1x8_u16m1(ret, 3);
  *v4 = __riscv_vget_v_u16m1x8_u16m1(ret, 4);
  *v5 = __riscv_vget_v_u16m1x8_u16m1(ret, 5);
  *v6 = __riscv_vget_v_u16m1x8_u16m1(ret, 6);
  *v7 = __riscv_vget_v_u16m1x8_u16m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsxseg8h_v_u16m1(uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, word_type vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8h_v_u16m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8h_v_i16m1(int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, word_type vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8h_v_i16m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8h_v_u16m1_m(vbool16_t mask, uint16_t *a, vuint16m1_t idx, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, word_type vl)
{
  vuint16m1x8_t ret = __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8h_v_u16m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8h_v_i16m1_m(vbool16_t mask, int16_t *a, vuint16m1_t idx, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7, word_type vl)
{
  vint16m1x8_t ret = __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8h_v_i16m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, const int32_t *a, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlseg8h_v_i32m1x8(a, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), vint32m1_t maskedoff7 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlseg8h_v_i32m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlsseg8h_v_i32m1x8(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), vint32m1_t maskedoff7 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlsseg8h_v_i32m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, const uint32_t *a, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlseg8hu_v_u32m1x8(a, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), vuint32m1_t maskedoff7 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlseg8hu_v_u32m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlsseg8hu_v_u32m1x8(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), vuint32m1_t maskedoff7 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlsseg8hu_v_u32m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8h_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8h_v_u32m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8h_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8h_v_u32m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8h_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8h_v_i32m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8h_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8h_v_i32m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8h_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8h_v_u32m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8h_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8h_v_u32m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8h_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8h_v_i32m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8h_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8h_v_i32m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg8h_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlxseg8h_v_i32m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8h_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), vint32m1_t maskedoff7 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlxseg8h_v_i32m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8hu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlxseg8hu_v_u32m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8hu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), vuint32m1_t maskedoff7 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlxseg8hu_v_u32m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsxseg8h_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8h_v_u32m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8h_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8h_v_i32m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8h_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8h_v_u32m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8h_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8h_v_i32m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, const int64_t *a, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlseg8h_v_i64m1x8(a, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), vint64m1_t maskedoff7 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlseg8h_v_i64m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlsseg8h_v_i64m1x8(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), vint64m1_t maskedoff7 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlsseg8h_v_i64m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, const uint64_t *a, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlseg8hu_v_u64m1x8(a, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), vuint64m1_t maskedoff7 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlseg8hu_v_u64m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlsseg8hu_v_u64m1x8(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), vuint64m1_t maskedoff7 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlsseg8hu_v_u64m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8h_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8h_v_u64m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8h_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8h_v_u64m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8h_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8h_v_i64m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8h_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8h_v_i64m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8h_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8h_v_u64m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8h_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8h_v_u64m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8h_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8h_v_i64m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8h_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8h_v_i64m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg8h_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlxseg8h_v_i64m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8h_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), vint64m1_t maskedoff7 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlxseg8h_v_i64m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8hu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlxseg8hu_v_u64m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8hu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), vuint64m1_t maskedoff7 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlxseg8hu_v_u64m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsxseg8h_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8h_v_u64m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8h_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8h_v_i64m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8h_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8h_v_u64m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8h_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8h_v_i64m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, const int32_t *a, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlseg8w_v_i32m1x8(a, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), vint32m1_t maskedoff7 __attribute__((__unused__)), const int32_t *a, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlseg8w_v_i32m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlsseg8w_v_i32m1x8(a, s, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), vint32m1_t maskedoff7 __attribute__((__unused__)), const int32_t *a, ptrdiff_t s, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlsseg8w_v_i32m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, const uint32_t *a, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlseg8wu_v_u32m1x8(a, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), vuint32m1_t maskedoff7 __attribute__((__unused__)), const uint32_t *a, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlseg8wu_v_u32m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlsseg8wu_v_u32m1x8(a, s, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), vuint32m1_t maskedoff7 __attribute__((__unused__)), const uint32_t *a, ptrdiff_t s, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlsseg8wu_v_u32m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8w_v_u32m1(uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8w_v_u32m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8w_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8w_v_u32m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8w_v_i32m1(int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8w_v_i32m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8w_v_i32m1_m(vbool32_t mask, int32_t *a, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8w_v_i32m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8w_v_u32m1(uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8w_v_u32m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8w_v_u32m1_m(vbool32_t mask, uint32_t *a, ptrdiff_t s, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8w_v_u32m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8w_v_i32m1(int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8w_v_i32m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8w_v_i32m1_m(vbool32_t mask, int32_t *a, ptrdiff_t s, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8w_v_i32m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg8w_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlxseg8w_v_i32m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8w_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0 __attribute__((__unused__)), vint32m1_t maskedoff1 __attribute__((__unused__)), vint32m1_t maskedoff2 __attribute__((__unused__)), vint32m1_t maskedoff3 __attribute__((__unused__)), vint32m1_t maskedoff4 __attribute__((__unused__)), vint32m1_t maskedoff5 __attribute__((__unused__)), vint32m1_t maskedoff6 __attribute__((__unused__)), vint32m1_t maskedoff7 __attribute__((__unused__)), const int32_t *a, vuint32m1_t idx, word_type vl)
{
  vint32m1x8_t ret = __riscv_th_vlxseg8w_v_i32m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i32m1x8_i32m1(ret, 0);
  *v1 = __riscv_vget_v_i32m1x8_i32m1(ret, 1);
  *v2 = __riscv_vget_v_i32m1x8_i32m1(ret, 2);
  *v3 = __riscv_vget_v_i32m1x8_i32m1(ret, 3);
  *v4 = __riscv_vget_v_i32m1x8_i32m1(ret, 4);
  *v5 = __riscv_vget_v_i32m1x8_i32m1(ret, 5);
  *v6 = __riscv_vget_v_i32m1x8_i32m1(ret, 6);
  *v7 = __riscv_vget_v_i32m1x8_i32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8wu_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlxseg8wu_v_u32m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8wu_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0 __attribute__((__unused__)), vuint32m1_t maskedoff1 __attribute__((__unused__)), vuint32m1_t maskedoff2 __attribute__((__unused__)), vuint32m1_t maskedoff3 __attribute__((__unused__)), vuint32m1_t maskedoff4 __attribute__((__unused__)), vuint32m1_t maskedoff5 __attribute__((__unused__)), vuint32m1_t maskedoff6 __attribute__((__unused__)), vuint32m1_t maskedoff7 __attribute__((__unused__)), const uint32_t *a, vuint32m1_t idx, word_type vl)
{
  vuint32m1x8_t ret = __riscv_th_vlxseg8wu_v_u32m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u32m1x8_u32m1(ret, 0);
  *v1 = __riscv_vget_v_u32m1x8_u32m1(ret, 1);
  *v2 = __riscv_vget_v_u32m1x8_u32m1(ret, 2);
  *v3 = __riscv_vget_v_u32m1x8_u32m1(ret, 3);
  *v4 = __riscv_vget_v_u32m1x8_u32m1(ret, 4);
  *v5 = __riscv_vget_v_u32m1x8_u32m1(ret, 5);
  *v6 = __riscv_vget_v_u32m1x8_u32m1(ret, 6);
  *v7 = __riscv_vget_v_u32m1x8_u32m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsxseg8w_v_u32m1(uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8w_v_u32m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8w_v_i32m1(int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8w_v_i32m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8w_v_u32m1_m(vbool32_t mask, uint32_t *a, vuint32m1_t idx, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, word_type vl)
{
  vuint32m1x8_t ret = __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8w_v_u32m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8w_v_i32m1_m(vbool32_t mask, int32_t *a, vuint32m1_t idx, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, word_type vl)
{
  vint32m1x8_t ret = __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8w_v_i32m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vlseg8w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, const int64_t *a, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlseg8w_v_i64m1x8(a, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), vint64m1_t maskedoff7 __attribute__((__unused__)), const int64_t *a, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlseg8w_v_i64m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlsseg8w_v_i64m1x8(a, s, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), vint64m1_t maskedoff7 __attribute__((__unused__)), const int64_t *a, ptrdiff_t s, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlsseg8w_v_i64m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, const uint64_t *a, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlseg8wu_v_u64m1x8(a, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlseg8wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), vuint64m1_t maskedoff7 __attribute__((__unused__)), const uint64_t *a, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlseg8wu_v_u64m1x8_m(mask, a, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlsseg8wu_v_u64m1x8(a, s, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlsseg8wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), vuint64m1_t maskedoff7 __attribute__((__unused__)), const uint64_t *a, ptrdiff_t s, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlsseg8wu_v_u64m1x8_m(mask, a, s, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsseg8w_v_u64m1(uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8w_v_u64m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8w_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8w_v_u64m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8w_v_i64m1(int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8w_v_i64m1x8(a, ret, vl);
}
ATTRIBUTE_PREFIX void vsseg8w_v_i64m1_m(vbool64_t mask, int64_t *a, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsseg8w_v_i64m1x8_m(mask, a, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8w_v_u64m1(uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8w_v_u64m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8w_v_u64m1_m(vbool64_t mask, uint64_t *a, ptrdiff_t s, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8w_v_u64m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8w_v_i64m1(int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8w_v_i64m1x8(a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vssseg8w_v_i64m1_m(vbool64_t mask, int64_t *a, ptrdiff_t s, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vssseg8w_v_i64m1x8_m(mask, a, s, ret, vl);
}
ATTRIBUTE_PREFIX void vlxseg8w_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlxseg8w_v_i64m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8w_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0 __attribute__((__unused__)), vint64m1_t maskedoff1 __attribute__((__unused__)), vint64m1_t maskedoff2 __attribute__((__unused__)), vint64m1_t maskedoff3 __attribute__((__unused__)), vint64m1_t maskedoff4 __attribute__((__unused__)), vint64m1_t maskedoff5 __attribute__((__unused__)), vint64m1_t maskedoff6 __attribute__((__unused__)), vint64m1_t maskedoff7 __attribute__((__unused__)), const int64_t *a, vuint64m1_t idx, word_type vl)
{
  vint64m1x8_t ret = __riscv_th_vlxseg8w_v_i64m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_i64m1x8_i64m1(ret, 0);
  *v1 = __riscv_vget_v_i64m1x8_i64m1(ret, 1);
  *v2 = __riscv_vget_v_i64m1x8_i64m1(ret, 2);
  *v3 = __riscv_vget_v_i64m1x8_i64m1(ret, 3);
  *v4 = __riscv_vget_v_i64m1x8_i64m1(ret, 4);
  *v5 = __riscv_vget_v_i64m1x8_i64m1(ret, 5);
  *v6 = __riscv_vget_v_i64m1x8_i64m1(ret, 6);
  *v7 = __riscv_vget_v_i64m1x8_i64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8wu_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlxseg8wu_v_u64m1x8(a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vlxseg8wu_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0 __attribute__((__unused__)), vuint64m1_t maskedoff1 __attribute__((__unused__)), vuint64m1_t maskedoff2 __attribute__((__unused__)), vuint64m1_t maskedoff3 __attribute__((__unused__)), vuint64m1_t maskedoff4 __attribute__((__unused__)), vuint64m1_t maskedoff5 __attribute__((__unused__)), vuint64m1_t maskedoff6 __attribute__((__unused__)), vuint64m1_t maskedoff7 __attribute__((__unused__)), const uint64_t *a, vuint64m1_t idx, word_type vl)
{
  vuint64m1x8_t ret = __riscv_th_vlxseg8wu_v_u64m1x8_m(mask, a, idx, vl);
  *v0 = __riscv_vget_v_u64m1x8_u64m1(ret, 0);
  *v1 = __riscv_vget_v_u64m1x8_u64m1(ret, 1);
  *v2 = __riscv_vget_v_u64m1x8_u64m1(ret, 2);
  *v3 = __riscv_vget_v_u64m1x8_u64m1(ret, 3);
  *v4 = __riscv_vget_v_u64m1x8_u64m1(ret, 4);
  *v5 = __riscv_vget_v_u64m1x8_u64m1(ret, 5);
  *v6 = __riscv_vget_v_u64m1x8_u64m1(ret, 6);
  *v7 = __riscv_vget_v_u64m1x8_u64m1(ret, 7);
}
ATTRIBUTE_PREFIX void vsxseg8w_v_u64m1(uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8w_v_u64m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8w_v_i64m1(int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8w_v_i64m1x8(a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8w_v_u64m1_m(vbool64_t mask, uint64_t *a, vuint64m1_t idx, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, word_type vl)
{
  vuint64m1x8_t ret = __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8w_v_u64m1x8_m(mask, a, idx, ret, vl);
}
ATTRIBUTE_PREFIX void vsxseg8w_v_i64m1_m(vbool64_t mask, int64_t *a, vuint64m1_t idx, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7, word_type vl)
{
  vint64m1x8_t ret = __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
  __riscv_th_vsxseg8w_v_i64m1x8_m(mask, a, idx, ret, vl);
}

#undef ATTRIBUTE_PREFIX

#endif
