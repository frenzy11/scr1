# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/ma_fetch.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/ma_fetch.S"
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
# 4 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/ma_fetch.S" 2




# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64si/ma_fetch.S" 1
# See LICENSE for license details.

#*****************************************************************************
# ma_fetch.S
#-----------------------------------------------------------------------------

# Test misaligned fetch trap.



# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_test.h" 1
# 12 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64si/ma_fetch.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_io.h" 1
# 13 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64si/ma_fetch.S" 2
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
# 14 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64si/ma_fetch.S" 2

.macro init; li a0, 0x00001800; csrs mstatus, a0;; .endm
.section .text.init; .org 0xC0, 0x00; .align 6; .weak stvec_handler; .weak mtvec_handler; trap_vector: csrr a4, mcause; li a5, 0x8; beq a4, a5, _report; li a5, 0x9; beq a4, a5, _report; li a5, 0xb; beq a4, a5, _report; la a4, mtvec_handler; beqz a4, 1f; jr a4; 1: csrr a4, mcause; bgez a4, handle_exception; j other_exception; handle_exception: other_exception: li a0, 0x1; _report: j sc_exit; .align 6; .globl _start; _start: csrr a0, mhartid; 1: bnez a0, 1b; ; li gp, 0; la t0, trap_vector; csrw mtvec, t0; li a0, 1; slli a0, a0, 31; bltz a0, 1f; fence; mv a1, gp; li a0, 0x0; ecall; 1: srli a0, a0, 31; la t0, begin_signature; sw a0, 0(t0); la t0, stvec_handler; beqz t0, 1f; csrw stvec, t0; li t0, (1 << 0xd) | (1 << 0xf) | (1 << 0xc) | (1 << 0x0) | (1 << 0x8) | (1 << 0x3); csrw medeleg, t0; csrr t1, medeleg; bne t0, t1, other_exception; 1: csrwi mstatus, 0; init; ; ; la t0, _run_test; csrw mepc, t0; csrr a0, mhartid; mret; .section .text; _run_test:
# 28 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64si/ma_fetch.S"
  .align 2
  .option norvc

  # Without RVC, the jalr should trap, and the handler will skip ahead.
  # With RVC, the jalr should not trap, and "j fail" should get skipped.
  li gp, 2
  la x28, test_res; sw gp, (2<<2)(x28);
  li t1, 0
  la t0, 1f
  jalr t1, t0, 2
1:
  .option rvc
  c.j 1f
  c.j 2f
  .option norvc
1:
  j fail
2:


  li gp, 3
  la x28, test_res; sw gp, (3<<2)(x28);
  la t0, 1f
  jalr t1, t0, 1
1:
  j 1f
  j fail
1:

  li gp, 4
  la x28, test_res; sw gp, (4<<2)(x28);
  li t1, 0
  la t0, 1f
  jalr t1, t0, 3
1:
  .option rvc
  c.j 1f
  c.j 2f
  .option norvc
1:
  j fail
2:

  # Like test 2, but with jal instead of jalr.
  li gp, 5
  la x28, test_res; sw gp, (5<<2)(x28);
  li t1, 0
  la t0, 1f
  jal t1, 2f
1:
  .option rvc
  c.j 1f
2:
  c.j 2f
  .option norvc
1:
  j fail
2:

  # Like test 2, but with a taken branch instead of jalr.
  li gp, 6
  la x28, test_res; sw gp, (6<<2)(x28);
  li t1, 0
  la t0, 1f
  beqz x0, 2f
1:
  .option rvc
  c.j 1f
2:
  c.j 2f
  .option norvc
1:
  j fail
2:

  # Not-taken branches should not trap, even without RVC.
  li gp, 7
  la x28, test_res; sw gp, (7<<2)(x28);
  bnez x0, 1f
  j 2f
  .option rvc
  c.j 1f
1:
  c.j 1f
  .option norvc
1:
  j fail
2:


  # RVC cannot be disabled if doing so would cause a misaligned instruction
  # exception on the next instruction fetch. (This test assumes no other
  # extensions that support misalignment are present.)
  li gp, 8
  la x28, test_res; sw gp, (8<<2)(x28);
  csrr t2, misa
  andi t2, t2, 1 << ('c' - 'a')
  beqz t2, 2f

  .option rvc
  c.nop
  csrci misa, 1 << ('c' - 'a')
1:
  c.nop
  .option norvc

  csrr t2, misa
  andi t2, t2, 1 << ('c' - 'a')
  beqz t2, fail

  # When RVC is disabled, mret to a misaligned mepc should succeed,
  # masking off mepc[1].
  la t0, 1f
  addi t0, t0, -2
  csrw mepc, t0

  # Try to disable RVC; if it can't be disabled, skip the test.
  csrci misa, 1 << ('c' - 'a')
  csrr t2, misa
  andi t2, t2, 1 << ('c' - 'a')
  bnez t2, 2f

  li t2, 0x00001800
  csrs mstatus, t2
  mret

  # mret should transfer control to this branch. Otherwise, it will
  # transfer control two bytes into the branch, which happens to be the
  # illegal instruction c.unimp.
  beqz x0, 1f
1:
  csrsi misa, 1 << ('c' - 'a')
2:


  j pass

  bne x0, gp, pass; fail: fence; mv a1, gp; li a0, 0x1; ecall; pass: fence; mv a1, gp; li a0, 0x0; ecall

  .align 2
  .global mtvec_handler
mtvec_handler:
  # tests 2, 4, 5, 6, and 8 should trap
  li a0, 2
  beq gp, a0, 1f
  li a0, 4
  beq gp, a0, 1f
  li a0, 5
  beq gp, a0, 1f
  li a0, 6
  beq gp, a0, 1f
  j fail
1:

  # verify that return address was not written
  bnez t1, fail

  # verify trap cause
  li a1, 0x0
  csrr a0, mcause
  bne a0, a1, fail

  # verify that epc == &jalr (== t0 - 4)
  csrr a1, mepc
  addi a1, a1, 4
  bne t0, a1, fail

  # verify that badaddr == 0 or badaddr == t0+2.
  csrr a0, mbadaddr
  beqz a0, 1f
  addi a0, a0, -2
  bne a0, t0, fail
1:

  addi a1, a1, 8
  csrw mepc, a1
  mret

ecall: ecall

  .data
 .pushsection .tohost,"aw",@progbits; .align 6; .global tohost; tohost: .dword 0; .align 6; .global fromhost; fromhost: .dword 0; .popsection; .align 4; .global begin_regstate; begin_regstate: .dword 0; .dword 0; .dword 0; .align 4; .global begin_signature; begin_signature:
test_res:
    .fill 40, 4, -1
.align 4; .global end_signature; end_signature:
# 8 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/ma_fetch.S" 2
