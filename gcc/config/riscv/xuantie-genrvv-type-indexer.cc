/* Definitions of prototypes for RISC-V Matrix built-in functions.  -*- C -*-
   Copyright (C) 2024 Free Software Foundation, Inc.
   Contributed by Alibaba Damo Academy Xuantie Team.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GCC is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

#ifdef  XUANTIE_GENRVV_TYPE_INDEXER_CC

bool
valid_fp8_type (unsigned sew, int lmul_log2)
{
  if (lmul_log2 > 3)
    return false;

  return sew == 8 && lmul_log2 >= -3;
}

std::string
fp8e4m3_type (int lmul_log2)
{
  if (!valid_fp8_type (8, lmul_log2))
    return "INVALID";

  std::stringstream mode;
  mode << "vfloat8e4m3" << to_lmul (lmul_log2) << "_t";
  return mode.str ();
}

std::string
fp8e5m2_type (int lmul_log2)
{
  if (!valid_fp8_type (8, lmul_log2))
    return "INVALID";

  std::stringstream mode;
  mode << "vfloat8e5m2" << to_lmul (lmul_log2) << "_t";
  return mode.str ();
}

std::string
same_ratio_eew_fp8e4_type (unsigned sew, int lmul_log2)
{
  if (sew != 16)
    return "INVALID";
  int elmul_log2 = lmul_log2 - 1;
  return fp8e4m3_type (elmul_log2);
}

std::string
same_ratio_eew_fp8e5_type (unsigned sew, int lmul_log2)
{
  if (sew != 16)
    return "INVALID";
  int elmul_log2 = lmul_log2 - 1;
  return fp8e5m2_type (elmul_log2);
}

std::string
same_ratio_quad_trunc_bf16_type (unsigned sew, int lmul_log2)
{
  if (sew != 64)
    return "INVALID";
  int elmul_log2 = lmul_log2 - 2;
  return bfloat16_type (elmul_log2);
}

#endif