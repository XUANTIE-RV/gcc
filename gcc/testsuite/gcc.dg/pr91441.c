/* PR target/91441 */
/* { dg-do compile  } */
/* { dg-options "--param asan-stack=1 -fsanitize=kernel-address" } */

int *bar(int *);
int *f( int a)
{
  return bar(&a);
}