// ====------ activemask.cu---------- *- CUDA -* ----===////
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//
// ===----------------------------------------------------------------------===//

__global__ void kernel() {
  auto mask = __activemask();
}

int main() {
  kernel<<<1, 64>>>();
  return 0;
}