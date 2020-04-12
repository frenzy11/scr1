# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/illegal.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/illegal.S"
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
# 4 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/illegal.S" 2



# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64mi/illegal.S" 1
# See LICENSE for license details.

#*****************************************************************************
# illegal.S
#-----------------------------------------------------------------------------

# Test illegal instruction trap.



# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_test.h" 1
# 12 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64mi/illegal.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_io.h" 1
# 13 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64mi/illegal.S" 2
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
# 14 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64mi/illegal.S" 2

#.macro init; li a0, 0x00001800 & (0x00001800 >> 1); csrs mstatus, a0; li a0, (1 << 1) | (1 << 5); csrs mideleg, a0;; .endm
.macro init; li a0, 0x00001800; csrs mstatus, a0;; .endm

.section .text.init; .org 0xC0, 0x00; .align 6; .weak stvec_handler; .weak mtvec_handler; trap_vector: csrr a4, mcause; li a5, 0x8; beq a4, a5, _report; li a5, 0x9; beq a4, a5, _report; li a5, 0xb; beq a4, a5, _report; la a4, mtvec_handler; beqz a4, 1f; jr a4; 1: csrr a4, mcause; bgez a4, handle_exception; j other_exception; handle_exception: other_exception: li a0, 0x1; _report: j sc_exit; .align 6; .globl _start; _start: csrr a0, mhartid; 1: bnez a0, 1b; ; li gp, 0; la t0, trap_vector; csrw mtvec, t0; li a0, 1; slli a0, a0, 31; bltz a0, 1f; fence; mv a1, gp; li a0, 0x0; ecall; 1: srli a0, a0, 31; la t0, begin_signature; sw a0, 0(t0); la t0, stvec_handler; beqz t0, 1f; csrw stvec, t0; li t0, (1 << 0xd) | (1 << 0xf) | (1 << 0xc) | (1 << 0x0) | (1 << 0x8) | (1 << 0x3); csrw medeleg, t0; csrr t1, medeleg; bne t0, t1, other_exception; 1: csrwi mstatus, 0; init; ; ; la t0, _run_test; csrw mepc, t0; csrr a0, mhartid; mret; .section .text; _run_test:

  .align 2
  .option norvc

  li gp, 2
bad2:
  .word 0
  j fail

  # Skip the rest of the test if S-mode is not present.
  li t0, 0x00001800
  csrc mstatus, t0
  li t1, (0x00001800 & -0x00001800) * 1
  csrs mstatus, t1
  csrr t2, mstatus
  and t2, t2, t0
  bne t1, t2, pass

  # Test vectored interrupts if they are supported.
test_vectored_interrupts:
  csrwi mip, (1 << 1)
  csrwi mie, (1 << 1)
  la t0, mtvec_handler + 1
  csrrw s0, mtvec, t0
  csrr t0, mtvec
  andi t0, t0, 1
  beqz t0, msip
  csrsi mstatus, 0x00000008
1:
  j 1b
msip:
  csrw mtvec, s0

  # Delegate supervisor software interrupts so WFI won't stall.
  csrwi mideleg, (1 << 1)
  # Enter supervisor mode.
  la t0, 1f
  csrw mepc, t0
  li t0, 0x00001800
  csrc mstatus, t0
  li t1, (0x00001800 & -0x00001800) * 1
  csrs mstatus, t1
  mret

1:
  # Make sure WFI doesn't trap when TW=0.
  wfi
bad3:
  .word 0
  j fail

bad4:
  # Make sure WFI does trap when TW=1.
  wfi
  j fail

  # Make sure SFENCE.VMA and sptbr don't trap when TVM=0.
  sfence.vma
  csrr t0, sptbr
bad5:
  .word 0
  j fail

bad6:
  # Make sure SFENCE.VMA and sptbr do trap when TVM=1.
  sfence.vma
  j fail
bad7:
  csrr t0, sptbr
  j fail

  # Make sure SRET doesn't trap when TSR=0.
  la t0, bad8
  csrw sepc, t0
  li t0, 0x00000100
  csrs sstatus, t0
  li t0, 0x00000020
  csrc sstatus, t0
  sret
bad8:
  .word 0
  j fail

  # Make sure SRET does trap when TSR=1.
  la t0, 1f
  csrw sepc, t0
bad9:
  sret
1:
  j fail

  bne x0, gp, pass; fail: fence; mv a1, gp; li a0, 0x1; ecall; pass: fence; mv a1, gp; li a0, 0x0; ecall

  .align 8
  .global mtvec_handler
mtvec_handler:
  j synchronous_exception
  j msip
  j fail
  j fail
  j fail
  j fail
  j fail
  j fail
  j fail
  j fail
  j fail
  j fail
  j fail
  j fail
  j fail
  j fail

synchronous_exception:
  li t1, 0x2
  csrr t0, mcause
  bne t0, t1, fail
  csrr t0, mepc

  # Make sure mbadaddr contains either 0 or the instruction word.
  csrr t2, mbadaddr
  beqz t2, 1f
  lhu t3, 0(t0)
  lhu t4, 2(t0)
  slli t4, t4, 16
  or t3, t3, t4
  bne t2, t3, fail
1:

  la t1, bad2
  beq t0, t1, 2f
  la t1, bad3
  beq t0, t1, 3f
  la t1, bad4
  beq t0, t1, 4f
  la t1, bad5
  beq t0, t1, 5f
  la t1, bad6
  beq t0, t1, 6f
  la t1, bad7
  beq t0, t1, 7f
  la t1, bad8
  beq t0, t1, 8f
  la t1, bad9
  beq t0, t1, 9f
  j fail
2:
4:
6:
7:
  addi t0, t0, 8
  csrw mepc, t0
  mret

3:
  li t1, 0x00200000
  csrs mstatus, t1
  j 2b

5:
  li t1, 0x00100000
  csrs mstatus, t1
  j 2b

8:
  li t1, 0x00400000
  csrs mstatus, t1
  j 2b

9:
  j 2b

ecall: ecall

  .data
 .pushsection .tohost,"aw",@progbits; .align 6; .global tohost; tohost: .dword 0; .align 6; .global fromhost; fromhost: .dword 0; .popsection; .align 4; .global begin_regstate; begin_regstate: .dword 0; .dword 0; .dword 0; .align 4; .global begin_signature; begin_signature:
test_res:
    .fill 40, 4, -1
.align 4; .global end_signature; end_signature:
# 7 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/illegal.S" 2
