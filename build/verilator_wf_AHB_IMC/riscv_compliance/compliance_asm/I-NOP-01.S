# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-NOP-01.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-NOP-01.S"
# RISC-V Compliance Test I-NOP-01

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
# Description: Testing pseudo instruction NOP.

# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_test.h" 1
# 33 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-NOP-01.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_io.h" 1
# 34 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-NOP-01.S" 2
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
# 35 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-NOP-01.S" 2

# Test Virtual Machine (TVM) used by program.
.macro init; li a0, 0x00001800; csrs mstatus, a0;; .endm

 # Test code region.
.section .text.init; .org 0xC0, 0x00; .align 6; .weak stvec_handler; .weak mtvec_handler; trap_vector: csrr a4, mcause; li a5, 0x8; beq a4, a5, _report; li a5, 0x9; beq a4, a5, _report; li a5, 0xb; beq a4, a5, _report; la a4, mtvec_handler; beqz a4, 1f; jr a4; 1: csrr a4, mcause; bgez a4, handle_exception; j other_exception; handle_exception: other_exception: li a0, 0x1; _report: j sc_exit; .align 6; .globl _start; _start: csrr a0, mhartid; 1: bnez a0, 1b; ; li x28, 0; la t0, trap_vector; csrw mtvec, t0; li a0, 1; slli a0, a0, 31; bltz a0, 1f; fence; mv a1, x28; li a0, 0x0; ecall; 1:; la t0, stvec_handler; beqz t0, 1f; csrw stvec, t0; li t0, (1 << 0xd) | (1 << 0xf) | (1 << 0xc) | (1 << 0x0) | (1 << 0x8) | (1 << 0x3); csrw medeleg, t0; csrr t1, medeleg; bne t0, t1, other_exception; 1: csrwi mstatus, 0; init; ; ; la t0, _run_test; csrw mepc, t0; csrr a0, mhartid; mret; .section .text; _run_test:

   
   
    .section .data.string; 20001: .string "# Test Begin\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A1 - general test, instruction should not change any register\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x1, test_A1_res

    # Register initialization
    li x2, 2
    li x3, 3
    li x4, 4
    li x5, 5
    li x6, 6
    li x7, 7
    li x8, 8
    li x9, 9
    li x10, 10
    li x11, 11
    li x12, 12
    li x13, 13
    li x14, 14
    li x15, 15
    li x16, 16
    li x17, 17
    li x18, 18
    li x19, 19
    li x20, 20
    li x21, 21
    li x22, 22
    li x23, 23
    li x24, 24
    li x25, 25
    li x26, 26
    li x27, 27
    li x28, 28
    li x29, 29
    li x30, 30
    li x31, 31

    #Test
    nop
    nop
    nop
    nop
    nop
    nop

    # Store results
    sw x0, 0( x1 )
    sw x2, 4( x1 )
    sw x3, 8( x1 )
    sw x4, 12( x1 )
    sw x5, 16( x1 )
    sw x6, 20( x1 )
    sw x7, 24( x1 )
    sw x8, 28( x1 )
    sw x9, 32( x1 )
    sw x10, 36( x1 )
    sw x11, 40( x1 )
    sw x12, 44( x1 )
    sw x13, 48( x1 )
    sw x14, 52( x1 )
    sw x15, 56( x1 )
    sw x16, 60( x1 )
    sw x17, 64( x1 )
    sw x18, 68( x1 )
    sw x19, 72( x1 )
    sw x20, 76( x1 )
    sw x21, 80( x1 )
    sw x22, 84( x1 )
    sw x23, 88( x1 )
    sw x24, 92( x1 )
    sw x25, 96( x1 )
    sw x26, 100( x1 )
    sw x27, 104( x1 )
    sw x28, 108( x1 )
    sw x29, 112( x1 )
    sw x30, 116( x1 )
    sw x31, 120( x1 )




   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

    .section .data.string; 20001: .string "# Test part A1  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A2 - general test, only 5 cycles are executed\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Addresses for test data and results
    la x3, test_A2_res

    # Register initialization
    auipc x8, 0

    #Test
    nop
    nop
    nop
    nop
    nop

    # Store results
    auipc x9, 0
    sub x9, x9, x8

    # Store results
    sw x9, 0( x3 )

   

    .section .data.string; 20001: .string "# Test part A2  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    .section .data.string; 20001: .string "# Test End\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);

 # ---------------------------------------------------------------------------------------------
    # HALT
   

ecall: ecall

 # Input data section.
    .data
    .align 4

# Output data section.
 .pushsection .tohost,"aw",@progbits; .align 6; .global tohost; tohost: .dword 0; .align 6; .global fromhost; fromhost: .dword 0; .popsection; .align 4; .global begin_regstate; begin_regstate: .dword 0; .dword 0; .dword 0; .align 4; .global begin_signature; begin_signature:
    .align 4

test_A1_res:
    .fill 31, 4, -1
test_A2_res:
    .fill 1, 4, -1

.align 4; .global end_signature; end_signature: # End of test output data region.
