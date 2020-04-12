# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32uc/src/rvc.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32uc/src/rvc.S"
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
# 4 "/home/oleg/riscv-compliance/riscv-test-suite/rv32uc/src/rvc.S" 2



# 1 "/home/oleg/riscv-compliance/riscv-test-suite/rv32uc/src/../rv64uc/rvc.S" 1
# See LICENSE for license details.

#*****************************************************************************
# rvc.S
#-----------------------------------------------------------------------------

# Test RVC corner cases.



# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_test.h" 1
# 12 "/home/oleg/riscv-compliance/riscv-test-suite/rv32uc/src/../rv64uc/rvc.S" 2
# 1 "/home/oleg/scr1/sim/tests/riscv_compliance/compliance_io.h" 1
# 13 "/home/oleg/riscv-compliance/riscv-test-suite/rv32uc/src/../rv64uc/rvc.S" 2
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
# 14 "/home/oleg/riscv-compliance/riscv-test-suite/rv32uc/src/../rv64uc/rvc.S" 2


.macro init; .endm
.section .text.init; .org 0xC0, 0x00; .align 6; .weak stvec_handler; .weak mtvec_handler; trap_vector: csrr a4, mcause; li a5, 0x8; beq a4, a5, _report; li a5, 0x9; beq a4, a5, _report; li a5, 0xb; beq a4, a5, _report; la a4, mtvec_handler; beqz a4, 1f; jr a4; 1: csrr a4, mcause; bgez a4, handle_exception; j other_exception; handle_exception: other_exception: li a0, 0x1; _report: j sc_exit; .align 6; .globl _start; _start: csrr a0, mhartid; 1: bnez a0, 1b; ; li gp, 0; la t0, trap_vector; csrw mtvec, t0; li a0, 1; slli a0, a0, 31; bltz a0, 1f; fence; mv a1, gp; li a0, 0x0; ecall; 1: srli a0, a0, 31; la t0, begin_signature; sw a0, 0(t0); la t0, stvec_handler; beqz t0, 1f; csrw stvec, t0; li t0, (1 << 0xd) | (1 << 0xf) | (1 << 0xc) | (1 << 0x0) | (1 << 0x8) | (1 << 0x3); csrw medeleg, t0; csrr t1, medeleg; bne t0, t1, other_exception; 1: csrwi mstatus, 0; init; ; ; la t0, _run_test; csrw mepc, t0; csrr a0, mhartid; mret; .section .text; _run_test:

  .align 2
  .option push
  .option norvc





  li gp, 2
  li a1, 666
  test_2: j 1f; .align 3; data: .dword 0xfedcba9876543210; .dword 0xfedcba9876543210; .align 12; .skip 4094; 1: addi a1, a1, 1; li x29, ((667) & ((1 << (32 - 1) << 1) - 1)); li gp, 2; la x28, test_res; sw a1, (2<<2)(x28);; bne a1, x29, fail;
