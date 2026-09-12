/* { dg-do compile } */
/* { dg-options "-march=rv64imfd_zfa -mabi=lp64d"  { target { rv64 } } } */
/* { dg-options "-march=rv32imfd_zfa -mabi=ilp32d" { target { rv32 } } } */
/* { dg-skip-if "" { *-*-* } {"-O0" "-Og" "-Oz"} } */

extern float a, b;
extern double c, d;

void
foo(float *x, double *y)
{
  {
    *x = __builtin_riscv_fminmf(a, b);
    *y = __builtin_riscv_fminm(c, d);
  }

  {
    *x = __builtin_riscv_fmaxmf(a, b);
    *y = __builtin_riscv_fmaxm(c, d);
  }
}

/* { dg-final { scan-assembler-times "fminm.s" 1 } } */
/* { dg-final { scan-assembler-times "fminm.d" 1 } } */
/* { dg-final { scan-assembler-times "fmaxm.s" 1 } } */
/* { dg-final { scan-assembler-times "fmaxm.d" 1 } } */
