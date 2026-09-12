/* { dg-do compile { target { ! riscv_abi_e } } } */
/* { dg-skip-if "" { *-*-* } { "-O0" "-O1" "-Og" } } */
/* { dg-options "-march=rv64gc_xtheadmemidx" { target { rv64 } } } */
/* { dg-options "-march=rv32gc_xtheadmemidx" { target { rv32 } } } */

#include "xtheadmemidx-helpers.h"

SR_REG_IMM_ZERO(int8_t, 3)
/* { dg-final { scan-assembler-times {\mth.srb\t[^\n\r]*3\M} 1 } } */
SR_REG_IMM_ZERO(int16_t, 0)
/* { dg-final { scan-assembler-times {\mth.srh\t[^\n\r]*0\M} 1 } } */
SR_REG_IMM_ZERO(int32_t, 1)
/* { dg-final { scan-assembler-times {\mth.srw\t[^\n\r]*1\M} 1 } } */
#if __riscv_xlen == 64
SR_REG_IMM_ZERO(int64_t, 2)
/* { dg-final { scan-assembler-times {\mth.srd\t[^\n\r]*2\M} 1 { target { rv64 } } } } */
#endif

/* { dg-final { scan-assembler-not {\mslli\M} } } */
