/* { dg-do compile  { target { ! riscv_abi_e } } } */
/* { dg-options "-march=rv32gc_xtheadbb" { target { rv32 } } } */
/* { dg-options "-march=rv64gc_xtheadbb" { target { rv64 } } } */
/* { dg-skip-if "" { *-*-* } { "-O0" "-Os" "-Og" } } */

long foo (long a)
{
  return a & 0xfff;
}

long foo1 (long a)
{
  return a & 0xffffff;
}

/* { dg-final { scan-assembler-times "th.extu\t" 2 } } */
/* { dg-final { scan-assembler-not {\mandi} } } */
/* { dg-final { scan-assembler-not {\mslli} } } */
/* { dg-final { scan-assembler-not {\msrli} } } */
