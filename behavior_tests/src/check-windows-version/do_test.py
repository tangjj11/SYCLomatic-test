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
from test_config import CT_TOOL

from test_utils import *

def setup_test():
    change_dir(test_config.current_test)
    return True

def get_windows_version(arg1, arg2):
    call_subprocess("powershell \"(Get-Item -path " + arg1 + ").VersionInfo." + arg2 + "\"")
    return test_config.command_output
def migrate_test():

    version = "2022.0.0.0"
    call_subprocess(test_config.CT_TOOL + " --cuda-include-path=" + test_config.include_path +
        " --usm-level=abc")
    return is_sub_string("--usm-level option: Cannot find option named \'abc\'", test_config.command_output)

def build_test():
    return True

def run_test():
    return True