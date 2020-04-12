# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-MISALIGN_JMP-01.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-MISALIGN_JMP-01.S"
# RISC-V Compliance Test I-MISALIGN_JMP-01

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
# Description: Testing MISALIGNED JUMP exception.

# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_test.h" 1
# 33 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-MISALIGN_JMP-01.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_io.h" 1
# 34 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-MISALIGN_JMP-01.S" 2
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
# 35 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-MISALIGN_JMP-01.S" 2

# Test Virtual Machine (TVM) used by program.
.macro init; li a0, 0x00001800; csrs mstatus, a0;; .endm

 # Test code region
.section .text.init; .org 0xC0, 0x00; .align 6; .weak stvec_handler; .weak mtvec_handler; trap_vector: csrr a4, mcause; li a5, 0x8; beq a4, a5, _report; li a5, 0x9; beq a4, a5, _report; li a5, 0xb; beq a4, a5, _report; la a4, mtvec_handler; beqz a4, 1f; jr a4; 1: csrr a4, mcause; bgez a4, handle_exception; j other_exception; handle_exception: other_exception: li a0, 0x1; _report: j sc_exit; .align 6; .globl _start; _start: csrr a0, mhartid; 1: bnez a0, 1b; ; li x28, 0; la t0, trap_vector; csrw mtvec, t0; li a0, 1; slli a0, a0, 31; bltz a0, 1f; fence; mv a1, x28; li a0, 0x0; ecall; 1:; la t0, stvec_handler; beqz t0, 1f; csrw stvec, t0; li t0, (1 << 0xd) | (1 << 0xf) | (1 << 0xc) | (1 << 0x0) | (1 << 0x8) | (1 << 0x3); csrw medeleg, t0; csrr t1, medeleg; bne t0, t1, other_exception; 1: csrwi mstatus, 0; init; ; ; la t0, _run_test; csrw mepc, t0; csrr a0, mhartid; mret; .section .text; _run_test:

   
   
    .section .data.string; 20001: .string "# Test Begin Reserved reg x31\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);

    # Save and set trap handler address
    la x1, _trap_handler
    csrrw x31, mtvec, x1

    # switch off C
    csrrci x0, misa, 4

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A1 - test JAL\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # Address for test results
    la x1, test_A1_res_exc

    # Test
    li x2, 0x11111111
    jal x0, 1f + 2
    li x2, 0
1:




   
    .section .data.string; 20001: .string "# Test part A1  - Complete\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A2 - test JALR - NOT causing the exception\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # Address for test results
    la x1, test_A2_res

    # Test
    li x2, 0x22222222
    la x4, 1f + 1
    jalr x0, x4, 0
    li x2, 0
1:
    sw x2, 0(x1)
    addi x1, x1, 4

    li x2, 0x33333333
    la x4, 1f
    jalr x0, x4, 1
    li x2, 0
1:
    sw x2, 0(x1)
    addi x1, x1, 4

    li x2, 0x44444444
    la x4, 1f
    jalr x0, x4, -3
    li x2, 0

    sw x2, 0(x1)
1:
    addi x1, x1, 4

    .section .data.string; 20001: .string "# Test part A2  - Complete\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A3 - test JALR - causing the exception\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # Address for test results
    la x1, test_A3_res_exc

    # Test
    li x2, 0x55555555
    la x4, 1f + 2
    jalr x0, x4, 0
    li x2, 0
1:

    li x2, 0x66666666
    la x4, 1f + 3
    jalr x0, x4, 0
    li x2, 0
1:

    # Test
    li x2, 0x77777777
    la x4, 1f
    jalr x0, x4, 2
    li x2, 0
1:

    li x2, 0x88888888
    la x4, 1f
    jalr x0, x4, 3
    li x2, 0
1:

    .section .data.string; 20001: .string "# Test part A3  - Complete\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part B1 - test BEQ\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # Address for test results
    la x1, test_B1_res_exc

    # Register initialization
    li x5, 5
    li x6, 6

    # Test
    beq x5, x6, 1f + 2
    li x2, 0x99999999
1:
    nop
    nop
    beq x5, x5, 1f + 2
    li x2, 0
