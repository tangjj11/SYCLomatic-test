# ====------ do_test.py---------- *- Python -* ----===##
#
# Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
# See https://llvm.org/LICENSE.txt for license information.
# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
#
#
# ===----------------------------------------------------------------------===#
import subprocess
import platform
import os
import sys

from test_utils import *

def setup_test():
    change_dir(test_config.current_test)
    return True

def migrate_test():

    call_subprocess(test_config.CT_TOOL + " --use-custom-helper=file --custom-helper-name=aaa!!! --cuda-include-path=" + test_config.include_path)

    return is_sub_string("Error: Custom helper header file name is invalid. The name can only contain digits(0-9), underscore(_) or letters(a-zA-Z).", test_config.command_output)

def build_test():
    return True

def run_test():
    return True