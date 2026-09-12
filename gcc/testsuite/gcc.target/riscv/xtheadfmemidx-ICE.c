/* { dg-do compile } */
/* { dg-options "-march=rv32imafdc_zicsr_xtheadfmemidx_xtheadfmv_xtheadmemidx -mabi=ilp32d -mcmodel=medany -O2" } */

typedef union
{
  double value;
  struct
  {
    int lsw;
    unsigned int msw;
  } parts;
} ieee_double_shape_type;

static const double Zero[] = {0.0, -0.0};

extern int a;
double __ieee754_fmod(double x, double y)

{
  int hx, hy, sx;
  unsigned int lx, ly;

  do
  {
    ieee_double_shape_type ew_u;
    ew_u.value = (x);
    (hx) = ew_u.parts.msw;
    (lx) = ew_u.parts.lsw;
  } while (0);
  do
  {
    ieee_double_shape_type ew_u;
    ew_u.value = (y);
    (hy) = ew_u.parts.msw;
    (ly) = ew_u.parts.lsw;
  } while (0);

  sx = hx & 0x80000000;

  if ((hy | ly) == 0)
    return (x * y) / (x * y);
  if (a)
  {
    return Zero[(unsigned int)sx >> 31];
  }

  return x;
}