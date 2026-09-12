/* { dg-do compile } */
/* { dg-options "-march=rv64i_ssdtso -mabi=lp64" } */

#if !defined(__riscv_ssdtso)
#error "ssdtso"
#endif

int foo;
