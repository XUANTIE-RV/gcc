/* { dg-do compile } */
/* { dg-options "-march=rv64i -mabi=lp64 -mtune=rocket" } */
/* { dg-skip-if "" { *-*-* } {"-O0" "-O1" "-Os" "-Og" "-Oz"} } */

unsigned long foo ()
{
  return 0x8080808080808080;
}

/* { dg-final { scan-assembler-times "ld.*LC0" 1 } } */
