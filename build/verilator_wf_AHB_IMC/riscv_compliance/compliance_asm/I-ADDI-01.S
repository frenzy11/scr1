# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-ADDI-01.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-ADDI-01.S"
# RISC-V Compliance Test I-ADDI-01

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
# Description: Testing instruction ADDI.

# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_test.h" 1
# 33 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-ADDI-01.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_io.h" 1
# 34 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-ADDI-01.S" 2
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
# 35 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-ADDI-01.S" 2

# Test Virtual Machine (TVM) used by program.
.macro init; li a0, 0x00001800; csrs mstatus, a0;; .endm

 # Test code region
.section .text.init; .org 0xC0, 0x00; .align 6; .weak stvec_handler; .weak mtvec_handler; trap_vector: csrr a4, mcause; li a5, 0x8; beq a4, a5, _report; li a5, 0x9; beq a4, a5, _report; li a5, 0xb; beq a4, a5, _report; la a4, mtvec_handler; beqz a4, 1f; jr a4; 1: csrr a4, mcause; bgez a4, handle_exception; j other_exception; handle_exception: other_exception: li a0, 0x1; _report: j sc_exit; .align 6; .globl _start; _start: csrr a0, mhartid; 1: bnez a0, 1b; ; li x28, 0; la t0, trap_vector; csrw mtvec, t0; li a0, 1; slli a0, a0, 31; bltz a0, 1f; fence; mv a1, x28; li a0, 0x0; ecall; 1:; la t0, stvec_handler; beqz t0, 1f; csrw stvec, t0; li t0, (1 << 0xd) | (1 << 0xf) | (1 << 0xc) | (1 << 0x0) | (1 << 0x8) | (1 << 0x3); csrw medeleg, t0; csrr t1, medeleg; bne t0, t1, other_exception; 1: csrwi mstatus, 0; init; ; ; la t0, _run_test; csrw mepc, t0; csrr a0, mhartid; mret; .section .text; _run_test:

   
   
    .section .data.string; 20001: .string "# Test Begin\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A1 - general test of value 0 with 0, 1, -1, MIN, MAX immediate values\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x1, test_A1_data
    la x2, test_A1_res

    # Load testdata
    lw x3, 0(x1)

    # Test
    addi x4, x3, 1
    addi x5, x3, 0x7FF
    addi x6, x3, 0xFFFFFFFF
    addi x7, x3, 0
    addi x8, x3, 0xFFFFF800

    # Store results
    sw x3, 0(x2)
    sw x4, 4(x2)
    sw x5, 8(x2)
    sw x6, 12(x2)
    sw x7, 16(x2)
    sw x8, 20(x2)




   
   
   
   
   
   
   

    .section .data.string; 20001: .string "# Test part A1  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A2 - general test of value 1 with 0, 1, -1, MIN, MAX immediate values\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x1, test_A2_data
    la x2, test_A2_res

    # Load testdata
    lw x8, 0(x1)

    # Test
    addi x9, x8, 1
    addi x10, x8, 0x7FF
    addi x11, x8, 0xFFFFFFFF
    addi x12, x8, 0
    addi x13, x8, 0xFFFFF800

    # Store results
    sw x8, 0(x2)
    sw x9, 4(x2)
    sw x10, 8(x2)
    sw x11, 12(x2)
    sw x12, 16(x2)
    sw x13, 20(x2)

   
   
   
   
   
   

    .section .data.string; 20001: .string "# Test part A2  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A3 - general test of value -1 with 0, 1, -1, MIN, MAX immediate values\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x1, test_A3_data
    la x2, test_A3_res

    # Load testdata
    lw x13, 0(x1)

    # Test
    addi x14, x13, 1
    addi x15, x13, 0x7FF
    addi x16, x13, 0xFFFFFFFF
    addi x17, x13, 0
    addi x18, x13, 0xFFFFF800

    # Store results
    sw x13, 0(x2)
    sw x14, 4(x2)
    sw x15, 8(x2)
    sw x16, 12(x2)
    sw x17, 16(x2)
    sw x18, 20(x2)

   
   
   
   
   
   

    .section .data.string; 20001: .string "# Test part A3  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A4 - general test of value 0x7FFFFFFF with 0, 1, -1, MIN, MAX immediate values\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x1, test_A4_data
    la x2, test_A4_res

    # Load testdata
    lw x18, 0(x1)

    # Test
    addi x19, x18, 1
    addi x20, x18, 0x7FF
    addi x21, x18, 0xFFFFFFFF
    addi x22, x18, 0
    addi x23, x18, 0xFFFFF800

    # Store results
    sw x18, 0(x2)
    sw x19, 4(x2)
    sw x20, 8(x2)
    sw x21, 12(x2)
    sw x22, 16(x2)
    sw x23, 20(x2)

   
   
   
   
   
   

    .section .data.string; 20001: .string "# Test part A4  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A5 - general test of value 0x80000000 with 0, 1, -1, MIN, MAX immediate values\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x1, test_A5_data
    la x2, test_A5_res

    # Load testdata
    lw x23, 0(x1)

    # Test
    addi x24, x23, 1
    addi x25, x23, 0x7FF
    addi x26, x23, 0xFFFFFFFF
    addi x27, x23, 0
    addi x28, x23, 0xFFFFF800

    # Store results
    sw x23, 0(x2)
    sw x24, 4(x2)
    sw x25, 8(x2)
    sw x26, 12(x2)
    sw x27, 16(x2)
    sw x28, 20(x2)

   
   
   
   
   
   

    .section .data.string; 20001: .string "# Test part A5  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part B - testing forwarding between instructions\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x26, test_B_data
    la x27, test_B_res

    # Load testdata
    lw x28, 0(x26)

    # Test
    addi x29, x28, 1
    addi x30, x29, 1
    addi x31, x30, 1
    addi x1, x31, 1
    addi x2, x1, 1
    addi x3, x2, 1

    # Store results
    sw x28, 0(x27)
    sw x29, 4(x27)
    sw x30, 8(x27)
    sw x31, 12(x27)
    sw x1, 16(x27)
    sw x2, 20(x27)
    sw x3, 24(x27)


   
   
   
   
   
   
   

    .section .data.string; 20001: .string "# Test part B  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part C - testing writing to x0\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x1, test_C_data
    la x2, test_C_res

    # Load testdata
    lw x5, 0(x1)

    # Test
    addi x0, x5, 1

    # Store results
    sw x0, 0(x2)

   

    .section .data.string; 20001: .string "# Test part C  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part D - testing forwarding throught x0\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x1, test_D_data
    la x2, test_D_res

    # Load testdata
    lw x5, 0(x1)

    # Test
    addi x0, x5, 1
    addi x5, x0, 1

    # Store results
    sw x0, 0(x2)
    sw x5, 4(x2)

   
   

    .section .data.string; 20001: .string "# Test part D  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part E - testing moving (addi with 0)\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x1, test_E_data
    la x2, test_E_res

    # Load testdata
    lw x3, 0(x1)

    # Test
    addi x4, x3, 0
    addi x5, x4, 0
    addi x6, x5, 0
    addi x14, x6, 0
    addi x15, x14, 0
    addi x16, x15, 0
    addi x25, x16, 0
    addi x26, x25, 0
    addi x27, x26, 0

    # Store results
    sw x3, 0(x2)
    sw x4, 4(x2)
    sw x26, 8(x2)
    sw x27, 12(x2)

   
   
   
   

    .section .data.string; 20001: .string "# Test part E  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    .section .data.string; 20001: .string "# Test End\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);

 # ---------------------------------------------------------------------------------------------
    # HALT
   

