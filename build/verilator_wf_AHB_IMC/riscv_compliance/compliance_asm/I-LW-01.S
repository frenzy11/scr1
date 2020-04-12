# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-LW-01.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-LW-01.S"
# RISC-V Compliance Test I-LW-01

# Copyright (c) 2017, Codasip Ltd.
# Copyright (c) 2018, Imperas Software Ltd. Additions
# All rights reserved.

# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
# * Redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer.
# * Redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution.
# * Neither the name of the Codasip Ltd., Imperas Software Ltd. nor the
# names of its contributors may be used to endorse or promote products
# derived from this software without specific prior written permission.

# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
# IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
# THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
# PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL Codasip Ltd., Imperas Software Ltd.
# BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
# ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

# Specification: RV32I Base Integer Instruction Set, Version 2.0
# Description: Testing instruction LW.

# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_test.h" 1
# 33 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-LW-01.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_io.h" 1
# 34 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-LW-01.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/test_macros.h" 1
# 11 "/home/oleg/scr1/sim/tests/riscv_compliance/test_macros.h"
# 1 "/home/oleg/scr1/sim/tests/common/riscv_macros.h" 1





# 1 "/home/oleg/scr1/sim/tests/common/riscv_csr_encoding.h" 1
# 1473 "/home/oleg/scr1/sim/tests/common/riscv_csr_encoding.h"
# 1 "/home/oleg/scr1/sim/tests/common/scr1_specific.h" 1
# 1473 "/home/oleg/scr1/sim/tests/common/riscv_csr_encoding.h" 2
# 7 "/home/oleg/scr1/sim/tests/common/riscv_macros.h" 2
# 1 "/home/oleg/scr1/sim/tests/common/sc_test.h" 1
# 15 "/home/oleg/scr1/sim/tests/common/sc_test.h"
.pushsection sc_test_section, "ax"
sc_exit: j SIM_EXIT;
.align 5
.popsection
# 8 "/home/oleg/scr1/sim/tests/common/riscv_macros.h" 2
# 211 "/home/oleg/scr1/sim/tests/common/riscv_macros.h"
#-----------------------------------------------------------------------
# Helper macros
#-----------------------------------------------------------------------
# 224 "/home/oleg/scr1/sim/tests/common/riscv_macros.h"
# We use a macro hack to simpify code generation for various numbers
# of bubble cycles.
# 240 "/home/oleg/scr1/sim/tests/common/riscv_macros.h"
#-----------------------------------------------------------------------
# RV64UI MACROS
#-----------------------------------------------------------------------

#-----------------------------------------------------------------------
# Tests for instructions with immediate operand
#-----------------------------------------------------------------------
# 302 "/home/oleg/scr1/sim/tests/common/riscv_macros.h"
#-----------------------------------------------------------------------
# Tests for vector config instructions
#-----------------------------------------------------------------------
# 330 "/home/oleg/scr1/sim/tests/common/riscv_macros.h"
#-----------------------------------------------------------------------
# Tests for an instruction with register operands
#-----------------------------------------------------------------------
# 358 "/home/oleg/scr1/sim/tests/common/riscv_macros.h"
#-----------------------------------------------------------------------
# Tests for an instruction with register-register operands
#-----------------------------------------------------------------------
# 452 "/home/oleg/scr1/sim/tests/common/riscv_macros.h"
#-----------------------------------------------------------------------
# Test memory instructions
#-----------------------------------------------------------------------
# 529 "/home/oleg/scr1/sim/tests/common/riscv_macros.h"
#-----------------------------------------------------------------------
# Test branch instructions
#-----------------------------------------------------------------------
# 614 "/home/oleg/scr1/sim/tests/common/riscv_macros.h"
#-----------------------------------------------------------------------
# Test jump instructions
#-----------------------------------------------------------------------
# 643 "/home/oleg/scr1/sim/tests/common/riscv_macros.h"
#-----------------------------------------------------------------------
# RV64UF MACROS
#-----------------------------------------------------------------------

#-----------------------------------------------------------------------
# Tests floating-point instructions
#-----------------------------------------------------------------------
# 800 "/home/oleg/scr1/sim/tests/common/riscv_macros.h"
#-----------------------------------------------------------------------
# Pass and fail code (assumes test num is in x28)
#-----------------------------------------------------------------------
# 812 "/home/oleg/scr1/sim/tests/common/riscv_macros.h"
#-----------------------------------------------------------------------
# Test data section
#-----------------------------------------------------------------------
# 12 "/home/oleg/scr1/sim/tests/riscv_compliance/test_macros.h" 2
# 35 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-LW-01.S" 2

# Test Virtual Machine (TVM) used by program.
.macro init; li a0, 0x00001800; csrs mstatus, a0;; .endm

 # Test code region
