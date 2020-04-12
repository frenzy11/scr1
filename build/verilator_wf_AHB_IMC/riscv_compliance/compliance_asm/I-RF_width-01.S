# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-RF_width-01.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-RF_width-01.S"
# RISC-V Compliance Test I-RF_width-01

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
# Description: Testing width of register file.

# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_test.h" 1
# 33 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-RF_width-01.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_io.h" 1
# 34 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-RF_width-01.S" 2
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
# 35 "/home/oleg/riscv-compliance/riscv-test-suite/rv32i/src/I-RF_width-01.S" 2

# Test Virtual Machine (TVM) used by program.
.macro init; li a0, 0x00001800; csrs mstatus, a0;; .endm

 # Test code region
.section .text.init; .org 0xC0, 0x00; .align 6; .weak stvec_handler; .weak mtvec_handler; trap_vector: csrr a4, mcause; li a5, 0x8; beq a4, a5, _report; li a5, 0x9; beq a4, a5, _report; li a5, 0xb; beq a4, a5, _report; la a4, mtvec_handler; beqz a4, 1f; jr a4; 1: csrr a4, mcause; bgez a4, handle_exception; j other_exception; handle_exception: other_exception: li a0, 0x1; _report: j sc_exit; .align 6; .globl _start; _start: csrr a0, mhartid; 1: bnez a0, 1b; ; li x28, 0; la t0, trap_vector; csrw mtvec, t0; li a0, 1; slli a0, a0, 31; bltz a0, 1f; fence; mv a1, x28; li a0, 0x0; ecall; 1:; la t0, stvec_handler; beqz t0, 1f; csrw stvec, t0; li t0, (1 << 0xd) | (1 << 0xf) | (1 << 0xc) | (1 << 0x0) | (1 << 0x8) | (1 << 0x3); csrw medeleg, t0; csrr t1, medeleg; bne t0, t1, other_exception; 1: csrwi mstatus, 0; init; ; ; la t0, _run_test; csrw mepc, t0; csrr a0, mhartid; mret; .section .text; _run_test:

   
   
    .section .data.string; 20001: .string "# Test Begin\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A1 - test x1 - x15 are 32 bits\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Address for test results
    la x16, test_A1_res

    # Init registers
    li x0, 1
    li x1, 1
    li x2, 1
    li x3, 1
    li x4, 1
    li x5, 1
    li x6, 1
    li x7, 1
    li x8, 1
    li x9, 1
    li x10, 1
    li x11, 1
    li x12, 1
    li x13, 1
    li x14, 1
    li x15, 1


    # Test
    slli x1, x1, 31
    bltz x1, 1f
    li x1, 0

1:
    slli x2, x2, 31
    bltz x2, 1f
    li x2, 0

1:
    slli x3, x3, 31
    bltz x3, 1f
    li x3, 0

1:
    slli x4, x4, 31
    bltz x4, 1f
    li x4, 0

1:
    slli x5, x5, 31
    bltz x5, 1f
    li x5, 0

1:
    slli x6, x6, 31
    bltz x6, 1f
    li x6, 0

1:
    slli x7, x7, 31
    bltz x7, 1f
    li x7, 0

1:
    slli x8, x8, 31
    bltz x8, 1f
    li x8, 0

1:
    slli x9, x9, 31
    bltz x9, 1f
    li x9, 0

1:
    slli x10, x10, 31
    bltz x10, 1f
    li x10, 0

1:
    slli x11, x11, 31
    bltz x11, 1f
    li x11, 0

1:
    slli x12, x12, 31
    bltz x12, 1f
    li x12, 0

1:
    slli x13, x13, 31
    bltz x13, 1f
    li x13, 0

1:
    slli x14, x14, 31
    bltz x14, 1f
    li x14, 0

1:
    slli x15, x15, 31
    bltz x15, 1f
    li x15, 0

1:

    # Store results
    sw x0, 0(x16)
    sw x1, 4(x16)
    sw x2, 8(x16)
    sw x3, 12(x16)
    sw x4, 16(x16)
    sw x5, 20(x16)
    sw x6, 24(x16)
    sw x7, 28(x16)
    sw x8, 32(x16)
    sw x9, 36(x16)
    sw x10, 40(x16)
    sw x11, 44(x16)
    sw x12, 48(x16)
    sw x13, 52(x16)
    sw x14, 56(x16)
    sw x15, 60(x16)




   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

    .section .data.string; 20001: .string "# Test part A1  - Complete\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # ---------------------------------------------------------------------------------------------
    .section .data.string; 20001: .string "# Test part A2 - test x16 - x30 are 32 bits\n"; .section .text; la x31, begin_regstate; sw x3, 0(x31); sw x4, 4(x31); sw x5, 8(x31); li x3, 0xF0000000; la x4, 20001b; 2: lb x5, 0(x4); sb x5, 0(x3); beq x5, zero, 1f; add x4, x4, 1; j 2b; 1: la x31, begin_regstate; lw x3, 0(x31); lw x4, 4(x31); lw x5, 8(x31);;

    # Address for test results
    la x1, test_A2_res

    # Init registers
    li x16, 1
    li x17, 1
    li x18, 1
    li x19, 1
    li x20, 1
    li x21, 1
    li x22, 1
    li x23, 1
    li x24, 1
    li x25, 1
    li x26, 1
    li x27, 1
    li x28, 1
    li x29, 1
    li x30, 1
    li x31, 1

    # Test
    slli x16, x16, 31
    bltz x16, 1f
    li x16, 0

1:
    slli x17, x17, 31
    bltz x17, 1f
    li x17, 0

1:
    slli x18, x18, 31
    bltz x18, 1f
    li x18, 0

1:
    slli x19, x19, 31
    bltz x19, 1f
    li x19, 0

1:
    slli x20, x20, 31
    bltz x20, 1f
    li x20, 0

1:
    slli x21, x21, 31
    bltz x21, 1f
    li x21, 0

1:
    slli x22, x22, 31
    bltz x22, 1f
    li x22, 0

1:
    slli x23, x23, 31
    bltz x23, 1f
    li x23, 0

1:
    slli x24, x24, 31
    bltz x24, 1f
    li x24, 0

1:
    slli x25, x25, 31
    bltz x25, 1f
    li x25, 0

1:
    slli x26, x26, 31
    bltz x26, 1f
    li x26, 0

1:
    slli x27, x27, 31
    bltz x27, 1f
    li x27, 0

1:
    slli x28, x28, 31
    bltz x28, 1f
    li x28, 0

1:
    slli x29, x29, 31
    bltz x29, 1f
    li x29, 0

1:
    slli x30, x30, 31
    bltz x30, 1f
    li x30, 0

1:
    slli x31, x31, 31
    bltz x31, 1f
    li x31, 0

1:

    # Store results
    sw x16, 0(x1)
    sw x17, 4(x1)
    sw x18, 8(x1)
    sw x19, 12(x1)
    sw x20, 16(x1)
    sw x21, 20(x1)
    sw x22, 24(x1)
    sw x23, 28(x1)
    sw x24, 32(x1)
    sw x25, 36(x1)
    sw x26, 40(x1)
    sw x27, 44(x1)
    sw x28, 48(x1)
    sw x29, 52(x1)
    sw x30, 56(x1)
    sw x31, 60(x1)

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

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
    .fill 16, 4, -1
test_A2_res:
    .fill 16, 4, -1

.align 4; .global end_signature; end_signature:
