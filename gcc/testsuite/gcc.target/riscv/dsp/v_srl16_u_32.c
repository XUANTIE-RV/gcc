
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv32*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

uint16x2_t test_v_srl16_u(uint16x2_t a, uint32_t b) {
    return __rv__v_srl16_u (a, b);
}

/* { dg-final { scan-assembler "\tsrl16.u" } }*/

/* { dg-final { cleanup-saved-temps } } */
