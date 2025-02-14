
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv64*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

uint64_t test_srl32_u(uint64_t a, uint32_t b) {
    return __rv__srl32_u (a, b);
}

/* { dg-final { scan-assembler "\tsrl32.u" } }*/

/* { dg-final { cleanup-saved-temps } } */