.section .text.init; .org 0xC0, 0x00; .align 6; .weak stvec_handler; .weak mtvec_handler; trap_vector: csrr a4, mcause; li a5, 0x8; beq a4, a5, _report; li a5, 0x9; beq a4, a5, _report; li a5, 0xb; beq a4, a5, _report; la a4, mtvec_handler; beqz a4, 1f; jr a4; 1: csrr a4, mcause; bgez a4, handle_exception; j other_exception; handle_exception: other_exception: li a0, 0x1; _report: j sc_exit; .align 6; .globl _start; _start: csrr a0, mhartid; 1: bnez a0, 1b; ; li x28, 0; la t0, trap_vector; csrw mtvec, t0; li a0, 1; slli a0, a0, 31; bltz a0, 1f; fence; mv a1, x28; li a0, 0x0; ecall; 1:; la t0, stvec_handler; beqz t0, 1f; csrw stvec, t0; li t0, (1 << 0xd) | (1 << 0xf) | (1 << 0xc) | (1 << 0x0) | (1 << 0x8) | (1 << 0x3); csrw medeleg, t0; csrr t1, medeleg; bne t0, t1, other_exception; 1: csrwi mstatus, 0; init; ; ; la t0, _run_test; csrw mepc, t0; csrr a0, mhartid; mret; .section .text; _run_test:

   
   
    .section .data.string; 20001: .string "# Test Begin\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A1 - test base address + 0\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x31, test_A1_data
    la x2, test_A1_res

    # Test
    lw x3, 0(x31)

    # Store results
    sw x3, 0(x2)




   
   

    .section .data.string; 20001: .string "# Test part A1  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A2 - test base address - 1\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x24, test_A2_data + 1
    la x5, test_A2_res

    # Test
    lw x25, -1(x24)

    # Store results
    sw x25, 0(x5)

   

    .section .data.string; 20001: .string "# Test part A2  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A3 - test base address + 1\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x7, test_A3_data - 1
    la x8, test_A3_res

    # Test
    lw x31, 1(x7)

    # Store results
    sw x31, 0(x8)

   

    .section .data.string; 20001: .string "# Test part A3  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A4 - test base address - 2048\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x10, test_A4_data + 2048
    la x11, test_A4_res

    # Test
    lw x12, 0xFFFFF800(x10)

    # Store results
    sw x12, 0(x11)

   

    .section .data.string; 20001: .string "# Test part A4  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A5 - test base address + 2047\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x13, test_A5_data - 2047
    la x14, test_A5_res

    # Test
    lw x15, 0x7FF(x13)

    # Store results
    sw x15, 0(x14)

   

    .section .data.string; 20001: .string "# Test part A5  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part B - test base address + -4, 0, 4\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x16, test_B_data
    la x17, test_B_res

    # Test
    lw x18, -4(x16)
    lw x19, 0(x16)
    lw x20, 4(x16)

    # Store results
    sw x18, 0(x17)
    sw x19, 4(x17)
    sw x20, 8(x17)

   
   
   

    .section .data.string; 20001: .string "# Test part B  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part C - test load to x0\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x21, test_C_data
    la x22, test_C_res

    # Test
    lw x0, 0(x21)

    # Store results
    sw x0, 0(x22)

   

    .section .data.string; 20001: .string "# Test part C  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part D - test for forwarding\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x21, test_D_data
    la x22, test_D_res

    # Test
    lw x23, 0(x21)
    lw x24, 0(x23)
    mv x25, x24

    # Store results
    sw x25, 0(x22)

   

    .section .data.string; 20001: .string "# Test part D  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part E1 - test store with same base and destination address\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x25, test_E1_data
    la x26, test_E1_res

    # Test
    lw x25, 0(x25)

    # Store results
    sw x25, 0(x26)

   

    .section .data.string; 20001: .string "# Test part E  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part E2 - test store with same base and destination address, base with offset\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x27, test_E2_data + 1
    la x28, test_E2_res

    # Test
    lw x27, -1(x27)

    # Store results
    sw x27, 0(x28)

   

    .section .data.string; 20001: .string "# Test part A1  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    .section .data.string; 20001: .string "# Test End\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);

 # ---------------------------------------------------------------------------------------------
    # HALT
   

ecall: ecall

 # Input data section.
    .data
    .align 4

test_A1_data:
    .word 0x11F1F222
test_A2_data:
    .word 0xF33344F4
test_A3_data:
    .word 0x55F5F666
test_A4_data:
    .word 0xF77788F8
test_A5_data:
    .word 0x99090AAA
    .word 0x0BBBCC0C
test_B_data:
    .word 0xDD0D0EEE
    .word 0x0FFF00F0
test_C_data:
    .word 0x12345678
test_D_data:
    .word test_D_data2_label
test_D_data2_label:
    .word 0x9ABCDEF0
test_E1_data:
    .word 0x76543210
test_E2_data:
    .word 0xFEDCBA98

# Output data section.
 .pushsection .tohost,"aw",@progbits; .align 6; .global tohost; tohost: .dword 0; .align 6; .global fromhost; fromhost: .dword 0; .popsection; .align 4; .global begin_regstate; begin_regstate: .dword 0; .dword 0; .dword 0; .align 4; .global begin_signature; begin_signature:
    .align 4

test_A1_res:
    .fill 1, 4, -1
test_A2_res:
    .fill 1, 4, -1
test_A3_res:
    .fill 1, 4, -1
test_A4_res:
    .fill 1, 4, -1
test_A5_res:
    .fill 1, 4, -1
test_B_res:
    .fill 3, 4, -1
test_C_res:
    .fill 1, 4, -1
test_D_res:
    .fill 1, 4, -1
test_E1_res:
    .fill 1, 4, -1
test_E2_res:
    .fill 1, 4, -1

.align 4; .global end_signature; end_signature:
