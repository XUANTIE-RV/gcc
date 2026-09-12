/* { dg-do compile } */
/* { dg-require-effective-target riscv_rvv_zvl128b_or_scalar } */
/* { dg-options "-O2 -fdump-tree-ivopts-details" } */

int a[128];
extern int b[];

int bar (int *);

int
foo (int n)
{
  int i;

  for (i = 0; i < n; i++)
    {
      unsigned char uc = (unsigned char)i;
      a[i] = i;
      b[uc] = 1;
    }

  bar (a);
  return 0;
}

/* Address of array reference to b is scev.  */
/* { dg-final { scan-tree-dump-times "  Type:\\tREFERENCE ADDRESS\n" 2 "ivopts" } } */
