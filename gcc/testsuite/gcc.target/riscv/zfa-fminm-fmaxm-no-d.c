/* BUG 81812479: Zfa double-precision builtins require D.  */
/* { dg-do compile } */
/* { dg-options "-march=rv32imaf_zfa -mabi=ilp32 -Werror=implicit-function-declaration" } */

extern double a, b;

void
foo (double *x, double *y)
{
  *x = __builtin_riscv_fminm (a, b); /* { dg-error "implicit declaration of function" } */
  *y = __builtin_riscv_fmaxm (a, b); /* { dg-error "implicit declaration of function" } */
}
