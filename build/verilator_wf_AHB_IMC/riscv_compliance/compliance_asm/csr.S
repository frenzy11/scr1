# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/csr.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/csr.S"
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
# 4 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/csr.S" 2




# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64si/csr.S" 1
# See LICENSE for license details.

#*****************************************************************************
# csr.S
#-----------------------------------------------------------------------------

# Test CSRRx and CSRRxI instructions.



# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_test.h" 1
# 12 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64si/csr.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_io.h" 1
# 13 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64si/csr.S" 2
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
# 14 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64si/csr.S" 2

.macro init; li a0, 0x00001800; csrs mstatus, a0;; .endm
.section .text.init; .org 0xC0, 0x00; .align 6; .weak stvec_handler; .weak mtvec_handler; trap_vector: csrr a4, mcause; li a5, 0x8; beq a4, a5, _report; li a5, 0x9; beq a4, a5, _report; li a5, 0xb; beq a4, a5, _report; la a4, mtvec_handler; beqz a4, 1f; jr a4; 1: csrr a4, mcause; bgez a4, handle_exception; j other_exception; handle_exception: other_exception: li a0, 0x1; _report: j sc_exit; .align 6; .globl _start; _start: csrr a0, mhartid; 1: bnez a0, 1b; ; li gp, 0; la t0, trap_vector; csrw mtvec, t0; li a0, 1; slli a0, a0, 31; bltz a0, 1f; fence; mv a1, gp; li a0, 0x0; ecall; 1: srli a0, a0, 31; la t0, begin_signature; sw a0, 0(t0); la t0, stvec_handler; beqz t0, 1f; csrw stvec, t0; li t0, (1 << 0xd) | (1 << 0xf) | (1 << 0xc) | (1 << 0x0) | (1 << 0x8) | (1 << 0x3); csrw medeleg, t0; csrr t1, medeleg; bne t0, t1, other_exception; 1: csrwi mstatus, 0; init; ; ; la t0, _run_test; csrw mepc, t0; csrr a0, mhartid; mret; .section .text; _run_test:
# 29 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64si/csr.S"
  # For RV64, make sure UXL encodes RV64. (UXL does not exist for RV32.)
# 51 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64si/csr.S"
  csrwi mscratch, 3
  test_2: csrr a0, mscratch; li x29, ((3) & ((1 << (32 - 1) << 1) - 1)); li gp, 2; la x28, test_res; sw a0, (2<<2)(x28);; bne a0, x29, fail;;
  test_3: csrrci a1, mscratch, 1; li x29, ((3) & ((1 << (32 - 1) << 1) - 1)); li gp, 3; la x28, test_res; sw a1, (3<<2)(x28);; bne a1, x29, fail;;
  test_4: csrrsi a2, mscratch, 4; li x29, ((2) & ((1 << (32 - 1) << 1) - 1)); li gp, 4; la x28, test_res; sw a2, (4<<2)(x28);; bne a2, x29, fail;;
  test_5: csrrwi a3, mscratch, 2; li x29, ((6) & ((1 << (32 - 1) << 1) - 1)); li gp, 5; la x28, test_res; sw a3, (5<<2)(x28);; bne a3, x29, fail;;
  test_6: li a0, 0xbad1dea; csrrw a1, mscratch, a0; li x29, ((2) & ((1 << (32 - 1) << 1) - 1)); li gp, 6; la x28, test_res; sw a1, (6<<2)(x28);; bne a1, x29, fail;;
  test_7: li a0, 0x0001dea; csrrc a0, mscratch, a0; li x29, ((0xbad1dea) & ((1 << (32 - 1) << 1) - 1)); li gp, 7; la x28, test_res; sw a0, (7<<2)(x28);; bne a0, x29, fail;;
  test_8: li a0, 0x000beef; csrrs a0, mscratch, a0; li x29, ((0xbad0000) & ((1 << (32 - 1) << 1) - 1)); li gp, 8; la x28, test_res; sw a0, (8<<2)(x28);; bne a0, x29, fail;;
  test_9: csrr a0, mscratch; li x29, ((0xbadbeef) & ((1 << (32 - 1) << 1) - 1)); li gp, 9; la x28, test_res; sw a0, (9<<2)(x28);; bne a0, x29, fail;;


  # Is F extension present?
  csrr a0, misa
  andi a0, a0, (1 << ('F' - 'A'))
  beqz a0, 1f
  # If so, make sure FP stores have no effect when mstatus.FS is off.
  li a1, 0x00006000
  csrs mstatus, a1






  # Fail if this test is compiled without F but executed on a core with F.
  test_10: ; li x29, ((1) & ((1 << (32 - 1) << 1) - 1)); li gp, 10; la x28, test_res; sw zero, (10<<2)(x28);; bne zero, x29, fail;

1:

  # Figure out if 'U' is set in misa
  csrr a0, misa # a0 = csr(misa)
  srli a0, a0, 20 # a0 = a0 >> 20
  andi a0, a0, 1 # a0 = a0 & 1
  beqz a0, finish # if no user mode, skip the rest of these checks


  # jump to user land
  li t0, 0x00001800
  csrc mstatus, t0
  la t0, 1f
  csrw mepc, t0
  mret
  1:

  # Make sure writing the cycle counter causes an exception.
  # Don't run in supervisor, as we don't delegate illegal instruction traps.

  test_11: li a0, 255; csrrw a0, cycle, x0; li x29, ((255) & ((1 << (32 - 1) << 1) - 1)); li gp, 11; la x28, test_res; sw a0, (11<<2)(x28);; bne a0, x29, fail;;


  # Make sure reading status in user mode causes an exception.
  # Don't run in supervisor, as we don't delegate illegal instruction traps.

  test_12: li a0, 255; csrr a0, mstatus; li x29, ((255) & ((1 << (32 - 1) << 1) - 1)); li gp, 12; la x28, test_res; sw a0, (12<<2)(x28);; bne a0, x29, fail;




finish:
 

  # We should only fall through to this if scall failed.
  bne x0, gp, pass; fail: fence; mv a1, gp; li a0, 0x1; ecall; pass: fence; mv a1, gp; li a0, 0x0; ecall

  .align 2
  .global mtvec_handler
mtvec_handler:
  # Trapping on tests 10-12 is good news.
  # Note that since the test didn't complete, TESTNUM is smaller by 1.
  li t0, 9
  bltu gp, t0, 1f
  li t0, 11
  bleu gp, t0, privileged
1:

  # catch and kick it up to M-mode
  csrr t0, mcause
  li t1, 0x8
  bne t0, t1, fail
 

privileged:
  # Make sure mcause indicates a lack of privilege.
  csrr t0, mcause
  li t1, 0x2
  bne t0, t1, fail
  # Return to user mode, but skip the trapping instruction.
  csrr t0, mepc
  addi t0, t0, 4
  csrw mepc, t0
  mret

ecall: ecall

  .data
fsw_data: .word 1
 .pushsection .tohost,"aw",@progbits; .align 6; .global tohost; tohost: .dword 0; .align 6; .global fromhost; fromhost: .dword 0; .popsection; .align 4; .global begin_regstate; begin_regstate: .dword 0; .dword 0; .dword 0; .align 4; .global begin_signature; begin_signature:
test_res:
    .fill 8, 4, -1
.align 4; .global end_signature; end_signature:
# 8 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/csr.S" 2