# 39 "/home/oleg/riscv-compliance/riscv-test-suite/rv32uc/src/../rv64uc/rvc.S"
  li sp, 0x1234
  test_3: .option push; .option rvc; c.addi4spn a0, sp, 1020; .align 2; .option pop; li x29, ((0x1234 + 1020) & ((1 << (32 - 1) << 1) - 1)); li gp, 3; la x28, test_res; sw a0, (3<<2)(x28);; bne a0, x29, fail;
  test_4: .option push; .option rvc; c.addi16sp sp, 496; .align 2; .option pop; li x29, ((0x1234 + 496) & ((1 << (32 - 1) << 1) - 1)); li gp, 4; la x28, test_res; sw sp, (4<<2)(x28);; bne sp, x29, fail;
  test_5: .option push; .option rvc; c.addi16sp sp, -512; .align 2; .option pop; li x29, ((0x1234 + 496 - 512) & ((1 << (32 - 1) << 1) - 1)); li gp, 5; la x28, test_res; sw sp, (5<<2)(x28);; bne sp, x29, fail;

  la a1, data
  test_6: .option push; .option rvc; c.lw a0, 4(a1); addi a0, a0, 1; c.sw a0, 4(a1); c.lw a2, 4(a1); .align 2; .option pop; li x29, ((0xfffffffffedcba99) & ((1 << (32 - 1) << 1) - 1)); li gp, 6; la x28, test_res; sw a2, (6<<2)(x28);; bne a2, x29, fail;




  test_8: .option push; .option rvc; ori a0, x0, 1; c.addi a0, -16; .align 2; .option pop; li x29, ((-15) & ((1 << (32 - 1) << 1) - 1)); li gp, 8; la x28, test_res; sw a0, (8<<2)(x28);; bne a0, x29, fail;
  test_9: .option push; .option rvc; ori a5, x0, 1; c.li a5, -16; .align 2; .option pop; li x29, ((-16) & ((1 << (32 - 1) << 1) - 1)); li gp, 9; la x28, test_res; sw a5, (9<<2)(x28);; bne a5, x29, fail;




  test_11: .option push; .option rvc; c.lui s0, 0xfffe1; c.srai s0, 12; .align 2; .option pop; li x29, ((0xffffffffffffffe1) & ((1 << (32 - 1) << 1) - 1)); li gp, 11; la x28, test_res; sw s0, (11<<2)(x28);; bne s0, x29, fail;



  test_12: .option push; .option rvc; c.lui s0, 0xfffe1; c.srli s0, 12; .align 2; .option pop; li x29, ((0x000fffe1) & ((1 << (32 - 1) << 1) - 1)); li gp, 12; la x28, test_res; sw s0, (12<<2)(x28);; bne s0, x29, fail;

  test_14: .option push; .option rvc; c.li s0, -2; c.andi s0, ~0x10; .align 2; .option pop; li x29, ((~0x11) & ((1 << (32 - 1) << 1) - 1)); li gp, 14; la x28, test_res; sw s0, (14<<2)(x28);; bne s0, x29, fail;
  test_15: .option push; .option rvc; li s1, 20; li a0, 6; c.sub s1, a0; .align 2; .option pop; li x29, ((14) & ((1 << (32 - 1) << 1) - 1)); li gp, 15; la x28, test_res; sw s1, (15<<2)(x28);; bne s1, x29, fail;
  test_16: .option push; .option rvc; li s1, 20; li a0, 6; c.xor s1, a0; .align 2; .option pop; li x29, ((18) & ((1 << (32 - 1) << 1) - 1)); li gp, 16; la x28, test_res; sw s1, (16<<2)(x28);; bne s1, x29, fail;
  test_17: .option push; .option rvc; li s1, 20; li a0, 6; c.or s1, a0; .align 2; .option pop; li x29, ((22) & ((1 << (32 - 1) << 1) - 1)); li gp, 17; la x28, test_res; sw s1, (17<<2)(x28);; bne s1, x29, fail;
  test_18: .option push; .option rvc; li s1, 20; li a0, 6; c.and s1, a0; .align 2; .option pop; li x29, ((4) & ((1 << (32 - 1) << 1) - 1)); li gp, 18; la x28, test_res; sw s1, (18<<2)(x28);; bne s1, x29, fail;




  test_21: .option push; .option rvc; li s0, 0x1234; c.slli s0, 4; .align 2; .option pop; li x29, ((0x12340) & ((1 << (32 - 1) << 1) - 1)); li gp, 21; la x28, test_res; sw s0, (21<<2)(x28);; bne s0, x29, fail;

  test_30: .option push; .option rvc; li ra, 0; c.j 1f; c.j 2f; 1:c.j 1f; 2:j fail; 1:; .align 2; .option pop; li x29, ((0) & ((1 << (32 - 1) << 1) - 1)); li gp, 30; la x28, test_res; sw ra, (30<<2)(x28);; bne ra, x29, fail;







  test_31: .option push; .option rvc; li a0, 0; c.beqz a0, 1f; c.j 2f; 1:c.j 1f; 2:j fail; 1:; .align 2; .option pop; li x29, ((0) & ((1 << (32 - 1) << 1) - 1)); li gp, 31; la x28, test_res; sw x0, (31<<2)(x28);; bne x0, x29, fail;







  test_32: .option push; .option rvc; li a0, 1; c.bnez a0, 1f; c.j 2f; 1:c.j 1f; 2:j fail; 1:; .align 2; .option pop; li x29, ((0) & ((1 << (32 - 1) << 1) - 1)); li gp, 32; la x28, test_res; sw x0, (32<<2)(x28);; bne x0, x29, fail;







  test_33: .option push; .option rvc; li a0, 1; c.beqz a0, 1f; c.j 2f; 1:c.j fail; 2:; .align 2; .option pop; li x29, ((0) & ((1 << (32 - 1) << 1) - 1)); li gp, 33; la x28, test_res; sw x0, (33<<2)(x28);; bne x0, x29, fail;






  test_34: .option push; .option rvc; li a0, 0; c.bnez a0, 1f; c.j 2f; 1:c.j fail; 2:; .align 2; .option pop; li x29, ((0) & ((1 << (32 - 1) << 1) - 1)); li gp, 34; la x28, test_res; sw x0, (34<<2)(x28);; bne x0, x29, fail;






  test_35: .option push; .option rvc; la t0, 1f; li ra, 0; c.jr t0; c.j 2f; 1:c.j 1f; 2:j fail; 1:; .align 2; .option pop; li x29, ((0) & ((1 << (32 - 1) << 1) - 1)); li gp, 35; la x28, test_res; sw ra, (35<<2)(x28);; bne ra, x29, fail;
