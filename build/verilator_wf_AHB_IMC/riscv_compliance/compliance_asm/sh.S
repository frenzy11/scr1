# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/sh.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/sh.S"
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
# 4 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/sh.S" 2



# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/../rv64ui/sh.S" 1
# See LICENSE for license details.

#*****************************************************************************
# sh.S
#-----------------------------------------------------------------------------

# Test sh instruction.



# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_test.h" 1
# 12 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/../rv64ui/sh.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_io.h" 1
# 13 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/../rv64ui/sh.S" 2
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
# 14 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/../rv64ui/sh.S" 2


.macro init; .endm
.section .text.init; .org 0xC0, 0x00; .align 6; .weak stvec_handler; .weak mtvec_handler; trap_vector: csrr a4, mcause; li a5, 0x8; beq a4, a5, _report; li a5, 0x9; beq a4, a5, _report; li a5, 0xb; beq a4, a5, _report; la a4, mtvec_handler; beqz a4, 1f; jr a4; 1: csrr a4, mcause; bgez a4, handle_exception; j other_exception; handle_exception: other_exception: li a0, 0x1; _report: j sc_exit; .align 6; .globl _start; _start: csrr a0, mhartid; 1: bnez a0, 1b; ; li gp, 0; la t0, trap_vector; csrw mtvec, t0; li a0, 1; slli a0, a0, 31; bltz a0, 1f; fence; mv a1, gp; li a0, 0x0; ecall; 1: srli a0, a0, 31; la t0, begin_signature; sw a0, 0(t0); la t0, stvec_handler; beqz t0, 1f; csrw stvec, t0; li t0, (1 << 0xd) | (1 << 0xf) | (1 << 0xc) | (1 << 0x0) | (1 << 0x8) | (1 << 0x3); csrw medeleg, t0; csrr t1, medeleg; bne t0, t1, other_exception; 1: csrwi mstatus, 0; init; ; ; la t0, _run_test; csrw mepc, t0; csrr a0, mhartid; mret; .section .text; _run_test:

  #-------------------------------------------------------------
  # Basic tests
  #-------------------------------------------------------------

  test_2: la x1, tdat; li x2, 0x00000000000000aa; sh x2, 0(x1); lh x30, 0(x1);; li x29, ((0x00000000000000aa) & ((1 << (32 - 1) << 1) - 1)); li gp, 2; la x28, test_res; sw x30, (2<<2)(x28);; bne x30, x29, fail;;
  test_3: la x1, tdat; li x2, 0xffffffffffffaa00; sh x2, 2(x1); lh x30, 2(x1);; li x29, ((0xffffffffffffaa00) & ((1 << (32 - 1) << 1) - 1)); li gp, 3; la x28, test_res; sw x30, (3<<2)(x28);; bne x30, x29, fail;;
  test_4: la x1, tdat; li x2, 0xffffffffbeef0aa0; sh x2, 4(x1); lw x30, 4(x1);; li x29, ((0xffffffffbeef0aa0) & ((1 << (32 - 1) << 1) - 1)); li gp, 4; la x28, test_res; sw x30, (4<<2)(x28);; bne x30, x29, fail;;
  test_5: la x1, tdat; li x2, 0xffffffffffffa00a; sh x2, 6(x1); lh x30, 6(x1);; li x29, ((0xffffffffffffa00a) & ((1 << (32 - 1) << 1) - 1)); li gp, 5; la x28, test_res; sw x30, (5<<2)(x28);; bne x30, x29, fail;;

  # Test with negative offset

  test_6: la x1, tdat8; li x2, 0x00000000000000aa; sh x2, -6(x1); lh x30, -6(x1);; li x29, ((0x00000000000000aa) & ((1 << (32 - 1) << 1) - 1)); li gp, 6; la x28, test_res; sw x30, (6<<2)(x28);; bne x30, x29, fail;;
  test_7: la x1, tdat8; li x2, 0xffffffffffffaa00; sh x2, -4(x1); lh x30, -4(x1);; li x29, ((0xffffffffffffaa00) & ((1 << (32 - 1) << 1) - 1)); li gp, 7; la x28, test_res; sw x30, (7<<2)(x28);; bne x30, x29, fail;;
  test_8: la x1, tdat8; li x2, 0x0000000000000aa0; sh x2, -2(x1); lh x30, -2(x1);; li x29, ((0x0000000000000aa0) & ((1 << (32 - 1) << 1) - 1)); li gp, 8; la x28, test_res; sw x30, (8<<2)(x28);; bne x30, x29, fail;;
  test_9: la x1, tdat8; li x2, 0xffffffffffffa00a; sh x2, 0(x1); lh x30, 0(x1);; li x29, ((0xffffffffffffa00a) & ((1 << (32 - 1) << 1) - 1)); li gp, 9; la x28, test_res; sw x30, (9<<2)(x28);; bne x30, x29, fail;;

  # Test with a negative base

  test_10: la x1, tdat9; li x2, 0x12345678; addi x4, x1, -32; sh x2, 32(x4); lh x5, 0(x1);; li x29, ((0x5678) & ((1 << (32 - 1) << 1) - 1)); li gp, 10; la x28, test_res; sw x5, (10<<2)(x28);; bne x5, x29, fail;







  # Test with unaligned base

  test_11: la x1, tdat9; li x2, 0x00003098; addi x1, x1, -5; sh x2, 7(x1); la x4, tdat10; lh x5, 0(x4);; li x29, ((0x3098) & ((1 << (32 - 1) << 1) - 1)); li gp, 11; la x28, test_res; sw x5, (11<<2)(x28);; bne x5, x29, fail;
