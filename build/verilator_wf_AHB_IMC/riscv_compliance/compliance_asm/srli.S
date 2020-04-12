# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/srli.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/srli.S"
# See LICENSE for license details.

# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/riscv_test.h" 1




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
# 6 "/home/oleg/scr1/sim/tests/riscv_compliance/riscv_test.h" 2
# 4 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/srli.S" 2



# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/../rv64ui/srli.S" 1
# See LICENSE for license details.

#*****************************************************************************
# srli.S
#-----------------------------------------------------------------------------

# Test srli instruction.



# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_test.h" 1
# 12 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/../rv64ui/srli.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_io.h" 1
# 13 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/../rv64ui/srli.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/aw_test_macros.h" 1
# 11 "/home/oleg/scr1/sim/tests/riscv_compliance/aw_test_macros.h"
#-----------------------------------------------------------------------
# Helper macros
#-----------------------------------------------------------------------
# 26 "/home/oleg/scr1/sim/tests/riscv_compliance/aw_test_macros.h"
# Address = base+(testnum<<2)
# sw testreg, (testnum<<2)(basereg)
# 37 "/home/oleg/scr1/sim/tests/riscv_compliance/aw_test_macros.h"
# We use a macro hack to simpify code generation for various numbers
# of bubble cycles.
# 53 "/home/oleg/scr1/sim/tests/riscv_compliance/aw_test_macros.h"
#-----------------------------------------------------------------------
# RV64UI MACROS
#-----------------------------------------------------------------------

#-----------------------------------------------------------------------
# Tests for instructions with immediate operand
#-----------------------------------------------------------------------
# 109 "/home/oleg/scr1/sim/tests/riscv_compliance/aw_test_macros.h"
#-----------------------------------------------------------------------
# Tests for an instruction with register operands
#-----------------------------------------------------------------------
# 137 "/home/oleg/scr1/sim/tests/riscv_compliance/aw_test_macros.h"
#-----------------------------------------------------------------------
# Tests for an instruction with register-register operands
#-----------------------------------------------------------------------
# 231 "/home/oleg/scr1/sim/tests/riscv_compliance/aw_test_macros.h"
#-----------------------------------------------------------------------
# Test memory instructions
#-----------------------------------------------------------------------
# 365 "/home/oleg/scr1/sim/tests/riscv_compliance/aw_test_macros.h"
#-----------------------------------------------------------------------
# Test jump instructions
#-----------------------------------------------------------------------
# 396 "/home/oleg/scr1/sim/tests/riscv_compliance/aw_test_macros.h"
#-----------------------------------------------------------------------
# RV64UF MACROS
#-----------------------------------------------------------------------

#-----------------------------------------------------------------------
# Tests floating-point instructions
#-----------------------------------------------------------------------
# 665 "/home/oleg/scr1/sim/tests/riscv_compliance/aw_test_macros.h"
#-----------------------------------------------------------------------
# Pass and fail code (assumes test num is in gp)
#-----------------------------------------------------------------------
# 677 "/home/oleg/scr1/sim/tests/riscv_compliance/aw_test_macros.h"
#-----------------------------------------------------------------------
# Test data section
#-----------------------------------------------------------------------
# 14 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/../rv64ui/srli.S" 2