# 120 "/home/oleg/riscv-compliance/riscv-test-suite/rv32uc/src/../rv64uc/rvc.S"
  test_36: .option push; .option rvc; la t0, 1f; li ra, 0; c.jalr t0; c.j 2f; 1:c.j 1f; 2:j fail; 1:sub ra, ra, t0; .align 2; .option pop; li x29, ((-2) & ((1 << (32 - 1) << 1) - 1)); li gp, 36; la x28, test_res; sw ra, (36<<2)(x28);; bne ra, x29, fail;
# 130 "/home/oleg/riscv-compliance/riscv-test-suite/rv32uc/src/../rv64uc/rvc.S"
  test_37: .option push; .option rvc; la t0, 1f; li ra, 0; c.jal 1f; c.j 2f; 1:c.j 1f; 2:j fail; 1:sub ra, ra, t0; .align 2; .option pop; li x29, ((-2) & ((1 << (32 - 1) << 1) - 1)); li gp, 37; la x28, test_res; sw ra, (37<<2)(x28);; bne ra, x29, fail;
# 140 "/home/oleg/riscv-compliance/riscv-test-suite/rv32uc/src/../rv64uc/rvc.S"
  la sp, data
  test_40: .option push; .option rvc; c.lwsp a0, 12(sp); addi a0, a0, 1; c.swsp a0, 12(sp); c.lwsp a2, 12(sp); .align 2; .option pop; li x29, ((0xfffffffffedcba99) & ((1 << (32 - 1) << 1) - 1)); li gp, 40; la x28, test_res; sw a2, (40<<2)(x28);; bne a2, x29, fail;




  test_42: .option push; .option rvc; li a0, 0x123; c.mv t0, a0; c.add t0, a0; .align 2; .option pop; li x29, ((0x246) & ((1 << (32 - 1) << 1) - 1)); li gp, 42; la x28, test_res; sw t0, (42<<2)(x28);; bne t0, x29, fail;

  .option pop

  bne x0, gp, pass; fail: fence; mv a1, gp; li a0, 0x1; ecall; pass: fence; mv a1, gp; li a0, 0x0; ecall

ecall: ecall

  .data
 .pushsection .tohost,"aw",@progbits; .align 6; .global tohost; tohost: .dword 0; .align 6; .global fromhost; fromhost: .dword 0; .popsection; .align 4; .global begin_regstate; begin_regstate: .dword 0; .dword 0; .dword 0; .align 4; .global begin_signature; begin_signature:
test_res:
    .fill 48, 4, -1
.align 4; .global end_signature; end_signature:
# 7 "/home/oleg/riscv-compliance/riscv-test-suite/rv32uc/src/rvc.S" 2
