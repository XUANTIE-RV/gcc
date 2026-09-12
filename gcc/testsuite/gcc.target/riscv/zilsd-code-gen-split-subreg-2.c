/* { dg-do compile } */
/* { dg-options "-march=rv32i_zilsd -mabi=ilp32" } */

long long y;
long long foo(long long x)
{
    return y >> x;
}
/* The expander splits this 64-bit load into two 32-bit loads.  Restoring
   a single load requires an expander fix or a later combining pass.  */
/* { dg-final { scan-assembler-times "ld\t" 1 { xfail riscv*-*-* } } } */

/* Os and Oz will use libcall, so the 64 bit load won't be split.  */
/* { dg-skip-if "" { *-*-* } { "-O0" "-Os" "-Oz" } } */