ecall: ecall

 # Input data section.
    .data
    .align 4

test_A1_data:
    .word 0
test_A2_data:
    .word 1
test_A3_data:
    .word -1
test_A4_data:
    .word 0x7FFFFFFF
test_A5_data:
    .word 0x80000000
test_B_data:
    .word 0x0000ABCD
test_C_data:
    .word 0x12345678
test_D_data:
    .word 0xFEDCBA98
test_E_data:
    .word 0x36925814


# Output data section.
 .pushsection .tohost,"aw",@progbits; .align 6; .global tohost; tohost: .dword 0; .align 6; .global fromhost; fromhost: .dword 0; .popsection; .align 4; .global begin_regstate; begin_regstate: .dword 0; .dword 0; .dword 0; .align 4; .global begin_signature; begin_signature:
    .align 4

test_A1_res:
    .fill 6, 4, -1
test_A2_res:
    .fill 6, 4, -1
test_A3_res:
    .fill 6, 4, -1
test_A4_res:
    .fill 6, 4, -1
test_A5_res:
    .fill 6, 4, -1
test_B_res:
    .fill 7, 4, -1
test_C_res:
    .fill 1, 4, -1
test_D_res:
    .fill 2, 4, -1
test_E_res:
    .fill 4, 4, -1

.align 4; .global end_signature; end_signature:
