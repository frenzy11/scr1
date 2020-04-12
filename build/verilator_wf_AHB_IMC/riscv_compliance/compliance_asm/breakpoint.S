# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/breakpoint.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/breakpoint.S"
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
# 4 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/breakpoint.S" 2




# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64mi/breakpoint.S" 1
# See LICENSE for license details.

#*****************************************************************************
# breakpoint.S
#-----------------------------------------------------------------------------

# Test breakpoints, if they are implemented.



# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_test.h" 1
# 12 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64mi/breakpoint.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_io.h" 1
# 13 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64mi/breakpoint.S" 2
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
# 14 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/../rv64mi/breakpoint.S" 2

.macro init; li a0, 0x00001800; csrs mstatus, a0;; .endm
.section .text.init; .org 0xC0, 0x00; .align 6; .weak stvec_handler; .weak mtvec_handler; trap_vector: csrr a4, mcause; li a5, 0x8; beq a4, a5, _report; li a5, 0x9; beq a4, a5, _report; li a5, 0xb; beq a4, a5, _report; la a4, mtvec_handler; beqz a4, 1f; jr a4; 1: csrr a4, mcause; bgez a4, handle_exception; j other_exception; handle_exception: other_exception: li a0, 0x1; _report: j sc_exit; .align 6; .globl _start; _start: csrr a0, mhartid; 1: bnez a0, 1b; ; li gp, 0; la t0, trap_vector; csrw mtvec, t0; li a0, 1; slli a0, a0, 31; bltz a0, 1f; fence; mv a1, gp; li a0, 0x0; ecall; 1: srli a0, a0, 31; la t0, begin_signature; sw a0, 0(t0); la t0, stvec_handler; beqz t0, 1f; csrw stvec, t0; li t0, (1 << 0xd) | (1 << 0xf) | (1 << 0xc) | (1 << 0x0) | (1 << 0x8) | (1 << 0x3); csrw medeleg, t0; csrr t1, medeleg; bne t0, t1, other_exception; 1: csrwi mstatus, 0; init; ; ; la t0, _run_test; csrw mepc, t0; csrr a0, mhartid; mret; .section .text; _run_test:

  # Set up breakpoint to trap on M-mode fetches.
  li gp, 2
  la x28, test_res; sw gp, (2<<2)(x28);

  # Skip tselect if hard-wired.
  csrw tselect, x0
  csrr a1, tselect
  bne x0, a1, sign_pass

  # Make sure there's a breakpoint there.
  csrr a0, tdata1
  srli a0, a0, 32 - 4
  li a1, 2
  bne a0, a1, sign_pass

  la a2, 1f
  csrw tdata2, a2
  li a0, (1<<6) | (1<<2)
  csrw tdata1, a0
  # Skip if breakpoint type is unsupported.
  csrr a1, tdata1
  andi a1, a1, 0x7ff
  bne a0, a1, 2f
  .align 2
1:
  # Trap handler should skip this instruction.
  beqz x0, fail

  # Make sure reads don't trap.
  li gp, 3
  la x28, test_res; sw gp, (3<<2)(x28);
  lw a0, (a2)

2:
  # Set up breakpoint to trap on M-mode reads.
  li gp, 4
  la x28, test_res; sw gp, (4<<2)(x28);
  li a0, (1<<6) | (1<<0)
  csrw tdata1, a0
  # Skip if breakpoint type is unsupported.
  csrr a1, tdata1
  andi a1, a1, 0x7ff
  bne a0, a1, 2f
  la a2, data1
  csrw tdata2, a2

  # Trap handler should skip this instruction.
  lw a2, (a2)
  beqz a2, fail

  # Make sure writes don't trap.
  li gp, 5
  la x28, test_res; sw gp, (5<<2)(x28);
  sw x0, (a2)

2:
  # Set up breakpoint to trap on M-mode stores.
  li gp, 6
  la x28, test_res; sw gp, (6<<2)(x28);
  li a0, (1<<6) | (1<<1)
  csrw tdata1, a0
  # Skip if breakpoint type is unsupported.
  csrr a1, tdata1
  andi a1, a1, 0x7ff
  bne a0, a1, 2f

  # Trap handler should skip this instruction.
  sw a2, (a2)

  # Make sure store didn't succeed.
  li gp, 7
  la x28, test_res; sw gp, (7<<2)(x28);
  lw a2, (a2)
  bnez a2, fail

  # Try to set up a second breakpoint.
  li a0, 1
  csrw tselect, a0
  csrr a1, tselect
  bne a0, a1, sign_pass

  # Make sure there's a breakpoint there.
  csrr a0, tdata1
  srli a0, a0, 32 - 4
  li a1, 2
  bne a0, a1, sign_pass

  li a0, (1<<6) | (1<<0)
  csrw tdata1, a0
  la a3, data2
  csrw tdata2, a3

  # Make sure the second breakpoint triggers.
  li gp, 8
  la x28, test_res; sw gp, (8<<2)(x28);
  lw a3, (a3)
  beqz a3, fail

  # Make sure the first breakpoint still triggers.
  li gp, 10
  la x28, test_res; sw gp, (10<<2)(x28);
  la a2, data1
  sw a2, (a2)
  li gp, 11
  la x28, test_res; sw gp, (11<<2)(x28);
  lw a2, (a2)
  bnez a2, fail

2:
  bne x0, gp, pass; fail: fence; mv a1, gp; li a0, 0x1; ecall; pass: fence; mv a1, gp; li a0, 0x0; ecall

sign_pass:
  li gp, 3
  la x28, test_res; sw gp, (3<<2)(x28);
  li gp, 4
  la x28, test_res; sw gp, (4<<2)(x28);
  li gp, 5
  la x28, test_res; sw gp, (5<<2)(x28);
  li gp, 6
  la x28, test_res; sw gp, (6<<2)(x28);
  li gp, 7
  la x28, test_res; sw gp, (7<<2)(x28);
  li gp, 8
  la x28, test_res; sw gp, (8<<2)(x28);
  li gp, 10
  la x28, test_res; sw gp, (10<<2)(x28);
  li gp, 11
  la x28, test_res; sw gp, (11<<2)(x28);
  j pass

  .align 2
  .global mtvec_handler
mtvec_handler:
  # Only even-numbered tests should trap.
  andi t0, gp, 1
  bnez t0, fail

  li t0, 0x3
  csrr t1, mcause
  bne t0, t1, fail

  csrr t0, mepc
  addi t0, t0, 4
  csrw mepc, t0
  mret

ecall: ecall

  .data
data1: .word 0
data2: .word 0

 .pushsection .tohost,"aw",@progbits; .align 6; .global tohost; tohost: .dword 0; .align 6; .global fromhost; fromhost: .dword 0; .popsection; .align 4; .global begin_regstate; begin_regstate: .dword 0; .dword 0; .dword 0; .align 4; .global begin_signature; begin_signature:
test_res:
    .fill 32, 4, -1
.align 4; .global end_signature; end_signature:
# 8 "/home/oleg/riscv-compliance/riscv-test-suite/rv32mi/src/breakpoint.S" 2
