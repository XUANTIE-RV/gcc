/* { dg-do compile } */
/* { dg-skip-if "" { *-*-* } { "-O0" "-O1" "-Og" } } */
/* { dg-options "-march=rv64gc_xtheadmemidx_xtheadfmemidx -mabi=lp64d" { target { rv64 } } } */
/* { dg-options "-march=rv32imafc_xtheadmemidx_xtheadfmemidx -mabi=ilp32f" { target { rv32 } } } */

#include "xtheadmemidx-helpers.h"

/* TODO: After we adjust address cost for xtheadmemidx and xtheadfmemidx,
   the memory index load instruction will be generated at fwprop1 pass.
   Which will prevent zero extension to be combined with the load instruction,
   due to load destination register is used in the memory index instruction.

   I think the proper solution is to propagate the zero extension to the
   load instruction at fwprop1 pass before propagating the memory index
   instruction. However, fwprop1 only compares the cost of the source
   instruction before and after propagation, but does not consider the
   benefit of eliminating instructions after propagation. This is a potential
   optimization point that can be further investigated later. For now,
   let's comment out the code generation check.

LRU_REG_IMM_UPD(float, 0)
*/
#if __riscv_xlen == 64
LRU_REG_IMM_UPD(double, 2)
#endif

SRU_REG_IMM_UPD(float, 1)
#if __riscv_xlen == 64
SRU_REG_IMM_UPD(double, 3)
#endif

/* If the shifted value is used later, we cannot eliminate it.  */
/* { dg-final { scan-assembler-times {\mslli\M} 1 { target { rv32 } } } } */
/* { dg-final { scan-assembler-times {\mslli\M} 3 { target { rv64 } } } } */
