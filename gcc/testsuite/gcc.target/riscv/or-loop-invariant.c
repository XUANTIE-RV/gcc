/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbs -mabi=lp64 -fdump-rtl-loop2_invariant" } */
/* { dg-skip-if "" { *-*-* } { "-O0" "-Os" "-Og" "-Oz" "-O3" } } */

short a;
int b;

void foo()
{
  for (; b; ++b)
    a = a ^ 4129;
}

/* { dg-final { scan-rtl-dump "Decided" "loop2_invariant" } } */