# 56 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/../rv64ui/sh.S"
  #-------------------------------------------------------------
  # Bypassing tests
  #-------------------------------------------------------------

  test_12: li gp, 12; la x28, test_res; sw gp, (12<<2)(x28);; li x4, 0; 1: li x1, 0xffffffffffffccdd; la x2, tdat; sh x1, 0(x2); lh x30, 0(x2); li x29, 0xffffffffffffccdd; bne x30, x29, fail; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b;
  test_13: li gp, 13; la x28, test_res; sw gp, (13<<2)(x28);; li x4, 0; 1: li x1, 0xffffffffffffbccd; la x2, tdat; nop; sh x1, 2(x2); lh x30, 2(x2); li x29, 0xffffffffffffbccd; bne x30, x29, fail; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b;
  test_14: li gp, 14; la x28, test_res; sw gp, (14<<2)(x28);; li x4, 0; 1: li x1, 0xffffffffffffbbcc; la x2, tdat; nop; nop; sh x1, 4(x2); lh x30, 4(x2); li x29, 0xffffffffffffbbcc; bne x30, x29, fail; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b;
  test_15: li gp, 15; la x28, test_res; sw gp, (15<<2)(x28);; li x4, 0; 1: li x1, 0xffffffffffffabbc; nop; la x2, tdat; sh x1, 6(x2); lh x30, 6(x2); li x29, 0xffffffffffffabbc; bne x30, x29, fail; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b;
  test_16: li gp, 16; la x28, test_res; sw gp, (16<<2)(x28);; li x4, 0; 1: li x1, 0xffffffffffffaabb; nop; la x2, tdat; nop; sh x1, 8(x2); lh x30, 8(x2); li x29, 0xffffffffffffaabb; bne x30, x29, fail; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b;
  test_17: li gp, 17; la x28, test_res; sw gp, (17<<2)(x28);; li x4, 0; 1: li x1, 0xffffffffffffdaab; nop; nop; la x2, tdat; sh x1, 10(x2); lh x30, 10(x2); li x29, 0xffffffffffffdaab; bne x30, x29, fail; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b;

  test_18: li gp, 18; la x28, test_res; sw gp, (18<<2)(x28);; li x4, 0; 1: la x2, tdat; li x1, 0x2233; sh x1, 0(x2); lh x30, 0(x2); li x29, 0x2233; bne x30, x29, fail; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b;
  test_19: li gp, 19; la x28, test_res; sw gp, (19<<2)(x28);; li x4, 0; 1: la x2, tdat; li x1, 0x1223; nop; sh x1, 2(x2); lh x30, 2(x2); li x29, 0x1223; bne x30, x29, fail; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b;
  test_20: li gp, 20; la x28, test_res; sw gp, (20<<2)(x28);; li x4, 0; 1: la x2, tdat; li x1, 0x1122; nop; nop; sh x1, 4(x2); lh x30, 4(x2); li x29, 0x1122; bne x30, x29, fail; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b;
  test_21: li gp, 21; la x28, test_res; sw gp, (21<<2)(x28);; li x4, 0; 1: la x2, tdat; nop; li x1, 0x0112; sh x1, 6(x2); lh x30, 6(x2); li x29, 0x0112; bne x30, x29, fail; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b;
  test_22: li gp, 22; la x28, test_res; sw gp, (22<<2)(x28);; li x4, 0; 1: la x2, tdat; nop; li x1, 0x0011; nop; sh x1, 8(x2); lh x30, 8(x2); li x29, 0x0011; bne x30, x29, fail; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b;
  test_23: li gp, 23; la x28, test_res; sw gp, (23<<2)(x28);; li x4, 0; 1: la x2, tdat; nop; nop; li x1, 0x3001; sh x1, 10(x2); lh x30, 10(x2); li x29, 0x3001; bne x30, x29, fail; addi x4, x4, 1; li x5, 2; bne x4, x5, 1b;

  li a0, 0xbeef
  la a1, tdat
  sh a0, 6(a1)

  bne x0, gp, pass; fail: fence; mv a1, gp; li a0, 0x1; ecall; pass: fence; mv a1, gp; li a0, 0x0; ecall

ecall: ecall

  .data
tdat:
tdat1: .half 0xbeef
tdat2: .half 0xbeef
tdat3: .half 0xbeef
tdat4: .half 0xbeef
tdat5: .half 0xbeef
tdat6: .half 0xbeef
tdat7: .half 0xbeef
tdat8: .half 0xbeef
tdat9: .half 0xbeef
tdat10: .half 0xbeef

 .pushsection .tohost,"aw",@progbits; .align 6; .global tohost; tohost: .dword 0; .align 6; .global fromhost; fromhost: .dword 0; .popsection; .align 4; .global begin_regstate; begin_regstate: .dword 0; .dword 0; .dword 0; .align 4; .global begin_signature; begin_signature:
test_res:
    .fill 40, 4, -1
.align 4; .global end_signature; end_signature:
# 7 "/home/oleg/riscv-compliance/riscv-test-suite/rv32ui/src/sh.S" 2
