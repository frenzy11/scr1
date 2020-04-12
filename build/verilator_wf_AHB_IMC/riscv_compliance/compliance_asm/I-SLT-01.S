# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-SLT-01.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-SLT-01.S"
# RISC-V Compliance Test I-SLT-01

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
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.SE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

# Specification: RV32I Base Integer Instruction Set, Version 2.0
# Description: Testing instruction SLT.

# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_test.h" 1
# 34 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-SLT-01.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_io.h" 1
# 35 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-SLT-01.S" 2
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
# 36 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-SLT-01.S" 2

# Test Virtual Machine (TVM) used by program.
.macro init; li a0, 0x00001800; csrs mstatus, a0;; .endm

 # Test code region
.section .text.init; .org 0xC0, 0x00; .align 6; .weak stvec_handler; .weak mtvec_handler; trap_vector: csrr a4, mcause; li a5, 0x8; beq a4, a5, _report; li a5, 0x9; beq a4, a5, _report; li a5, 0xb; beq a4, a5, _report; la a4, mtvec_handler; beqz a4, 1f; jr a4; 1: csrr a4, mcause; bgez a4, handle_exception; j other_exception; handle_exception: other_exception: li a0, 0x1; _report: j sc_exit; .align 6; .globl _start; _start: csrr a0, mhartid; 1: bnez a0, 1b; ; li x28, 0; la t0, trap_vector; csrw mtvec, t0; li a0, 1; slli a0, a0, 31; bltz a0, 1f; fence; mv a1, x28; li a0, 0x0; ecall; 1:; la t0, stvec_handler; beqz t0, 1f; csrw stvec, t0; li t0, (1 << 0xd) | (1 << 0xf) | (1 << 0xc) | (1 << 0x0) | (1 << 0x8) | (1 << 0x3); csrw medeleg, t0; csrr t1, medeleg; bne t0, t1, other_exception; 1: csrwi mstatus, 0; init; ; ; la t0, _run_test; csrw mepc, t0; csrr a0, mhartid; mret; .section .text; _run_test:

   
   
    .section .data.string; 20001: .string "# Test Begin\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A1 - general test of value 0 with 0, 1, -1, MIN, MAX register values\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x1, test_A1_data
    la x2, test_A1_res

    # Load testdata
    lw x3, 0(x1)

    # Register initialization
    li x4, 1
    li x5, 0x7FFFFFFF
    li x6, 0xFFFFFFFF
    li x7, 0
    li x8, 0x80000000

    # Test
    slt x4, x3, x4
    slt x5, x3, x5
    slt x6, x3, x6
    slt x7, x3, x7
    slt x8, x3, x8

    # Store results
    sw x3, 0(x2)
    sw x4, 4(x2)
    sw x5, 8(x2)
    sw x6, 12(x2)
    sw x7, 16(x2)
    sw x8, 20(x2)




   
   
   
   
   
   
   

    .section .data.string; 20001: .string "# Test part A1  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A2 - general test of value 1 with 0, 1, -1, MIN, MAX register values\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x1, test_A2_data
    la x2, test_A2_res

    # Load testdata
    lw x8, 0(x1)

    # Register initialization
    li x9, 1
    li x10, 0x7FFFFFFF
    li x11, 0xFFFFFFFF
    li x12, 0
    li x13, 0x80000000

    # Test
    slt x9, x8, x9
    slt x10, x8, x10
    slt x11, x8, x11
    slt x12, x8, x12
    slt x13, x8, x13

    # Store results
    sw x8, 0(x2)
    sw x9, 4(x2)
    sw x10, 8(x2)
    sw x11, 12(x2)
    sw x12, 16(x2)
    sw x13, 20(x2)

   
   
   
   
   
   

    .section .data.string; 20001: .string "# Test part A2  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A3 - general test of value -1 with 0, 1, -1, MIN, MAX register values\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x1, test_A3_data
    la x2, test_A3_res

    # Load testdata
    lw x13, 0(x1)

    # Register initialization
    li x14, 1
    li x15, 0x7FFFFFFF
    li x16, 0xFFFFFFFF
    li x17, 0
    li x18, 0x80000000

    # Test
    slt x14, x13, x14
    slt x15, x13, x15
    slt x16, x13, x16
    slt x17, x13, x17
    slt x18, x13, x18

    # Store results
    sw x13, 0(x2)
    sw x14, 4(x2)
    sw x15, 8(x2)
    sw x16, 12(x2)
    sw x17, 16(x2)
    sw x18, 20(x2)

   
   
   
   
   
   

    .section .data.string; 20001: .string "# Test part A3  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A4 - general test of value 0x7FFFFFFF with 0, 1, -1, MIN, MAX register values\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x1, test_A4_data
    la x2, test_A4_res

    # Load testdata
    lw x18, 0(x1)

    # Register initialization
    li x19, 1
    li x20, 0x7FFFFFFF
    li x21, 0xFFFFFFFF
    li x22, 0
    li x23, 0x80000000

    # Test
    slt x19, x18, x19
    slt x20, x18, x20
    slt x21, x18, x21
    slt x22, x18, x22
    slt x23, x18, x23

    # Store results
    sw x18, 0(x2)
    sw x19, 4(x2)
    sw x20, 8(x2)
    sw x21, 12(x2)
    sw x22, 16(x2)
    sw x23, 20(x2)

   
   
   
   
   
   

    .section .data.string; 20001: .string "# Test part A4  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A5 - general test of value 0x80000000 with 0, 1, -1, MIN, MAX register values\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x1, test_A5_data
    la x2, test_A5_res

    # Load testdata
    lw x23, 0(x1)

    # Register initialization
    li x24, 1
    li x25, 0x7FFFFFFF
    li x26, 0xFFFFFFFF
    li x27, 0
    li x28, 0x80000000

    # Test
    slt x24, x23, x24
    slt x25, x23, x25
    slt x26, x23, x26
    slt x27, x23, x27
    slt x28, x23, x28

    # Store results
    sw x23, 0(x2)
    sw x24, 4(x2)
    sw x25, 8(x2)
    sw x26, 12(x2)
    sw x27, 16(x2)
    sw x28, 20(x2)

   
   
   
   
   
   

    .section .data.string; 20001: .string "# Test part A5  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part B - testing writing to x0\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x26, test_B_data
    la x27, test_B_res

    # Load testdata
    lw x1, 0(x26)

    # Register initialization
    li x2, 1

    # Test
    slt x0, x1, x2

    # Store results
    sw x0, 0(x27)
    sw x1, 4(x27)
    sw x2, 8(x27)

   
   
   

    .section .data.string; 20001: .string "# Test part B  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part C - testing compare x0\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x31, test_C_res

    # Register initialization
    li x1, 1
    li x2, 0x7FF
    li x3, 0xFFFFFFFF
    li x4, 0
    li x5, 0xFFFFF800

    # Test
    slt x6, x0, x1
    slt x7, x0, x2
    slt x8, x0, x3
    slt x9, x0, x4
    slt x10, x0, x5
    slt x11, x1, x0
    slt x12, x2, x0
    slt x13, x3, x0
    slt x14, x4, x0
    slt x15, x5, x0

    # Store results
    sw x6, 0(x31)
    sw x7, 4(x31)
    sw x8, 8(x31)
    sw x9, 12(x31)
    sw x10, 16(x31)
    sw x11, 20(x31)
    sw x12, 24(x31)
    sw x13, 28(x31)
    sw x14, 32(x31)
    sw x15, 36(x31)

   
   
   
   
   
   
   
   
   
   

    .section .data.string; 20001: .string "# Test part C  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part D - testing forwarding between instructions\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x31, test_D_res

    # Register initialization
    li x3, 0x1

    # Test
    slt x1, x0, x3
    slt x2, x1, x3
    slt x28, x2, x3
    slt x29, x28, x3
    slt x30, x29, x3

    # Store results
    sw x1, 0(x31)
    sw x2, 4(x31)
    sw x28, 8(x31)
    sw x29, 12(x31)
    sw x30, 16(x31)

   
   
   
   
   

    .section .data.string; 20001: .string "# Test part D  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

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
    .word 0xFFFFFFFF

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
    .fill 3, 4, -1
test_C_res:
    .fill 10, 4, -1
test_D_res:
    .fill 5, 4, -1


.align 4; .global end_signature; end_signature:
