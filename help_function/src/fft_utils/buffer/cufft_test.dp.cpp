// ===--- cufft_test.dp.cpp -----------------------------------*- C++ -*---===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
// ===---------------------------------------------------------------------===//

#define DPCT_USM_LEVEL_NONE
#include <CL/sycl.hpp>
#include <dpct/dpct.hpp>
#include "c2c_1d_inplace.dp.cpp"
#include "c2c_1d_inplace_make_plan.dp.cpp"
#include "c2c_1d_outofplace.dp.cpp"
#include "c2c_1d_outofplace_make_plan.dp.cpp"
#include "c2c_2d_inplace.dp.cpp"
#include "c2c_2d_inplace_make_plan.dp.cpp"
#include "c2c_2d_outofplace.dp.cpp"
#include "c2c_2d_outofplace_make_plan.dp.cpp"
#include "c2c_3d_inplace.dp.cpp"
#include "c2c_3d_inplace_make_plan.dp.cpp"
#include "c2c_3d_outofplace.dp.cpp"
#include "c2c_3d_outofplace_make_plan.dp.cpp"
#include "c2c_many_1d_inplace_advanced.dp.cpp"
#include "c2c_many_1d_inplace_basic.dp.cpp"
#include "c2c_many_1d_outofplace_advanced.dp.cpp"
#include "c2c_many_1d_outofplace_basic.dp.cpp"
#include "c2c_many_2d_inplace_advanced.dp.cpp"
#include "c2c_many_2d_inplace_basic.dp.cpp"
#include "c2c_many_2d_outofplace_advanced.dp.cpp"
#include "c2c_many_2d_outofplace_basic.dp.cpp"
#include "c2c_many_3d_inplace_advanced.dp.cpp"
#include "c2c_many_3d_inplace_basic.dp.cpp"
#include "c2c_many_3d_outofplace_advanced.dp.cpp"
#include "c2c_many_3d_outofplace_basic.dp.cpp"
#include "d2zz2d_1d_inplace.dp.cpp"
#include "d2zz2d_1d_inplace_make_plan.dp.cpp"
#include "d2zz2d_1d_outofplace.dp.cpp"
#include "d2zz2d_1d_outofplace_make_plan.dp.cpp"
#include "d2zz2d_2d_inplace.dp.cpp"
#include "d2zz2d_2d_inplace_make_plan.dp.cpp"
#include "d2zz2d_2d_outofplace.dp.cpp"
#include "d2zz2d_2d_outofplace_make_plan.dp.cpp"
#include "d2zz2d_3d_inplace.dp.cpp"
#include "d2zz2d_3d_inplace_make_plan.dp.cpp"
#include "d2zz2d_3d_outofplace.dp.cpp"
#include "d2zz2d_3d_outofplace_make_plan.dp.cpp"
#include "d2zz2d_many_1d_inplace_advanced.dp.cpp"
#include "d2zz2d_many_1d_inplace_basic.dp.cpp"
#include "d2zz2d_many_1d_outofplace_advanced.dp.cpp"
#include "d2zz2d_many_1d_outofplace_basic.dp.cpp"
#include "d2zz2d_many_2d_inplace_advanced.dp.cpp"
#include "d2zz2d_many_2d_inplace_basic.dp.cpp"
#include "d2zz2d_many_2d_outofplace_advanced.dp.cpp"
#include "d2zz2d_many_2d_outofplace_basic.dp.cpp"
#include "d2zz2d_many_3d_inplace_advanced.dp.cpp"
#include "d2zz2d_many_3d_inplace_basic.dp.cpp"
#include "d2zz2d_many_3d_outofplace_advanced.dp.cpp"
#include "d2zz2d_many_3d_outofplace_basic.dp.cpp"
#include "r2cc2r_1d_inplace.dp.cpp"
#include "r2cc2r_1d_inplace_make_plan.dp.cpp"
#include "r2cc2r_1d_outofplace.dp.cpp"
#include "r2cc2r_1d_outofplace_make_plan.dp.cpp"
#include "r2cc2r_2d_inplace.dp.cpp"
#include "r2cc2r_2d_inplace_make_plan.dp.cpp"
#include "r2cc2r_2d_outofplace.dp.cpp"
#include "r2cc2r_2d_outofplace_make_plan.dp.cpp"
#include "r2cc2r_3d_inplace.dp.cpp"
#include "r2cc2r_3d_inplace_make_plan.dp.cpp"
#include "r2cc2r_3d_outofplace.dp.cpp"
#include "r2cc2r_3d_outofplace_make_plan.dp.cpp"
#include "r2cc2r_many_1d_inplace_advanced.dp.cpp"
#include "r2cc2r_many_1d_inplace_basic.dp.cpp"
#include "r2cc2r_many_1d_outofplace_advanced.dp.cpp"
#include "r2cc2r_many_1d_outofplace_basic.dp.cpp"
#include "r2cc2r_many_2d_inplace_advanced.dp.cpp"
#include "r2cc2r_many_2d_inplace_basic.dp.cpp"
#include "r2cc2r_many_2d_outofplace_advanced.dp.cpp"
#include "r2cc2r_many_2d_outofplace_basic.dp.cpp"
#include "r2cc2r_many_3d_inplace_advanced.dp.cpp"
#include "r2cc2r_many_3d_inplace_basic.dp.cpp"
#include "r2cc2r_many_3d_outofplace_advanced.dp.cpp"
#include "r2cc2r_many_3d_outofplace_basic.dp.cpp"
#include "z2z_1d_inplace.dp.cpp"
#include "z2z_1d_inplace_make_plan.dp.cpp"
#include "z2z_1d_outofplace.dp.cpp"
#include "z2z_1d_outofplace_make_plan.dp.cpp"
#include "z2z_2d_inplace.dp.cpp"
#include "z2z_2d_inplace_make_plan.dp.cpp"
#include "z2z_2d_outofplace.dp.cpp"
#include "z2z_2d_outofplace_make_plan.dp.cpp"
#include "z2z_3d_inplace.dp.cpp"
#include "z2z_3d_inplace_make_plan.dp.cpp"
#include "z2z_3d_outofplace.dp.cpp"
#include "z2z_3d_outofplace_make_plan.dp.cpp"
#include "z2z_many_1d_inplace_advanced.dp.cpp"
#include "z2z_many_1d_inplace_basic.dp.cpp"
#include "z2z_many_1d_outofplace_advanced.dp.cpp"
#include "z2z_many_1d_outofplace_basic.dp.cpp"
#include "z2z_many_2d_inplace_advanced.dp.cpp"
#include "z2z_many_2d_inplace_basic.dp.cpp"
#include "z2z_many_2d_outofplace_advanced.dp.cpp"
#include "z2z_many_2d_outofplace_basic.dp.cpp"
#include "z2z_many_3d_inplace_advanced.dp.cpp"
#include "z2z_many_3d_inplace_basic.dp.cpp"
#include "z2z_many_3d_outofplace_advanced.dp.cpp"
#include "z2z_many_3d_outofplace_basic.dp.cpp"