.macro init; .endm
.section .text.init; .org 0xC0, 0x00; .align 6; .weak stvec_handler; .weak mtvec_handler; trap_vector: csrr a4, mcause; li a5, 0x8; beq a4, a5, _report; li a5, 0x9; beq a4, a5, _report; li a5, 0xb; beq a4, a5, _report; la a4, mtvec_handler; beqz a4, 1f; jr a4; 1: csrr a4, mcause; bgez a4, handle_exception; j other_exception; handle_exception: other_exception: li a0, 0x1; _report: j sc_exit; .align 6; .globl _start; _start: csrr a0, mhartid; 1: bnez a0, 1b; ; li gp, 0; la t0, trap_vector; csrw mtvec, t0; li a0, 1; slli a0, a0, 31; bltz a0, 1f; fence; mv a1, gp; li a0, 0x0; ecall; 1: srli a0, a0, 31; la t0, begin_signature; sw a0, 0(t0); la t0, stvec_handler; beqz t0, 1f; csrw stvec, t0; li t0, (1 << 0xd) | (1 << 0xf) | (1 << 0xc) | (1 << 0x0) | (1 << 0x8) | (1 << 0x3); csrw medeleg, t0; csrr t1, medeleg; bne t0, t1, other_exception; 1: csrwi mstatus, 0; init; ; ; la t0, _run_test; csrw mepc, t0; csrr a0, mhartid; mret; .section .text; _run_test:

  #-------------------------------------------------------------
  # Arithmetic tests
  #-------------------------------------------------------------




  test_2: li x1, ((0xffffffff80000000) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((0) | (-(((0) >> 11) & 1) << 11));; li x29, ((((0xffffffff80000000) & ((1 << (32 -1) << 1) - 1)) >> (0)) & ((1 << (32 - 1) << 1) - 1)); li gp, 2; la x28, test_res; sw x30, (2<<2)(x28);; bne x30, x29, fail;;
  test_3: li x1, ((0xffffffff80000000) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((1) | (-(((1) >> 11) & 1) << 11));; li x29, ((((0xffffffff80000000) & ((1 << (32 -1) << 1) - 1)) >> (1)) & ((1 << (32 - 1) << 1) - 1)); li gp, 3; la x28, test_res; sw x30, (3<<2)(x28);; bne x30, x29, fail;;
  test_4: li x1, ((0xffffffff80000000) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((7) | (-(((7) >> 11) & 1) << 11));; li x29, ((((0xffffffff80000000) & ((1 << (32 -1) << 1) - 1)) >> (7)) & ((1 << (32 - 1) << 1) - 1)); li gp, 4; la x28, test_res; sw x30, (4<<2)(x28);; bne x30, x29, fail;;
  test_5: li x1, ((0xffffffff80000000) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((14) | (-(((14) >> 11) & 1) << 11));; li x29, ((((0xffffffff80000000) & ((1 << (32 -1) << 1) - 1)) >> (14)) & ((1 << (32 - 1) << 1) - 1)); li gp, 5; la x28, test_res; sw x30, (5<<2)(x28);; bne x30, x29, fail;;
  test_6: li x1, ((0xffffffff80000001) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((31) | (-(((31) >> 11) & 1) << 11));; li x29, ((((0xffffffff80000001) & ((1 << (32 -1) << 1) - 1)) >> (31)) & ((1 << (32 - 1) << 1) - 1)); li gp, 6; la x28, test_res; sw x30, (6<<2)(x28);; bne x30, x29, fail;;

  test_7: li x1, ((0xffffffffffffffff) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((0) | (-(((0) >> 11) & 1) << 11));; li x29, ((((0xffffffffffffffff) & ((1 << (32 -1) << 1) - 1)) >> (0)) & ((1 << (32 - 1) << 1) - 1)); li gp, 7; la x28, test_res; sw x30, (7<<2)(x28);; bne x30, x29, fail;;
  test_8: li x1, ((0xffffffffffffffff) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((1) | (-(((1) >> 11) & 1) << 11));; li x29, ((((0xffffffffffffffff) & ((1 << (32 -1) << 1) - 1)) >> (1)) & ((1 << (32 - 1) << 1) - 1)); li gp, 8; la x28, test_res; sw x30, (8<<2)(x28);; bne x30, x29, fail;;
  test_9: li x1, ((0xffffffffffffffff) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((7) | (-(((7) >> 11) & 1) << 11));; li x29, ((((0xffffffffffffffff) & ((1 << (32 -1) << 1) - 1)) >> (7)) & ((1 << (32 - 1) << 1) - 1)); li gp, 9; la x28, test_res; sw x30, (9<<2)(x28);; bne x30, x29, fail;;
  test_10: li x1, ((0xffffffffffffffff) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((14) | (-(((14) >> 11) & 1) << 11));; li x29, ((((0xffffffffffffffff) & ((1 << (32 -1) << 1) - 1)) >> (14)) & ((1 << (32 - 1) << 1) - 1)); li gp, 10; la x28, test_res; sw x30, (10<<2)(x28);; bne x30, x29, fail;;
  test_11: li x1, ((0xffffffffffffffff) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((31) | (-(((31) >> 11) & 1) << 11));; li x29, ((((0xffffffffffffffff) & ((1 << (32 -1) << 1) - 1)) >> (31)) & ((1 << (32 - 1) << 1) - 1)); li gp, 11; la x28, test_res; sw x30, (11<<2)(x28);; bne x30, x29, fail;;

  test_12: li x1, ((0x0000000021212121) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((0) | (-(((0) >> 11) & 1) << 11));; li x29, ((((0x0000000021212121) & ((1 << (32 -1) << 1) - 1)) >> (0)) & ((1 << (32 - 1) << 1) - 1)); li gp, 12; la x28, test_res; sw x30, (12<<2)(x28);; bne x30, x29, fail;;
  test_13: li x1, ((0x0000000021212121) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((1) | (-(((1) >> 11) & 1) << 11));; li x29, ((((0x0000000021212121) & ((1 << (32 -1) << 1) - 1)) >> (1)) & ((1 << (32 - 1) << 1) - 1)); li gp, 13; la x28, test_res; sw x30, (13<<2)(x28);; bne x30, x29, fail;;
  test_14: li x1, ((0x0000000021212121) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((7) | (-(((7) >> 11) & 1) << 11));; li x29, ((((0x0000000021212121) & ((1 << (32 -1) << 1) - 1)) >> (7)) & ((1 << (32 - 1) << 1) - 1)); li gp, 14; la x28, test_res; sw x30, (14<<2)(x28);; bne x30, x29, fail;;
  test_15: li x1, ((0x0000000021212121) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((14) | (-(((14) >> 11) & 1) << 11));; li x29, ((((0x0000000021212121) & ((1 << (32 -1) << 1) - 1)) >> (14)) & ((1 << (32 - 1) << 1) - 1)); li gp, 15; la x28, test_res; sw x30, (15<<2)(x28);; bne x30, x29, fail;;
  test_16: li x1, ((0x0000000021212121) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((31) | (-(((31) >> 11) & 1) << 11));; li x29, ((((0x0000000021212121) & ((1 << (32 -1) << 1) - 1)) >> (31)) & ((1 << (32 - 1) << 1) - 1)); li gp, 16; la x28, test_res; sw x30, (16<<2)(x28);; bne x30, x29, fail;;

  #-------------------------------------------------------------
  # Source/Destination tests
  #-------------------------------------------------------------

  test_17: li x1, ((0x80000000) & ((1 << (32 - 1) << 1) - 1)); srli x1, x1, ((7) | (-(((7) >> 11) & 1) << 11));; li x29, ((0x01000000) & ((1 << (32 - 1) << 1) - 1)); li gp, 17; la x28, test_res; sw x1, (17<<2)(x28);; bne x1, x29, fail;;

  #-------------------------------------------------------------
  # Bypassing tests
  #-------------------------------------------------------------

  test_18: li x4, 0; 1: li x1, ((0x80000000) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((7) | (-(((7) >> 11) & 1) << 11)); addi x6, x30, 0; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b; li x29, ((0x01000000) & ((1 << (32 - 1) << 1) - 1)); li gp, 18; la x28, test_res; sw x6, (18<<2)(x28);; bne x6, x29, fail;;
  test_19: li x4, 0; 1: li x1, ((0x80000000) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((14) | (-(((14) >> 11) & 1) << 11)); nop; addi x6, x30, 0; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b; li x29, ((0x00020000) & ((1 << (32 - 1) << 1) - 1)); li gp, 19; la x28, test_res; sw x6, (19<<2)(x28);; bne x6, x29, fail;;
  test_20: li x4, 0; 1: li x1, ((0x80000001) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((31) | (-(((31) >> 11) & 1) << 11)); nop; nop; addi x6, x30, 0; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b; li x29, ((0x00000001) & ((1 << (32 - 1) << 1) - 1)); li gp, 20; la x28, test_res; sw x6, (20<<2)(x28);; bne x6, x29, fail;;

  test_21: li x4, 0; 1: li x1, ((0x80000000) & ((1 << (32 - 1) << 1) - 1)); srli x30, x1, ((7) | (-(((7) >> 11) & 1) << 11)); addi x4, x4, 1; li x5, 2; bne x4, x5, 1b; li x29, ((0x01000000) & ((1 << (32 - 1) << 1) - 1)); li gp, 21; la x28, test_res; sw x30, (21<<2)(x28);; bne x30, x29, fail;;
  test_22: li x4, 0; 1: li x1, ((0x80000000) & ((1 << (32 - 1) << 1) - 1)); nop; srli x30, x1, ((14) | (-(((14) >> 11) & 1) << 11)); addi x4, x4, 1; li x5, 2; bne x4, x5, 1b; li x29, ((0x00020000) & ((1 << (32 - 1) << 1) - 1)); li gp, 22; la x28, test_res; sw x30, (22<<2)(x28);; bne x30, x29, fail;;
  test_23: li x4, 0; 1: li x1, ((0x80000001) & ((1 << (32 - 1) << 1) - 1)); nop; nop; srli x30, x1, ((31) | (-(((31) >> 11) & 1) << 11)); addi x4, x4, 1; li x5, 2; bne x4, x5, 1b; li x29, ((0x00000001) & ((1 << (32 - 1) << 1) - 1)); li gp, 23; la x28, test_res; sw x30, (23<<2)(x28);; bne x30, x29, fail;;

  test_24: srli x1, x0, ((4) | (-(((4) >> 11) & 1) << 11));; li x29, ((0) & ((1 << (32 - 1) << 1) - 1)); li gp, 24; la x28, test_res; sw x1, (24<<2)(x28);; bne x1, x29, fail;;
  test_25: li x1, ((33) & ((1 << (32 - 1) << 1) - 1)); srli x0, x1, ((10) | (-(((10) >> 11) & 1) << 11));; li x29, ((0) & ((1 << (32 - 1) << 1) - 1)); li gp, 25; la x28, test_res; sw x0, (25<<2)(x28);; bne x0, x29, fail;;

  bne x0, gp, pass; fail: fence; mv a1, gp; li a0, 0x1; ecall; pass: fence; mv a1, gp; li a0, 0x0; ecall

ecall: ecall

  .data
 .pushsection .tohost,"aw",@progbits; .align 6; .global tohost; tohost: .dword 0; .align 6; .global fromhost; fromhost: .dword 0; .popsection; .align 4; .global begin_regstate; begin_regstate: .dword 0; .dword 0; .dword 0; .align 4; .global begin_signature; begin_signature:
test_res:
    .fill 40, 4, -1
.align 4; .global end_signature; end_signature:
# 7 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/srli.S" 2
