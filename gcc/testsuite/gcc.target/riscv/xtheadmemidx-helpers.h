#ifndef XTHEADMEMIDX_HELPERS_H
#define XTHEADMEMIDX_HELPERS_H

#include <stdint-gcc.h>

#define intX_t long
#define uintX_t unsigned long

#define PRE_DEC_LOAD(T, N)						\
  void									\
  T ## _pre_dec_load_ ## N (T *p)					\
  {									\
    extern void f ## T ## N (T*, uintX_t);				\
    p = p - N;								\
    T x = *p;								\
    f ## T ## N (p, x);							\
  }

#define PRE_INC_LOAD(T, N)						\
  void									\
  T ## _pre_inc_load_ ## N (T *p)					\
  {									\
    extern void f ## T ## N (T*, uintX_t);				\
    p = p + N;								\
    T x = *p;								\
    f ## T ## N (p, x);							\
  }

#define POST_DEC_LOAD(T, N)						\
  void									\
  T ## _post_dec_load_ ## N (T *p)					\
  {									\
    extern void f ## T ## N (T*, uintX_t);				\
    T x = *p;								\
    p = p - N;								\
    f ## T ## N (p, x);							\
  }

#define POST_INC_LOAD(T,N)						\
  void									\
  T ## _post_inc_load_ ## N (T *p)					\
  {									\
    extern void f ## T ## N (T*,uintX_t);				\
    T x = *p;								\
    p = p + N;								\
    f ## T ## N (p, x);							\
  }

#define PRE_DEC_STORE(T, N)						\
  T *									\
  T ## _pre_dec_store_ ## N (T *p, T v)					\
  {									\
    p = p - N;								\
    *p = v;								\
    return p;								\
  }

#define PRE_INC_STORE(T, N)						\
  T *									\
  T ## _pre_inc_store_ ## N (T *p, T v)					\
  {									\
    p = p + N;								\
    *p = v;								\
    return p;								\
  }

#define POST_DEC_STORE(T, N)						\
  T *									\
  T ## _post_dec_store_ ## N (T *p, T v)				\
  {									\
    *p = v;								\
    p = p - N;								\
    return p;								\
  }

#define POST_INC_STORE(T, N)						\
  T *									\
  T ## _post_inc_store_ ## N (T *p, T v)				\
  {									\
    *p = v;								\
    p = p + N;								\
    return p;								\
  }

#define LR_REG_IMM(T, IMM)						\
  intX_t								\
  lr_reg_imm_ ## T ## _ ## IMM (intX_t rs1, intX_t rs2)			\
  {									\
    return *(T*)(rs1 + (rs2 << IMM));					\
  }

#define SR_REG_IMM(T, IMM)						\
  void									\
  sr_reg_imm_ ## T ## _ ## IMM (intX_t rs1, intX_t rs2, T val)		\
  {									\
    *(T*)(rs1 + (rs2 << IMM)) = val;					\
  }

#define SR_REG_IMM_ZERO(T, IMM)						\
  void									\
  sr_reg_imm_zero_ ## T ## _ ## IMM (intX_t rs1, intX_t rs2)		\
  {									\
    *(T*)(rs1 + (rs2 << IMM)) = 0;						\
  }

#define LR_REG_IMM_UPD(T, IMM)						\
  intX_t								\
  lr_reg_imm_upd_ ## T ## _ ## IMM (intX_t *rs1, intX_t rs2)		\
  {									\
    *rs1 = *rs1 + (rs2 << IMM);						\
    return *(T*)(*rs1);							\
  }

#define SR_REG_IMM_UPD(T, IMM)						\
  void									\
  sr_reg_imm_upd_ ## T ## _ ## IMM (intX_t *rs1, intX_t rs2, T val)	\
  {									\
    *rs1 = *rs1 + (rs2 << IMM);						\
    *(T*)(*rs1) = val;	 						\
  }

#define LR_SR_REG_IDX(T)						\
  void									\
  lr_sr_reg_idx_ ## T ## _ ## IMM (T *rs1, int32_t idx)			\
  {									\
    if (rs1[idx] > 0)							\
      rs1[idx] = 0;	 						\
  }

#define LRU_REG_IMM(T, IMM)						\
  intX_t								\
  lru_reg_imm_ ## T ## IMM (intX_t rs1, intX_t rs2)			\
  {									\
    rs2 = (uint32_t)rs2;						\
    return *(T*)(rs1 + (rs2 << IMM));					\
  }

#define SRU_REG_IMM(T, IMM)						\
  void									\
  sr_reg_imm_ ## T ## _ ## IMM (intX_t rs1, intX_t rs2, T val)		\
  {									\
    rs2 = (uint32_t)rs2;						\
    *(T*)(rs1 + (rs2 << IMM)) = val;					\
  }

#define LRU_REG_IMM_UPD(T, IMM)						\
  intX_t								\
  lru_reg_imm_upd_ ## T ## IMM (intX_t rs1, intX_t *rs2)		\
  {									\
    uintX_t rs2_32 = (uint32_t)*rs2;					\
    intX_t t = rs1 + (rs2_32 << IMM);					\
    intX_t v = *(T*)t;							\
    *rs2 = t;								\
    return v;								\
  }

#define SRU_REG_IMM_UPD(T, IMM)						\
  void									\
  sr_reg_imm_upd_ ## T ## _ ## IMM (intX_t rs1, intX_t *rs2, T val)	\
  {									\
    uintX_t rs2_32 = (uint32_t)*rs2;					\
    intX_t t = rs1 + (rs2_32 << IMM);					\
    *(T*)t = val;							\
    *rs2 = t;								\
  }
#define LR_SR_REG_UIDX(T)						\
  void									\
  lr_sr_reg_idx_ ## T ## _ ## IMM (T *rs1, uint32_t idx)		\
  {									\
    if (rs1[idx] > 0)							\
      rs1[idx] = 0;	 						\
  }

#endif /* XTHEADMEMIDX_HELPERS_H */