#define TEST(func)                                                             \
  {                                                                            \
    bool res = func();                                                         \
    if (!res) {                                                                \
      printf("failed case: " #func "\n");                                      \
    }                                                                          \
    all_pass = all_pass && res;                                                \
    dev_ct1.queues_wait_and_throw();                                           \
  }

int main() {
  dpct::device_ext &dev_ct1 = dpct::get_current_device();
  bool all_pass = true;

  TEST(c2c_1d_inplace);
  TEST(c2c_1d_inplace_make_plan);
  TEST(c2c_1d_outofplace);
  TEST(c2c_1d_outofplace_make_plan);
  TEST(c2c_2d_inplace);
  TEST(c2c_2d_inplace_make_plan);
  TEST(c2c_2d_outofplace);
  TEST(c2c_2d_outofplace_make_plan);
  TEST(c2c_3d_inplace);
  TEST(c2c_3d_inplace_make_plan);
  TEST(c2c_3d_outofplace);
  TEST(c2c_3d_outofplace_make_plan);
  TEST(c2c_many_1d_inplace_advanced);
  TEST(c2c_many_1d_inplace_basic);
  TEST(c2c_many_1d_outofplace_advanced);
  TEST(c2c_many_1d_outofplace_basic);
  TEST(c2c_many_2d_inplace_advanced);
  TEST(c2c_many_2d_inplace_basic);
  TEST(c2c_many_2d_outofplace_advanced);
  TEST(c2c_many_2d_outofplace_basic);
  TEST(c2c_many_3d_inplace_advanced);
  TEST(c2c_many_3d_inplace_basic);
  TEST(c2c_many_3d_outofplace_advanced);
  TEST(c2c_many_3d_outofplace_basic);
  TEST(d2zz2d_1d_inplace);
  TEST(d2zz2d_1d_inplace_make_plan);
  TEST(d2zz2d_1d_outofplace);
  TEST(d2zz2d_1d_outofplace_make_plan);
  TEST(d2zz2d_2d_inplace);
  TEST(d2zz2d_2d_inplace_make_plan);
  TEST(d2zz2d_2d_outofplace);
  TEST(d2zz2d_2d_outofplace_make_plan);
  TEST(d2zz2d_3d_inplace);
  TEST(d2zz2d_3d_inplace_make_plan);
  TEST(d2zz2d_3d_outofplace);
  TEST(d2zz2d_3d_outofplace_make_plan);
  TEST(d2zz2d_many_1d_inplace_advanced);
  TEST(d2zz2d_many_1d_inplace_basic);
  TEST(d2zz2d_many_1d_outofplace_advanced);
  TEST(d2zz2d_many_1d_outofplace_basic);
  TEST(d2zz2d_many_2d_inplace_advanced);
  TEST(d2zz2d_many_2d_inplace_basic);
  TEST(d2zz2d_many_2d_outofplace_advanced);
  TEST(d2zz2d_many_2d_outofplace_basic);
  TEST(d2zz2d_many_3d_inplace_advanced);
  TEST(d2zz2d_many_3d_inplace_basic);
  TEST(d2zz2d_many_3d_outofplace_advanced);
  TEST(d2zz2d_many_3d_outofplace_basic);
  TEST(r2cc2r_1d_inplace);
  TEST(r2cc2r_1d_inplace_make_plan);
  TEST(r2cc2r_1d_outofplace);
  TEST(r2cc2r_1d_outofplace_make_plan);
  TEST(r2cc2r_2d_inplace);
  TEST(r2cc2r_2d_inplace_make_plan);
  TEST(r2cc2r_2d_outofplace);
  TEST(r2cc2r_2d_outofplace_make_plan);
  TEST(r2cc2r_3d_inplace);
  TEST(r2cc2r_3d_inplace_make_plan);
  TEST(r2cc2r_3d_outofplace);
  TEST(r2cc2r_3d_outofplace_make_plan);
  TEST(r2cc2r_many_1d_inplace_advanced);
  TEST(r2cc2r_many_1d_inplace_basic);
  TEST(r2cc2r_many_1d_outofplace_advanced);
  TEST(r2cc2r_many_1d_outofplace_basic);
  TEST(r2cc2r_many_2d_inplace_advanced);
  TEST(r2cc2r_many_2d_inplace_basic);
  TEST(r2cc2r_many_2d_outofplace_advanced);
  TEST(r2cc2r_many_2d_outofplace_basic);
  TEST(r2cc2r_many_3d_inplace_advanced);
  TEST(r2cc2r_many_3d_inplace_basic);
  TEST(r2cc2r_many_3d_outofplace_advanced);
  TEST(r2cc2r_many_3d_outofplace_basic);
  TEST(z2z_1d_inplace);
  TEST(z2z_1d_inplace_make_plan);
  TEST(z2z_1d_outofplace);
  TEST(z2z_1d_outofplace_make_plan);
  TEST(z2z_2d_inplace);
  TEST(z2z_2d_inplace_make_plan);
  TEST(z2z_2d_outofplace);
  TEST(z2z_2d_outofplace_make_plan);
  TEST(z2z_3d_inplace);
  TEST(z2z_3d_inplace_make_plan);
  TEST(z2z_3d_outofplace);
  TEST(z2z_3d_outofplace_make_plan);
  TEST(z2z_many_1d_inplace_advanced);
  TEST(z2z_many_1d_inplace_basic);
  TEST(z2z_many_1d_outofplace_advanced);
  TEST(z2z_many_1d_outofplace_basic);
  TEST(z2z_many_2d_inplace_advanced);
  TEST(z2z_many_2d_inplace_basic);
  TEST(z2z_many_2d_outofplace_advanced);
  TEST(z2z_many_2d_outofplace_basic);
  TEST(z2z_many_3d_inplace_advanced);
  TEST(z2z_many_3d_inplace_basic);
  TEST(z2z_many_3d_outofplace_advanced);
  TEST(z2z_many_3d_outofplace_basic);

  if (all_pass) {
    printf("Pass\n");
    return 0;
  }
  printf("Fail\n");
  return -1;
}