1:

    .section .data.string; 20001: .string "# Test part A4  - Complete\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part B2 - test BNE\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # Address for test results
    la x1, test_B2_res_exc

    # Register initialization
    li x5, 5
    li x6, 6

    # Test
    bne x5, x5, 1f + 2
    li x2, 0xAAAAAAAA
1:
    nop
    nop
    bne x5, x6, 1f + 2
    li x2, 0
1:

    .section .data.string; 20001: .string "# Test part A5  - Complete\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part B3 - test BLT\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # Address for test results
    la x1, test_B3_res_exc

    # Register initialization
    li x5, 5
    li x6, 6

    # Test
    blt x6, x5, 1f + 2
    li x2, 0xBBBBBBBB
1:
    nop
    nop
    blt x5, x6, 1f + 2
    li x2, 0
1:

    .section .data.string; 20001: .string "# Test part B  - Complete\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part B4 - test BLTU\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # Address for test results
    la x1, test_B4_res_exc

    # Register initialization
    li x5, 5
    li x6, 6

    # Test
    bltu x6, x5, 1f + 2
    li x2, 0xCCCCCCCC
1:
    nop
    nop
    bltu x5, x6, 1f + 2
    li x2, 0
1:

    .section .data.string; 20001: .string "# Test part C  - Complete\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part B5 - test BGE\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # Address for test results
    la x1, test_B5_res_exc

    # Register initialization
    li x5, 5
    li x6, 6

    # Test
    bge x5, x6, 1f + 2
    li x2, 0xDDDDDDDD
1:
    nop
    nop
    bge x6, x5, 1f + 2
    li x2, 0
1:

    .section .data.string; 20001: .string "# Test part D  - Complete\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part B6 - test BGEU\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # Address for test results
    la x1, test_B6_res_exc

    # Register initialization
    li x5, 5
    li x6, 6

    # Test
    bgeu x5, x6, 1f + 2
    li x2, 0xEEEEEEEE
1:
    nop
    nop
    bgeu x6, x5, 1f + 2
    li x2, 0
1:

    .section .data.string; 20001: .string "# Test part E  - Complete\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # ---------------------------------------------------------------------------------------------
    # restore mtvec and jump to the end
    csrw mtvec, x31
    jal x0, test_end

    .section .data.string; 20001: .string "# Test part A1  - Complete\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # ---------------------------------------------------------------------------------------------
    # Exception handler
_trap_handler:
    # increment return address
    csrr x30, mbadaddr
    addi x30, x30, -2
    csrw mepc, x30

    # store low bits of mbadaddr
    csrr x30, mbadaddr
    andi x30, x30, 3
    sw x30, 0(x1)

    # Store MCAUSE
    csrr x30, mcause
    sw x30, 4(x1)

    # Store data from test
    sw x2, 8(x1)

    # increment data_exc address
    addi x1, x1, 12

    # return
    mret
    .section .data.string; 20001: .string "# Test part A2  - Complete\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    # ---------------------------------------------------------------------------------------------

test_end:
    .section .data.string; 20001: .string "# Test part A3  - Complete\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);;

    .section .data.string; 20001: .string "# Test End\n"; .section .text; la x30, begin_regstate; sw x3, 0(x30); sw x4, 4(x30); sw x5, 8(x30); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x30, begin_regstate; lw x3, 0(x30); lw x4, 4(x30); lw x5, 8(x30);

 # ---------------------------------------------------------------------------------------------
    # HALT
   

ecall: ecall

 # Input data section.
    .data
    .align 4


# Output data section.
 .pushsection .tohost,"aw",@progbits; .align 6; .global tohost; tohost: .dword 0; .align 6; .global fromhost; fromhost: .dword 0; .popsection; .align 4; .global begin_regstate; begin_regstate: .dword 0; .dword 0; .dword 0; .align 4; .global begin_signature; begin_signature:
    .align 4

test_A1_res_exc:
    .fill 3, 4, -1
test_A2_res:
    .fill 3, 4, -1
test_A3_res_exc:
    .fill 12, 4, -1
test_B1_res_exc:
    .fill 3, 4, -1
test_B2_res_exc:
    .fill 3, 4, -1
test_B3_res_exc:
    .fill 3, 4, -1
test_B4_res_exc:
    .fill 3, 4, -1
test_B5_res_exc:
    .fill 3, 4, -1
test_B6_res_exc:
    .fill 3, 4, -1

.align 4; .global end_signature; end_signature:
