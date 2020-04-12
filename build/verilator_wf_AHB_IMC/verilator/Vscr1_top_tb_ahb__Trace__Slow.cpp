// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vscr1_top_tb_ahb__Syms.h"


//======================

void Vscr1_top_tb_ahb::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vscr1_top_tb_ahb::traceInit, &Vscr1_top_tb_ahb::traceFull, &Vscr1_top_tb_ahb::traceChg, this);
}
void Vscr1_top_tb_ahb::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vscr1_top_tb_ahb* t = (Vscr1_top_tb_ahb*)userthis;
    Vscr1_top_tb_ahb__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vscr1_top_tb_ahb::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vscr1_top_tb_ahb* t = (Vscr1_top_tb_ahb*)userthis;
    Vscr1_top_tb_ahb__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vscr1_top_tb_ahb::traceInitThis(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (false && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vscr1_top_tb_ahb::traceFullThis(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (false && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = VL_ULL(0);
}

void Vscr1_top_tb_ahb::traceInitThis__1(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (false && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1076,"clk", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb clk", false,-1);
        vcdp->declBus(c+1077,"scr1_top_tb_ahb SCR1_MEM_SIZE", false,-1, 31,0);
        vcdp->declBus(c+1078,"scr1_top_tb_ahb SCR1_EXIT_ADDR", false,-1, 31,0);
        vcdp->declBit(c+143,"scr1_top_tb_ahb rst_n", false,-1);
        vcdp->declBit(c+1,"scr1_top_tb_ahb rtc_clk", false,-1);
        vcdp->declBus(c+1045,"scr1_top_tb_ahb irq_lines", false,-1, 15,0);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb soft_irq", false,-1);
        vcdp->declBus(c+2,"scr1_top_tb_ahb fuse_mhartid", false,-1, 31,0);
        vcdp->declBus(c+3,"scr1_top_tb_ahb imem_req_ack_stall", false,-1, 31,0);
        vcdp->declBus(c+4,"scr1_top_tb_ahb dmem_req_ack_stall", false,-1, 31,0);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb test_mode", false,-1);
        vcdp->declBit(c+5,"scr1_top_tb_ahb trst_n", false,-1);
        vcdp->declBit(c+6,"scr1_top_tb_ahb tck", false,-1);
        vcdp->declBit(c+7,"scr1_top_tb_ahb tms", false,-1);
        vcdp->declBit(c+8,"scr1_top_tb_ahb tdi", false,-1);
        vcdp->declBit(c+605,"scr1_top_tb_ahb tdo", false,-1);
        vcdp->declBit(c+606,"scr1_top_tb_ahb tdo_en", false,-1);
        vcdp->declBus(c+9,"scr1_top_tb_ahb imem_hprot", false,-1, 3,0);
        vcdp->declBus(c+1080,"scr1_top_tb_ahb imem_hburst", false,-1, 2,0);
        vcdp->declBus(c+1081,"scr1_top_tb_ahb imem_hsize", false,-1, 2,0);
        vcdp->declBus(c+185,"scr1_top_tb_ahb imem_htrans", false,-1, 1,0);
        vcdp->declBus(c+186,"scr1_top_tb_ahb imem_haddr", false,-1, 31,0);
        vcdp->declBit(c+129,"scr1_top_tb_ahb imem_hready", false,-1);
        vcdp->declBus(c+130,"scr1_top_tb_ahb imem_hrdata", false,-1, 31,0);
        vcdp->declBit(c+131,"scr1_top_tb_ahb imem_hresp", false,-1);
        vcdp->declBus(c+10,"scr1_top_tb_ahb dmem_hprot", false,-1, 3,0);
        vcdp->declBus(c+1080,"scr1_top_tb_ahb dmem_hburst", false,-1, 2,0);
        vcdp->declBus(c+187,"scr1_top_tb_ahb dmem_hsize", false,-1, 2,0);
        vcdp->declBus(c+188,"scr1_top_tb_ahb dmem_htrans", false,-1, 1,0);
        vcdp->declBus(c+189,"scr1_top_tb_ahb dmem_haddr", false,-1, 31,0);
        vcdp->declBit(c+190,"scr1_top_tb_ahb dmem_hwrite", false,-1);
        vcdp->declBus(c+1057,"scr1_top_tb_ahb dmem_hwdata", false,-1, 31,0);
        vcdp->declBit(c+483,"scr1_top_tb_ahb dmem_hready", false,-1);
        vcdp->declBus(c+484,"scr1_top_tb_ahb dmem_hrdata", false,-1, 31,0);
        vcdp->declBit(c+485,"scr1_top_tb_ahb dmem_hresp", false,-1);
        vcdp->declBus(c+14,"scr1_top_tb_ahb f_results", false,-1, 31,0);
        vcdp->declBus(c+15,"scr1_top_tb_ahb f_info", false,-1, 31,0);
        vcdp->declArray(c+621,"scr1_top_tb_ahb test_file", false,-1, 255,0);
        vcdp->declBit(c+629,"scr1_top_tb_ahb test_running", false,-1);
        vcdp->declBus(c+630,"scr1_top_tb_ahb tests_passed", false,-1, 31,0);
        vcdp->declBus(c+631,"scr1_top_tb_ahb tests_total", false,-1, 31,0);
        vcdp->declBus(c+632,"scr1_top_tb_ahb rst_cnt", false,-1, 1,0);
        vcdp->declBit(c+633,"scr1_top_tb_ahb rst_init", false,-1);
        vcdp->declArray(c+634,"scr1_top_tb_ahb unnamedblk3 full_filename", false,-1, 255,0);
        vcdp->declBit(c+642,"scr1_top_tb_ahb unnamedblk3 unnamedblk4 test_pass", false,-1);
        vcdp->declBus(c+643,"scr1_top_tb_ahb unnamedblk3 unnamedblk4 tmpv", false,-1, 31,0);
        vcdp->declBus(c+644,"scr1_top_tb_ahb unnamedblk3 unnamedblk4 start", false,-1, 31,0);
        vcdp->declBus(c+645,"scr1_top_tb_ahb unnamedblk3 unnamedblk4 stop", false,-1, 31,0);
        vcdp->declBus(c+646,"scr1_top_tb_ahb unnamedblk3 unnamedblk4 ref_data", false,-1, 31,0);
        vcdp->declBus(c+647,"scr1_top_tb_ahb unnamedblk3 unnamedblk4 test_data", false,-1, 31,0);
        vcdp->declBus(c+648,"scr1_top_tb_ahb unnamedblk3 unnamedblk4 fd", false,-1, 31,0);
        vcdp->declArray(c+649,"scr1_top_tb_ahb unnamedblk3 unnamedblk4 tmpstr", false,-1, 2047,0);
        vcdp->declBit(c+713,"scr1_top_tb_ahb unnamedblk3 unnamedblk5 test_pass", false,-1);
        vcdp->declBit(c+143,"scr1_top_tb_ahb i_top pwrup_rst_n", false,-1);
        vcdp->declBit(c+143,"scr1_top_tb_ahb i_top rst_n", false,-1);
        vcdp->declBit(c+143,"scr1_top_tb_ahb i_top cpu_rst_n", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top test_mode", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top test_rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top clk", false,-1);
        vcdp->declBit(c+1,"scr1_top_tb_ahb i_top rtc_clk", false,-1);
        vcdp->declBit(c+846,"scr1_top_tb_ahb i_top ndm_rst_n_out", false,-1);
        vcdp->declBus(c+2,"scr1_top_tb_ahb i_top fuse_mhartid", false,-1, 31,0);
        vcdp->declBus(c+1083,"scr1_top_tb_ahb i_top fuse_idcode", false,-1, 31,0);
        vcdp->declBus(c+1045,"scr1_top_tb_ahb i_top irq_lines", false,-1, 15,0);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top soft_irq", false,-1);
        vcdp->declBit(c+5,"scr1_top_tb_ahb i_top trst_n", false,-1);
        vcdp->declBit(c+6,"scr1_top_tb_ahb i_top tck", false,-1);
        vcdp->declBit(c+7,"scr1_top_tb_ahb i_top tms", false,-1);
        vcdp->declBit(c+8,"scr1_top_tb_ahb i_top tdi", false,-1);
        vcdp->declBit(c+605,"scr1_top_tb_ahb i_top tdo", false,-1);
        vcdp->declBit(c+606,"scr1_top_tb_ahb i_top tdo_en", false,-1);
        vcdp->declBus(c+9,"scr1_top_tb_ahb i_top imem_hprot", false,-1, 3,0);
        vcdp->declBus(c+1080,"scr1_top_tb_ahb i_top imem_hburst", false,-1, 2,0);
        vcdp->declBus(c+1081,"scr1_top_tb_ahb i_top imem_hsize", false,-1, 2,0);
        vcdp->declBus(c+185,"scr1_top_tb_ahb i_top imem_htrans", false,-1, 1,0);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top imem_hmastlock", false,-1);
        vcdp->declBus(c+186,"scr1_top_tb_ahb i_top imem_haddr", false,-1, 31,0);
        vcdp->declBit(c+129,"scr1_top_tb_ahb i_top imem_hready", false,-1);
        vcdp->declBus(c+130,"scr1_top_tb_ahb i_top imem_hrdata", false,-1, 31,0);
        vcdp->declBit(c+131,"scr1_top_tb_ahb i_top imem_hresp", false,-1);
        vcdp->declBus(c+10,"scr1_top_tb_ahb i_top dmem_hprot", false,-1, 3,0);
        vcdp->declBus(c+1080,"scr1_top_tb_ahb i_top dmem_hburst", false,-1, 2,0);
        vcdp->declBus(c+187,"scr1_top_tb_ahb i_top dmem_hsize", false,-1, 2,0);
        vcdp->declBus(c+188,"scr1_top_tb_ahb i_top dmem_htrans", false,-1, 1,0);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top dmem_hmastlock", false,-1);
        vcdp->declBus(c+189,"scr1_top_tb_ahb i_top dmem_haddr", false,-1, 31,0);
        vcdp->declBit(c+190,"scr1_top_tb_ahb i_top dmem_hwrite", false,-1);
        vcdp->declBus(c+1057,"scr1_top_tb_ahb i_top dmem_hwdata", false,-1, 31,0);
        vcdp->declBit(c+483,"scr1_top_tb_ahb i_top dmem_hready", false,-1);
        vcdp->declBus(c+484,"scr1_top_tb_ahb i_top dmem_hrdata", false,-1, 31,0);
        vcdp->declBit(c+485,"scr1_top_tb_ahb i_top dmem_hresp", false,-1);
        vcdp->declBit(c+764,"scr1_top_tb_ahb i_top pwrup_rst_n_sync", false,-1);
        vcdp->declBit(c+765,"scr1_top_tb_ahb i_top rst_n_sync", false,-1);
        vcdp->declBit(c+766,"scr1_top_tb_ahb i_top cpu_rst_n_sync", false,-1);
        vcdp->declBit(c+20,"scr1_top_tb_ahb i_top reset_n_sync", false,-1);
        vcdp->declBit(c+619,"scr1_top_tb_ahb i_top reset_n", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top core_rst_n_local", false,-1);
        vcdp->declBit(c+191,"scr1_top_tb_ahb i_top core_imem_req_ack", false,-1);
        vcdp->declBit(c+192,"scr1_top_tb_ahb i_top core_imem_req", false,-1);
        vcdp->declBit(c+1084,"scr1_top_tb_ahb i_top core_imem_cmd", false,-1);
        vcdp->declBus(c+193,"scr1_top_tb_ahb i_top core_imem_addr", false,-1, 31,0);
        vcdp->declBus(c+144,"scr1_top_tb_ahb i_top core_imem_rdata", false,-1, 31,0);
        vcdp->declBus(c+145,"scr1_top_tb_ahb i_top core_imem_resp", false,-1, 1,0);
        vcdp->declBit(c+194,"scr1_top_tb_ahb i_top core_dmem_req_ack", false,-1);
        vcdp->declBit(c+195,"scr1_top_tb_ahb i_top core_dmem_req", false,-1);
        vcdp->declBit(c+492,"scr1_top_tb_ahb i_top core_dmem_cmd", false,-1);
        vcdp->declBus(c+493,"scr1_top_tb_ahb i_top core_dmem_width", false,-1, 1,0);
        vcdp->declBus(c+196,"scr1_top_tb_ahb i_top core_dmem_addr", false,-1, 31,0);
        vcdp->declBus(c+197,"scr1_top_tb_ahb i_top core_dmem_wdata", false,-1, 31,0);
        vcdp->declBus(c+559,"scr1_top_tb_ahb i_top core_dmem_rdata", false,-1, 31,0);
        vcdp->declBus(c+560,"scr1_top_tb_ahb i_top core_dmem_resp", false,-1, 1,0);
        vcdp->declBit(c+865,"scr1_top_tb_ahb i_top ahb_imem_req_ack", false,-1);
        vcdp->declBit(c+198,"scr1_top_tb_ahb i_top ahb_imem_req", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top ahb_imem_cmd", false,-1);
        vcdp->declBus(c+199,"scr1_top_tb_ahb i_top ahb_imem_addr", false,-1, 31,0);
        vcdp->declBus(c+132,"scr1_top_tb_ahb i_top ahb_imem_rdata", false,-1, 31,0);
        vcdp->declBus(c+80,"scr1_top_tb_ahb i_top ahb_imem_resp", false,-1, 1,0);
        vcdp->declBit(c+866,"scr1_top_tb_ahb i_top ahb_dmem_req_ack", false,-1);
        vcdp->declBit(c+200,"scr1_top_tb_ahb i_top ahb_dmem_req", false,-1);
        vcdp->declBit(c+201,"scr1_top_tb_ahb i_top ahb_dmem_cmd", false,-1);
        vcdp->declBus(c+202,"scr1_top_tb_ahb i_top ahb_dmem_width", false,-1, 1,0);
        vcdp->declBus(c+203,"scr1_top_tb_ahb i_top ahb_dmem_addr", false,-1, 31,0);
        vcdp->declBus(c+204,"scr1_top_tb_ahb i_top ahb_dmem_wdata", false,-1, 31,0);
        vcdp->declBus(c+486,"scr1_top_tb_ahb i_top ahb_dmem_rdata", false,-1, 31,0);
        vcdp->declBus(c+154,"scr1_top_tb_ahb i_top ahb_dmem_resp", false,-1, 1,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top tcm_imem_req_ack", false,-1);
        vcdp->declBit(c+205,"scr1_top_tb_ahb i_top tcm_imem_req", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top tcm_imem_cmd", false,-1);
        vcdp->declBus(c+206,"scr1_top_tb_ahb i_top tcm_imem_addr", false,-1, 31,0);
        vcdp->declBus(c+714,"scr1_top_tb_ahb i_top tcm_imem_rdata", false,-1, 31,0);
        vcdp->declBus(c+867,"scr1_top_tb_ahb i_top tcm_imem_resp", false,-1, 1,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top tcm_dmem_req_ack", false,-1);
        vcdp->declBit(c+207,"scr1_top_tb_ahb i_top tcm_dmem_req", false,-1);
        vcdp->declBit(c+208,"scr1_top_tb_ahb i_top tcm_dmem_cmd", false,-1);
        vcdp->declBus(c+209,"scr1_top_tb_ahb i_top tcm_dmem_width", false,-1, 1,0);
        vcdp->declBus(c+210,"scr1_top_tb_ahb i_top tcm_dmem_addr", false,-1, 31,0);
        vcdp->declBus(c+211,"scr1_top_tb_ahb i_top tcm_dmem_wdata", false,-1, 31,0);
        vcdp->declBus(c+715,"scr1_top_tb_ahb i_top tcm_dmem_rdata", false,-1, 31,0);
        vcdp->declBus(c+868,"scr1_top_tb_ahb i_top tcm_dmem_resp", false,-1, 1,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top timer_dmem_req_ack", false,-1);
        vcdp->declBit(c+212,"scr1_top_tb_ahb i_top timer_dmem_req", false,-1);
        vcdp->declBit(c+213,"scr1_top_tb_ahb i_top timer_dmem_cmd", false,-1);
        vcdp->declBus(c+473,"scr1_top_tb_ahb i_top timer_dmem_width", false,-1, 1,0);
        vcdp->declBus(c+214,"scr1_top_tb_ahb i_top timer_dmem_addr", false,-1, 31,0);
        vcdp->declBus(c+215,"scr1_top_tb_ahb i_top timer_dmem_wdata", false,-1, 31,0);
        vcdp->declBus(c+869,"scr1_top_tb_ahb i_top timer_dmem_rdata", false,-1, 31,0);
        vcdp->declBus(c+870,"scr1_top_tb_ahb i_top timer_dmem_resp", false,-1, 1,0);
        vcdp->declBit(c+871,"scr1_top_tb_ahb i_top timer_irq", false,-1);
        vcdp->declQuad(c+872,"scr1_top_tb_ahb i_top timer_val", false,-1, 63,0);
        vcdp->declBit(c+143,"scr1_top_tb_ahb i_top i_pwrup_rstn_reset_sync rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_pwrup_rstn_reset_sync clk", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_pwrup_rstn_reset_sync test_rst_n", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_pwrup_rstn_reset_sync test_mode", false,-1);
        vcdp->declBit(c+764,"scr1_top_tb_ahb i_top i_pwrup_rstn_reset_sync rst_n_out", false,-1);
        vcdp->declBus(c+767,"scr1_top_tb_ahb i_top i_pwrup_rstn_reset_sync rst_n_dff", false,-1, 1,0);
        vcdp->declBit(c+143,"scr1_top_tb_ahb i_top i_pwrup_rstn_reset_sync local_rst_n_in", false,-1);
        vcdp->declBit(c+143,"scr1_top_tb_ahb i_top i_rstn_reset_sync rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_rstn_reset_sync clk", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_rstn_reset_sync test_rst_n", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_rstn_reset_sync test_mode", false,-1);
        vcdp->declBit(c+765,"scr1_top_tb_ahb i_top i_rstn_reset_sync rst_n_out", false,-1);
        vcdp->declBus(c+768,"scr1_top_tb_ahb i_top i_rstn_reset_sync rst_n_dff", false,-1, 1,0);
        vcdp->declBit(c+143,"scr1_top_tb_ahb i_top i_rstn_reset_sync local_rst_n_in", false,-1);
        vcdp->declBit(c+143,"scr1_top_tb_ahb i_top i_cpu_rstn_reset_sync rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_cpu_rstn_reset_sync clk", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_cpu_rstn_reset_sync test_rst_n", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_cpu_rstn_reset_sync test_mode", false,-1);
        vcdp->declBit(c+766,"scr1_top_tb_ahb i_top i_cpu_rstn_reset_sync rst_n_out", false,-1);
        vcdp->declBus(c+769,"scr1_top_tb_ahb i_top i_cpu_rstn_reset_sync rst_n_dff", false,-1, 1,0);
        vcdp->declBit(c+143,"scr1_top_tb_ahb i_top i_cpu_rstn_reset_sync local_rst_n_in", false,-1);
        vcdp->declBit(c+20,"scr1_top_tb_ahb i_top i_reset_buf_cell rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_reset_buf_cell clk", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_reset_buf_cell test_mode", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_reset_buf_cell test_rst_n", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_reset_buf_cell reset_n_in", false,-1);
        vcdp->declBit(c+619,"scr1_top_tb_ahb i_top i_reset_buf_cell reset_n_out", false,-1);
        vcdp->declBit(c+620,"scr1_top_tb_ahb i_top i_reset_buf_cell reset_n_status", false,-1);
        vcdp->declBit(c+619,"scr1_top_tb_ahb i_top i_reset_buf_cell reset_n_ff", false,-1);
        vcdp->declBit(c+620,"scr1_top_tb_ahb i_top i_reset_buf_cell reset_n_status_ff", false,-1);
        vcdp->declBit(c+20,"scr1_top_tb_ahb i_top i_reset_buf_cell rst_n_mux", false,-1);
        vcdp->declBit(c+1085,"scr1_top_tb_ahb i_top i_core_top SCR1_RESET_INPUTS_SYNC", false,-1);
        vcdp->declBit(c+764,"scr1_top_tb_ahb i_top i_core_top pwrup_rst_n", false,-1);
        vcdp->declBit(c+765,"scr1_top_tb_ahb i_top i_core_top rst_n", false,-1);
        vcdp->declBit(c+766,"scr1_top_tb_ahb i_top i_core_top cpu_rst_n", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top test_mode", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top test_rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top clk", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top core_rst_n_out", false,-1);
        vcdp->declBit(c+846,"scr1_top_tb_ahb i_top i_core_top ndm_rst_n_out", false,-1);
        vcdp->declBus(c+2,"scr1_top_tb_ahb i_top i_core_top fuse_mhartid", false,-1, 31,0);
        vcdp->declBus(c+1083,"scr1_top_tb_ahb i_top i_core_top fuse_idcode", false,-1, 31,0);
        vcdp->declBus(c+1045,"scr1_top_tb_ahb i_top i_core_top irq_lines", false,-1, 15,0);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top soft_irq", false,-1);
        vcdp->declBit(c+871,"scr1_top_tb_ahb i_top i_core_top timer_irq", false,-1);
        vcdp->declQuad(c+872,"scr1_top_tb_ahb i_top i_core_top mtime_ext", false,-1, 63,0);
        vcdp->declBit(c+5,"scr1_top_tb_ahb i_top i_core_top trst_n", false,-1);
        vcdp->declBit(c+6,"scr1_top_tb_ahb i_top i_core_top tck", false,-1);
        vcdp->declBit(c+7,"scr1_top_tb_ahb i_top i_core_top tms", false,-1);
        vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top tdi", false,-1);
        vcdp->declBit(c+605,"scr1_top_tb_ahb i_top i_core_top tdo", false,-1);
        vcdp->declBit(c+606,"scr1_top_tb_ahb i_top i_core_top tdo_en", false,-1);
        vcdp->declBit(c+191,"scr1_top_tb_ahb i_top i_core_top imem_req_ack", false,-1);
        vcdp->declBit(c+192,"scr1_top_tb_ahb i_top i_core_top imem_req", false,-1);
        vcdp->declBit(c+1084,"scr1_top_tb_ahb i_top i_core_top imem_cmd", false,-1);
        vcdp->declBus(c+193,"scr1_top_tb_ahb i_top i_core_top imem_addr", false,-1, 31,0);
        vcdp->declBus(c+144,"scr1_top_tb_ahb i_top i_core_top imem_rdata", false,-1, 31,0);
        vcdp->declBus(c+145,"scr1_top_tb_ahb i_top i_core_top imem_resp", false,-1, 1,0);
        vcdp->declBit(c+194,"scr1_top_tb_ahb i_top i_core_top dmem_req_ack", false,-1);
        vcdp->declBit(c+195,"scr1_top_tb_ahb i_top i_core_top dmem_req", false,-1);
        vcdp->declBit(c+492,"scr1_top_tb_ahb i_top i_core_top dmem_cmd", false,-1);
        vcdp->declBus(c+493,"scr1_top_tb_ahb i_top i_core_top dmem_width", false,-1, 1,0);
        vcdp->declBus(c+196,"scr1_top_tb_ahb i_top i_core_top dmem_addr", false,-1, 31,0);
        vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top dmem_wdata", false,-1, 31,0);
        vcdp->declBus(c+559,"scr1_top_tb_ahb i_top i_core_top dmem_rdata", false,-1, 31,0);
        vcdp->declBus(c+560,"scr1_top_tb_ahb i_top i_core_top dmem_resp", false,-1, 1,0);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top core_rst_n", false,-1);
        vcdp->declBit(c+564,"scr1_top_tb_ahb i_top i_core_top core_rst_n_qlfy", false,-1);
        vcdp->declBit(c+566,"scr1_top_tb_ahb i_top i_core_top pwrup_rst_n_sync", false,-1);
        vcdp->declBit(c+1086,"scr1_top_tb_ahb i_top i_core_top rst_n_sync", false,-1);
        vcdp->declBit(c+1087,"scr1_top_tb_ahb i_top i_core_top cpu_rst_n_sync", false,-1);
        vcdp->declBit(c+847,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_sel", false,-1);
        vcdp->declBus(c+848,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_id", false,-1, 1,0);
        vcdp->declBit(c+1028,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_capture", false,-1);
        vcdp->declBit(c+1029,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_shift", false,-1);
        vcdp->declBit(c+781,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_update", false,-1);
        vcdp->declBit(c+782,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_tdi", false,-1);
        vcdp->declBit(c+849,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_tdo", false,-1);
        vcdp->declBit(c+119,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_sel_tapout", false,-1);
        vcdp->declBus(c+120,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_id_tapout", false,-1, 1,0);
        vcdp->declBit(c+1024,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_capture_tapout", false,-1);
        vcdp->declBit(c+1025,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_shift_tapout", false,-1);
        vcdp->declBit(c+1026,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_update_tapout", false,-1);
        vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_tdi_tapout", false,-1);
        vcdp->declBit(c+815,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_tdo_tapin", false,-1);
        vcdp->declBit(c+102,"scr1_top_tb_ahb i_top i_core_top dmi_req", false,-1);
        vcdp->declBit(c+157,"scr1_top_tb_ahb i_top i_core_top dmi_wr", false,-1);
        vcdp->declBus(c+103,"scr1_top_tb_ahb i_top i_core_top dmi_addr", false,-1, 6,0);
        vcdp->declBus(c+158,"scr1_top_tb_ahb i_top i_core_top dmi_wdata", false,-1, 31,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top dmi_resp", false,-1);
        vcdp->declBus(c+159,"scr1_top_tb_ahb i_top i_core_top dmi_rdata", false,-1, 31,0);
        vcdp->declBit(c+783,"scr1_top_tb_ahb i_top i_core_top tapc_scu_ch_sel", false,-1);
        vcdp->declBit(c+121,"scr1_top_tb_ahb i_top i_core_top tapc_scu_ch_sel_tapout", false,-1);
        vcdp->declBit(c+784,"scr1_top_tb_ahb i_top i_core_top tapc_scu_ch_tdo", false,-1);
        vcdp->declBit(c+815,"scr1_top_tb_ahb i_top i_core_top tapc_ch_tdo", false,-1);
        vcdp->declBit(c+487,"scr1_top_tb_ahb i_top i_core_top tapc_rst_n", false,-1);
        vcdp->declBit(c+1056,"scr1_top_tb_ahb i_top i_core_top hdu_rst_n", false,-1);
        vcdp->declBit(c+565,"scr1_top_tb_ahb i_top i_core_top hdu_rst_n_qlfy", false,-1);
        vcdp->declBit(c+846,"scr1_top_tb_ahb i_top i_core_top ndm_rst_n", false,-1);
        vcdp->declBit(c+1067,"scr1_top_tb_ahb i_top i_core_top dm_rst_n", false,-1);
        vcdp->declBit(c+846,"scr1_top_tb_ahb i_top i_core_top hart_rst_n", false,-1);
        vcdp->declBit(c+1054,"scr1_top_tb_ahb i_top i_core_top dm_active", false,-1);
        vcdp->declBit(c+850,"scr1_top_tb_ahb i_top i_core_top dm_cmd_req", false,-1);
        vcdp->declBus(c+851,"scr1_top_tb_ahb i_top i_core_top dm_cmd", false,-1, 1,0);
        vcdp->declBit(c+596,"scr1_top_tb_ahb i_top i_core_top dm_cmd_resp", false,-1);
        vcdp->declBit(c+597,"scr1_top_tb_ahb i_top i_core_top dm_cmd_resp_qlfy", false,-1);
        vcdp->declBit(c+598,"scr1_top_tb_ahb i_top i_core_top dm_cmd_rcode", false,-1);
        vcdp->declBit(c+599,"scr1_top_tb_ahb i_top i_core_top dm_cmd_rcode_qlfy", false,-1);
        vcdp->declBit(c+819,"scr1_top_tb_ahb i_top i_core_top dm_hart_event", false,-1);
        vcdp->declBit(c+37,"scr1_top_tb_ahb i_top i_core_top dm_hart_event_qlfy", false,-1);
        vcdp->declBit(c+31,"scr1_top_tb_ahb i_top i_core_top dm_hart_status except", false,-1);
        vcdp->declBit(c+32,"scr1_top_tb_ahb i_top i_core_top dm_hart_status ebreak", false,-1);
        vcdp->declBus(c+33,"scr1_top_tb_ahb i_top i_core_top dm_hart_status dbg_state", false,-1, 1,0);
        vcdp->declBit(c+567,"scr1_top_tb_ahb i_top i_core_top dm_hart_status_qlfy except", false,-1);
        vcdp->declBit(c+568,"scr1_top_tb_ahb i_top i_core_top dm_hart_status_qlfy ebreak", false,-1);
        vcdp->declBus(c+569,"scr1_top_tb_ahb i_top i_core_top dm_hart_status_qlfy dbg_state", false,-1, 1,0);
        vcdp->declBus(c+820,"scr1_top_tb_ahb i_top i_core_top dm_pbuf_addr", false,-1, 2,0);
        vcdp->declBus(c+570,"scr1_top_tb_ahb i_top i_core_top dm_pbuf_addr_qlfy", false,-1, 2,0);
        vcdp->declBus(c+571,"scr1_top_tb_ahb i_top i_core_top dm_pbuf_instr", false,-1, 31,0);
        vcdp->declBit(c+216,"scr1_top_tb_ahb i_top i_core_top dm_dreg_req", false,-1);
        vcdp->declBit(c+217,"scr1_top_tb_ahb i_top i_core_top dm_dreg_req_qlfy", false,-1);
        vcdp->declBit(c+218,"scr1_top_tb_ahb i_top i_core_top dm_dreg_wr", false,-1);
        vcdp->declBit(c+219,"scr1_top_tb_ahb i_top i_core_top dm_dreg_wr_qlfy", false,-1);
        vcdp->declBus(c+220,"scr1_top_tb_ahb i_top i_core_top dm_dreg_wdata", false,-1, 31,0);
        vcdp->declBus(c+221,"scr1_top_tb_ahb i_top i_core_top dm_dreg_wdata_qlfy", false,-1, 31,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top dm_dreg_resp", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top dm_dreg_fail", false,-1);
        vcdp->declBus(c+716,"scr1_top_tb_ahb i_top i_core_top dm_dreg_rdata", false,-1, 31,0);
        vcdp->declBus(c+874,"scr1_top_tb_ahb i_top i_core_top dm_pc_sample", false,-1, 31,0);
        vcdp->declBus(c+98,"scr1_top_tb_ahb i_top i_core_top dm_pc_sample_qlfy", false,-1, 31,0);
        vcdp->declBit(c+1085,"scr1_top_tb_ahb i_top i_core_top i_scu SCR1_SCU_CFG_RESET_INPUTS_SYNC", false,-1);
        vcdp->declBit(c+764,"scr1_top_tb_ahb i_top i_core_top i_scu pwrup_rst_n", false,-1);
        vcdp->declBit(c+765,"scr1_top_tb_ahb i_top i_core_top i_scu rst_n", false,-1);
        vcdp->declBit(c+766,"scr1_top_tb_ahb i_top i_core_top i_scu cpu_rst_n", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_scu test_mode", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top i_scu test_rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_scu clk", false,-1);
        vcdp->declBit(c+783,"scr1_top_tb_ahb i_top i_core_top i_scu tapc_ch_sel", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_scu tapc_ch_id", false,-1);
        vcdp->declBit(c+1028,"scr1_top_tb_ahb i_top i_core_top i_scu tapc_ch_capture", false,-1);
        vcdp->declBit(c+1029,"scr1_top_tb_ahb i_top i_core_top i_scu tapc_ch_shift", false,-1);
        vcdp->declBit(c+781,"scr1_top_tb_ahb i_top i_core_top i_scu tapc_ch_update", false,-1);
        vcdp->declBit(c+782,"scr1_top_tb_ahb i_top i_core_top i_scu tapc_ch_tdi", false,-1);
        vcdp->declBit(c+784,"scr1_top_tb_ahb i_top i_core_top i_scu tapc_ch_tdo", false,-1);
        vcdp->declBit(c+846,"scr1_top_tb_ahb i_top i_core_top i_scu ndm_rst_n", false,-1);
        vcdp->declBit(c+846,"scr1_top_tb_ahb i_top i_core_top i_scu hart_rst_n", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top i_scu core_rst_n", false,-1);
        vcdp->declBit(c+564,"scr1_top_tb_ahb i_top i_core_top i_scu core_rst_n_qlfy", false,-1);
        vcdp->declBit(c+1067,"scr1_top_tb_ahb i_top i_core_top i_scu dm_rst_n", false,-1);
        vcdp->declBit(c+1056,"scr1_top_tb_ahb i_top i_core_top i_scu hdu_rst_n", false,-1);
        vcdp->declBit(c+565,"scr1_top_tb_ahb i_top i_core_top i_scu hdu_rst_n_qlfy", false,-1);
        vcdp->declBus(c+1088,"scr1_top_tb_ahb i_top i_core_top i_scu SCR1_SCU_DR_SYSCTRL_OP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1088,"scr1_top_tb_ahb i_top i_core_top i_scu SCR1_SCU_DR_SYSCTRL_ADDR_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1089,"scr1_top_tb_ahb i_top i_core_top i_scu SCR1_SCU_DR_SYSCTRL_DATA_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+785,"scr1_top_tb_ahb i_top i_core_top i_scu shift_reg data", false,-1, 3,0);
        vcdp->declBus(c+786,"scr1_top_tb_ahb i_top i_core_top i_scu shift_reg addr", false,-1, 1,0);
        vcdp->declBus(c+787,"scr1_top_tb_ahb i_top i_core_top i_scu shift_reg op", false,-1, 1,0);
        vcdp->declBus(c+788,"scr1_top_tb_ahb i_top i_core_top i_scu shadow_reg data", false,-1, 3,0);
        vcdp->declBus(c+789,"scr1_top_tb_ahb i_top i_core_top i_scu shadow_reg addr", false,-1, 1,0);
        vcdp->declBus(c+790,"scr1_top_tb_ahb i_top i_core_top i_scu shadow_reg op", false,-1, 1,0);
        vcdp->declBit(c+816,"scr1_top_tb_ahb i_top i_core_top i_scu dr_capture", false,-1);
        vcdp->declBit(c+817,"scr1_top_tb_ahb i_top i_core_top i_scu dr_shift", false,-1);
        vcdp->declBit(c+23,"scr1_top_tb_ahb i_top i_core_top i_scu dr_update", false,-1);
        vcdp->declBus(c+136,"scr1_top_tb_ahb i_top i_core_top i_scu cmd_data", false,-1, 3,0);
        vcdp->declBus(c+137,"scr1_top_tb_ahb i_top i_core_top i_scu reg_data", false,-1, 3,0);
        vcdp->declBus(c+791,"scr1_top_tb_ahb i_top i_core_top i_scu control_reg rsrv", false,-1, 2,0);
        vcdp->declBit(c+792,"scr1_top_tb_ahb i_top i_core_top i_scu control_reg sys_reset", false,-1);
        vcdp->declBit(c+24,"scr1_top_tb_ahb i_top i_core_top i_scu control_reg_wr", false,-1);
        vcdp->declBus(c+793,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg rsrv", false,-1, 1,0);
        vcdp->declBit(c+794,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg hdu_rst_mux", false,-1);
        vcdp->declBit(c+795,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg dm_rst_mux", false,-1);
        vcdp->declBus(c+796,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg_r rsrv", false,-1, 1,0);
        vcdp->declBit(c+797,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg_r hdu_rst_mux", false,-1);
        vcdp->declBit(c+798,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg_r dm_rst_mux", false,-1);
        vcdp->declBit(c+25,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg_wr", false,-1);
        vcdp->declBit(c+799,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg_wr_r", false,-1);
        vcdp->declBit(c+27,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data hdu_reset", false,-1);
        vcdp->declBit(c+28,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data dm_reset", false,-1);
        vcdp->declBit(c+29,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data core_reset", false,-1);
        vcdp->declBit(c+30,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data sys_reset", false,-1);
        vcdp->declBit(c+800,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_dly hdu_reset", false,-1);
        vcdp->declBit(c+801,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_dly dm_reset", false,-1);
        vcdp->declBit(c+802,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_dly core_reset", false,-1);
        vcdp->declBit(c+803,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_dly sys_reset", false,-1);
        vcdp->declBit(c+138,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_posedge hdu_reset", false,-1);
        vcdp->declBit(c+139,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_posedge dm_reset", false,-1);
        vcdp->declBit(c+140,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_posedge core_reset", false,-1);
        vcdp->declBit(c+141,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_posedge sys_reset", false,-1);
        vcdp->declBit(c+804,"scr1_top_tb_ahb i_top i_core_top i_scu sticky_sts_reg hdu_reset", false,-1);
        vcdp->declBit(c+805,"scr1_top_tb_ahb i_top i_core_top i_scu sticky_sts_reg dm_reset", false,-1);
        vcdp->declBit(c+806,"scr1_top_tb_ahb i_top i_core_top i_scu sticky_sts_reg core_reset", false,-1);
        vcdp->declBit(c+807,"scr1_top_tb_ahb i_top i_core_top i_scu sticky_sts_reg sys_reset", false,-1);
        vcdp->declBit(c+26,"scr1_top_tb_ahb i_top i_core_top i_scu sticky_sts_reg_wr", false,-1);
        vcdp->declBit(c+566,"scr1_top_tb_ahb i_top i_core_top i_scu pwrup_rst_n_sync", false,-1);
        vcdp->declBit(c+765,"scr1_top_tb_ahb i_top i_core_top i_scu rst_n_sync", false,-1);
        vcdp->declBit(c+766,"scr1_top_tb_ahb i_top i_core_top i_scu cpu_rst_n_sync", false,-1);
        vcdp->declBit(c+1072,"scr1_top_tb_ahb i_top i_core_top i_scu sys_rst_n", false,-1);
        vcdp->declBit(c+779,"scr1_top_tb_ahb i_top i_core_top i_scu sys_rst_n_sync", false,-1);
        vcdp->declBit(c+1073,"scr1_top_tb_ahb i_top i_core_top i_scu sys_rst_n_qlfy", false,-1);
        vcdp->declBit(c+808,"scr1_top_tb_ahb i_top i_core_top i_scu sys_rst_n_status", false,-1);
        vcdp->declBit(c+222,"scr1_top_tb_ahb i_top i_core_top i_scu dm_rst_n_sync", false,-1);
        vcdp->declBit(c+818,"scr1_top_tb_ahb i_top i_core_top i_scu dm_rst_n_qlfy", false,-1);
        vcdp->declBit(c+617,"scr1_top_tb_ahb i_top i_core_top i_scu dm_rst_n_status", false,-1);
        vcdp->declBit(c+780,"scr1_top_tb_ahb i_top i_core_top i_scu core_rst_n_sync", false,-1);
        vcdp->declBit(c+1069,"scr1_top_tb_ahb i_top i_core_top i_scu core_rst_n_qlfy_sync", false,-1);
        vcdp->declBit(c+864,"scr1_top_tb_ahb i_top i_core_top i_scu core_rst_n_status", false,-1);
        vcdp->declBit(c+223,"scr1_top_tb_ahb i_top i_core_top i_scu hdu_rst_n_sync", false,-1);
        vcdp->declBit(c+618,"scr1_top_tb_ahb i_top i_core_top i_scu hdu_rst_n_status", false,-1);
        vcdp->declBus(c+809,"scr1_top_tb_ahb i_top i_core_top i_scu unnamedblk1 i", false,-1, 31,0);
        vcdp->declBit(c+566,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell clk", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell test_rst_n", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell test_mode", false,-1);
        vcdp->declBit(c+779,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_in", false,-1);
        vcdp->declBit(c+1073,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_out_qlfy", false,-1);
        vcdp->declBit(c+1072,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_out", false,-1);
        vcdp->declBit(c+808,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_status", false,-1);
        vcdp->declBit(c+566,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell rst_n_mux", false,-1);
        vcdp->declBit(c+224,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_in_mux", false,-1);
        vcdp->declBit(c+1075,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_front_ff", false,-1);
        vcdp->declBit(c+1074,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_victim_ff", false,-1);
        vcdp->declBit(c+1073,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_qualifier_ff", false,-1);
        vcdp->declBit(c+1072,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_lucky_ff", false,-1);
        vcdp->declBit(c+808,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_status_ff", false,-1);
        vcdp->declBit(c+222,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell clk", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell test_mode", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell test_rst_n", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell reset_n_in", false,-1);
        vcdp->declBit(c+1067,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell reset_n_out", false,-1);
        vcdp->declBit(c+617,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell reset_n_status", false,-1);
        vcdp->declBit(c+1067,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell reset_n_ff", false,-1);
        vcdp->declBit(c+617,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell reset_n_status_ff", false,-1);
        vcdp->declBit(c+222,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell rst_n_mux", false,-1);
        vcdp->declBit(c+1072,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell clk", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell test_rst_n", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell test_mode", false,-1);
        vcdp->declBit(c+780,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_in", false,-1);
        vcdp->declBit(c+1069,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_out_qlfy", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_out", false,-1);
        vcdp->declBit(c+864,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_status", false,-1);
        vcdp->declBit(c+1072,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell rst_n_mux", false,-1);
        vcdp->declBit(c+225,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_in_mux", false,-1);
        vcdp->declBit(c+1071,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_front_ff", false,-1);
        vcdp->declBit(c+1070,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_victim_ff", false,-1);
        vcdp->declBit(c+1069,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_qualifier_ff", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_lucky_ff", false,-1);
        vcdp->declBit(c+864,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_status_ff", false,-1);
        vcdp->declBit(c+223,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell clk", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell test_mode", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell test_rst_n", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell reset_n_in", false,-1);
        vcdp->declBit(c+1056,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell reset_n_out", false,-1);
        vcdp->declBit(c+618,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell reset_n_status", false,-1);
        vcdp->declBit(c+1056,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell reset_n_ff", false,-1);
        vcdp->declBit(c+618,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell reset_n_status_ff", false,-1);
        vcdp->declBit(c+223,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell rst_n_mux", false,-1);
        vcdp->declBus(c+21,"scr1_top_tb_ahb i_top i_core_top i_tapc_rstn_and2_cell rst_n_in", false,-1, 1,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top i_tapc_rstn_and2_cell test_rst_n", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_tapc_rstn_and2_cell test_mode", false,-1);
        vcdp->declBit(c+487,"scr1_top_tb_ahb i_top i_core_top i_tapc_rstn_and2_cell rst_n_out", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top i_pipe_top pipe_rst_n", false,-1);
        vcdp->declBit(c+564,"scr1_top_tb_ahb i_top i_core_top i_pipe_top pipe_rst_n_qlfy", false,-1);
        vcdp->declBit(c+1056,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dbg_rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_pipe_top clk", false,-1);
        vcdp->declBit(c+192,"scr1_top_tb_ahb i_top i_core_top i_pipe_top imem_req", false,-1);
        vcdp->declBit(c+1084,"scr1_top_tb_ahb i_top i_core_top i_pipe_top imem_cmd", false,-1);
        vcdp->declBus(c+193,"scr1_top_tb_ahb i_top i_core_top i_pipe_top imem_addr", false,-1, 31,0);
        vcdp->declBit(c+191,"scr1_top_tb_ahb i_top i_core_top i_pipe_top imem_req_ack", false,-1);
        vcdp->declBus(c+144,"scr1_top_tb_ahb i_top i_core_top i_pipe_top imem_rdata", false,-1, 31,0);
        vcdp->declBus(c+145,"scr1_top_tb_ahb i_top i_core_top i_pipe_top imem_resp", false,-1, 1,0);
        vcdp->declBit(c+195,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_req", false,-1);
        vcdp->declBit(c+492,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_cmd", false,-1);
        vcdp->declBus(c+493,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_width", false,-1, 1,0);
        vcdp->declBus(c+196,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_addr", false,-1, 31,0);
        vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_wdata", false,-1, 31,0);
        vcdp->declBit(c+194,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_req_ack", false,-1);
        vcdp->declBus(c+559,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_rdata", false,-1, 31,0);
        vcdp->declBus(c+560,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_resp", false,-1, 1,0);
        vcdp->declBit(c+1054,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_active", false,-1);
        vcdp->declBit(c+850,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_cmd_req", false,-1);
        vcdp->declBus(c+851,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_cmd", false,-1, 1,0);
        vcdp->declBit(c+596,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_cmd_resp", false,-1);
        vcdp->declBit(c+598,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_cmd_rcode", false,-1);
        vcdp->declBit(c+819,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_hart_event", false,-1);
        vcdp->declBit(c+31,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_hart_status except", false,-1);
        vcdp->declBit(c+32,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_hart_status ebreak", false,-1);
        vcdp->declBus(c+33,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_hart_status dbg_state", false,-1, 1,0);
        vcdp->declBus(c+820,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_pbuf_addr", false,-1, 2,0);
        vcdp->declBus(c+571,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_pbuf_instr", false,-1, 31,0);
        vcdp->declBit(c+216,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_dreg_req", false,-1);
        vcdp->declBit(c+218,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_dreg_wr", false,-1);
        vcdp->declBus(c+220,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_dreg_wdata", false,-1, 31,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_dreg_resp", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_dreg_fail", false,-1);
        vcdp->declBus(c+716,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_dreg_rdata", false,-1, 31,0);
        vcdp->declBus(c+874,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_pc_sample", false,-1, 31,0);
        vcdp->declBus(c+1045,"scr1_top_tb_ahb i_top i_core_top i_pipe_top irq_lines", false,-1, 15,0);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_pipe_top soft_irq", false,-1);
        vcdp->declBit(c+871,"scr1_top_tb_ahb i_top i_core_top i_pipe_top timer_irq", false,-1);
        vcdp->declQuad(c+872,"scr1_top_tb_ahb i_top i_core_top i_pipe_top mtime_ext", false,-1, 63,0);
        vcdp->declBus(c+2,"scr1_top_tb_ahb i_top i_core_top i_pipe_top fuse_mhartid", false,-1, 31,0);
        vcdp->declBus(c+874,"scr1_top_tb_ahb i_top i_core_top i_pipe_top curr_pc", false,-1, 31,0);
        vcdp->declBus(c+94,"scr1_top_tb_ahb i_top i_core_top i_pipe_top next_pc", false,-1, 31,0);
        vcdp->declBit(c+226,"scr1_top_tb_ahb i_top i_core_top i_pipe_top new_pc_req", false,-1);
        vcdp->declBus(c+227,"scr1_top_tb_ahb i_top i_core_top i_pipe_top new_pc", false,-1, 31,0);
        vcdp->declBit(c+228,"scr1_top_tb_ahb i_top i_core_top i_pipe_top stop_fetch", false,-1);
        vcdp->declBit(c+83,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_exc_req", false,-1);
        vcdp->declBit(c+474,"scr1_top_tb_ahb i_top i_core_top i_pipe_top brkpt", false,-1);
        vcdp->declBit(c+41,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_init_pc", false,-1);
        vcdp->declBit(c+84,"scr1_top_tb_ahb i_top i_core_top i_pipe_top wfi_run2halt", false,-1);
        vcdp->declBit(c+229,"scr1_top_tb_ahb i_top i_core_top i_pipe_top instret", false,-1);
        vcdp->declBit(c+230,"scr1_top_tb_ahb i_top i_core_top i_pipe_top instret_nexc", false,-1);
        vcdp->declBit(c+42,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ext_irq", false,-1);
        vcdp->declBit(c+231,"scr1_top_tb_ahb i_top i_core_top i_pipe_top brkpt_hw", false,-1);
        vcdp->declBit(c+232,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ifu2idu_vd", false,-1);
        vcdp->declBus(c+494,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ifu2idu_instr", false,-1, 31,0);
        vcdp->declBit(c+495,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ifu2idu_imem_err", false,-1);
        vcdp->declBit(c+146,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ifu2idu_err_rvi_hi", false,-1);
        vcdp->declBit(c+233,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2ifu_rdy", false,-1);
        vcdp->declBit(c+232,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_req", false,-1);
        vcdp->declBit(c+496,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd instr_rvc", false,-1);
        vcdp->declBus(c+497,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd ialu_op", false,-1, 0,0);
        vcdp->declBus(c+498,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd ialu_cmd", false,-1, 4,0);
        vcdp->declBus(c+499,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd sum2_op", false,-1, 0,0);
        vcdp->declBus(c+500,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd lsu_cmd", false,-1, 3,0);
        vcdp->declBus(c+501,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd csr_op", false,-1, 0,0);
        vcdp->declBus(c+502,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd csr_cmd", false,-1, 1,0);
        vcdp->declBus(c+503,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd rd_wb_sel", false,-1, 2,0);
        vcdp->declBit(c+504,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd jump_req", false,-1);
        vcdp->declBit(c+505,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd branch_req", false,-1);
        vcdp->declBit(c+506,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd mret_req", false,-1);
        vcdp->declBit(c+507,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd fencei_req", false,-1);
        vcdp->declBit(c+508,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd wfi_req", false,-1);
        vcdp->declBus(c+509,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd rs1_addr", false,-1, 4,0);
        vcdp->declBus(c+510,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd rs2_addr", false,-1, 4,0);
        vcdp->declBus(c+511,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd rd_addr", false,-1, 4,0);
        vcdp->declBus(c+512,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd imm", false,-1, 31,0);
        vcdp->declBit(c+513,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd exc_req", false,-1);
        vcdp->declBus(c+514,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd exc_code", false,-1, 3,0);
        vcdp->declBit(c+515,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_use_rs1", false,-1);
        vcdp->declBit(c+516,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_use_rs2", false,-1);
        vcdp->declBit(c+517,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_use_rd", false,-1);
        vcdp->declBit(c+518,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_use_imm", false,-1);
        vcdp->declBit(c+233,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2idu_rdy", false,-1);
        vcdp->declBus(c+234,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2mprf_rs1_addr", false,-1, 4,0);
        vcdp->declBus(c+235,"scr1_top_tb_ahb i_top i_core_top i_pipe_top mprf2exu_rs1_data", false,-1, 31,0);
        vcdp->declBus(c+236,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2mprf_rs2_addr", false,-1, 4,0);
        vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top i_pipe_top mprf2exu_rs2_data", false,-1, 31,0);
        vcdp->declBit(c+237,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2mprf_w_req", false,-1);
        vcdp->declBus(c+519,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2mprf_rd_addr", false,-1, 4,0);
        vcdp->declBus(c+238,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2mprf_rd_data", false,-1, 31,0);
        vcdp->declBus(c+520,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_rw_addr", false,-1, 11,0);
        vcdp->declBit(c+239,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_r_req", false,-1);
        vcdp->declBus(c+240,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2exu_r_data", false,-1, 31,0);
        vcdp->declBit(c+241,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_w_req", false,-1);
        vcdp->declBus(c+521,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_w_cmd", false,-1, 1,0);
        vcdp->declBus(c+242,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_w_data", false,-1, 31,0);
        vcdp->declBit(c+243,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2exu_rw_exc", false,-1);
        vcdp->declBit(c+244,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_take_irq", false,-1);
        vcdp->declBit(c+245,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_take_exc", false,-1);
        vcdp->declBit(c+85,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_mret_update", false,-1);
        vcdp->declBit(c+246,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_mret_instr", false,-1);
        vcdp->declBus(c+247,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_exc_code", false,-1, 3,0);
        vcdp->declBus(c+95,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_trap_val", false,-1, 31,0);
        vcdp->declBus(c+248,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2exu_new_pc", false,-1, 31,0);
        vcdp->declBit(c+43,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2exu_irq", false,-1);
        vcdp->declBit(c+44,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2exu_ip_ie", false,-1);
        vcdp->declBit(c+249,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2exu_mstatus_mie_up", false,-1);
        vcdp->declBit(c+250,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2ipic_r_req", false,-1);
        vcdp->declBit(c+251,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2ipic_w_req", false,-1);
        vcdp->declBus(c+252,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2ipic_addr", false,-1, 2,0);
        vcdp->declBus(c+253,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2ipic_wdata", false,-1, 31,0);
        vcdp->declBus(c+254,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ipic2csr_rdata", false,-1, 31,0);
        vcdp->declBit(c+255,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_req", false,-1);
        vcdp->declBus(c+521,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_cmd", false,-1, 1,0);
        vcdp->declBus(c+522,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_addr", false,-1, 2,0);
        vcdp->declBus(c+242,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_wdata", false,-1, 31,0);
        vcdp->declBus(c+256,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2csr_rdata", false,-1, 31,0);
        vcdp->declBit(c+257,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2csr_resp", false,-1);
        vcdp->declBit(c+258,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_req_qlfy", false,-1);
        vcdp->declBus(c+591,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_cmd_qlfy", false,-1, 1,0);
        vcdp->declBus(c+592,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_addr_qlfy", false,-1, 2,0);
        vcdp->declBus(c+259,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_wdata_qlfy", false,-1, 31,0);
        vcdp->declBit(c+260,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_i_mon vd", false,-1);
        vcdp->declBit(c+261,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_i_mon req", false,-1);
        vcdp->declBus(c+262,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_i_mon addr", false,-1, 31,0);
        vcdp->declBit(c+475,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon vd", false,-1);
        vcdp->declBit(c+476,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon load", false,-1);
        vcdp->declBit(c+477,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon store", false,-1);
        vcdp->declBus(c+478,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon addr", false,-1, 31,0);
        vcdp->declBus(c+263,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2exu_i_match", false,-1, 2,0);
        vcdp->declBus(c+264,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2lsu_d_match", false,-1, 1,0);
        vcdp->declBit(c+265,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2exu_i_x_req", false,-1);
        vcdp->declBit(c+266,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2lsu_i_x_req", false,-1);
        vcdp->declBit(c+267,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2lsu_d_x_req", false,-1);
        vcdp->declBus(c+268,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_bp_retire", false,-1, 2,0);
        vcdp->declBit(c+269,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_i_mon_qlfy vd", false,-1);
        vcdp->declBit(c+270,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_i_mon_qlfy req", false,-1);
        vcdp->declBus(c+271,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_i_mon_qlfy addr", false,-1, 31,0);
        vcdp->declBit(c+272,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon_qlfy vd", false,-1);
        vcdp->declBit(c+273,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon_qlfy load", false,-1);
        vcdp->declBit(c+274,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon_qlfy store", false,-1);
        vcdp->declBus(c+275,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon_qlfy addr", false,-1, 31,0);
        vcdp->declBus(c+276,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_bp_retire_qlfy", false,-1, 2,0);
        vcdp->declBit(c+1032,"scr1_top_tb_ahb i_top i_core_top i_pipe_top fetch_pbuf", false,-1);
        vcdp->declBit(c+277,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_req", false,-1);
        vcdp->declBus(c+521,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_cmd", false,-1, 1,0);
        vcdp->declBus(c+523,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_addr", false,-1, 1,0);
        vcdp->declBus(c+242,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_wdata", false,-1, 31,0);
        vcdp->declBus(c+278,"scr1_top_tb_ahb i_top i_core_top i_pipe_top hdu2csr_rdata", false,-1, 31,0);
        vcdp->declBit(c+36,"scr1_top_tb_ahb i_top i_core_top i_pipe_top hdu2csr_resp", false,-1);
        vcdp->declBit(c+279,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_req_qlfy", false,-1);
        vcdp->declBus(c+593,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_cmd_qlfy", false,-1, 1,0);
        vcdp->declBus(c+594,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_addr_qlfy", false,-1, 1,0);
        vcdp->declBus(c+280,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_wdata_qlfy", false,-1, 31,0);
        vcdp->declBit(c+1033,"scr1_top_tb_ahb i_top i_core_top i_pipe_top hwbrk_dsbl", false,-1);
        vcdp->declBit(c+281,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2hdu_dmode_req", false,-1);
        vcdp->declBit(c+282,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_no_commit", false,-1);
        vcdp->declBit(c+1034,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_irq_dsbl", false,-1);
        vcdp->declBit(c+1035,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_pc_advmt_dsbl", false,-1);
        vcdp->declBit(c+1036,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_dmode_sstep_en", false,-1);
        vcdp->declBit(c+572,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dbg_halted", false,-1);
        vcdp->declBit(c+283,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dbg_run2halt", false,-1);
        vcdp->declBit(c+576,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dbg_halt2run", false,-1);
        vcdp->declBit(c+573,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dbg_run_start", false,-1);
        vcdp->declBus(c+821,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dbg_new_pc", false,-1, 31,0);
        vcdp->declBit(c+233,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ifu2hdu_pbuf_rdy", false,-1);
        vcdp->declBit(c+284,"scr1_top_tb_ahb i_top i_core_top i_pipe_top hdu2ifu_pbuf_vd", false,-1);
        vcdp->declBit(c+34,"scr1_top_tb_ahb i_top i_core_top i_pipe_top hdu2ifu_pbuf_err", false,-1);
        vcdp->declBus(c+717,"scr1_top_tb_ahb i_top i_core_top i_pipe_top hdu2ifu_pbuf_instr", false,-1, 31,0);
        vcdp->declBit(c+285,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ifu2hdu_pbuf_rdy_qlfy", false,-1);
        vcdp->declBit(c+286,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_busy", false,-1);
        vcdp->declBit(c+480,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_busy_qlfy", false,-1);
        vcdp->declBit(c+481,"scr1_top_tb_ahb i_top i_core_top i_pipe_top instret_qlfy", false,-1);
        vcdp->declBit(c+590,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_init_pc_qlfy", false,-1);
        vcdp->declBit(c+287,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_exc_req_qlfy", false,-1);
        vcdp->declBit(c+288,"scr1_top_tb_ahb i_top i_core_top i_pipe_top brkpt_qlfy", false,-1);
        vcdp->declBus(c+98,"scr1_top_tb_ahb i_top i_core_top i_pipe_top curr_pc_qlfy", false,-1, 31,0);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu clk", false,-1);
        vcdp->declBit(c+191,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_req_ack", false,-1);
        vcdp->declBit(c+192,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_req", false,-1);
        vcdp->declBit(c+1084,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_cmd", false,-1);
        vcdp->declBus(c+193,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_addr", false,-1, 31,0);
        vcdp->declBus(c+144,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_rdata", false,-1, 31,0);
        vcdp->declBus(c+145,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_resp", false,-1, 1,0);
        vcdp->declBit(c+226,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu new_pc_req", false,-1);
        vcdp->declBus(c+227,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu new_pc", false,-1, 31,0);
        vcdp->declBit(c+228,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu stop_fetch", false,-1);
        vcdp->declBit(c+1032,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu fetch_pbuf", false,-1);
        vcdp->declBit(c+233,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu ifu2hdu_pbuf_rdy", false,-1);
        vcdp->declBit(c+284,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu hdu2ifu_pbuf_vd", false,-1);
        vcdp->declBit(c+34,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu hdu2ifu_pbuf_err", false,-1);
        vcdp->declBus(c+717,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu hdu2ifu_pbuf_instr", false,-1, 31,0);
        vcdp->declBit(c+233,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu idu2ifu_rdy", false,-1);
        vcdp->declBus(c+494,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu ifu2idu_instr", false,-1, 31,0);
        vcdp->declBit(c+495,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu ifu2idu_imem_err", false,-1);
        vcdp->declBit(c+146,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu ifu2idu_err_rvi_hi", false,-1);
        vcdp->declBit(c+232,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu ifu2idu_vd", false,-1);
        vcdp->declBus(c+1090,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu SCR1_IFU_Q_SIZE_WORD", false,-1, 31,0);
        vcdp->declBus(c+1091,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu SCR1_IFU_Q_SIZE_HALF", false,-1, 31,0);
        vcdp->declBus(c+1092,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu SCR1_TXN_CNT_W", false,-1, 31,0);
        vcdp->declBus(c+1090,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu SCR1_IFU_QUEUE_ADR_W", false,-1, 31,0);
        vcdp->declBus(c+1092,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu SCR1_IFU_QUEUE_PTR_W", false,-1, 31,0);
        vcdp->declBus(c+1092,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu SCR1_IFU_Q_FREE_H_W", false,-1, 31,0);
        vcdp->declBus(c+1090,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu SCR1_IFU_Q_FREE_W_W", false,-1, 31,0);
        vcdp->declBit(c+875,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu fsm", false,-1);
        vcdp->declBus(c+876,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_addr_r", false,-1, 31,2);
        vcdp->declBus(c+289,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_addr_r_new", false,-1, 31,2);
        vcdp->declBus(c+877,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu num_txns_pending", false,-1, 2,0);
        vcdp->declBus(c+290,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu num_txns_pending_new", false,-1, 2,0);
        vcdp->declBus(c+878,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu discard_resp_cnt", false,-1, 2,0);
        vcdp->declBus(c+82,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu discard_resp_cnt_new", false,-1, 2,0);
        vcdp->declBit(c+879,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu discard_resp", false,-1);
        vcdp->declBus(c+880,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu num_vd_txns_pending", false,-1, 2,0);
        vcdp->declBit(c+881,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu num_txns_pending_full", false,-1);
        vcdp->declBit(c+147,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_resp_ok", false,-1);
        vcdp->declBit(c+148,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_resp_er", false,-1);
        vcdp->declBit(c+149,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_resp_vd", false,-1);
        vcdp->declBit(c+882,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu new_pc_unaligned", false,-1);
        vcdp->declBit(c+45,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_empty", false,-1);
        vcdp->declBit(c+291,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_flush", false,-1);
        vcdp->declBus(c+883,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_rptr", false,-1, 2,0);
        vcdp->declBus(c+292,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_rptr_next", false,-1, 2,0);
        vcdp->declBus(c+884,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_wptr", false,-1, 2,0);
        vcdp->declBus(c+293,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_wptr_next", false,-1, 2,0);
        vcdp->declBus(c+46,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_ocpd_h", false,-1, 2,0);
        vcdp->declBus(c+86,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_free_h_next", false,-1, 2,0);
        vcdp->declBus(c+87,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_free_w_next", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+885+i*1,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_data", true,(i+0), 15,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+889+i*1,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_err", true,(i+0));}}
        vcdp->declBus(c+294,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_re", false,-1, 1,0);
        vcdp->declBus(c+295,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_we", false,-1, 1,0);
        vcdp->declBit(c+47,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_head_rvc", false,-1);
        vcdp->declBit(c+48,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_head_rvi", false,-1);
        vcdp->declBus(c+49,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_data_head", false,-1, 15,0);
        vcdp->declBus(c+893,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_data_next", false,-1, 15,0);
        vcdp->declBit(c+50,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_err_head", false,-1);
        vcdp->declBit(c+51,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_err_next", false,-1);
        vcdp->declBit(c+894,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu rdata_curr", false,-1);
        vcdp->declBit(c+150,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu rdata_next", false,-1);
        vcdp->declBus(c+151,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu rdata_ident", false,-1, 2,0);
        vcdp->declBus(c+152,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu instr_bypass", false,-1, 1,0);
        vcdp->declBit(c+153,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu instr_bypass_vd", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu clk", false,-1);
        vcdp->declBit(c+233,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2ifu_rdy", false,-1);
        vcdp->declBus(c+494,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu ifu2idu_instr", false,-1, 31,0);
        vcdp->declBit(c+495,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu ifu2idu_imem_err", false,-1);
        vcdp->declBit(c+146,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu ifu2idu_err_rvi_hi", false,-1);
        vcdp->declBit(c+232,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu ifu2idu_vd", false,-1);
        vcdp->declBit(c+232,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_req", false,-1);
        vcdp->declBit(c+496,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd instr_rvc", false,-1);
        vcdp->declBus(c+497,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd ialu_op", false,-1, 0,0);
        vcdp->declBus(c+498,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd ialu_cmd", false,-1, 4,0);
        vcdp->declBus(c+499,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd sum2_op", false,-1, 0,0);
        vcdp->declBus(c+500,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd lsu_cmd", false,-1, 3,0);
        vcdp->declBus(c+501,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd csr_op", false,-1, 0,0);
        vcdp->declBus(c+502,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd csr_cmd", false,-1, 1,0);
        vcdp->declBus(c+503,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd rd_wb_sel", false,-1, 2,0);
        vcdp->declBit(c+504,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd jump_req", false,-1);
        vcdp->declBit(c+505,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd branch_req", false,-1);
        vcdp->declBit(c+506,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd mret_req", false,-1);
        vcdp->declBit(c+507,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd fencei_req", false,-1);
        vcdp->declBit(c+508,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd wfi_req", false,-1);
        vcdp->declBus(c+509,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd rs1_addr", false,-1, 4,0);
        vcdp->declBus(c+510,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd rs2_addr", false,-1, 4,0);
        vcdp->declBus(c+511,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd rd_addr", false,-1, 4,0);
        vcdp->declBus(c+512,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd imm", false,-1, 31,0);
        vcdp->declBit(c+513,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd exc_req", false,-1);
        vcdp->declBus(c+514,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd exc_code", false,-1, 3,0);
        vcdp->declBit(c+515,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_use_rs1", false,-1);
        vcdp->declBit(c+516,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_use_rs2", false,-1);
        vcdp->declBit(c+517,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_use_rd", false,-1);
        vcdp->declBit(c+518,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_use_imm", false,-1);
        vcdp->declBit(c+233,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu exu2idu_rdy", false,-1);
        vcdp->declBus(c+1093,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu SCR1_MPRF_ZERO_ADDR", false,-1, 4,0);
        vcdp->declBus(c+1094,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu SCR1_MPRF_RA_ADDR", false,-1, 4,0);
        vcdp->declBus(c+1095,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu SCR1_MPRF_SP_ADDR", false,-1, 4,0);
        vcdp->declBus(c+494,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu instr", false,-1, 31,0);
        vcdp->declBus(c+524,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu instr_type", false,-1, 1,0);
        vcdp->declBus(c+525,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu rvi_opcode", false,-1, 6,2);
        vcdp->declBit(c+526,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu rvi_illegal", false,-1);
        vcdp->declBus(c+527,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu funct3", false,-1, 2,0);
        vcdp->declBus(c+528,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu funct7", false,-1, 6,0);
        vcdp->declBus(c+529,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu funct12", false,-1, 11,0);
        vcdp->declBus(c+530,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu shamt", false,-1, 4,0);
        vcdp->declBit(c+531,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu rvc_illegal", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu clk", false,-1);
        vcdp->declBit(c+232,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_req", false,-1);
        vcdp->declBit(c+233,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2idu_rdy", false,-1);
        vcdp->declBit(c+496,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd instr_rvc", false,-1);
        vcdp->declBus(c+497,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd ialu_op", false,-1, 0,0);
        vcdp->declBus(c+498,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd ialu_cmd", false,-1, 4,0);
        vcdp->declBus(c+499,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd sum2_op", false,-1, 0,0);
        vcdp->declBus(c+500,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd lsu_cmd", false,-1, 3,0);
        vcdp->declBus(c+501,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd csr_op", false,-1, 0,0);
        vcdp->declBus(c+502,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd csr_cmd", false,-1, 1,0);
        vcdp->declBus(c+503,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd rd_wb_sel", false,-1, 2,0);
        vcdp->declBit(c+504,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd jump_req", false,-1);
        vcdp->declBit(c+505,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd branch_req", false,-1);
        vcdp->declBit(c+506,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd mret_req", false,-1);
        vcdp->declBit(c+507,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd fencei_req", false,-1);
        vcdp->declBit(c+508,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd wfi_req", false,-1);
        vcdp->declBus(c+509,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd rs1_addr", false,-1, 4,0);
        vcdp->declBus(c+510,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd rs2_addr", false,-1, 4,0);
        vcdp->declBus(c+511,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd rd_addr", false,-1, 4,0);
        vcdp->declBus(c+512,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd imm", false,-1, 31,0);
        vcdp->declBit(c+513,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd exc_req", false,-1);
        vcdp->declBus(c+514,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd exc_code", false,-1, 3,0);
        vcdp->declBit(c+515,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_use_rs1", false,-1);
        vcdp->declBit(c+516,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_use_rs2", false,-1);
        vcdp->declBus(c+234,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2mprf_rs1_addr", false,-1, 4,0);
        vcdp->declBus(c+235,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu mprf2exu_rs1_data", false,-1, 31,0);
        vcdp->declBus(c+236,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2mprf_rs2_addr", false,-1, 4,0);
        vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu mprf2exu_rs2_data", false,-1, 31,0);
        vcdp->declBit(c+237,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2mprf_w_req", false,-1);
        vcdp->declBus(c+519,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2mprf_rd_addr", false,-1, 4,0);
        vcdp->declBus(c+238,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2mprf_rd_data", false,-1, 31,0);
        vcdp->declBus(c+520,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_rw_addr", false,-1, 11,0);
        vcdp->declBit(c+239,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_r_req", false,-1);
        vcdp->declBus(c+240,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu csr2exu_r_data", false,-1, 31,0);
        vcdp->declBit(c+241,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_w_req", false,-1);
        vcdp->declBus(c+521,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_w_cmd", false,-1, 1,0);
        vcdp->declBus(c+242,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_w_data", false,-1, 31,0);
        vcdp->declBit(c+243,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu csr2exu_rw_exc", false,-1);
        vcdp->declBit(c+244,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_take_irq", false,-1);
        vcdp->declBit(c+245,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_take_exc", false,-1);
        vcdp->declBit(c+85,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_mret_update", false,-1);
        vcdp->declBit(c+246,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_mret_instr", false,-1);
        vcdp->declBus(c+247,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_exc_code", false,-1, 3,0);
        vcdp->declBus(c+95,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_trap_val", false,-1, 31,0);
        vcdp->declBus(c+248,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu csr2exu_new_pc", false,-1, 31,0);
        vcdp->declBit(c+43,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu csr2exu_irq", false,-1);
        vcdp->declBit(c+44,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu csr2exu_ip_ie", false,-1);
        vcdp->declBit(c+249,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu csr2exu_mstatus_mie_up", false,-1);
        vcdp->declBit(c+195,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2dmem_req", false,-1);
        vcdp->declBit(c+492,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2dmem_cmd", false,-1);
        vcdp->declBus(c+493,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2dmem_width", false,-1, 1,0);
        vcdp->declBus(c+196,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2dmem_addr", false,-1, 31,0);
        vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2dmem_wdata", false,-1, 31,0);
        vcdp->declBit(c+194,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dmem2exu_req_ack", false,-1);
        vcdp->declBus(c+559,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dmem2exu_rdata", false,-1, 31,0);
        vcdp->declBus(c+560,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dmem2exu_resp", false,-1, 1,0);
        vcdp->declBit(c+83,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_exc_req", false,-1);
        vcdp->declBit(c+474,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu brkpt", false,-1);
        vcdp->declBit(c+41,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_init_pc", false,-1);
        vcdp->declBit(c+84,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu wfi_run2halt", false,-1);
        vcdp->declBit(c+229,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu instret", false,-1);
        vcdp->declBit(c+230,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu instret_nexc", false,-1);
        vcdp->declBit(c+286,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_busy", false,-1);
        vcdp->declBit(c+282,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_no_commit", false,-1);
        vcdp->declBit(c+1034,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_irq_dsbl", false,-1);
        vcdp->declBit(c+1035,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_pc_advmt_dsbl", false,-1);
        vcdp->declBit(c+1036,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_dmode_sstep_en", false,-1);
        vcdp->declBit(c+1032,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu fetch_pbuf", false,-1);
        vcdp->declBit(c+572,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dbg_halted", false,-1);
        vcdp->declBit(c+283,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dbg_run2halt", false,-1);
        vcdp->declBit(c+576,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dbg_halt2run", false,-1);
        vcdp->declBit(c+573,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dbg_run_start", false,-1);
        vcdp->declBus(c+821,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dbg_new_pc", false,-1, 31,0);
        vcdp->declBit(c+260,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2tdu_i_mon vd", false,-1);
        vcdp->declBit(c+261,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2tdu_i_mon req", false,-1);
        vcdp->declBus(c+262,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2tdu_i_mon addr", false,-1, 31,0);
        vcdp->declBus(c+263,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu tdu2exu_i_match", false,-1, 2,0);
        vcdp->declBit(c+265,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu tdu2exu_i_x_req", false,-1);
        vcdp->declBit(c+475,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu2tdu_d_mon vd", false,-1);
        vcdp->declBit(c+476,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu2tdu_d_mon load", false,-1);
        vcdp->declBit(c+477,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu2tdu_d_mon store", false,-1);
        vcdp->declBus(c+478,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu2tdu_d_mon addr", false,-1, 31,0);
        vcdp->declBit(c+266,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu tdu2lsu_i_x_req", false,-1);
        vcdp->declBus(c+264,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu tdu2lsu_d_match", false,-1, 1,0);
        vcdp->declBit(c+267,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu tdu2lsu_d_x_req", false,-1);
        vcdp->declBus(c+268,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2tdu_bp_retire", false,-1, 2,0);
        vcdp->declBit(c+231,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu brkpt_hw", false,-1);
        vcdp->declBus(c+874,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu curr_pc", false,-1, 31,0);
        vcdp->declBus(c+94,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu next_pc", false,-1, 31,0);
        vcdp->declBit(c+226,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu new_pc_req", false,-1);
        vcdp->declBus(c+227,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu new_pc", false,-1, 31,0);
        vcdp->declBus(c+1096,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu SCR1_JUMP_MASK", false,-1, 31,0);
        vcdp->declBit(c+296,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue_vd", false,-1);
        vcdp->declBit(c+532,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue instr_rvc", false,-1);
        vcdp->declBus(c+533,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue ialu_op", false,-1, 0,0);
        vcdp->declBus(c+534,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue ialu_cmd", false,-1, 4,0);
        vcdp->declBus(c+535,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue sum2_op", false,-1, 0,0);
        vcdp->declBus(c+536,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue lsu_cmd", false,-1, 3,0);
        vcdp->declBus(c+537,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue csr_op", false,-1, 0,0);
        vcdp->declBus(c+521,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue csr_cmd", false,-1, 1,0);
        vcdp->declBus(c+538,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue rd_wb_sel", false,-1, 2,0);
        vcdp->declBit(c+539,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue jump_req", false,-1);
        vcdp->declBit(c+540,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue branch_req", false,-1);
        vcdp->declBit(c+541,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue mret_req", false,-1);
        vcdp->declBit(c+542,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue fencei_req", false,-1);
        vcdp->declBit(c+543,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue wfi_req", false,-1);
        vcdp->declBus(c+544,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue rs1_addr", false,-1, 4,0);
        vcdp->declBus(c+545,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue rs2_addr", false,-1, 4,0);
        vcdp->declBus(c+546,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue rd_addr", false,-1, 4,0);
        vcdp->declBus(c+547,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue imm", false,-1, 31,0);
        vcdp->declBit(c+548,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue exc_req", false,-1);
        vcdp->declBus(c+549,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue exc_code", false,-1, 3,0);
        vcdp->declBit(c+595,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu queue_barrier", false,-1);
        vcdp->declBit(c+297,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_rdy", false,-1);
        vcdp->declBit(c+298,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_rdy", false,-1);
        vcdp->declBit(c+299,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_vd", false,-1);
        vcdp->declBus(c+300,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_op1", false,-1, 31,0);
        vcdp->declBus(c+301,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_op2", false,-1, 31,0);
        vcdp->declBus(c+96,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_sum2_op1", false,-1, 31,0);
        vcdp->declBus(c+550,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_sum2_op2", false,-1, 31,0);
        vcdp->declBus(c+302,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_res", false,-1, 31,0);
        vcdp->declBus(c+196,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_sum2_res", false,-1, 31,0);
        vcdp->declBit(c+303,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_cmp", false,-1);
        vcdp->declBit(c+304,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu_req", false,-1);
        vcdp->declBit(c+561,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu_rdy", false,-1);
        vcdp->declBus(c+97,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu_l_data", false,-1, 31,0);
        vcdp->declBit(c+305,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu_exc", false,-1);
        vcdp->declBus(c+306,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu_exc_code", false,-1, 3,0);
        vcdp->declBit(c+895,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu csr_access", false,-1);
        vcdp->declBit(c+307,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exc_req", false,-1);
        vcdp->declBus(c+247,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exc_code", false,-1, 3,0);
        vcdp->declBit(c+551,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ifu_fault_rvi_hi", false,-1);
        vcdp->declBit(c+896,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu wfi_halted", false,-1);
        vcdp->declBit(c+308,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu wfi_halt_cond", false,-1);
        vcdp->declBit(c+44,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu wfi_run_cond", false,-1);
        vcdp->declBit(c+897,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu wfi_run_start", false,-1);
        vcdp->declBus(c+898,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu init_pc_v", false,-1, 3,0);
        vcdp->declBit(c+41,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu init_pc", false,-1);
        vcdp->declBus(c+552,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu inc_pc", false,-1, 31,0);
        vcdp->declBit(c+899,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_exc_req_r", false,-1);
        vcdp->declBus(c+479,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu update_pc", false,-1, 31,0);
        vcdp->declBit(c+78,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu update_pc_en", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu clk", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu rst_n", false,-1);
        vcdp->declBit(c+299,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_vd", false,-1);
        vcdp->declBit(c+298,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_rdy", false,-1);
        vcdp->declBus(c+300,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_op1", false,-1, 31,0);
        vcdp->declBus(c+301,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_op2", false,-1, 31,0);
        vcdp->declBus(c+534,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_cmd", false,-1, 4,0);
        vcdp->declBus(c+302,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_res", false,-1, 31,0);
        vcdp->declBit(c+303,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_cmp", false,-1);
        vcdp->declBus(c+96,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_sum2_op1", false,-1, 31,0);
        vcdp->declBus(c+550,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_sum2_op2", false,-1, 31,0);
        vcdp->declBus(c+196,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_sum2_res", false,-1, 31,0);
        vcdp->declBus(c+1097,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu SCR1_DIV_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1098,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu SCR1_DIV_INIT_CNT", false,-1, 31,0);
        vcdp->declBus(c+900,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu curr_state", false,-1, 1,0);
        vcdp->declBus(c+309,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu next_state", false,-1, 1,0);
        vcdp->declBit(c+310,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu iter_req", false,-1);
        vcdp->declBit(c+311,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu iter_rdy", false,-1);
        vcdp->declBus(c+553,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu mdu_cmd", false,-1, 1,0);
        vcdp->declBus(c+312,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu mul_cmd", false,-1, 1,0);
        vcdp->declBus(c+313,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu div_cmd", false,-1, 1,0);
        vcdp->declBit(c+314,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu corr_req", false,-1);
        vcdp->declBit(c+315,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_sub", false,-1);
        vcdp->declBus(c+316,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_op1", false,-1, 31,0);
        vcdp->declBus(c+317,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_op2", false,-1, 31,0);
        vcdp->declQuad(c+318,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_res", false,-1, 32,0);
        vcdp->declBit(c+320,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_flags z", false,-1);
        vcdp->declBit(c+321,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_flags s", false,-1);
        vcdp->declBit(c+322,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_flags o", false,-1);
        vcdp->declBit(c+323,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_flags c", false,-1);
        vcdp->declBit(c+324,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum2_sub", false,-1);
        vcdp->declQuad(c+325,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum2_op1", false,-1, 32,0);
        vcdp->declQuad(c+327,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum2_op2", false,-1, 32,0);
        vcdp->declQuad(c+329,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum2_res", false,-1, 32,0);
        vcdp->declBus(c+331,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu shft_op1", false,-1, 31,0);
        vcdp->declBus(c+332,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu shft_op2", false,-1, 4,0);
        vcdp->declBus(c+554,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu shft_cmd", false,-1, 1,0);
        vcdp->declBus(c+333,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu shft_res", false,-1, 31,0);
        vcdp->declQuad(c+334,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu mul_op1", false,-1, 32,0);
        vcdp->declQuad(c+336,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu mul_op2", false,-1, 32,0);
        vcdp->declQuad(c+338,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu mul_res", false,-1, 63,0);
        vcdp->declBus(c+340,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu cnt_res", false,-1, 4,0);
        vcdp->declBus(c+718,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu cnt_res_reg", false,-1, 4,0);
        vcdp->declBit(c+341,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_1_c", false,-1);
        vcdp->declBit(c+719,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_1_c_reg", false,-1);
        vcdp->declBus(c+342,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_1", false,-1, 31,0);
        vcdp->declBus(c+720,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_1_reg", false,-1, 31,0);
        vcdp->declBus(c+343,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_2", false,-1, 31,0);
        vcdp->declBus(c+721,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_2_reg", false,-1, 31,0);
        vcdp->declBus(c+344,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_3", false,-1, 31,0);
        vcdp->declBus(c+722,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_3_reg", false,-1, 31,0);
        vcdp->declBit(c+345,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu unnamedblk1 sgn", false,-1);
        vcdp->declBit(c+346,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu unnamedblk1 inv", false,-1);
        vcdp->declBit(c+347,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu unnamedblk2 sgn", false,-1);
        vcdp->declBit(c+348,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu unnamedblk2 inv", false,-1);
        vcdp->declBus(c+349,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu unnamedblk3 prev_low", false,-1, 30,0);
        vcdp->declBit(c+350,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu unnamedblk3 quo", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu clk", false,-1);
        vcdp->declBit(c+304,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu exu2lsu_req", false,-1);
        vcdp->declBus(c+536,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu exu2lsu_cmd", false,-1, 3,0);
        vcdp->declBus(c+196,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu exu2lsu_addr", false,-1, 31,0);
        vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu exu2lsu_s_data", false,-1, 31,0);
        vcdp->declBit(c+561,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2exu_rdy", false,-1);
        vcdp->declBus(c+97,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2exu_l_data", false,-1, 31,0);
        vcdp->declBit(c+305,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2exu_exc", false,-1);
        vcdp->declBus(c+306,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2exu_exc_code", false,-1, 3,0);
        vcdp->declBit(c+475,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2tdu_d_mon vd", false,-1);
        vcdp->declBit(c+476,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2tdu_d_mon load", false,-1);
        vcdp->declBit(c+477,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2tdu_d_mon store", false,-1);
        vcdp->declBus(c+478,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2tdu_d_mon addr", false,-1, 31,0);
        vcdp->declBit(c+266,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu tdu2lsu_i_x_req", false,-1);
        vcdp->declBit(c+267,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu tdu2lsu_d_x_req", false,-1);
        vcdp->declBit(c+195,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2dmem_req", false,-1);
        vcdp->declBit(c+492,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2dmem_cmd", false,-1);
        vcdp->declBus(c+493,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2dmem_width", false,-1, 1,0);
        vcdp->declBus(c+196,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2dmem_addr", false,-1, 31,0);
        vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2dmem_wdata", false,-1, 31,0);
        vcdp->declBit(c+194,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu dmem2lsu_req_ack", false,-1);
        vcdp->declBus(c+559,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu dmem2lsu_rdata", false,-1, 31,0);
        vcdp->declBus(c+560,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu dmem2lsu_resp", false,-1, 1,0);
        vcdp->declBit(c+901,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu fsm", false,-1);
        vcdp->declBus(c+902,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu_cmd_r", false,-1, 3,0);
        vcdp->declBit(c+562,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu dmem_resp_ok", false,-1);
        vcdp->declBit(c+563,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu dmem_resp_er", false,-1);
        vcdp->declBit(c+351,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu l_misalign", false,-1);
        vcdp->declBit(c+352,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu s_misalign", false,-1);
        vcdp->declBit(c+353,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu_hwbrk", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf clk", false,-1);
        vcdp->declBus(c+234,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf exu2mprf_rs1_addr", false,-1, 4,0);
        vcdp->declBus(c+235,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf2exu_rs1_data", false,-1, 31,0);
        vcdp->declBus(c+236,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf exu2mprf_rs2_addr", false,-1, 4,0);
        vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf2exu_rs2_data", false,-1, 31,0);
        vcdp->declBit(c+237,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf exu2mprf_w_req", false,-1);
        vcdp->declBus(c+519,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf exu2mprf_rd_addr", false,-1, 4,0);
        vcdp->declBus(c+238,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf exu2mprf_rd_data", false,-1, 31,0);
        vcdp->declBus(c+903,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(1)", false,-1, 31,0);
        vcdp->declBus(c+904,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(2)", false,-1, 31,0);
        vcdp->declBus(c+905,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(3)", false,-1, 31,0);
        vcdp->declBus(c+906,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(4)", false,-1, 31,0);
        vcdp->declBus(c+907,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(5)", false,-1, 31,0);
        vcdp->declBus(c+908,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(6)", false,-1, 31,0);
        vcdp->declBus(c+909,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(7)", false,-1, 31,0);
        vcdp->declBus(c+910,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(8)", false,-1, 31,0);
        vcdp->declBus(c+911,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(9)", false,-1, 31,0);
        vcdp->declBus(c+912,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(10)", false,-1, 31,0);
        vcdp->declBus(c+913,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(11)", false,-1, 31,0);
        vcdp->declBus(c+914,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(12)", false,-1, 31,0);
        vcdp->declBus(c+915,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(13)", false,-1, 31,0);
        vcdp->declBus(c+916,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(14)", false,-1, 31,0);
        vcdp->declBus(c+917,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(15)", false,-1, 31,0);
        vcdp->declBus(c+918,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(16)", false,-1, 31,0);
        vcdp->declBus(c+919,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(17)", false,-1, 31,0);
        vcdp->declBus(c+920,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(18)", false,-1, 31,0);
        vcdp->declBus(c+921,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(19)", false,-1, 31,0);
        vcdp->declBus(c+922,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(20)", false,-1, 31,0);
        vcdp->declBus(c+923,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(21)", false,-1, 31,0);
        vcdp->declBus(c+924,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(22)", false,-1, 31,0);
        vcdp->declBus(c+925,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(23)", false,-1, 31,0);
        vcdp->declBus(c+926,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(24)", false,-1, 31,0);
        vcdp->declBus(c+927,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(25)", false,-1, 31,0);
        vcdp->declBus(c+928,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(26)", false,-1, 31,0);
        vcdp->declBus(c+929,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(27)", false,-1, 31,0);
        vcdp->declBus(c+930,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(28)", false,-1, 31,0);
        vcdp->declBus(c+931,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(29)", false,-1, 31,0);
        vcdp->declBus(c+932,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(30)", false,-1, 31,0);
        vcdp->declBus(c+933,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(31)", false,-1, 31,0);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr clk", false,-1);
        vcdp->declBit(c+239,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_r_req", false,-1);
        vcdp->declBus(c+520,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_rw_addr", false,-1, 11,0);
        vcdp->declBus(c+240,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2exu_r_data", false,-1, 31,0);
        vcdp->declBit(c+241,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_w_req", false,-1);
        vcdp->declBus(c+521,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_w_cmd", false,-1, 1,0);
        vcdp->declBus(c+242,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_w_data", false,-1, 31,0);
        vcdp->declBit(c+243,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2exu_rw_exc", false,-1);
        vcdp->declBit(c+244,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_take_irq", false,-1);
        vcdp->declBit(c+245,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_take_exc", false,-1);
        vcdp->declBit(c+85,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_mret_update", false,-1);
        vcdp->declBit(c+246,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_mret_instr", false,-1);
        vcdp->declBit(c+282,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu_no_commit", false,-1);
        vcdp->declBus(c+247,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_exc_code", false,-1, 3,0);
        vcdp->declBus(c+95,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_trap_val", false,-1, 31,0);
        vcdp->declBus(c+248,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2exu_new_pc", false,-1, 31,0);
        vcdp->declBit(c+43,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2exu_irq", false,-1);
        vcdp->declBit(c+44,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2exu_ip_ie", false,-1);
        vcdp->declBit(c+249,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2exu_mstatus_mie_up", false,-1);
        vcdp->declBit(c+250,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2ipic_r_req", false,-1);
        vcdp->declBit(c+251,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2ipic_w_req", false,-1);
        vcdp->declBus(c+252,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2ipic_addr", false,-1, 2,0);
        vcdp->declBus(c+253,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2ipic_wdata", false,-1, 31,0);
        vcdp->declBus(c+254,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr ipic2csr_rdata", false,-1, 31,0);
        vcdp->declBus(c+874,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr curr_pc", false,-1, 31,0);
        vcdp->declBus(c+94,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr next_pc", false,-1, 31,0);
        vcdp->declBit(c+230,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr instret_nexc", false,-1);
        vcdp->declBit(c+42,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr ext_irq", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr soft_irq", false,-1);
        vcdp->declBit(c+871,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr timer_irq", false,-1);
        vcdp->declQuad(c+872,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr mtime_ext", false,-1, 63,0);
        vcdp->declBit(c+277,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2hdu_req", false,-1);
        vcdp->declBus(c+521,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2hdu_cmd", false,-1, 1,0);
        vcdp->declBus(c+523,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2hdu_addr", false,-1, 1,0);
        vcdp->declBus(c+242,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2hdu_wdata", false,-1, 31,0);
        vcdp->declBus(c+278,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr hdu2csr_rdata", false,-1, 31,0);
        vcdp->declBit(c+36,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr hdu2csr_resp", false,-1);
        vcdp->declBit(c+255,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2tdu_req", false,-1);
        vcdp->declBus(c+521,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2tdu_cmd", false,-1, 1,0);
        vcdp->declBus(c+522,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2tdu_addr", false,-1, 2,0);
        vcdp->declBus(c+242,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2tdu_wdata", false,-1, 31,0);
        vcdp->declBus(c+256,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr tdu2csr_rdata", false,-1, 31,0);
        vcdp->declBit(c+257,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr tdu2csr_resp", false,-1);
        vcdp->declBus(c+2,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr fuse_mhartid", false,-1, 31,0);
        vcdp->declBus(c+52,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mstatus", false,-1, 31,0);
        vcdp->declBus(c+53,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mie", false,-1, 31,0);
        vcdp->declBus(c+54,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mip", false,-1, 31,0);
        vcdp->declBit(c+934,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mstatus_mie", false,-1);
        vcdp->declBit(c+935,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mstatus_mpie", false,-1);
        vcdp->declBit(c+936,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mie_mtie", false,-1);
        vcdp->declBit(c+937,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mie_meie", false,-1);
        vcdp->declBit(c+938,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mie_msie", false,-1);
        vcdp->declBus(c+939,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mscratch", false,-1, 31,0);
        vcdp->declBus(c+940,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mepc", false,-1, 31,1);
        vcdp->declBit(c+941,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcause_i", false,-1);
        vcdp->declBus(c+942,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcause_ec", false,-1, 3,0);
        vcdp->declBus(c+55,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcause_ec_new", false,-1, 3,0);
        vcdp->declBus(c+943,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mtval", false,-1, 31,0);
        vcdp->declBus(c+944,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mtvec_base", false,-1, 31,6);
        vcdp->declBit(c+945,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mtvec_mode", false,-1);
        vcdp->declBit(c+871,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mip_mtip", false,-1);
        vcdp->declBit(c+42,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mip_meip", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mip_msip", false,-1);
        vcdp->declQuad(c+56,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret", false,-1, 63,0);
        vcdp->declQuad(c+946,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret_hi", false,-1, 63,8);
        vcdp->declQuad(c+354,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret_hi_new", false,-1, 63,8);
        vcdp->declBus(c+948,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret_lo", false,-1, 7,0);
        vcdp->declBus(c+356,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret_lo_new", false,-1, 7,0);
        vcdp->declQuad(c+58,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle", false,-1, 63,0);
        vcdp->declQuad(c+949,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle_hi", false,-1, 63,8);
        vcdp->declQuad(c+357,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle_hi_new", false,-1, 63,8);
        vcdp->declBus(c+951,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle_lo", false,-1, 7,0);
        vcdp->declBus(c+359,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle_lo_new", false,-1, 7,0);
        vcdp->declBus(c+60,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcounten", false,-1, 31,0);
        vcdp->declBit(c+952,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcounten_cy", false,-1);
        vcdp->declBit(c+953,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcounten_ir", false,-1);
        vcdp->declBus(c+240,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_r_data", false,-1, 31,0);
        vcdp->declBit(c+360,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_r_exc", false,-1);
        vcdp->declBit(c+361,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mstatus_up", false,-1);
        vcdp->declBit(c+362,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mie_up", false,-1);
        vcdp->declBit(c+363,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mscratch_up", false,-1);
        vcdp->declBit(c+364,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mepc_up", false,-1);
        vcdp->declBit(c+365,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcause_up", false,-1);
        vcdp->declBit(c+366,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mtval_up", false,-1);
        vcdp->declBit(c+367,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mtvec_up", false,-1);
        vcdp->declBus(c+368,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle_up", false,-1, 1,0);
        vcdp->declBus(c+369,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret_up", false,-1, 1,0);
        vcdp->declBit(c+952,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle_inc_lo", false,-1);
        vcdp->declBit(c+61,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle_inc_hi", false,-1);
        vcdp->declBit(c+370,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret_inc_lo", false,-1);
        vcdp->declBit(c+371,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret_inc_hi", false,-1);
        vcdp->declBit(c+372,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcounten_up", false,-1);
        vcdp->declBus(c+373,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_w_data", false,-1, 31,0);
        vcdp->declBit(c+374,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_w_exc", false,-1);
        vcdp->declBit(c+375,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr e_exc", false,-1);
        vcdp->declBit(c+376,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr e_irq", false,-1);
        vcdp->declBit(c+377,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr e_mret", false,-1);
        vcdp->declBit(c+555,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_hdu_req", false,-1);
        vcdp->declBit(c+556,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_brkm_req", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic clk", false,-1);
        vcdp->declBus(c+1045,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irq_lines", false,-1, 15,0);
        vcdp->declBit(c+250,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic csr2ipic_r_req", false,-1);
        vcdp->declBit(c+251,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic csr2ipic_w_req", false,-1);
        vcdp->declBus(c+252,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic csr2ipic_addr", false,-1, 2,0);
        vcdp->declBus(c+253,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic csr2ipic_wdata", false,-1, 31,0);
        vcdp->declBus(c+254,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic ipic2csr_rdata", false,-1, 31,0);
        vcdp->declBit(c+42,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irq_m_req", false,-1);
        vcdp->declBus(c+954,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irq_lines_i", false,-1, 15,0);
        vcdp->declBus(c+955,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irq_edge_det", false,-1, 15,0);
        vcdp->declBus(c+378,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irq_lvl", false,-1, 15,0);
        vcdp->declBus(c+956,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic invr", false,-1, 15,0);
        vcdp->declBus(c+379,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic invr_new", false,-1, 15,0);
        vcdp->declBus(c+1099,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irq_vect", false,-1, 15,0);
        vcdp->declBus(c+957,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic imr", false,-1, 15,0);
        vcdp->declBus(c+380,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic imr_new", false,-1, 15,0);
        vcdp->declBus(c+958,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic ipr", false,-1, 15,0);
        vcdp->declBus(c+381,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic ipr_new", false,-1, 15,0);
        vcdp->declBus(c+958,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic ipr_m", false,-1, 15,0);
        vcdp->declBus(c+382,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic ipr_clr", false,-1, 15,0);
        vcdp->declBus(c+959,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic ier", false,-1, 15,0);
        vcdp->declBus(c+960,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irr_m", false,-1, 15,0);
        vcdp->declBus(c+961,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic cisv_m", false,-1, 4,0);
        vcdp->declBus(c+962,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic idxr_m", false,-1, 3,0);
        vcdp->declBus(c+963,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic isvr_m", false,-1, 15,0);
        vcdp->declBit(c+383,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic soi_wr_m", false,-1);
        vcdp->declBit(c+384,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic eoi_wr_m", false,-1);
        vcdp->declBit(c+62,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic icsr_m ip", false,-1);
        vcdp->declBit(c+63,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic icsr_m ie", false,-1);
        vcdp->declBit(c+64,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic icsr_m im", false,-1);
        vcdp->declBit(c+65,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic icsr_m inv", false,-1);
        vcdp->declBit(c+66,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic icsr_m is", false,-1);
        vcdp->declBus(c+67,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic icsr_m line", false,-1, 3,0);
        vcdp->declBit(c+68,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic cicsr_m ip", false,-1);
        vcdp->declBit(c+69,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic cicsr_m ie", false,-1);
        vcdp->declBus(c+70,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic isvr_eoi_m", false,-1, 15,0);
        vcdp->declBus(c+964,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irq_lines_sync0", false,-1, 15,0);
        vcdp->declBit(c+385,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic unnamedblk8 cisv_found", false,-1);
        vcdp->declBus(c+386,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic unnamedblk8 unnamedblk9 i", false,-1, 31,0);
        vcdp->declBus(c+387,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic unnamedblk10 i", false,-1, 31,0);
        vcdp->declBus(c+1100,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic unnamedblk11 i", false,-1, 31,0);
        vcdp->declBus(c+1100,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic unnamedblk12 i", false,-1, 31,0);
        vcdp->declBus(c+965,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic unnamedblk13 i", false,-1, 31,0);
        vcdp->declBit(c+1056,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu clk", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu clk_en", false,-1);
        vcdp->declBit(c+1033,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu dsbl", false,-1);
        vcdp->declBit(c+258,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr2tdu_req", false,-1);
        vcdp->declBus(c+591,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr2tdu_cmd", false,-1, 1,0);
        vcdp->declBus(c+592,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr2tdu_addr", false,-1, 2,0);
        vcdp->declBus(c+259,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr2tdu_wdata", false,-1, 31,0);
        vcdp->declBus(c+256,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr2tdu_rdata", false,-1, 31,0);
        vcdp->declBit(c+257,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr2tdu_resp", false,-1);
        vcdp->declBit(c+269,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu exu2tdu_i_mon vd", false,-1);
        vcdp->declBit(c+270,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu exu2tdu_i_mon req", false,-1);
        vcdp->declBus(c+271,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu exu2tdu_i_mon addr", false,-1, 31,0);
        vcdp->declBus(c+263,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2exu_i_match", false,-1, 2,0);
        vcdp->declBit(c+265,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2exu_i_x_req", false,-1);
        vcdp->declBit(c+266,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2lsu_i_x_req", false,-1);
        vcdp->declBit(c+272,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2lsu_d_mon vd", false,-1);
        vcdp->declBit(c+273,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2lsu_d_mon load", false,-1);
        vcdp->declBit(c+274,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2lsu_d_mon store", false,-1);
        vcdp->declBus(c+275,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2lsu_d_mon addr", false,-1, 31,0);
        vcdp->declBus(c+264,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2lsu_d_match", false,-1, 1,0);
        vcdp->declBit(c+267,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2lsu_d_x_req", false,-1);
        vcdp->declBus(c+276,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu exu2tdu_bp_retire", false,-1, 2,0);
        vcdp->declBit(c+281,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2hdu_dmode_req", false,-1);
        vcdp->declBus(c+1088,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu MTRIG_NUM", false,-1, 31,0);
        vcdp->declBus(c+1101,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu ALLTRIG_NUM", false,-1, 31,0);
        vcdp->declBus(c+1088,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu ALLTRIG_W", false,-1, 31,0);
        vcdp->declBus(c+822,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tselect_ff", false,-1, 1,0);
        vcdp->declBus(c+723,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdata2(0)", false,-1, 31,0);
        vcdp->declBus(c+724,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdata2(1)", false,-1, 31,0);
        vcdp->declBit(c+388,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr_addr_tselect_cmb", false,-1);
        vcdp->declBus(c+389,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr_addr_mcontrol_cmb", false,-1, 1,0);
        vcdp->declBus(c+390,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr_addr_tdata2_cmb", false,-1, 1,0);
        vcdp->declBit(c+391,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr_wr_cmb", false,-1);
        vcdp->declBus(c+392,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr_wr_data_cmb", false,-1, 31,0);
        vcdp->declBus(c+393,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu clk_en_mcontrol_cmb", false,-1, 1,0);
        vcdp->declBus(c+823,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_dmode_ff", false,-1, 1,0);
        vcdp->declBus(c+394,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_execution_hit_cmb", false,-1, 1,0);
        vcdp->declBus(c+264,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_ldst_hit_cmb", false,-1, 1,0);
        vcdp->declBus(c+824,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_action_ff", false,-1, 1,0);
        vcdp->declBus(c+1102,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_match_ff(0)", false,-1, 1,0);
        vcdp->declBus(c+1103,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_match_ff(1)", false,-1, 1,0);
        vcdp->declBus(c+825,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_hit_ff", false,-1, 1,0);
        vcdp->declBus(c+826,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_m_ff", false,-1, 1,0);
        vcdp->declBus(c+827,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_execution_ff", false,-1, 1,0);
        vcdp->declBus(c+828,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_load_ff", false,-1, 1,0);
        vcdp->declBus(c+829,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_store_ff", false,-1, 1,0);
        vcdp->declBus(c+127,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_write_en", false,-1, 1,0);
        vcdp->declBit(c+395,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr_addr_icount_cmb", false,-1);
        vcdp->declBit(c+396,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu clk_en_icount_cmb", false,-1);
        vcdp->declBit(c+397,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_decrement_cmb", false,-1);
        vcdp->declBit(c+398,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_hit_cmb", false,-1);
        vcdp->declBit(c+830,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_skip_ff", false,-1);
        vcdp->declBit(c+831,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_dmode_ff", false,-1);
        vcdp->declBit(c+832,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_action_ff", false,-1);
        vcdp->declBit(c+833,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_hit_ff", false,-1);
        vcdp->declBit(c+834,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_m_ff", false,-1);
        vcdp->declBus(c+835,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_count_ff", false,-1, 13,0);
        vcdp->declBit(c+128,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_write_en", false,-1);
        vcdp->declBus(c+399,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+400,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+401,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu unnamedblk3 i", false,-1, 31,0);
        vcdp->declBus(c+1088,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu unnamedblk4 i", false,-1, 31,0);
        vcdp->declBus(c+1104,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu HART_PBUF_INSTR_REGOUT_EN", false,-1, 0,0);
        vcdp->declBit(c+1056,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu clk", false,-1);
        vcdp->declBit(c+1054,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu clk_en", false,-1);
        vcdp->declBit(c+279,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_req", false,-1);
        vcdp->declBus(c+593,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_cmd", false,-1, 1,0);
        vcdp->declBus(c+594,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_addr", false,-1, 1,0);
        vcdp->declBus(c+280,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_wdata", false,-1, 31,0);
        vcdp->declBit(c+36,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_resp", false,-1);
        vcdp->declBus(c+278,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_rdata", false,-1, 31,0);
        vcdp->declBit(c+564,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu pipe_rst_n_qlfy", false,-1);
        vcdp->declBit(c+850,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_cmd_req", false,-1);
        vcdp->declBus(c+851,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_cmd", false,-1, 1,0);
        vcdp->declBit(c+596,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_cmd_resp", false,-1);
        vcdp->declBit(c+598,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_cmd_rcode", false,-1);
        vcdp->declBit(c+819,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_hart_event", false,-1);
        vcdp->declBit(c+31,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_hart_status except", false,-1);
        vcdp->declBit(c+32,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_hart_status ebreak", false,-1);
        vcdp->declBus(c+33,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_hart_status dbg_state", false,-1, 1,0);
        vcdp->declBus(c+820,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_pbuf_addr", false,-1, 2,0);
        vcdp->declBus(c+571,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_pbuf_instr", false,-1, 31,0);
        vcdp->declBit(c+216,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_dreg_req", false,-1);
        vcdp->declBit(c+218,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_dreg_wr", false,-1);
        vcdp->declBus(c+220,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_dreg_wdata", false,-1, 31,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_dreg_resp", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_dreg_fail", false,-1);
        vcdp->declBus(c+716,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_dreg_rdata", false,-1, 31,0);
        vcdp->declBit(c+1033,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_hwbrk_dsbl", false,-1);
        vcdp->declBit(c+281,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_tm_dmode_req", false,-1);
        vcdp->declBit(c+231,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_brkpt_hw", false,-1);
        vcdp->declBit(c+480,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_exu_busy", false,-1);
        vcdp->declBit(c+481,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_instret", false,-1);
        vcdp->declBit(c+590,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_init_pc", false,-1);
        vcdp->declBit(c+287,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_exu_exc_req", false,-1);
        vcdp->declBit(c+288,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_brkpt", false,-1);
        vcdp->declBit(c+1032,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_fetch_pbuf", false,-1);
        vcdp->declBit(c+282,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_exu_no_commit", false,-1);
        vcdp->declBit(c+1034,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_exu_irq_dsbl", false,-1);
        vcdp->declBit(c+1035,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_exu_pc_advmt_dsbl", false,-1);
        vcdp->declBit(c+1036,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_exu_dmode_sstep_en", false,-1);
        vcdp->declBit(c+572,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_dbg_halted", false,-1);
        vcdp->declBit(c+283,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_dbg_run2halt", false,-1);
        vcdp->declBit(c+576,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_dbg_halt2run", false,-1);
        vcdp->declBit(c+573,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_dbg_run_start", false,-1);
        vcdp->declBus(c+98,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_pc", false,-1, 31,0);
        vcdp->declBus(c+821,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_new_pc", false,-1, 31,0);
        vcdp->declBit(c+285,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_pbuf_instr_rdy", false,-1);
        vcdp->declBit(c+284,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_pbuf_instr_vd", false,-1);
        vcdp->declBit(c+34,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_pbuf_instr_err", false,-1);
        vcdp->declBus(c+717,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_pbuf_instr", false,-1, 31,0);
        vcdp->declBus(c+1105,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu SCR1_HDU_TIMEOUT", false,-1, 31,0);
        vcdp->declBus(c+1106,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu SCR1_HDU_TIMEOUT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+836,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dbg_state", false,-1, 1,0);
        vcdp->declBus(c+600,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dbg_state_next", false,-1, 1,0);
        vcdp->declBit(c+837,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_trans", false,-1);
        vcdp->declBit(c+402,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_trans_next", false,-1);
        vcdp->declBit(c+838,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_update", false,-1);
        vcdp->declBit(c+403,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_update_next", false,-1);
        vcdp->declBit(c+819,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_event", false,-1);
        vcdp->declBit(c+601,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_event_next", false,-1);
        vcdp->declBit(c+602,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_csr_update", false,-1);
        vcdp->declBit(c+577,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_cmd_req", false,-1);
        vcdp->declBit(c+578,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_pbuf_start_fetch", false,-1);
        vcdp->declBit(c+579,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_rctl_wr", false,-1);
        vcdp->declBit(c+574,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_rctl_clr", false,-1);
        vcdp->declBit(c+839,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_haltstatus except", false,-1);
        vcdp->declBus(c+840,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_haltstatus cause", false,-1, 2,0);
        vcdp->declBus(c+482,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_haltcause", false,-1, 2,0);
        vcdp->declBit(c+580,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_halt_req", false,-1);
        vcdp->declBit(c+283,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_halt_ack", false,-1);
        vcdp->declBit(c+581,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_resume_req", false,-1);
        vcdp->declBit(c+1107,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_cmd_rcode", false,-1);
        vcdp->declBit(c+142,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_cmd_rctl", false,-1);
        vcdp->declBit(c+1037,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_runctrl irq_dsbl", false,-1);
        vcdp->declBit(c+1032,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_runctrl fetch_src", false,-1);
        vcdp->declBit(c+1038,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_runctrl pc_advmt_dsbl", false,-1);
        vcdp->declBit(c+1039,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_runctrl hwbrkpt_dsbl", false,-1);
        vcdp->declBit(c+1040,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_runctrl redirect sstep", false,-1);
        vcdp->declBit(c+1041,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_runctrl redirect ebreak", false,-1);
        vcdp->declBit(c+404,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dmode_cause_sstep", false,-1);
        vcdp->declBit(c+405,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dmode_cause_except", false,-1);
        vcdp->declBit(c+406,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dmode_cause_ebreak", false,-1);
        vcdp->declBit(c+407,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dmode_cause_tmreq", false,-1);
        vcdp->declBus(c+841,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dbgc_timeout_cnt", false,-1, 5,0);
        vcdp->declBit(c+842,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dbgc_timeout_flag", false,-1);
        vcdp->declBus(c+843,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu pbuf_state", false,-1, 1,0);
        vcdp->declBus(c+408,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu pbuf_state_next", false,-1, 1,0);
        vcdp->declBus(c+820,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu pbuf_addr", false,-1, 2,0);
        vcdp->declBus(c+409,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu pbuf_addr_next", false,-1, 2,0);
        vcdp->declBit(c+844,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu pbuf_instr_wait_latching", false,-1);
        vcdp->declBit(c+410,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_wr", false,-1);
        vcdp->declBus(c+220,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_wr_data", false,-1, 31,0);
        vcdp->declBus(c+278,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_rd_data", false,-1, 31,0);
        vcdp->declBit(c+411,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_sel", false,-1);
        vcdp->declBit(c+412,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_wr", false,-1);
        vcdp->declBus(c+413,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in xdebugver", false,-1, 3,0);
        vcdp->declBus(c+414,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in rsrv3", false,-1, 11,0);
        vcdp->declBit(c+415,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in ebreakm", false,-1);
        vcdp->declBus(c+416,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in rsrv2", false,-1, 2,0);
        vcdp->declBit(c+417,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in stepie", false,-1);
        vcdp->declBus(c+418,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in rsrv1", false,-1, 1,0);
        vcdp->declBus(c+419,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in cause", false,-1, 2,0);
        vcdp->declBus(c+420,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in rsrv0", false,-1, 2,0);
        vcdp->declBit(c+421,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in step", false,-1);
        vcdp->declBus(c+422,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in prv", false,-1, 1,0);
        vcdp->declBus(c+423,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out xdebugver", false,-1, 3,0);
        vcdp->declBus(c+424,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out rsrv3", false,-1, 11,0);
        vcdp->declBit(c+425,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out ebreakm", false,-1);
        vcdp->declBus(c+426,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out rsrv2", false,-1, 2,0);
        vcdp->declBit(c+427,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out stepie", false,-1);
        vcdp->declBus(c+428,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out rsrv1", false,-1, 1,0);
        vcdp->declBus(c+429,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out cause", false,-1, 2,0);
        vcdp->declBus(c+430,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out rsrv0", false,-1, 2,0);
        vcdp->declBit(c+431,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out step", false,-1);
        vcdp->declBus(c+432,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out prv", false,-1, 1,0);
        vcdp->declBit(c+1042,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_ebreakm", false,-1);
        vcdp->declBit(c+1043,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_stepie", false,-1);
        vcdp->declBit(c+1044,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_step", false,-1);
        vcdp->declBus(c+845,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_cause", false,-1, 2,0);
        vcdp->declBit(c+433,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dpc_sel", false,-1);
        vcdp->declBit(c+434,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dpc_wr", false,-1);
        vcdp->declBus(c+821,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dpc_reg", false,-1, 31,0);
        vcdp->declBus(c+220,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dpc_in", false,-1, 31,0);
        vcdp->declBus(c+35,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dpc_out", false,-1, 31,0);
        vcdp->declBit(c+216,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dscratch0_sel", false,-1);
        vcdp->declBit(c+1108,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dscratch0_wr", false,-1);
        vcdp->declBus(c+18,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dscratch0_out", false,-1, 31,0);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dscratch0_resp", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog clk", false,-1);
        vcdp->declBus(c+2,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog fuse_mhartid", false,-1, 31,0);
        vcdp->declBus(c+903,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(1)", false,-1, 31,0);
        vcdp->declBus(c+904,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(2)", false,-1, 31,0);
        vcdp->declBus(c+905,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(3)", false,-1, 31,0);
        vcdp->declBus(c+906,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(4)", false,-1, 31,0);
        vcdp->declBus(c+907,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(5)", false,-1, 31,0);
        vcdp->declBus(c+908,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(6)", false,-1, 31,0);
        vcdp->declBus(c+909,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(7)", false,-1, 31,0);
        vcdp->declBus(c+910,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(8)", false,-1, 31,0);
        vcdp->declBus(c+911,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(9)", false,-1, 31,0);
        vcdp->declBus(c+912,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(10)", false,-1, 31,0);
        vcdp->declBus(c+913,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(11)", false,-1, 31,0);
        vcdp->declBus(c+914,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(12)", false,-1, 31,0);
        vcdp->declBus(c+915,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(13)", false,-1, 31,0);
        vcdp->declBus(c+916,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(14)", false,-1, 31,0);
        vcdp->declBus(c+917,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(15)", false,-1, 31,0);
        vcdp->declBus(c+918,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(16)", false,-1, 31,0);
        vcdp->declBus(c+919,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(17)", false,-1, 31,0);
        vcdp->declBus(c+920,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(18)", false,-1, 31,0);
        vcdp->declBus(c+921,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(19)", false,-1, 31,0);
        vcdp->declBus(c+922,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(20)", false,-1, 31,0);
        vcdp->declBus(c+923,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(21)", false,-1, 31,0);
        vcdp->declBus(c+924,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(22)", false,-1, 31,0);
        vcdp->declBus(c+925,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(23)", false,-1, 31,0);
        vcdp->declBus(c+926,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(24)", false,-1, 31,0);
        vcdp->declBus(c+927,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(25)", false,-1, 31,0);
        vcdp->declBus(c+928,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(26)", false,-1, 31,0);
        vcdp->declBus(c+929,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(27)", false,-1, 31,0);
        vcdp->declBus(c+930,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(28)", false,-1, 31,0);
        vcdp->declBus(c+931,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(29)", false,-1, 31,0);
        vcdp->declBus(c+932,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(30)", false,-1, 31,0);
        vcdp->declBus(c+933,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(31)", false,-1, 31,0);
        vcdp->declBit(c+237,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_wr_en", false,-1);
        vcdp->declBus(c+519,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_wr_addr", false,-1, 4,0);
        vcdp->declBus(c+238,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_wr_data", false,-1, 31,0);
        vcdp->declBit(c+78,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog update_pc_en", false,-1);
        vcdp->declBus(c+479,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog update_pc", false,-1, 31,0);
        vcdp->declBit(c+934,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mstatus_mie", false,-1);
        vcdp->declBit(c+935,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mstatus_mpie", false,-1);
        vcdp->declBus(c+944,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mtvec_base", false,-1, 31,6);
        vcdp->declBit(c+945,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mtvec_mode", false,-1);
        vcdp->declBit(c+937,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mie_meie", false,-1);
        vcdp->declBit(c+936,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mie_mtie", false,-1);
        vcdp->declBit(c+938,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mie_msie", false,-1);
        vcdp->declBit(c+42,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mip_meip", false,-1);
        vcdp->declBit(c+871,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mip_mtip", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mip_msip", false,-1);
        vcdp->declBus(c+940,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mepc", false,-1, 31,1);
        vcdp->declBit(c+941,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mcause_i", false,-1);
        vcdp->declBus(c+942,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mcause_ec", false,-1, 3,0);
        vcdp->declBus(c+943,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mtval", false,-1, 31,0);
        vcdp->declBit(c+249,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mstatus_mie_up", false,-1);
        vcdp->declBus(c+966,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog time_cnt", false,-1, 31,0);
        vcdp->declBit(c+79,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog trace_update", false,-1);
        vcdp->declBit(c+967,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog trace_update_r", false,-1);
        vcdp->declBus(c+1031,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog curr_pc_log", false,-1, 31,0);
        vcdp->declBus(c+968,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(1)", false,-1, 31,0);
        vcdp->declBus(c+969,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(2)", false,-1, 31,0);
        vcdp->declBus(c+970,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(3)", false,-1, 31,0);
        vcdp->declBus(c+971,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(4)", false,-1, 31,0);
        vcdp->declBus(c+972,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(5)", false,-1, 31,0);
        vcdp->declBus(c+973,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(6)", false,-1, 31,0);
        vcdp->declBus(c+974,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(7)", false,-1, 31,0);
        vcdp->declBus(c+975,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(8)", false,-1, 31,0);
        vcdp->declBus(c+976,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(9)", false,-1, 31,0);
        vcdp->declBus(c+977,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(10)", false,-1, 31,0);
        vcdp->declBus(c+978,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(11)", false,-1, 31,0);
        vcdp->declBus(c+979,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(12)", false,-1, 31,0);
        vcdp->declBus(c+980,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(13)", false,-1, 31,0);
        vcdp->declBus(c+981,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(14)", false,-1, 31,0);
        vcdp->declBus(c+982,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(15)", false,-1, 31,0);
        vcdp->declBus(c+983,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(16)", false,-1, 31,0);
        vcdp->declBus(c+984,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(17)", false,-1, 31,0);
        vcdp->declBus(c+985,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(18)", false,-1, 31,0);
        vcdp->declBus(c+986,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(19)", false,-1, 31,0);
        vcdp->declBus(c+987,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(20)", false,-1, 31,0);
        vcdp->declBus(c+988,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(21)", false,-1, 31,0);
        vcdp->declBus(c+989,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(22)", false,-1, 31,0);
        vcdp->declBus(c+990,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(23)", false,-1, 31,0);
        vcdp->declBus(c+991,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(24)", false,-1, 31,0);
        vcdp->declBus(c+992,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(25)", false,-1, 31,0);
        vcdp->declBus(c+993,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(26)", false,-1, 31,0);
        vcdp->declBus(c+994,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(27)", false,-1, 31,0);
        vcdp->declBus(c+995,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(28)", false,-1, 31,0);
        vcdp->declBus(c+996,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(29)", false,-1, 31,0);
        vcdp->declBus(c+997,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(30)", false,-1, 31,0);
        vcdp->declBus(c+998,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(31)", false,-1, 31,0);
        vcdp->declBit(c+999,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_up", false,-1);
        vcdp->declBus(c+1000,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_addr", false,-1, 4,0);
        vcdp->declBit(c+11,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog tracelog_full", false,-1);
        vcdp->declBus(c+1001,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog trace_fhandler", false,-1, 31,0);
        vcdp->declBus(c+1109,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog trace_fhandler_diff", false,-1, 31,0);
        vcdp->declBus(c+1002,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog time_cnt2", false,-1, 31,0);
        vcdp->declBus(c+12,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog temp_fhandler", false,-1, 31,0);
        vcdp->declBus(c+1003,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog trace_csr_fhandler", false,-1, 31,0);
        vcdp->declBus(c+71,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace1 mstatus", false,-1, 31,0);
        vcdp->declBus(c+72,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace1 mtvec", false,-1, 31,0);
        vcdp->declBus(c+73,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace1 mie", false,-1, 31,0);
        vcdp->declBus(c+74,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace1 mip", false,-1, 31,0);
        vcdp->declBus(c+75,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace1 mepc", false,-1, 31,0);
        vcdp->declBus(c+76,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace1 mcause", false,-1, 31,0);
        vcdp->declBus(c+77,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace1 mtval", false,-1, 31,0);
        vcdp->declBus(c+1004,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace2 mstatus", false,-1, 31,0);
        vcdp->declBus(c+1005,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace2 mtvec", false,-1, 31,0);
        vcdp->declBus(c+1006,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace2 mie", false,-1, 31,0);
        vcdp->declBus(c+1007,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace2 mip", false,-1, 31,0);
        vcdp->declBus(c+1008,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace2 mepc", false,-1, 31,0);
        vcdp->declBus(c+1009,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace2 mcause", false,-1, 31,0);
        vcdp->declBus(c+1010,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace2 mtval", false,-1, 31,0);
        vcdp->declBit(c+487,"scr1_top_tb_ahb i_top i_core_top i_tapc trst_n", false,-1);
        vcdp->declBit(c+6,"scr1_top_tb_ahb i_top i_core_top i_tapc tck", false,-1);
        vcdp->declBit(c+7,"scr1_top_tb_ahb i_top i_core_top i_tapc tms", false,-1);
        vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top i_tapc tdi", false,-1);
        vcdp->declBit(c+605,"scr1_top_tb_ahb i_top i_core_top i_tapc tdo", false,-1);
        vcdp->declBit(c+606,"scr1_top_tb_ahb i_top i_core_top i_tapc tdo_en", false,-1);
        vcdp->declBus(c+1083,"scr1_top_tb_ahb i_top i_core_top i_tapc fuse_idcode", false,-1, 31,0);
        vcdp->declBit(c+121,"scr1_top_tb_ahb i_top i_core_top i_tapc scu_ch_sel", false,-1);
        vcdp->declBit(c+119,"scr1_top_tb_ahb i_top i_core_top i_tapc dmi_ch_sel", false,-1);
        vcdp->declBus(c+120,"scr1_top_tb_ahb i_top i_core_top i_tapc dmi_ch_id", false,-1, 1,0);
        vcdp->declBit(c+1024,"scr1_top_tb_ahb i_top i_core_top i_tapc dmi_ch_capture", false,-1);
        vcdp->declBit(c+1025,"scr1_top_tb_ahb i_top i_core_top i_tapc dmi_ch_shift", false,-1);
        vcdp->declBit(c+1026,"scr1_top_tb_ahb i_top i_core_top i_tapc dmi_ch_update", false,-1);
        vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top i_tapc dmi_ch_tdi", false,-1);
        vcdp->declBit(c+815,"scr1_top_tb_ahb i_top i_core_top i_tapc dmi_ch_tdo", false,-1);
        vcdp->declBit(c+1051,"scr1_top_tb_ahb i_top i_core_top i_tapc trst_n_int", false,-1);
        vcdp->declBus(c+607,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_ir_reg", false,-1, 4,0);
        vcdp->declBus(c+608,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_ir_next", false,-1, 4,0);
        vcdp->declBus(c+609,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_ir_shift_reg", false,-1, 4,0);
        vcdp->declBus(c+1066,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_state_reg", false,-1, 3,0);
        vcdp->declBus(c+156,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_state_next", false,-1, 3,0);
        vcdp->declBit(c+122,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_out", false,-1);
        vcdp->declBit(c+123,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_bypass_sel", false,-1);
        vcdp->declBit(c+124,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_idcode_sel", false,-1);
        vcdp->declBit(c+125,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_bld_id_sel", false,-1);
        vcdp->declBus(c+610,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_bld_id_reg_nc", false,-1, 31,0);
        vcdp->declBus(c+611,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_idcode_reg_nc", false,-1, 31,0);
        vcdp->declBit(c+612,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_bypass_reg_nc", false,-1);
        vcdp->declBit(c+613,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_bld_id_tdo", false,-1);
        vcdp->declBit(c+614,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_bypass_tdo", false,-1);
        vcdp->declBit(c+615,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_idcode_tdo", false,-1);
        vcdp->declBit(c+616,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_fsm_ir_shift", false,-1);
        vcdp->declBit(c+1024,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_fsm_dr_capture", false,-1);
        vcdp->declBit(c+1025,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_fsm_dr_shift", false,-1);
        vcdp->declBit(c+1026,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_fsm_dr_update", false,-1);
        vcdp->declBit(c+126,"scr1_top_tb_ahb i_top i_core_top i_tapc tdo_mux_out", false,-1);
        vcdp->declBit(c+605,"scr1_top_tb_ahb i_top i_core_top i_tapc tdo_mux_out_reg", false,-1);
        vcdp->declBit(c+99,"scr1_top_tb_ahb i_top i_core_top i_tapc tdo_mux_en", false,-1);
        vcdp->declBit(c+606,"scr1_top_tb_ahb i_top i_core_top i_tapc tdo_mux_en_reg", false,-1);
        vcdp->declBus(c+1110,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg SCR1_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg SCR1_RESET_VALUE", false,-1, 0,0);
        vcdp->declBit(c+6,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg clk", false,-1);
        vcdp->declBit(c+487,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg rst_n", false,-1);
        vcdp->declBit(c+1051,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg rst_n_sync", false,-1);
        vcdp->declBit(c+123,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg fsm_dr_select", false,-1);
        vcdp->declBit(c+1024,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg fsm_dr_capture", false,-1);
        vcdp->declBit(c+1025,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg fsm_dr_shift", false,-1);
        vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg din_serial", false,-1);
        vcdp->declBus(c+1079,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg din_parallel", false,-1, 0,0);
        vcdp->declBit(c+614,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg dout_serial", false,-1);
        vcdp->declBus(c+612,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg dout_parallel", false,-1, 0,0);
        vcdp->declBus(c+612,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg shift_reg", false,-1, 0,0);
        vcdp->declBus(c+1112,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg SCR1_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1113,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg SCR1_RESET_VALUE", false,-1, 31,0);
        vcdp->declBit(c+6,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg clk", false,-1);
        vcdp->declBit(c+487,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg rst_n", false,-1);
        vcdp->declBit(c+1051,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg rst_n_sync", false,-1);
        vcdp->declBit(c+124,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg fsm_dr_select", false,-1);
        vcdp->declBit(c+1024,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg fsm_dr_capture", false,-1);
        vcdp->declBit(c+1025,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg fsm_dr_shift", false,-1);
        vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg din_serial", false,-1);
        vcdp->declBus(c+1083,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg din_parallel", false,-1, 31,0);
        vcdp->declBit(c+615,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg dout_serial", false,-1);
        vcdp->declBus(c+611,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg dout_parallel", false,-1, 31,0);
        vcdp->declBus(c+611,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg shift_reg", false,-1, 31,0);
        vcdp->declBus(c+1112,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg SCR1_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1113,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg SCR1_RESET_VALUE", false,-1, 31,0);
        vcdp->declBit(c+6,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg clk", false,-1);
        vcdp->declBit(c+487,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg rst_n", false,-1);
        vcdp->declBit(c+1051,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg rst_n_sync", false,-1);
        vcdp->declBit(c+125,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg fsm_dr_select", false,-1);
        vcdp->declBit(c+1024,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg fsm_dr_capture", false,-1);
        vcdp->declBit(c+1025,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg fsm_dr_shift", false,-1);
        vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg din_serial", false,-1);
        vcdp->declBus(c+1114,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg din_parallel", false,-1, 31,0);
        vcdp->declBit(c+613,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg dout_serial", false,-1);
        vcdp->declBus(c+610,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg dout_parallel", false,-1, 31,0);
        vcdp->declBus(c+610,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg shift_reg", false,-1, 31,0);
        vcdp->declBit(c+566,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer pwrup_rst_n", false,-1);
        vcdp->declBit(c+1067,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dm_rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer clk", false,-1);
        vcdp->declBit(c+487,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer trst_n", false,-1);
        vcdp->declBit(c+6,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck", false,-1);
        vcdp->declBit(c+121,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer scu_ch_sel", false,-1);
        vcdp->declBit(c+783,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer scu_ch_sel_core", false,-1);
        vcdp->declBit(c+119,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_sel", false,-1);
        vcdp->declBit(c+847,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_sel_core", false,-1);
        vcdp->declBus(c+120,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_id", false,-1, 1,0);
        vcdp->declBus(c+848,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_id_core", false,-1, 1,0);
        vcdp->declBit(c+1024,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_capture", false,-1);
        vcdp->declBit(c+1028,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_capture_core", false,-1);
        vcdp->declBit(c+1025,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_shift", false,-1);
        vcdp->declBit(c+1029,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_shift_core", false,-1);
        vcdp->declBit(c+1026,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_update", false,-1);
        vcdp->declBit(c+781,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_update_core", false,-1);
        vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_tdi", false,-1);
        vcdp->declBit(c+782,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_tdi_core", false,-1);
        vcdp->declBit(c+815,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_tdo", false,-1);
        vcdp->declBit(c+815,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_tdo_core", false,-1);
        vcdp->declBit(c+1027,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_divpos", false,-1);
        vcdp->declBit(c+1023,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_divneg", false,-1);
        vcdp->declBit(c+100,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_rise_load", false,-1);
        vcdp->declBit(c+101,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_rise_reset", false,-1);
        vcdp->declBit(c+810,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_fall_load", false,-1);
        vcdp->declBit(c+811,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_fall_reset", false,-1);
        vcdp->declBus(c+812,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_divpos_sync", false,-1, 3,0);
        vcdp->declBus(c+813,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_divneg_sync", false,-1, 3,0);
        vcdp->declBus(c+1052,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_capture_sync", false,-1, 2,0);
        vcdp->declBus(c+1053,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_shift_sync", false,-1, 2,0);
        vcdp->declBus(c+814,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_tdi_sync", false,-1, 2,0);
        vcdp->declBit(c+1067,"scr1_top_tb_ahb i_top i_core_top i_dmi rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_dmi clk", false,-1);
        vcdp->declBit(c+847,"scr1_top_tb_ahb i_top i_core_top i_dmi dtm_ch_sel", false,-1);
        vcdp->declBus(c+848,"scr1_top_tb_ahb i_top i_core_top i_dmi dtm_ch_id", false,-1, 1,0);
        vcdp->declBit(c+1028,"scr1_top_tb_ahb i_top i_core_top i_dmi dtm_ch_capture", false,-1);
        vcdp->declBit(c+1029,"scr1_top_tb_ahb i_top i_core_top i_dmi dtm_ch_shift", false,-1);
        vcdp->declBit(c+781,"scr1_top_tb_ahb i_top i_core_top i_dmi dtm_ch_update", false,-1);
        vcdp->declBit(c+782,"scr1_top_tb_ahb i_top i_core_top i_dmi dtm_ch_tdi", false,-1);
        vcdp->declBit(c+849,"scr1_top_tb_ahb i_top i_core_top i_dmi dtm_ch_tdo", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top i_dmi dmi_resp", false,-1);
        vcdp->declBus(c+159,"scr1_top_tb_ahb i_top i_core_top i_dmi dmi_rdata", false,-1, 31,0);
        vcdp->declBit(c+102,"scr1_top_tb_ahb i_top i_core_top i_dmi dmi_req", false,-1);
        vcdp->declBit(c+157,"scr1_top_tb_ahb i_top i_core_top i_dmi dmi_wr", false,-1);
        vcdp->declBus(c+103,"scr1_top_tb_ahb i_top i_core_top i_dmi dmi_addr", false,-1, 6,0);
        vcdp->declBus(c+158,"scr1_top_tb_ahb i_top i_core_top i_dmi dmi_wdata", false,-1, 31,0);
        vcdp->declBus(c+1115,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_RESERVEDB_HI", false,-1, 4,0);
        vcdp->declBus(c+1116,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_RESERVEDB_LO", false,-1, 4,0);
        vcdp->declBus(c+1117,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_DMIHARDRESET", false,-1, 4,0);
        vcdp->declBus(c+1118,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_DMIRESET", false,-1, 4,0);
        vcdp->declBus(c+1119,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_RESERVEDA", false,-1, 4,0);
        vcdp->declBus(c+1120,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_IDLE_HI", false,-1, 4,0);
        vcdp->declBus(c+1121,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_IDLE_LO", false,-1, 4,0);
        vcdp->declBus(c+1122,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_DMISTAT_HI", false,-1, 4,0);
        vcdp->declBus(c+1123,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_DMISTAT_LO", false,-1, 4,0);
        vcdp->declBus(c+1124,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_ABITS_HI", false,-1, 4,0);
        vcdp->declBus(c+1125,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_ABITS_LO", false,-1, 4,0);
        vcdp->declBus(c+1126,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_VERSION_HI", false,-1, 4,0);
        vcdp->declBus(c+1093,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_VERSION_LO", false,-1, 4,0);
        vcdp->declBit(c+1127,"scr1_top_tb_ahb i_top i_core_top i_dmi dtmcs_dmihardreset_cmb", false,-1);
        vcdp->declBit(c+1128,"scr1_top_tb_ahb i_top i_core_top i_dmi dtmcs_dmireset_cmb", false,-1);
        vcdp->declBus(c+1093,"scr1_top_tb_ahb i_top i_core_top i_dmi DMI_OP_LO", false,-1, 4,0);
        vcdp->declBus(c+1129,"scr1_top_tb_ahb i_top i_core_top i_dmi DMI_OP_HI", false,-1, 31,0);
        vcdp->declBus(c+1130,"scr1_top_tb_ahb i_top i_core_top i_dmi DMI_DATA_LO", false,-1, 31,0);
        vcdp->declBus(c+1131,"scr1_top_tb_ahb i_top i_core_top i_dmi DMI_DATA_HI", false,-1, 31,0);
        vcdp->declBus(c+1132,"scr1_top_tb_ahb i_top i_core_top i_dmi DMI_ADDR_LO", false,-1, 31,0);
        vcdp->declBus(c+1133,"scr1_top_tb_ahb i_top i_core_top i_dmi DMI_ADDR_HI", false,-1, 31,0);
        vcdp->declBus(c+852,"scr1_top_tb_ahb i_top i_core_top i_dmi dmi_rdata_ff", false,-1, 31,0);
        vcdp->declQuad(c+104,"scr1_top_tb_ahb i_top i_core_top i_dmi tap_dr_shift_cmb", false,-1, 40,0);
        vcdp->declQuad(c+38,"scr1_top_tb_ahb i_top i_core_top i_dmi tap_dr_rdata_cmb", false,-1, 40,0);
        vcdp->declQuad(c+853,"scr1_top_tb_ahb i_top i_core_top i_dmi tap_dr_ff", false,-1, 40,0);
        vcdp->declBit(c+118,"scr1_top_tb_ahb i_top i_core_top i_dmi clk_en_dmi_rdata_cmb", false,-1);
        vcdp->declBit(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dmi clk_en_tap_dr_cmb", false,-1);
        vcdp->declBit(c+1067,"scr1_top_tb_ahb i_top i_core_top i_dm rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_core_top i_dm clk", false,-1);
        vcdp->declBit(c+102,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req", false,-1);
        vcdp->declBit(c+157,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_wr", false,-1);
        vcdp->declBus(c+103,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_addr", false,-1, 6,0);
        vcdp->declBus(c+158,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_wdata", false,-1, 31,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_resp", false,-1);
        vcdp->declBus(c+159,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_rdata", false,-1, 31,0);
        vcdp->declBit(c+846,"scr1_top_tb_ahb i_top i_core_top i_dm ndm_rst_n", false,-1);
        vcdp->declBit(c+846,"scr1_top_tb_ahb i_top i_core_top i_dm hart_rst_n", false,-1);
        vcdp->declBit(c+1054,"scr1_top_tb_ahb i_top i_core_top i_dm hart_dmactive", false,-1);
        vcdp->declBit(c+850,"scr1_top_tb_ahb i_top i_core_top i_dm hart_cmd_req", false,-1);
        vcdp->declBus(c+851,"scr1_top_tb_ahb i_top i_core_top i_dm hart_cmd", false,-1, 1,0);
        vcdp->declBit(c+597,"scr1_top_tb_ahb i_top i_core_top i_dm hart_cmd_resp", false,-1);
        vcdp->declBit(c+599,"scr1_top_tb_ahb i_top i_core_top i_dm hart_cmd_rcode", false,-1);
        vcdp->declBit(c+37,"scr1_top_tb_ahb i_top i_core_top i_dm hart_event", false,-1);
        vcdp->declBit(c+567,"scr1_top_tb_ahb i_top i_core_top i_dm hart_status except", false,-1);
        vcdp->declBit(c+568,"scr1_top_tb_ahb i_top i_core_top i_dm hart_status ebreak", false,-1);
        vcdp->declBus(c+569,"scr1_top_tb_ahb i_top i_core_top i_dm hart_status dbg_state", false,-1, 1,0);
        vcdp->declBus(c+2,"scr1_top_tb_ahb i_top i_core_top i_dm ro_fuse_mhartid", false,-1, 31,0);
        vcdp->declBus(c+98,"scr1_top_tb_ahb i_top i_core_top i_dm ro_pc", false,-1, 31,0);
        vcdp->declBus(c+570,"scr1_top_tb_ahb i_top i_core_top i_dm hart_pbuf_addr", false,-1, 2,0);
        vcdp->declBus(c+571,"scr1_top_tb_ahb i_top i_core_top i_dm hart_pbuf_instr", false,-1, 31,0);
        vcdp->declBit(c+217,"scr1_top_tb_ahb i_top i_core_top i_dm hart_dreg_req", false,-1);
        vcdp->declBit(c+219,"scr1_top_tb_ahb i_top i_core_top i_dm hart_dreg_wr", false,-1);
        vcdp->declBus(c+221,"scr1_top_tb_ahb i_top i_core_top i_dm hart_dreg_wdata", false,-1, 31,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_core_top i_dm hart_dreg_resp", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_core_top i_dm hart_dreg_fail", false,-1);
        vcdp->declBus(c+716,"scr1_top_tb_ahb i_top i_core_top i_dm hart_dreg_rdata", false,-1, 31,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMCONTROL_HARTRESET", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMCONTROL_RESERVEDB", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMCONTROL_HASEL", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMCONTROL_HARTSELLO", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMCONTROL_HARTSELHI", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMCONTROL_RESERVEDA", false,-1, 0,0);
        vcdp->declBit(c+855,"scr1_top_tb_ahb i_top i_core_top i_dm dmcontrol_haltreq_ff", false,-1);
        vcdp->declBit(c+856,"scr1_top_tb_ahb i_top i_core_top i_dm dmcontrol_resumereq_ff", false,-1);
        vcdp->declBit(c+857,"scr1_top_tb_ahb i_top i_core_top i_dm dmcontrol_ackhavereset_ff", false,-1);
        vcdp->declBit(c+858,"scr1_top_tb_ahb i_top i_core_top i_dm dmcontrol_ndmreset_ff", false,-1);
        vcdp->declBit(c+1055,"scr1_top_tb_ahb i_top i_core_top i_dm dmcontrol_dmactive_ff", false,-1);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_RESERVEDC", false,-1, 0,0);
        vcdp->declBus(c+1104,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_IMPEBREAK", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_RESERVEDB", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_ALLUNAVAIL", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_ANYUNAVAIL", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_ALLANYUNAVAIL", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_ALLANYNONEXIST", false,-1, 0,0);
        vcdp->declBus(c+1104,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_AUTHENTICATED", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_AUTHBUSY", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_RESERVEDA", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_DEVTREEVALID", false,-1, 0,0);
        vcdp->declBus(c+1134,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_VERSION", false,-1, 1,0);
        vcdp->declBit(c+859,"scr1_top_tb_ahb i_top i_core_top i_dm dmstatus_allany_havereset_ff", false,-1);
        vcdp->declBit(c+860,"scr1_top_tb_ahb i_top i_core_top i_dm havereset_skip_pwrup_ff", false,-1);
        vcdp->declBit(c+861,"scr1_top_tb_ahb i_top i_core_top i_dm dmstatus_allany_resumeack_ff", false,-1);
        vcdp->declBit(c+1135,"scr1_top_tb_ahb i_top i_core_top i_dm dmstatus_allany_running", false,-1);
        vcdp->declBit(c+862,"scr1_top_tb_ahb i_top i_core_top i_dm dmstatus_allany_halted_ff", false,-1);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm HARTINFO_RESERVEDB", false,-1, 0,0);
        vcdp->declBus(c+1136,"scr1_top_tb_ahb i_top i_core_top i_dm HARTINFO_NSCRATCH", false,-1, 3,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm HARTINFO_RESERVEDA", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm HARTINFO_DATAACCESS", false,-1, 0,0);
        vcdp->declBus(c+1136,"scr1_top_tb_ahb i_top i_core_top i_dm HARTINFO_DATASIZE", false,-1, 3,0);
        vcdp->declBus(c+1137,"scr1_top_tb_ahb i_top i_core_top i_dm HARTINFO_DATAADDR", false,-1, 11,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm ABSTRACTCS_RESERVEDD", false,-1, 0,0);
        vcdp->declBus(c+1138,"scr1_top_tb_ahb i_top i_core_top i_dm ABSTRACTCS_PROGBUFSIZE", false,-1, 4,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm ABSTRACTCS_RESERVEDC", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm ABSTRACTCS_RESERVEDB", false,-1, 0,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm ABSTRACTCS_RESERVEDA", false,-1, 0,0);
        vcdp->declBus(c+1139,"scr1_top_tb_ahb i_top i_core_top i_dm ABSTRACTCS_DATACOUNT", false,-1, 3,0);
        vcdp->declBit(c+725,"scr1_top_tb_ahb i_top i_core_top i_dm abstractcs_busy", false,-1);
        vcdp->declBus(c+726,"scr1_top_tb_ahb i_top i_core_top i_dm abstractcs_cmderr_ff", false,-1, 2,0);
        vcdp->declBit(c+1140,"scr1_top_tb_ahb i_top i_core_top i_dm abstractcs_ro_en", false,-1);
        vcdp->declBit(c+727,"scr1_top_tb_ahb i_top i_core_top i_dm abstractauto_execdata0_ff", false,-1);
        vcdp->declBus(c+728,"scr1_top_tb_ahb i_top i_core_top i_dm data0_ff", false,-1, 31,0);
        vcdp->declBus(c+729,"scr1_top_tb_ahb i_top i_core_top i_dm data1_ff", false,-1, 31,0);
        vcdp->declBus(c+730,"scr1_top_tb_ahb i_top i_core_top i_dm command_ff", false,-1, 31,0);
        vcdp->declBus(c+731,"scr1_top_tb_ahb i_top i_core_top i_dm progbuf0_ff", false,-1, 31,0);
        vcdp->declBus(c+732,"scr1_top_tb_ahb i_top i_core_top i_dm progbuf1_ff", false,-1, 31,0);
        vcdp->declBus(c+733,"scr1_top_tb_ahb i_top i_core_top i_dm progbuf2_ff", false,-1, 31,0);
        vcdp->declBus(c+734,"scr1_top_tb_ahb i_top i_core_top i_dm progbuf3_ff", false,-1, 31,0);
        vcdp->declBus(c+735,"scr1_top_tb_ahb i_top i_core_top i_dm progbuf4_ff", false,-1, 31,0);
        vcdp->declBus(c+736,"scr1_top_tb_ahb i_top i_core_top i_dm progbuf5_ff", false,-1, 31,0);
        vcdp->declBus(c+1111,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_CMD_HARTREG", false,-1, 0,0);
        vcdp->declBus(c+1134,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_CMD_HARTMEM", false,-1, 1,0);
        vcdp->declBus(c+1141,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_CMD_HARTREG_CSR", false,-1, 3,0);
        vcdp->declBus(c+1136,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_CMD_HARTREG_INTFPU", false,-1, 3,0);
        vcdp->declBus(c+1142,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_CMD_HARTREG_INT", false,-1, 6,0);
        vcdp->declBus(c+1143,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_CMD_HARTREG_FPU", false,-1, 6,0);
        vcdp->declBus(c+1144,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_EXEC_EBREAK", false,-1, 31,0);
        vcdp->declBus(c+1104,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_ERR_BUSY", false,-1, 0,0);
        vcdp->declBus(c+1134,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_ERR_CMD", false,-1, 1,0);
        vcdp->declBus(c+1145,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_ERR_EXCEPTION", false,-1, 1,0);
        vcdp->declBus(c+1146,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_ERR_NOHALT", false,-1, 2,0);
        vcdp->declBit(c+160,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_dmcontrol_cmb", false,-1);
        vcdp->declBit(c+106,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_abstractcs_cmb", false,-1);
        vcdp->declBit(c+107,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_abstractauto_cmb", false,-1);
        vcdp->declBit(c+108,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_command_cmb", false,-1);
        vcdp->declBit(c+109,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_rpt_command_cmb", false,-1);
        vcdp->declBit(c+110,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_data0_cmb", false,-1);
        vcdp->declBit(c+111,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_data1_cmb", false,-1);
        vcdp->declBit(c+112,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_progbuf0_cmb", false,-1);
        vcdp->declBit(c+113,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_progbuf1_cmb", false,-1);
        vcdp->declBit(c+114,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_progbuf2_cmb", false,-1);
        vcdp->declBit(c+115,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_progbuf3_cmb", false,-1);
        vcdp->declBit(c+116,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_progbuf4_cmb", false,-1);
        vcdp->declBit(c+117,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_progbuf5_cmb", false,-1);
        vcdp->declBus(c+582,"scr1_top_tb_ahb i_top i_core_top i_dm abs_fsm_cmb", false,-1, 3,0);
        vcdp->declBus(c+737,"scr1_top_tb_ahb i_top i_core_top i_dm abs_fsm_ff", false,-1, 3,0);
        vcdp->declBit(c+583,"scr1_top_tb_ahb i_top i_core_top i_dm abs_exec_req_cmb", false,-1);
        vcdp->declBit(c+738,"scr1_top_tb_ahb i_top i_core_top i_dm abs_exec_req_ff", false,-1);
        vcdp->declBus(c+16,"scr1_top_tb_ahb i_top i_core_top i_dm abs_exec_instr_cmb", false,-1, 31,0);
        vcdp->declBus(c+739,"scr1_top_tb_ahb i_top i_core_top i_dm abs_exec_instr_ff", false,-1, 31,0);
        vcdp->declBus(c+161,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_cmb", false,-1, 7,0);
        vcdp->declBit(c+162,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_csr_ro_cmb", false,-1);
        vcdp->declBit(c+163,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regacs_cmb", false,-1);
        vcdp->declBus(c+164,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regtype_cmb", false,-1, 3,0);
        vcdp->declBus(c+165,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regfile_cmb", false,-1, 6,0);
        vcdp->declBit(c+166,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regwr_cmb", false,-1);
        vcdp->declBus(c+167,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regno_cmb", false,-1, 11,0);
        vcdp->declBus(c+168,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regsize_cmb", false,-1, 2,0);
        vcdp->declBit(c+169,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regsize_valid_cmb", false,-1);
        vcdp->declBit(c+170,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regvalid_cmb", false,-1);
        vcdp->declBit(c+171,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_execprogbuf_cmb", false,-1);
        vcdp->declBit(c+172,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_memvalid_cmb", false,-1);
        vcdp->declBit(c+173,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_memwr_cmb", false,-1);
        vcdp->declBus(c+174,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_memsize_cmb", false,-1, 2,0);
        vcdp->declBit(c+175,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_memsize_valid_cmb", false,-1);
        vcdp->declBit(c+740,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_wr_ff", false,-1);
        vcdp->declBit(c+584,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_wr_cmb", false,-1);
        vcdp->declBit(c+741,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_postexec_ff", false,-1);
        vcdp->declBit(c+585,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_postexec_cmb", false,-1);
        vcdp->declBus(c+742,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_size_ff", false,-1, 1,0);
        vcdp->declBus(c+586,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_size_cmb", false,-1, 1,0);
        vcdp->declBus(c+743,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regno_ff", false,-1, 11,0);
        vcdp->declBit(c+19,"scr1_top_tb_ahb i_top i_core_top i_dm abs_err_exception_cmb", false,-1);
        vcdp->declBit(c+744,"scr1_top_tb_ahb i_top i_core_top i_dm abs_err_exception_ff", false,-1);
        vcdp->declBit(c+17,"scr1_top_tb_ahb i_top i_core_top i_dm abs_err_acc_busy_cmb", false,-1);
        vcdp->declBit(c+745,"scr1_top_tb_ahb i_top i_core_top i_dm abs_err_acc_busy_ff", false,-1);
        vcdp->declBus(c+435,"scr1_top_tb_ahb i_top i_core_top i_dm abs_data0_cmb", false,-1, 31,0);
        vcdp->declBus(c+436,"scr1_top_tb_ahb i_top i_core_top i_dm abs_data1_cmb", false,-1, 31,0);
        vcdp->declBus(c+176,"scr1_top_tb_ahb i_top i_core_top i_dm abs_command_cmb", false,-1, 31,0);
        vcdp->declBit(c+177,"scr1_top_tb_ahb i_top i_core_top i_dm abs_abstractauto_execdata0_cmb", false,-1);
        vcdp->declBus(c+178,"scr1_top_tb_ahb i_top i_core_top i_dm abs_progbuf0_cmb", false,-1, 31,0);
        vcdp->declBus(c+179,"scr1_top_tb_ahb i_top i_core_top i_dm abs_progbuf1_cmb", false,-1, 31,0);
        vcdp->declBus(c+180,"scr1_top_tb_ahb i_top i_core_top i_dm abs_progbuf2_cmb", false,-1, 31,0);
        vcdp->declBus(c+181,"scr1_top_tb_ahb i_top i_core_top i_dm abs_progbuf3_cmb", false,-1, 31,0);
        vcdp->declBus(c+182,"scr1_top_tb_ahb i_top i_core_top i_dm abs_progbuf4_cmb", false,-1, 31,0);
        vcdp->declBus(c+183,"scr1_top_tb_ahb i_top i_core_top i_dm abs_progbuf5_cmb", false,-1, 31,0);
        vcdp->declBus(c+587,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmderr_cmb", false,-1, 2,0);
        vcdp->declBit(c+184,"scr1_top_tb_ahb i_top i_core_top i_dm clk_en_dm_cmb", false,-1);
        vcdp->declBit(c+1054,"scr1_top_tb_ahb i_top i_core_top i_dm clk_en_dm_ff", false,-1);
        vcdp->declBus(c+603,"scr1_top_tb_ahb i_top i_core_top i_dm dhi_fsm_cmb", false,-1, 2,0);
        vcdp->declBus(c+863,"scr1_top_tb_ahb i_top i_core_top i_dm dhi_fsm_ff", false,-1, 2,0);
        vcdp->declBus(c+588,"scr1_top_tb_ahb i_top i_core_top i_dm dhi_req_cmb", false,-1, 2,0);
        vcdp->declBit(c+589,"scr1_top_tb_ahb i_top i_core_top i_dm dhi_resp_cmb", false,-1);
        vcdp->declBit(c+575,"scr1_top_tb_ahb i_top i_core_top i_dm dhi_resp_exception_cmb", false,-1);
        vcdp->declBit(c+746,"scr1_top_tb_ahb i_top i_core_top i_dm hart_pbuf_ebreak_ff", false,-1);
        vcdp->declBit(c+1147,"scr1_top_tb_ahb i_top i_core_top i_dm hart_pbuf_ebreak_cmb", false,-1);
        vcdp->declBit(c+604,"scr1_top_tb_ahb i_top i_core_top i_dm hart_cmd_req_cmb", false,-1);
        vcdp->declBus(c+40,"scr1_top_tb_ahb i_top i_core_top i_dm hart_cmd_cmb", false,-1, 1,0);
        vcdp->declBus(c+1148,"scr1_top_tb_ahb i_top i_tcm SCR1_TCM_SIZE", false,-1, 31,0);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_tcm clk", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_tcm rst_n", false,-1);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_tcm imem_req_ack", false,-1);
        vcdp->declBit(c+205,"scr1_top_tb_ahb i_top i_tcm imem_req", false,-1);
        vcdp->declBus(c+206,"scr1_top_tb_ahb i_top i_tcm imem_addr", false,-1, 31,0);
        vcdp->declBus(c+714,"scr1_top_tb_ahb i_top i_tcm imem_rdata", false,-1, 31,0);
        vcdp->declBus(c+867,"scr1_top_tb_ahb i_top i_tcm imem_resp", false,-1, 1,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_tcm dmem_req_ack", false,-1);
        vcdp->declBit(c+207,"scr1_top_tb_ahb i_top i_tcm dmem_req", false,-1);
        vcdp->declBit(c+208,"scr1_top_tb_ahb i_top i_tcm dmem_cmd", false,-1);
        vcdp->declBus(c+209,"scr1_top_tb_ahb i_top i_tcm dmem_width", false,-1, 1,0);
        vcdp->declBus(c+210,"scr1_top_tb_ahb i_top i_tcm dmem_addr", false,-1, 31,0);
        vcdp->declBus(c+211,"scr1_top_tb_ahb i_top i_tcm dmem_wdata", false,-1, 31,0);
        vcdp->declBus(c+715,"scr1_top_tb_ahb i_top i_tcm dmem_rdata", false,-1, 31,0);
        vcdp->declBus(c+868,"scr1_top_tb_ahb i_top i_tcm dmem_resp", false,-1, 1,0);
        vcdp->declBit(c+88,"scr1_top_tb_ahb i_top i_tcm imem_req_en", false,-1);
        vcdp->declBit(c+89,"scr1_top_tb_ahb i_top i_tcm dmem_req_en", false,-1);
        vcdp->declBit(c+205,"scr1_top_tb_ahb i_top i_tcm imem_rd", false,-1);
        vcdp->declBit(c+437,"scr1_top_tb_ahb i_top i_tcm dmem_rd", false,-1);
        vcdp->declBit(c+438,"scr1_top_tb_ahb i_top i_tcm dmem_wr", false,-1);
        vcdp->declBus(c+439,"scr1_top_tb_ahb i_top i_tcm dmem_writedata", false,-1, 31,0);
        vcdp->declBus(c+747,"scr1_top_tb_ahb i_top i_tcm dmem_rdata_local", false,-1, 31,0);
        vcdp->declBus(c+440,"scr1_top_tb_ahb i_top i_tcm dmem_byteen", false,-1, 3,0);
        vcdp->declBus(c+748,"scr1_top_tb_ahb i_top i_tcm dmem_rdata_shift_reg", false,-1, 1,0);
        vcdp->declBus(c+1149,"scr1_top_tb_ahb i_top i_tcm i_dp_memory SCR1_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1148,"scr1_top_tb_ahb i_top i_tcm i_dp_memory SCR1_SIZE", false,-1, 31,0);
        vcdp->declBus(c+1091,"scr1_top_tb_ahb i_top i_tcm i_dp_memory SCR1_NBYTES", false,-1, 31,0);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_tcm i_dp_memory clk", false,-1);
        vcdp->declBit(c+205,"scr1_top_tb_ahb i_top i_tcm i_dp_memory rena", false,-1);
        vcdp->declBus(c+441,"scr1_top_tb_ahb i_top i_tcm i_dp_memory addra", false,-1, 15,2);
        vcdp->declBus(c+714,"scr1_top_tb_ahb i_top i_tcm i_dp_memory qa", false,-1, 31,0);
        vcdp->declBit(c+437,"scr1_top_tb_ahb i_top i_tcm i_dp_memory renb", false,-1);
        vcdp->declBit(c+438,"scr1_top_tb_ahb i_top i_tcm i_dp_memory wenb", false,-1);
        vcdp->declBus(c+440,"scr1_top_tb_ahb i_top i_tcm i_dp_memory webb", false,-1, 3,0);
        vcdp->declBus(c+442,"scr1_top_tb_ahb i_top i_tcm i_dp_memory addrb", false,-1, 15,2);
        vcdp->declBus(c+439,"scr1_top_tb_ahb i_top i_tcm i_dp_memory datab", false,-1, 31,0);
        vcdp->declBus(c+747,"scr1_top_tb_ahb i_top i_tcm i_dp_memory qb", false,-1, 31,0);
        vcdp->declBus(c+1150,"scr1_top_tb_ahb i_top i_tcm i_dp_memory RAM_SIZE_WORDS", false,-1, 31,0);
        vcdp->declBus(c+749,"scr1_top_tb_ahb i_top i_tcm i_dp_memory unnamedblk1 i", false,-1, 31,0);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_timer rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_timer clk", false,-1);
        vcdp->declBit(c+1,"scr1_top_tb_ahb i_top i_timer rtc_clk", false,-1);
        vcdp->declBit(c+212,"scr1_top_tb_ahb i_top i_timer dmem_req", false,-1);
        vcdp->declBit(c+213,"scr1_top_tb_ahb i_top i_timer dmem_cmd", false,-1);
        vcdp->declBus(c+473,"scr1_top_tb_ahb i_top i_timer dmem_width", false,-1, 1,0);
        vcdp->declBus(c+214,"scr1_top_tb_ahb i_top i_timer dmem_addr", false,-1, 31,0);
        vcdp->declBus(c+215,"scr1_top_tb_ahb i_top i_timer dmem_wdata", false,-1, 31,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_timer dmem_req_ack", false,-1);
        vcdp->declBus(c+869,"scr1_top_tb_ahb i_top i_timer dmem_rdata", false,-1, 31,0);
        vcdp->declBus(c+870,"scr1_top_tb_ahb i_top i_timer dmem_resp", false,-1, 1,0);
        vcdp->declQuad(c+872,"scr1_top_tb_ahb i_top i_timer timer_val", false,-1, 63,0);
        vcdp->declBit(c+871,"scr1_top_tb_ahb i_top i_timer timer_irq", false,-1);
        vcdp->declBus(c+1151,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_ADDR_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1093,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_CONTROL", false,-1, 4,0);
        vcdp->declBus(c+1125,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_DIVIDER", false,-1, 4,0);
        vcdp->declBus(c+1152,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_MTIMELO", false,-1, 4,0);
        vcdp->declBus(c+1121,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_MTIMEHI", false,-1, 4,0);
        vcdp->declBus(c+1118,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_MTIMECMPLO", false,-1, 4,0);
        vcdp->declBus(c+1153,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_MTIMECMPHI", false,-1, 4,0);
        vcdp->declBus(c+1154,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_CONTROL_EN_OFFSET", false,-1, 31,0);
        vcdp->declBus(c+1110,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_CONTROL_CLKSRC_OFFSET", false,-1, 31,0);
        vcdp->declBus(c+1155,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_DIVIDER_WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+872,"scr1_top_tb_ahb i_top i_timer mtime_reg", false,-1, 63,0);
        vcdp->declQuad(c+443,"scr1_top_tb_ahb i_top i_timer mtime_new", false,-1, 63,0);
        vcdp->declQuad(c+1011,"scr1_top_tb_ahb i_top i_timer mtimecmp_reg", false,-1, 63,0);
        vcdp->declQuad(c+445,"scr1_top_tb_ahb i_top i_timer mtimecmp_new", false,-1, 63,0);
        vcdp->declBit(c+1013,"scr1_top_tb_ahb i_top i_timer timer_en", false,-1);
        vcdp->declBit(c+1064,"scr1_top_tb_ahb i_top i_timer timer_clksrc_rtc", false,-1);
        vcdp->declBus(c+1014,"scr1_top_tb_ahb i_top i_timer timer_div", false,-1, 9,0);
        vcdp->declBit(c+447,"scr1_top_tb_ahb i_top i_timer control_up", false,-1);
        vcdp->declBit(c+448,"scr1_top_tb_ahb i_top i_timer divider_up", false,-1);
        vcdp->declBit(c+449,"scr1_top_tb_ahb i_top i_timer mtimelo_up", false,-1);
        vcdp->declBit(c+450,"scr1_top_tb_ahb i_top i_timer mtimehi_up", false,-1);
        vcdp->declBit(c+451,"scr1_top_tb_ahb i_top i_timer mtimecmplo_up", false,-1);
        vcdp->declBit(c+452,"scr1_top_tb_ahb i_top i_timer mtimecmphi_up", false,-1);
        vcdp->declBit(c+453,"scr1_top_tb_ahb i_top i_timer dmem_req_valid", false,-1);
        vcdp->declBus(c+1062,"scr1_top_tb_ahb i_top i_timer rtc_sync", false,-1, 3,0);
        vcdp->declBit(c+1063,"scr1_top_tb_ahb i_top i_timer rtc_ext_pulse", false,-1);
        vcdp->declBus(c+1015,"scr1_top_tb_ahb i_top i_timer timeclk_cnt", false,-1, 9,0);
        vcdp->declBit(c+557,"scr1_top_tb_ahb i_top i_timer timeclk_cnt_en", false,-1);
        vcdp->declBit(c+558,"scr1_top_tb_ahb i_top i_timer time_posedge", false,-1);
        vcdp->declBit(c+454,"scr1_top_tb_ahb i_top i_timer time_cmp_flag", false,-1);
        vcdp->declBus(c+1156,"scr1_top_tb_ahb i_top i_imem_router SCR1_ADDR_MASK", false,-1, 31,0);
        vcdp->declBus(c+1157,"scr1_top_tb_ahb i_top i_imem_router SCR1_ADDR_PATTERN", false,-1, 31,0);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_imem_router rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_imem_router clk", false,-1);
        vcdp->declBit(c+191,"scr1_top_tb_ahb i_top i_imem_router imem_req_ack", false,-1);
        vcdp->declBit(c+192,"scr1_top_tb_ahb i_top i_imem_router imem_req", false,-1);
        vcdp->declBit(c+1084,"scr1_top_tb_ahb i_top i_imem_router imem_cmd", false,-1);
        vcdp->declBus(c+193,"scr1_top_tb_ahb i_top i_imem_router imem_addr", false,-1, 31,0);
        vcdp->declBus(c+144,"scr1_top_tb_ahb i_top i_imem_router imem_rdata", false,-1, 31,0);
        vcdp->declBus(c+145,"scr1_top_tb_ahb i_top i_imem_router imem_resp", false,-1, 1,0);
        vcdp->declBit(c+865,"scr1_top_tb_ahb i_top i_imem_router port0_req_ack", false,-1);
        vcdp->declBit(c+198,"scr1_top_tb_ahb i_top i_imem_router port0_req", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_imem_router port0_cmd", false,-1);
        vcdp->declBus(c+199,"scr1_top_tb_ahb i_top i_imem_router port0_addr", false,-1, 31,0);
        vcdp->declBus(c+132,"scr1_top_tb_ahb i_top i_imem_router port0_rdata", false,-1, 31,0);
        vcdp->declBus(c+80,"scr1_top_tb_ahb i_top i_imem_router port0_resp", false,-1, 1,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_imem_router port1_req_ack", false,-1);
        vcdp->declBit(c+205,"scr1_top_tb_ahb i_top i_imem_router port1_req", false,-1);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_imem_router port1_cmd", false,-1);
        vcdp->declBus(c+206,"scr1_top_tb_ahb i_top i_imem_router port1_addr", false,-1, 31,0);
        vcdp->declBus(c+714,"scr1_top_tb_ahb i_top i_imem_router port1_rdata", false,-1, 31,0);
        vcdp->declBus(c+867,"scr1_top_tb_ahb i_top i_imem_router port1_resp", false,-1, 1,0);
        vcdp->declBit(c+1016,"scr1_top_tb_ahb i_top i_imem_router fsm", false,-1);
        vcdp->declBit(c+455,"scr1_top_tb_ahb i_top i_imem_router port_sel", false,-1);
        vcdp->declBit(c+1017,"scr1_top_tb_ahb i_top i_imem_router port_sel_r", false,-1);
        vcdp->declBus(c+144,"scr1_top_tb_ahb i_top i_imem_router sel_rdata", false,-1, 31,0);
        vcdp->declBus(c+145,"scr1_top_tb_ahb i_top i_imem_router sel_resp", false,-1, 1,0);
        vcdp->declBit(c+191,"scr1_top_tb_ahb i_top i_imem_router sel_req_ack", false,-1);
        vcdp->declBus(c+1156,"scr1_top_tb_ahb i_top i_dmem_router SCR1_PORT1_ADDR_MASK", false,-1, 31,0);
        vcdp->declBus(c+1157,"scr1_top_tb_ahb i_top i_dmem_router SCR1_PORT1_ADDR_PATTERN", false,-1, 31,0);
        vcdp->declBus(c+1158,"scr1_top_tb_ahb i_top i_dmem_router SCR1_PORT2_ADDR_MASK", false,-1, 31,0);
        vcdp->declBus(c+1159,"scr1_top_tb_ahb i_top i_dmem_router SCR1_PORT2_ADDR_PATTERN", false,-1, 31,0);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_dmem_router rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_dmem_router clk", false,-1);
        vcdp->declBit(c+194,"scr1_top_tb_ahb i_top i_dmem_router dmem_req_ack", false,-1);
        vcdp->declBit(c+195,"scr1_top_tb_ahb i_top i_dmem_router dmem_req", false,-1);
        vcdp->declBit(c+492,"scr1_top_tb_ahb i_top i_dmem_router dmem_cmd", false,-1);
        vcdp->declBus(c+493,"scr1_top_tb_ahb i_top i_dmem_router dmem_width", false,-1, 1,0);
        vcdp->declBus(c+196,"scr1_top_tb_ahb i_top i_dmem_router dmem_addr", false,-1, 31,0);
        vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_dmem_router dmem_wdata", false,-1, 31,0);
        vcdp->declBus(c+559,"scr1_top_tb_ahb i_top i_dmem_router dmem_rdata", false,-1, 31,0);
        vcdp->declBus(c+560,"scr1_top_tb_ahb i_top i_dmem_router dmem_resp", false,-1, 1,0);
        vcdp->declBit(c+866,"scr1_top_tb_ahb i_top i_dmem_router port0_req_ack", false,-1);
        vcdp->declBit(c+200,"scr1_top_tb_ahb i_top i_dmem_router port0_req", false,-1);
        vcdp->declBit(c+201,"scr1_top_tb_ahb i_top i_dmem_router port0_cmd", false,-1);
        vcdp->declBus(c+202,"scr1_top_tb_ahb i_top i_dmem_router port0_width", false,-1, 1,0);
        vcdp->declBus(c+203,"scr1_top_tb_ahb i_top i_dmem_router port0_addr", false,-1, 31,0);
        vcdp->declBus(c+204,"scr1_top_tb_ahb i_top i_dmem_router port0_wdata", false,-1, 31,0);
        vcdp->declBus(c+486,"scr1_top_tb_ahb i_top i_dmem_router port0_rdata", false,-1, 31,0);
        vcdp->declBus(c+154,"scr1_top_tb_ahb i_top i_dmem_router port0_resp", false,-1, 1,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_dmem_router port1_req_ack", false,-1);
        vcdp->declBit(c+207,"scr1_top_tb_ahb i_top i_dmem_router port1_req", false,-1);
        vcdp->declBit(c+208,"scr1_top_tb_ahb i_top i_dmem_router port1_cmd", false,-1);
        vcdp->declBus(c+209,"scr1_top_tb_ahb i_top i_dmem_router port1_width", false,-1, 1,0);
        vcdp->declBus(c+210,"scr1_top_tb_ahb i_top i_dmem_router port1_addr", false,-1, 31,0);
        vcdp->declBus(c+211,"scr1_top_tb_ahb i_top i_dmem_router port1_wdata", false,-1, 31,0);
        vcdp->declBus(c+715,"scr1_top_tb_ahb i_top i_dmem_router port1_rdata", false,-1, 31,0);
        vcdp->declBus(c+868,"scr1_top_tb_ahb i_top i_dmem_router port1_resp", false,-1, 1,0);
        vcdp->declBit(c+1082,"scr1_top_tb_ahb i_top i_dmem_router port2_req_ack", false,-1);
        vcdp->declBit(c+212,"scr1_top_tb_ahb i_top i_dmem_router port2_req", false,-1);
        vcdp->declBit(c+213,"scr1_top_tb_ahb i_top i_dmem_router port2_cmd", false,-1);
        vcdp->declBus(c+473,"scr1_top_tb_ahb i_top i_dmem_router port2_width", false,-1, 1,0);
        vcdp->declBus(c+214,"scr1_top_tb_ahb i_top i_dmem_router port2_addr", false,-1, 31,0);
        vcdp->declBus(c+215,"scr1_top_tb_ahb i_top i_dmem_router port2_wdata", false,-1, 31,0);
        vcdp->declBus(c+869,"scr1_top_tb_ahb i_top i_dmem_router port2_rdata", false,-1, 31,0);
        vcdp->declBus(c+870,"scr1_top_tb_ahb i_top i_dmem_router port2_resp", false,-1, 1,0);
        vcdp->declBit(c+1018,"scr1_top_tb_ahb i_top i_dmem_router fsm", false,-1);
        vcdp->declBus(c+456,"scr1_top_tb_ahb i_top i_dmem_router port_sel", false,-1, 1,0);
        vcdp->declBus(c+1019,"scr1_top_tb_ahb i_top i_dmem_router port_sel_r", false,-1, 1,0);
        vcdp->declBus(c+559,"scr1_top_tb_ahb i_top i_dmem_router sel_rdata", false,-1, 31,0);
        vcdp->declBus(c+560,"scr1_top_tb_ahb i_top i_dmem_router sel_resp", false,-1, 1,0);
        vcdp->declBit(c+194,"scr1_top_tb_ahb i_top i_dmem_router sel_req_ack", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_imem_ahb rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_imem_ahb clk", false,-1);
        vcdp->declBit(c+865,"scr1_top_tb_ahb i_top i_imem_ahb imem_req_ack", false,-1);
        vcdp->declBit(c+198,"scr1_top_tb_ahb i_top i_imem_ahb imem_req", false,-1);
        vcdp->declBus(c+199,"scr1_top_tb_ahb i_top i_imem_ahb imem_addr", false,-1, 31,0);
        vcdp->declBus(c+132,"scr1_top_tb_ahb i_top i_imem_ahb imem_rdata", false,-1, 31,0);
        vcdp->declBus(c+80,"scr1_top_tb_ahb i_top i_imem_ahb imem_resp", false,-1, 1,0);
        vcdp->declBus(c+9,"scr1_top_tb_ahb i_top i_imem_ahb hprot", false,-1, 3,0);
        vcdp->declBus(c+1080,"scr1_top_tb_ahb i_top i_imem_ahb hburst", false,-1, 2,0);
        vcdp->declBus(c+1081,"scr1_top_tb_ahb i_top i_imem_ahb hsize", false,-1, 2,0);
        vcdp->declBus(c+185,"scr1_top_tb_ahb i_top i_imem_ahb htrans", false,-1, 1,0);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_imem_ahb hmastlock", false,-1);
        vcdp->declBus(c+186,"scr1_top_tb_ahb i_top i_imem_ahb haddr", false,-1, 31,0);
        vcdp->declBit(c+129,"scr1_top_tb_ahb i_top i_imem_ahb hready", false,-1);
        vcdp->declBus(c+130,"scr1_top_tb_ahb i_top i_imem_ahb hrdata", false,-1, 31,0);
        vcdp->declBit(c+131,"scr1_top_tb_ahb i_top i_imem_ahb hresp", false,-1);
        vcdp->declBit(c+1020,"scr1_top_tb_ahb i_top i_imem_ahb fsm", false,-1);
        vcdp->declBit(c+457,"scr1_top_tb_ahb i_top i_imem_ahb req_fifo_rd", false,-1);
        vcdp->declBit(c+90,"scr1_top_tb_ahb i_top i_imem_ahb req_fifo_wr", false,-1);
        vcdp->declBit(c+91,"scr1_top_tb_ahb i_top i_imem_ahb req_fifo_up", false,-1);
        vcdp->declBus(c+750,"scr1_top_tb_ahb i_top i_imem_ahb req_fifo_r haddr", false,-1, 31,0);
        vcdp->declBus(c+458,"scr1_top_tb_ahb i_top i_imem_ahb req_fifo(0) haddr", false,-1, 31,0);
        vcdp->declBit(c+459,"scr1_top_tb_ahb i_top i_imem_ahb req_fifo_empty", false,-1);
        vcdp->declBit(c+1021,"scr1_top_tb_ahb i_top i_imem_ahb req_fifo_full", false,-1);
        vcdp->declBit(c+133,"scr1_top_tb_ahb i_top i_imem_ahb resp_fifo hresp", false,-1);
        vcdp->declBus(c+134,"scr1_top_tb_ahb i_top i_imem_ahb resp_fifo hrdata", false,-1, 31,0);
        vcdp->declBit(c+81,"scr1_top_tb_ahb i_top i_imem_ahb resp_fifo_hready", false,-1);
        vcdp->declBit(c+1068,"scr1_top_tb_ahb i_top i_dmem_ahb rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_top i_dmem_ahb clk", false,-1);
        vcdp->declBit(c+866,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_req_ack", false,-1);
        vcdp->declBit(c+200,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_req", false,-1);
        vcdp->declBit(c+201,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_cmd", false,-1);
        vcdp->declBus(c+202,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_width", false,-1, 1,0);
        vcdp->declBus(c+203,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_addr", false,-1, 31,0);
        vcdp->declBus(c+204,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_wdata", false,-1, 31,0);
        vcdp->declBus(c+486,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_rdata", false,-1, 31,0);
        vcdp->declBus(c+154,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_resp", false,-1, 1,0);
        vcdp->declBus(c+10,"scr1_top_tb_ahb i_top i_dmem_ahb hprot", false,-1, 3,0);
        vcdp->declBus(c+1080,"scr1_top_tb_ahb i_top i_dmem_ahb hburst", false,-1, 2,0);
        vcdp->declBus(c+187,"scr1_top_tb_ahb i_top i_dmem_ahb hsize", false,-1, 2,0);
        vcdp->declBus(c+188,"scr1_top_tb_ahb i_top i_dmem_ahb htrans", false,-1, 1,0);
        vcdp->declBit(c+1079,"scr1_top_tb_ahb i_top i_dmem_ahb hmastlock", false,-1);
        vcdp->declBus(c+189,"scr1_top_tb_ahb i_top i_dmem_ahb haddr", false,-1, 31,0);
        vcdp->declBit(c+190,"scr1_top_tb_ahb i_top i_dmem_ahb hwrite", false,-1);
        vcdp->declBus(c+1057,"scr1_top_tb_ahb i_top i_dmem_ahb hwdata", false,-1, 31,0);
        vcdp->declBit(c+483,"scr1_top_tb_ahb i_top i_dmem_ahb hready", false,-1);
        vcdp->declBus(c+484,"scr1_top_tb_ahb i_top i_dmem_ahb hrdata", false,-1, 31,0);
        vcdp->declBit(c+485,"scr1_top_tb_ahb i_top i_dmem_ahb hresp", false,-1);
        vcdp->declBit(c+1065,"scr1_top_tb_ahb i_top i_dmem_ahb fsm", false,-1);
        vcdp->declBit(c+460,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_rd", false,-1);
        vcdp->declBit(c+92,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_wr", false,-1);
        vcdp->declBit(c+93,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_up", false,-1);
        vcdp->declBit(c+461,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_new hwrite", false,-1);
        vcdp->declBus(c+462,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_new hwidth", false,-1, 2,0);
        vcdp->declBus(c+463,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_new haddr", false,-1, 31,0);
        vcdp->declBus(c+464,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_new hwdata", false,-1, 31,0);
        vcdp->declBit(c+751,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_r hwrite", false,-1);
        vcdp->declBus(c+752,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_r hwidth", false,-1, 2,0);
        vcdp->declBus(c+753,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_r haddr", false,-1, 31,0);
        vcdp->declBus(c+754,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_r hwdata", false,-1, 31,0);
        vcdp->declBit(c+465,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo(0) hwrite", false,-1);
        vcdp->declBus(c+466,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo(0) hwidth", false,-1, 2,0);
        vcdp->declBus(c+467,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo(0) haddr", false,-1, 31,0);
        vcdp->declBus(c+468,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo(0) hwdata", false,-1, 31,0);
        vcdp->declBit(c+469,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_empty", false,-1);
        vcdp->declBit(c+1022,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_full", false,-1);
        vcdp->declBit(c+1058,"scr1_top_tb_ahb i_top i_dmem_ahb data_fifo hwrite", false,-1);
        vcdp->declBus(c+1059,"scr1_top_tb_ahb i_top i_dmem_ahb data_fifo hwidth", false,-1, 2,0);
        vcdp->declBus(c+1060,"scr1_top_tb_ahb i_top i_dmem_ahb data_fifo haddr", false,-1, 1,0);
        vcdp->declBus(c+1061,"scr1_top_tb_ahb i_top i_dmem_ahb data_fifo hwdata", false,-1, 31,0);
        vcdp->declBit(c+488,"scr1_top_tb_ahb i_top i_dmem_ahb resp_fifo hresp", false,-1);
        vcdp->declBus(c+489,"scr1_top_tb_ahb i_top i_dmem_ahb resp_fifo hwidth", false,-1, 2,0);
        vcdp->declBus(c+490,"scr1_top_tb_ahb i_top i_dmem_ahb resp_fifo haddr", false,-1, 1,0);
        vcdp->declBus(c+491,"scr1_top_tb_ahb i_top i_dmem_ahb resp_fifo hrdata", false,-1, 31,0);
        vcdp->declBit(c+155,"scr1_top_tb_ahb i_top i_dmem_ahb resp_fifo_hready", false,-1);
        vcdp->declBus(c+1160,"scr1_top_tb_ahb i_memory_tb SCR1_MEM_POWER_SIZE", false,-1, 31,0);
        vcdp->declBit(c+143,"scr1_top_tb_ahb i_memory_tb rst_n", false,-1);
        vcdp->declBit(c+1076,"scr1_top_tb_ahb i_memory_tb clk", false,-1);
        vcdp->declBus(c+1045,"scr1_top_tb_ahb i_memory_tb irq_lines", false,-1, 15,0);
        vcdp->declBus(c+3,"scr1_top_tb_ahb i_memory_tb imem_req_ack_stall_in", false,-1, 31,0);
        vcdp->declBus(c+4,"scr1_top_tb_ahb i_memory_tb dmem_req_ack_stall_in", false,-1, 31,0);
        vcdp->declBus(c+1081,"scr1_top_tb_ahb i_memory_tb imem_hsize", false,-1, 2,0);
        vcdp->declBus(c+185,"scr1_top_tb_ahb i_memory_tb imem_htrans", false,-1, 1,0);
        vcdp->declBus(c+186,"scr1_top_tb_ahb i_memory_tb imem_haddr", false,-1, 31,0);
        vcdp->declBit(c+129,"scr1_top_tb_ahb i_memory_tb imem_hready", false,-1);
        vcdp->declBus(c+130,"scr1_top_tb_ahb i_memory_tb imem_hrdata", false,-1, 31,0);
        vcdp->declBit(c+131,"scr1_top_tb_ahb i_memory_tb imem_hresp", false,-1);
        vcdp->declBus(c+187,"scr1_top_tb_ahb i_memory_tb dmem_hsize", false,-1, 2,0);
        vcdp->declBus(c+188,"scr1_top_tb_ahb i_memory_tb dmem_htrans", false,-1, 1,0);
        vcdp->declBus(c+189,"scr1_top_tb_ahb i_memory_tb dmem_haddr", false,-1, 31,0);
        vcdp->declBit(c+190,"scr1_top_tb_ahb i_memory_tb dmem_hwrite", false,-1);
        vcdp->declBus(c+1057,"scr1_top_tb_ahb i_memory_tb dmem_hwdata", false,-1, 31,0);
        vcdp->declBit(c+483,"scr1_top_tb_ahb i_memory_tb dmem_hready", false,-1);
        vcdp->declBus(c+484,"scr1_top_tb_ahb i_memory_tb dmem_hrdata", false,-1, 31,0);
        vcdp->declBit(c+485,"scr1_top_tb_ahb i_memory_tb dmem_hresp", false,-1);
        vcdp->declBus(c+1161,"scr1_top_tb_ahb i_memory_tb SCR1_PRINT_ADDR", false,-1, 31,0);
        vcdp->declBus(c+1162,"scr1_top_tb_ahb i_memory_tb SCR1_IRQ_ADDR", false,-1, 31,0);
        vcdp->declBus(c+1163,"scr1_top_tb_ahb i_memory_tb SCR1_MEM_ERR_ADDR", false,-1, 31,0);
        vcdp->declBus(c+1164,"scr1_top_tb_ahb i_memory_tb SCR1_MEM_ERR_PTR", false,-1, 31,0);
        vcdp->declBus(c+1046,"scr1_top_tb_ahb i_memory_tb mem_err_ptr", false,-1, 31,0);
        vcdp->declBus(c+1045,"scr1_top_tb_ahb i_memory_tb irq_reg", false,-1, 15,0);
        vcdp->declBit(c+1165,"scr1_top_tb_ahb i_memory_tb mirage_en", false,-1);
        vcdp->declBit(c+1166,"scr1_top_tb_ahb i_memory_tb mirage_rangeen", false,-1);
        vcdp->declBus(c+1167,"scr1_top_tb_ahb i_memory_tb mirage_adrlo", false,-1, 31,0);
        vcdp->declBus(c+1167,"scr1_top_tb_ahb i_memory_tb mirage_adrhi", false,-1, 31,0);
        vcdp->declArray(c+755,"scr1_top_tb_ahb i_memory_tb test_file", false,-1, 255,0);
        vcdp->declBit(c+763,"scr1_top_tb_ahb i_memory_tb test_file_init", false,-1);
        vcdp->declBit(c+770,"scr1_top_tb_ahb i_memory_tb imem_ahb_state", false,-1);
        vcdp->declBus(c+771,"scr1_top_tb_ahb i_memory_tb imem_ahb_addr", false,-1, 31,0);
        vcdp->declBus(c+772,"scr1_top_tb_ahb i_memory_tb imem_req_ack_stall", false,-1, 31,0);
        vcdp->declBit(c+773,"scr1_top_tb_ahb i_memory_tb imem_req_ack_rnd", false,-1);
        vcdp->declBit(c+22,"scr1_top_tb_ahb i_memory_tb imem_req_ack", false,-1);
        vcdp->declBit(c+1168,"scr1_top_tb_ahb i_memory_tb imem_req_ack_nc", false,-1);
        vcdp->declBus(c+13,"scr1_top_tb_ahb i_memory_tb imem_be", false,-1, 3,0);
        vcdp->declBus(c+774,"scr1_top_tb_ahb i_memory_tb imem_hrdata_l", false,-1, 31,0);
        vcdp->declBus(c+470,"scr1_top_tb_ahb i_memory_tb imem_wr_hazard", false,-1, 3,0);
        vcdp->declBus(c+775,"scr1_top_tb_ahb i_memory_tb dmem_req_ack_stall", false,-1, 31,0);
        vcdp->declBit(c+776,"scr1_top_tb_ahb i_memory_tb dmem_req_ack_rnd", false,-1);
        vcdp->declBit(c+135,"scr1_top_tb_ahb i_memory_tb dmem_req_ack", false,-1);
        vcdp->declBit(c+1169,"scr1_top_tb_ahb i_memory_tb dmem_req_ack_nc", false,-1);
        vcdp->declBus(c+471,"scr1_top_tb_ahb i_memory_tb dmem_be", false,-1, 3,0);
        vcdp->declBit(c+1047,"scr1_top_tb_ahb i_memory_tb dmem_ahb_state", false,-1);
        vcdp->declBus(c+1048,"scr1_top_tb_ahb i_memory_tb dmem_ahb_addr", false,-1, 31,0);
        vcdp->declBit(c+1049,"scr1_top_tb_ahb i_memory_tb dmem_ahb_wr", false,-1);
        vcdp->declBus(c+777,"scr1_top_tb_ahb i_memory_tb dmem_ahb_size", false,-1, 2,0);
        vcdp->declBus(c+1050,"scr1_top_tb_ahb i_memory_tb dmem_ahb_be", false,-1, 3,0);
        vcdp->declBus(c+778,"scr1_top_tb_ahb i_memory_tb dmem_hrdata_l", false,-1, 31,0);
        vcdp->declBus(c+472,"scr1_top_tb_ahb i_memory_tb dmem_wr_hazard", false,-1, 3,0);
        vcdp->declBus(c+1106,"$unit SCR1_CSR_MTVEC_BASE_ZERO_BITS", false,-1, 31,0);
        vcdp->declBus(c+1170,"$unit SCR1_CSR_MTVEC_BASE_VAL_BITS", false,-1, 31,0);
        vcdp->declBus(c+1170,"$unit SCR1_CSR_MTVEC_BASE_RW_BITS", false,-1, 31,0);
        vcdp->declBus(c+1088,"$unit SCR1_BRKM_BRKPT_NUMBER", false,-1, 31,0);
        vcdp->declBus(c+1171,"$unit SCR1_ARCH_RST_VECTOR", false,-1, 31,0);
        vcdp->declBus(c+1172,"$unit SCR1_ARCH_CSR_MTVEC_BASE", false,-1, 31,0);
        vcdp->declBus(c+1173,"$unit SCR1_TCM_ADDR_MASK", false,-1, 31,0);
        vcdp->declBus(c+1174,"$unit SCR1_TCM_ADDR_PATTERN", false,-1, 31,0);
        vcdp->declBus(c+1175,"$unit SCR1_TIMER_ADDR_MASK", false,-1, 31,0);
        vcdp->declBus(c+1176,"$unit SCR1_TIMER_ADDR_PATTERN", false,-1, 31,0);
        vcdp->declBus(c+1177,"$unit SCR1_CSR_ADDR_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1178,"$unit SCR1_ARCH_CSR_MTVEC_BASE_RST_VAL", false,-1, 31,6);
        vcdp->declBus(c+1154,"$unit SCR1_CSR_MTVEC_BASE_RO_BITS", false,-1, 31,0);
        vcdp->declBus(c+1089,"$unit SCR1_EXC_CODE_WIDTH_E", false,-1, 31,0);
        vcdp->declBus(c+1179,"$unit SCR1_EXC_CODE_IRQ_M_SOFTWARE", false,-1, 3,0);
        vcdp->declBus(c+1180,"$unit SCR1_EXC_CODE_IRQ_M_TIMER", false,-1, 3,0);
        vcdp->declBus(c+1181,"$unit SCR1_EXC_CODE_IRQ_M_EXTERNAL", false,-1, 3,0);
        vcdp->declBus(c+1182,"$unit SCR1_EXC_CODE_RESET", false,-1, 3,0);
        vcdp->declBus(c+1090,"$unit SCR1_IALU_OP_ALL_NUM_E", false,-1, 31,0);
        vcdp->declBus(c+1097,"$unit SCR1_IALU_OP_WIDTH_E", false,-1, 31,0);
        vcdp->declBus(c+1183,"$unit SCR1_IALU_CMD_ALL_NUM_E", false,-1, 31,0);
        vcdp->declBus(c+1184,"$unit SCR1_IALU_CMD_WIDTH_E", false,-1, 31,0);
        vcdp->declBus(c+1090,"$unit SCR1_SUM2_OP_ALL_NUM_E", false,-1, 31,0);
        vcdp->declBus(c+1097,"$unit SCR1_SUM2_OP_WIDTH_E", false,-1, 31,0);
        vcdp->declBus(c+1185,"$unit SCR1_LSU_CMD_ALL_NUM_E", false,-1, 31,0);
        vcdp->declBus(c+1091,"$unit SCR1_LSU_CMD_WIDTH_E", false,-1, 31,0);
        vcdp->declBus(c+1090,"$unit SCR1_CSR_OP_ALL_NUM_E", false,-1, 31,0);
        vcdp->declBus(c+1097,"$unit SCR1_CSR_OP_WIDTH_E", false,-1, 31,0);
        vcdp->declBus(c+1091,"$unit SCR1_CSR_CMD_ALL_NUM_E", false,-1, 31,0);
        vcdp->declBus(c+1090,"$unit SCR1_CSR_CMD_WIDTH_E", false,-1, 31,0);
        vcdp->declBus(c+1186,"$unit SCR1_RD_WB_ALL_NUM_E", false,-1, 31,0);
        vcdp->declBus(c+1092,"$unit SCR1_RD_WB_WIDTH_E", false,-1, 31,0);
        vcdp->declBus(c+1184,"$unit SCR1_GPR_FIELD_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1187,"$unit SCR1_IRQ_VECT_NUM", false,-1, 31,0);
        vcdp->declBus(c+1184,"$unit SCR1_IRQ_VECT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1187,"$unit SCR1_IRQ_LINES_NUM", false,-1, 31,0);
        vcdp->declBus(c+1091,"$unit SCR1_IRQ_LINES_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1118,"$unit SCR1_IRQ_VOID_VECT_NUM", false,-1, 4,0);
        vcdp->declBus(c+1091,"$unit SCR1_IRQ_IDX_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1080,"$unit SCR1_IPIC_CISV", false,-1, 2,0);
        vcdp->declBus(c+1188,"$unit SCR1_IPIC_CICSR", false,-1, 2,0);
        vcdp->declBus(c+1081,"$unit SCR1_IPIC_IPR", false,-1, 2,0);
        vcdp->declBus(c+1189,"$unit SCR1_IPIC_ISVR", false,-1, 2,0);
        vcdp->declBus(c+1146,"$unit SCR1_IPIC_EOI", false,-1, 2,0);
        vcdp->declBus(c+1190,"$unit SCR1_IPIC_SOI", false,-1, 2,0);
        vcdp->declBus(c+1191,"$unit SCR1_IPIC_IDX", false,-1, 2,0);
        vcdp->declBus(c+1192,"$unit SCR1_IPIC_ICSR", false,-1, 2,0);
        vcdp->declBus(c+1193,"$unit SCR1_IPIC_ICSR_IP", false,-1, 31,0);
        vcdp->declBus(c+1097,"$unit SCR1_IPIC_ICSR_IE", false,-1, 31,0);
        vcdp->declBus(c+1090,"$unit SCR1_IPIC_ICSR_IM", false,-1, 31,0);
        vcdp->declBus(c+1092,"$unit SCR1_IPIC_ICSR_INV", false,-1, 31,0);
        vcdp->declBus(c+1091,"$unit SCR1_IPIC_ICSR_IS", false,-1, 31,0);
        vcdp->declBus(c+1194,"$unit SCR1_IPIC_ICSR_PRV_LSB", false,-1, 31,0);
        vcdp->declBus(c+1185,"$unit SCR1_IPIC_ICSR_PRV_MSB", false,-1, 31,0);
        vcdp->declBus(c+1195,"$unit SCR1_IPIC_ICSR_LN_LSB", false,-1, 31,0);
        vcdp->declBus(c+1145,"$unit SCR1_IPIC_PRV_M", false,-1, 1,0);
        vcdp->declBus(c+1196,"$unit SCR1_CSR_ADDR_MVENDORID", false,-1, 11,0);
        vcdp->declBus(c+1197,"$unit SCR1_CSR_ADDR_MARCHID", false,-1, 11,0);
        vcdp->declBus(c+1198,"$unit SCR1_CSR_ADDR_MIMPID", false,-1, 11,0);
        vcdp->declBus(c+1199,"$unit SCR1_CSR_ADDR_MHARTID", false,-1, 11,0);
        vcdp->declBus(c+1200,"$unit SCR1_CSR_ADDR_MSTATUS", false,-1, 11,0);
        vcdp->declBus(c+1201,"$unit SCR1_CSR_ADDR_MISA", false,-1, 11,0);
        vcdp->declBus(c+1202,"$unit SCR1_CSR_ADDR_MIE", false,-1, 11,0);
        vcdp->declBus(c+1203,"$unit SCR1_CSR_ADDR_MTVEC", false,-1, 11,0);
        vcdp->declBus(c+1204,"$unit SCR1_CSR_ADDR_MSCRATCH", false,-1, 11,0);
        vcdp->declBus(c+1205,"$unit SCR1_CSR_ADDR_MEPC", false,-1, 11,0);
        vcdp->declBus(c+1206,"$unit SCR1_CSR_ADDR_MCAUSE", false,-1, 11,0);
        vcdp->declBus(c+1207,"$unit SCR1_CSR_ADDR_MTVAL", false,-1, 11,0);
        vcdp->declBus(c+1208,"$unit SCR1_CSR_ADDR_MIP", false,-1, 11,0);
        vcdp->declBus(c+1209,"$unit SCR1_CSR_ADDR_MCYCLE", false,-1, 11,0);
        vcdp->declBus(c+1210,"$unit SCR1_CSR_ADDR_MINSTRET", false,-1, 11,0);
        vcdp->declBus(c+1211,"$unit SCR1_CSR_ADDR_MCYCLEH", false,-1, 11,0);
        vcdp->declBus(c+1212,"$unit SCR1_CSR_ADDR_MINSTRETH", false,-1, 11,0);
        vcdp->declBus(c+1213,"$unit SCR1_CSR_ADDR_TIME", false,-1, 11,0);
        vcdp->declBus(c+1214,"$unit SCR1_CSR_ADDR_CYCLE", false,-1, 11,0);
        vcdp->declBus(c+1215,"$unit SCR1_CSR_ADDR_INSTRET", false,-1, 11,0);
        vcdp->declBus(c+1216,"$unit SCR1_CSR_ADDR_TIMEH", false,-1, 11,0);
        vcdp->declBus(c+1217,"$unit SCR1_CSR_ADDR_CYCLEH", false,-1, 11,0);
        vcdp->declBus(c+1218,"$unit SCR1_CSR_ADDR_INSTRETH", false,-1, 11,0);
        vcdp->declBus(c+1219,"$unit SCR1_CSR_ADDR_HDU_MBASE", false,-1, 11,0);
        vcdp->declBus(c+1220,"$unit SCR1_CSR_ADDR_HDU_MSPAN", false,-1, 11,0);
        vcdp->declBus(c+1221,"$unit SCR1_CSR_ADDR_MCOUNTEN", false,-1, 11,0);
        vcdp->declBus(c+1222,"$unit SCR1_CSR_ADDR_TDU_MBASE", false,-1, 11,0);
        vcdp->declBus(c+1223,"$unit SCR1_CSR_ADDR_TDU_MSPAN", false,-1, 11,0);
        vcdp->declBus(c+1224,"$unit SCR1_CSR_ADDR_IPIC_BASE", false,-1, 11,0);
        vcdp->declBus(c+1224,"$unit SCR1_CSR_ADDR_IPIC_CISV", false,-1, 11,0);
        vcdp->declBus(c+1225,"$unit SCR1_CSR_ADDR_IPIC_CICSR", false,-1, 11,0);
        vcdp->declBus(c+1226,"$unit SCR1_CSR_ADDR_IPIC_IPR", false,-1, 11,0);
        vcdp->declBus(c+1227,"$unit SCR1_CSR_ADDR_IPIC_ISVR", false,-1, 11,0);
        vcdp->declBus(c+1228,"$unit SCR1_CSR_ADDR_IPIC_EOI", false,-1, 11,0);
        vcdp->declBus(c+1229,"$unit SCR1_CSR_ADDR_IPIC_SOI", false,-1, 11,0);
        vcdp->declBus(c+1230,"$unit SCR1_CSR_ADDR_IPIC_IDX", false,-1, 11,0);
        vcdp->declBus(c+1231,"$unit SCR1_CSR_ADDR_IPIC_ICSR", false,-1, 11,0);
        vcdp->declBus(c+1171,"$unit SCR1_RST_VECTOR", false,-1, 31,0);
        vcdp->declBit(c+1232,"$unit SCR1_CSR_MIE_MSIE_RST_VAL", false,-1);
        vcdp->declBit(c+1232,"$unit SCR1_CSR_MIE_MTIE_RST_VAL", false,-1);
        vcdp->declBit(c+1232,"$unit SCR1_CSR_MIE_MEIE_RST_VAL", false,-1);
        vcdp->declBit(c+1232,"$unit SCR1_CSR_MIP_MSIP_RST_VAL", false,-1);
        vcdp->declBit(c+1232,"$unit SCR1_CSR_MIP_MTIP_RST_VAL", false,-1);
        vcdp->declBit(c+1232,"$unit SCR1_CSR_MIP_MEIP_RST_VAL", false,-1);
        vcdp->declBit(c+1232,"$unit SCR1_CSR_MSTATUS_MIE_RST_VAL", false,-1);
        vcdp->declBit(c+1085,"$unit SCR1_CSR_MSTATUS_MPIE_RST_VAL", false,-1);
        vcdp->declBus(c+1233,"$unit SCR1_MISA_MXL_32", false,-1, 1,0);
        vcdp->declBus(c+1234,"$unit SCR1_CSR_MISA", false,-1, 31,0);
        vcdp->declBus(c+1235,"$unit SCR1_CSR_MVENDORID", false,-1, 31,0);
        vcdp->declBus(c+1236,"$unit SCR1_CSR_MARCHID", false,-1, 31,0);
        vcdp->declBus(c+1114,"$unit SCR1_CSR_MIMPID", false,-1, 31,0);
        vcdp->declBus(c+1237,"$unit SCR1_CSR_MSTATUS_MPP", false,-1, 1,0);
        vcdp->declBus(c+1101,"$unit SCR1_CSR_MSTATUS_MIE_OFFSET", false,-1, 31,0);
        vcdp->declBus(c+1238,"$unit SCR1_CSR_MSTATUS_MPIE_OFFSET", false,-1, 31,0);
        vcdp->declBus(c+1239,"$unit SCR1_CSR_MSTATUS_MPP_OFFSET", false,-1, 31,0);
        vcdp->declBus(c+1178,"$unit SCR1_CSR_MTVEC_BASE_RST_VAL", false,-1, 31,6);
        vcdp->declBit(c+1232,"$unit SCR1_CSR_MTVEC_MODE_DIRECT", false,-1);
        vcdp->declBit(c+1085,"$unit SCR1_CSR_MTVEC_MODE_VECTORED", false,-1);
        vcdp->declBus(c+1101,"$unit SCR1_CSR_MIE_MSIE_OFFSET", false,-1, 31,0);
        vcdp->declBus(c+1238,"$unit SCR1_CSR_MIE_MTIE_OFFSET", false,-1, 31,0);
        vcdp->declBus(c+1239,"$unit SCR1_CSR_MIE_MEIE_OFFSET", false,-1, 31,0);
        vcdp->declBus(c+1154,"$unit SCR1_CSR_MCOUNTEN_CY_OFFSET", false,-1, 31,0);
        vcdp->declBus(c+1088,"$unit SCR1_CSR_MCOUNTEN_IR_OFFSET", false,-1, 31,0);
        vcdp->declBus(c+1105,"$unit SCR1_CSR_COUNTERS_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1240,"$unit SCR1_CSR_ADDR_HPMCOUNTER_MASK", false,-1, 6,0);
        vcdp->declBus(c+1241,"$unit SCR1_CSR_ADDR_HPMCOUNTERH_MASK", false,-1, 6,0);
        vcdp->declBus(c+1242,"$unit SCR1_CSR_ADDR_MHPMCOUNTER_MASK", false,-1, 6,0);
        vcdp->declBus(c+1243,"$unit SCR1_CSR_ADDR_MHPMCOUNTERH_MASK", false,-1, 6,0);
        vcdp->declBus(c+1244,"$unit SCR1_CSR_ADDR_MHPMEVENT_MASK", false,-1, 6,0);
        vcdp->declBus(c+1089,"$unit SCR1_HDU_DEBUGCSR_ADDR_SPAN", false,-1, 31,0);
        vcdp->declBus(c+1088,"$unit SCR1_HDU_DEBUGCSR_ADDR_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1245,"$unit SCR1_HDU_DEBUGCSR_DCSR_XDEBUGVER", false,-1, 3,0);
        vcdp->declBus(c+1246,"$unit SCR1_HDU_PBUF_ADDR_SPAN", false,-1, 31,0);
        vcdp->declBus(c+1101,"$unit SCR1_HDU_PBUF_ADDR_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1112,"$unit SCR1_HDU_DATA_REG_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1112,"$unit SCR1_HDU_CORE_INSTR_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1247,"$unit SCR1_HDU_DBGCSR_OFFS_DCSR", false,-1, 1,0);
        vcdp->declBus(c+1248,"$unit SCR1_HDU_DBGCSR_OFFS_DPC", false,-1, 1,0);
        vcdp->declBus(c+1134,"$unit SCR1_HDU_DBGCSR_OFFS_DSCRATCH0", false,-1, 1,0);
        vcdp->declBus(c+1145,"$unit SCR1_HDU_DBGCSR_OFFS_DSCRATCH1", false,-1, 1,0);
        vcdp->declBus(c+1219,"$unit SCR1_HDU_DBGCSR_ADDR_DCSR", false,-1, 11,0);
        vcdp->declBus(c+1249,"$unit SCR1_HDU_DBGCSR_ADDR_DPC", false,-1, 11,0);
        vcdp->declBus(c+1250,"$unit SCR1_HDU_DBGCSR_ADDR_DSCRATCH0", false,-1, 11,0);
        vcdp->declBus(c+1251,"$unit SCR1_HDU_DBGCSR_ADDR_DSCRATCH1", false,-1, 11,0);
        vcdp->declBus(c+1088,"$unit SCR1_TDU_MTRIG_NUM", false,-1, 31,0);
        vcdp->declBus(c+1101,"$unit SCR1_TDU_ALLTRIG_NUM", false,-1, 31,0);
        vcdp->declBus(c+1112,"$unit SCR1_TDU_ADDR_W", false,-1, 31,0);
        vcdp->declBus(c+1112,"$unit SCR1_TDU_DATA_W", false,-1, 31,0);
        vcdp->declBus(c+1092,"$unit SCR1_CSR_ADDR_TDU_OFFS_W", false,-1, 31,0);
        vcdp->declBus(c+1252,"$unit SCR1_CSR_ADDR_TDU_OFFS_TSELECT", false,-1, 2,0);
        vcdp->declBus(c+1253,"$unit SCR1_CSR_ADDR_TDU_OFFS_TDATA1", false,-1, 2,0);
        vcdp->declBus(c+1254,"$unit SCR1_CSR_ADDR_TDU_OFFS_TDATA2", false,-1, 2,0);
        vcdp->declBus(c+1255,"$unit SCR1_CSR_ADDR_TDU_OFFS_TINFO", false,-1, 2,0);
        vcdp->declBus(c+1222,"$unit SCR1_CSR_ADDR_TDU_TSELECT", false,-1, 11,0);
        vcdp->declBus(c+1256,"$unit SCR1_CSR_ADDR_TDU_TDATA1", false,-1, 11,0);
        vcdp->declBus(c+1257,"$unit SCR1_CSR_ADDR_TDU_TDATA2", false,-1, 11,0);
        vcdp->declBus(c+1258,"$unit SCR1_CSR_ADDR_TDU_TINFO", false,-1, 11,0);
        vcdp->declBus(c+1259,"$unit SCR1_TDU_TDATA1_TYPE_HI", false,-1, 31,0);
        vcdp->declBus(c+1260,"$unit SCR1_TDU_TDATA1_TYPE_LO", false,-1, 31,0);
        vcdp->declBus(c+1261,"$unit SCR1_TDU_TDATA1_DMODE", false,-1, 31,0);
        vcdp->declBit(c+1232,"$unit SCR1_TDU_TDATA1_DMODE_VAL", false,-1);
        vcdp->declBus(c+1170,"$unit SCR1_TDU_MCONTROL_MASKMAX_HI", false,-1, 31,0);
        vcdp->declBus(c+1262,"$unit SCR1_TDU_MCONTROL_MASKMAX_LO", false,-1, 31,0);
        vcdp->declBus(c+1263,"$unit SCR1_TDU_MCONTROL_RESERVEDB_HI", false,-1, 31,0);
        vcdp->declBus(c+1262,"$unit SCR1_TDU_MCONTROL_RESERVEDB_LO", false,-1, 31,0);
        vcdp->declBus(c+1263,"$unit SCR1_TDU_MCONTROL_HIT", false,-1, 31,0);
        vcdp->declBus(c+1264,"$unit SCR1_TDU_MCONTROL_SELECT", false,-1, 31,0);
        vcdp->declBus(c+1265,"$unit SCR1_TDU_MCONTROL_TIMING", false,-1, 31,0);
        vcdp->declBus(c+1266,"$unit SCR1_TDU_MCONTROL_ACTION_HI", false,-1, 31,0);
        vcdp->declBus(c+1177,"$unit SCR1_TDU_MCONTROL_ACTION_LO", false,-1, 31,0);
        vcdp->declBus(c+1239,"$unit SCR1_TDU_MCONTROL_CHAIN", false,-1, 31,0);
        vcdp->declBus(c+1155,"$unit SCR1_TDU_MCONTROL_MATCH_HI", false,-1, 31,0);
        vcdp->declBus(c+1238,"$unit SCR1_TDU_MCONTROL_MATCH_LO", false,-1, 31,0);
        vcdp->declBus(c+1106,"$unit SCR1_TDU_MCONTROL_M", false,-1, 31,0);
        vcdp->declBus(c+1151,"$unit SCR1_TDU_MCONTROL_RESERVEDA", false,-1, 31,0);
        vcdp->declBus(c+1089,"$unit SCR1_TDU_MCONTROL_S", false,-1, 31,0);
        vcdp->declBus(c+1101,"$unit SCR1_TDU_MCONTROL_U", false,-1, 31,0);
        vcdp->declBus(c+1088,"$unit SCR1_TDU_MCONTROL_EXECUTE", false,-1, 31,0);
        vcdp->declBus(c+1110,"$unit SCR1_TDU_MCONTROL_STORE", false,-1, 31,0);
        vcdp->declBus(c+1154,"$unit SCR1_TDU_MCONTROL_LOAD", false,-1, 31,0);
        vcdp->declBus(c+1267,"$unit SCR1_TDU_MCONTROL_TYPE_VAL", false,-1, 3,0);
        vcdp->declBit(c+1232,"$unit SCR1_TDU_MCONTROL_SELECT_VAL", false,-1);
        vcdp->declBit(c+1232,"$unit SCR1_TDU_MCONTROL_TIMING_VAL", false,-1);
        vcdp->declBus(c+1268,"$unit SCR1_TDU_MCONTROL_MASKMAX_VAL", false,-1, 5,0);
        vcdp->declBit(c+1232,"$unit SCR1_TDU_MCONTROL_RESERVEDA_VAL", false,-1);
        vcdp->declBus(c+1261,"$unit SCR1_TDU_ICOUNT_DMODE", false,-1, 31,0);
        vcdp->declBus(c+1170,"$unit SCR1_TDU_ICOUNT_RESERVEDB_HI", false,-1, 31,0);
        vcdp->declBus(c+1269,"$unit SCR1_TDU_ICOUNT_RESERVEDB_LO", false,-1, 31,0);
        vcdp->declBus(c+1270,"$unit SCR1_TDU_ICOUNT_HIT", false,-1, 31,0);
        vcdp->declBus(c+1271,"$unit SCR1_TDU_ICOUNT_COUNT_HI", false,-1, 31,0);
        vcdp->declBus(c+1155,"$unit SCR1_TDU_ICOUNT_COUNT_LO", false,-1, 31,0);
        vcdp->declBus(c+1272,"$unit SCR1_TDU_ICOUNT_M", false,-1, 31,0);
        vcdp->declBus(c+1246,"$unit SCR1_TDU_ICOUNT_RESERVEDA", false,-1, 31,0);
        vcdp->declBus(c+1238,"$unit SCR1_TDU_ICOUNT_S", false,-1, 31,0);
        vcdp->declBus(c+1106,"$unit SCR1_TDU_ICOUNT_U", false,-1, 31,0);
        vcdp->declBus(c+1151,"$unit SCR1_TDU_ICOUNT_ACTION_HI", false,-1, 31,0);
        vcdp->declBus(c+1154,"$unit SCR1_TDU_ICOUNT_ACTION_LO", false,-1, 31,0);
        vcdp->declBus(c+1179,"$unit SCR1_TDU_ICOUNT_TYPE_VAL", false,-1, 3,0);
        vcdp->declBus(c+1273,"$unit SCR1_TDU_ICOUNT_RESERVEDB_VAL", false,-1, 1,0);
        vcdp->declBit(c+1232,"$unit SCR1_TDU_ICOUNT_RESERVEDA_VAL", false,-1);
        vcdp->declBus(c+1089,"$unit SCR1_TAP_STATE_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1151,"$unit SCR1_TAP_INSTRUCTION_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1112,"$unit SCR1_TAP_DR_IDCODE_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1112,"$unit SCR1_TAP_DR_BLD_ID_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1110,"$unit SCR1_TAP_DR_BYPASS_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1114,"$unit SCR1_TAP_BLD_ID_VALUE", false,-1, 31,0);
        vcdp->declBus(c+1274,"$unit SCR1_DBG_DMI_ADDR_WIDTH", false,-1, 5,0);
        vcdp->declBus(c+1275,"$unit SCR1_DBG_DMI_DATA_WIDTH", false,-1, 5,0);
        vcdp->declBus(c+1134,"$unit SCR1_DBG_DMI_OP_WIDTH", false,-1, 1,0);
        vcdp->declBus(c+1134,"$unit SCR1_DBG_DMI_CH_ID_WIDTH", false,-1, 1,0);
        vcdp->declBus(c+1275,"$unit SCR1_DBG_DMI_DR_DTMCS_WIDTH", false,-1, 5,0);
        vcdp->declBus(c+1276,"$unit SCR1_DBG_DMI_DR_DMI_ACCESS_WIDTH", false,-1, 5,0);
        vcdp->declBus(c+1277,"$unit SCR1_DBG_DATA0", false,-1, 6,0);
        vcdp->declBus(c+1278,"$unit SCR1_DBG_DATA1", false,-1, 6,0);
        vcdp->declBus(c+1279,"$unit SCR1_DBG_DMCONTROL", false,-1, 6,0);
        vcdp->declBus(c+1280,"$unit SCR1_DBG_DMSTATUS", false,-1, 6,0);
        vcdp->declBus(c+1281,"$unit SCR1_DBG_HARTINFO", false,-1, 6,0);
        vcdp->declBus(c+1282,"$unit SCR1_DBG_ABSTRACTCS", false,-1, 6,0);
        vcdp->declBus(c+1283,"$unit SCR1_DBG_COMMAND", false,-1, 6,0);
        vcdp->declBus(c+1284,"$unit SCR1_DBG_ABSTRACTAUTO", false,-1, 6,0);
        vcdp->declBus(c+1285,"$unit SCR1_DBG_PROGBUF0", false,-1, 6,0);
        vcdp->declBus(c+1286,"$unit SCR1_DBG_PROGBUF1", false,-1, 6,0);
        vcdp->declBus(c+1287,"$unit SCR1_DBG_PROGBUF2", false,-1, 6,0);
        vcdp->declBus(c+1288,"$unit SCR1_DBG_PROGBUF3", false,-1, 6,0);
        vcdp->declBus(c+1289,"$unit SCR1_DBG_PROGBUF4", false,-1, 6,0);
        vcdp->declBus(c+1290,"$unit SCR1_DBG_PROGBUF5", false,-1, 6,0);
        vcdp->declBus(c+1291,"$unit SCR1_DBG_HALTSUM0", false,-1, 6,0);
        vcdp->declBus(c+1115,"$unit SCR1_DBG_DMCONTROL_HALTREQ", false,-1, 4,0);
        vcdp->declBus(c+1292,"$unit SCR1_DBG_DMCONTROL_RESUMEREQ", false,-1, 4,0);
        vcdp->declBus(c+1293,"$unit SCR1_DBG_DMCONTROL_HARTRESET", false,-1, 4,0);
        vcdp->declBus(c+1294,"$unit SCR1_DBG_DMCONTROL_ACKHAVERESET", false,-1, 4,0);
        vcdp->declBus(c+1295,"$unit SCR1_DBG_DMCONTROL_RESERVEDB", false,-1, 4,0);
        vcdp->declBus(c+1296,"$unit SCR1_DBG_DMCONTROL_HASEL", false,-1, 4,0);
        vcdp->declBus(c+1297,"$unit SCR1_DBG_DMCONTROL_HARTSELLO_HI", false,-1, 4,0);
        vcdp->declBus(c+1118,"$unit SCR1_DBG_DMCONTROL_HARTSELLO_LO", false,-1, 4,0);
        vcdp->declBus(c+1119,"$unit SCR1_DBG_DMCONTROL_HARTSELHI_HI", false,-1, 4,0);
        vcdp->declBus(c+1138,"$unit SCR1_DBG_DMCONTROL_HARTSELHI_LO", false,-1, 4,0);
        vcdp->declBus(c+1298,"$unit SCR1_DBG_DMCONTROL_RESERVEDA_HI", false,-1, 4,0);
        vcdp->declBus(c+1095,"$unit SCR1_DBG_DMCONTROL_RESERVEDA_LO", false,-1, 4,0);
        vcdp->declBus(c+1094,"$unit SCR1_DBG_DMCONTROL_NDMRESET", false,-1, 4,0);
        vcdp->declBus(c+1093,"$unit SCR1_DBG_DMCONTROL_DMACTIVE", false,-1, 4,0);
        vcdp->declBus(c+1115,"$unit SCR1_DBG_DMSTATUS_RESERVEDC_HI", false,-1, 4,0);
        vcdp->declBus(c+1299,"$unit SCR1_DBG_DMSTATUS_RESERVEDC_LO", false,-1, 4,0);
        vcdp->declBus(c+1300,"$unit SCR1_DBG_DMSTATUS_IMPEBREAK", false,-1, 4,0);
        vcdp->declBus(c+1301,"$unit SCR1_DBG_DMSTATUS_RESERVEDB_HI", false,-1, 4,0);
        vcdp->declBus(c+1153,"$unit SCR1_DBG_DMSTATUS_RESERVEDB_LO", false,-1, 4,0);
        vcdp->declBus(c+1302,"$unit SCR1_DBG_DMSTATUS_ALLHAVERESET", false,-1, 4,0);
        vcdp->declBus(c+1116,"$unit SCR1_DBG_DMSTATUS_ANYHAVERESET", false,-1, 4,0);
        vcdp->declBus(c+1117,"$unit SCR1_DBG_DMSTATUS_ALLRESUMEACK", false,-1, 4,0);
        vcdp->declBus(c+1118,"$unit SCR1_DBG_DMSTATUS_ANYRESUMEACK", false,-1, 4,0);
        vcdp->declBus(c+1119,"$unit SCR1_DBG_DMSTATUS_ALLNONEXISTENT", false,-1, 4,0);
        vcdp->declBus(c+1120,"$unit SCR1_DBG_DMSTATUS_ANYNONEXISTENT", false,-1, 4,0);
        vcdp->declBus(c+1303,"$unit SCR1_DBG_DMSTATUS_ALLUNAVAIL", false,-1, 4,0);
        vcdp->declBus(c+1121,"$unit SCR1_DBG_DMSTATUS_ANYUNAVAIL", false,-1, 4,0);
        vcdp->declBus(c+1122,"$unit SCR1_DBG_DMSTATUS_ALLRUNNING", false,-1, 4,0);
        vcdp->declBus(c+1123,"$unit SCR1_DBG_DMSTATUS_ANYRUNNING", false,-1, 4,0);
        vcdp->declBus(c+1124,"$unit SCR1_DBG_DMSTATUS_ALLHALTED", false,-1, 4,0);
        vcdp->declBus(c+1152,"$unit SCR1_DBG_DMSTATUS_ANYHALTED", false,-1, 4,0);
        vcdp->declBus(c+1304,"$unit SCR1_DBG_DMSTATUS_AUTHENTICATED", false,-1, 4,0);
        vcdp->declBus(c+1138,"$unit SCR1_DBG_DMSTATUS_AUTHBUSY", false,-1, 4,0);
        vcdp->declBus(c+1298,"$unit SCR1_DBG_DMSTATUS_RESERVEDA", false,-1, 4,0);
        vcdp->declBus(c+1125,"$unit SCR1_DBG_DMSTATUS_DEVTREEVALID", false,-1, 4,0);
        vcdp->declBus(c+1126,"$unit SCR1_DBG_DMSTATUS_VERSION_HI", false,-1, 4,0);
        vcdp->declBus(c+1093,"$unit SCR1_DBG_DMSTATUS_VERSION_LO", false,-1, 4,0);
        vcdp->declBus(c+1115,"$unit SCR1_DBG_COMMAND_TYPE_HI", false,-1, 4,0);
        vcdp->declBus(c+1305,"$unit SCR1_DBG_COMMAND_TYPE_LO", false,-1, 4,0);
        vcdp->declBus(c+1299,"$unit SCR1_DBG_COMMAND_ACCESSREG_RESERVEDB", false,-1, 4,0);
        vcdp->declBus(c+1300,"$unit SCR1_DBG_COMMAND_ACCESSREG_SIZE_HI", false,-1, 4,0);
        vcdp->declBus(c+1153,"$unit SCR1_DBG_COMMAND_ACCESSREG_SIZE_LO", false,-1, 4,0);
        vcdp->declBus(c+1302,"$unit SCR1_DBG_COMMAND_ACCESSREG_RESERVEDA", false,-1, 4,0);
        vcdp->declBus(c+1116,"$unit SCR1_DBG_COMMAND_ACCESSREG_POSTEXEC", false,-1, 4,0);
        vcdp->declBus(c+1117,"$unit SCR1_DBG_COMMAND_ACCESSREG_TRANSFER", false,-1, 4,0);
        vcdp->declBus(c+1118,"$unit SCR1_DBG_COMMAND_ACCESSREG_WRITE", false,-1, 4,0);
        vcdp->declBus(c+1119,"$unit SCR1_DBG_COMMAND_ACCESSREG_REGNO_HI", false,-1, 4,0);
        vcdp->declBus(c+1093,"$unit SCR1_DBG_COMMAND_ACCESSREG_REGNO_LO", false,-1, 4,0);
        vcdp->declBus(c+1299,"$unit SCR1_DBG_COMMAND_ACCESSMEM_AAMVIRTUAL", false,-1, 4,0);
        vcdp->declBus(c+1300,"$unit SCR1_DBG_COMMAND_ACCESSMEM_AAMSIZE_HI", false,-1, 4,0);
        vcdp->declBus(c+1153,"$unit SCR1_DBG_COMMAND_ACCESSMEM_AAMSIZE_LO", false,-1, 4,0);
        vcdp->declBus(c+1302,"$unit SCR1_DBG_COMMAND_ACCESSMEM_AAMPOSTINC", false,-1, 4,0);
        vcdp->declBus(c+1116,"$unit SCR1_DBG_COMMAND_ACCESSMEM_RESERVEDB_HI", false,-1, 4,0);
        vcdp->declBus(c+1117,"$unit SCR1_DBG_COMMAND_ACCESSMEM_RESERVEDB_LO", false,-1, 4,0);
        vcdp->declBus(c+1118,"$unit SCR1_DBG_COMMAND_ACCESSMEM_WRITE", false,-1, 4,0);
        vcdp->declBus(c+1303,"$unit SCR1_DBG_COMMAND_ACCESSMEM_RESERVEDA_HI", false,-1, 4,0);
        vcdp->declBus(c+1093,"$unit SCR1_DBG_COMMAND_ACCESSMEM_RESERVEDA_LO", false,-1, 4,0);
        vcdp->declBus(c+1115,"$unit SCR1_DBG_ABSTRACTCS_RESERVEDD_HI", false,-1, 4,0);
        vcdp->declBus(c+1293,"$unit SCR1_DBG_ABSTRACTCS_RESERVEDD_LO", false,-1, 4,0);
        vcdp->declBus(c+1294,"$unit SCR1_DBG_ABSTRACTCS_PROGBUFSIZE_HI", false,-1, 4,0);
        vcdp->declBus(c+1305,"$unit SCR1_DBG_ABSTRACTCS_PROGBUFSIZE_LO", false,-1, 4,0);
        vcdp->declBus(c+1299,"$unit SCR1_DBG_ABSTRACTCS_RESERVEDC_HI", false,-1, 4,0);
        vcdp->declBus(c+1303,"$unit SCR1_DBG_ABSTRACTCS_RESERVEDC_LO", false,-1, 4,0);
        vcdp->declBus(c+1121,"$unit SCR1_DBG_ABSTRACTCS_BUSY", false,-1, 4,0);
        vcdp->declBus(c+1122,"$unit SCR1_DBG_ABSTRACTCS_RESERVEDB", false,-1, 4,0);
        vcdp->declBus(c+1123,"$unit SCR1_DBG_ABSTRACTCS_CMDERR_HI", false,-1, 4,0);
        vcdp->declBus(c+1152,"$unit SCR1_DBG_ABSTRACTCS_CMDERR_LO", false,-1, 4,0);
        vcdp->declBus(c+1304,"$unit SCR1_DBG_ABSTRACTCS_RESERVEDA_HI", false,-1, 4,0);
        vcdp->declBus(c+1125,"$unit SCR1_DBG_ABSTRACTCS_RESERVEDA_LO", false,-1, 4,0);
        vcdp->declBus(c+1126,"$unit SCR1_DBG_ABSTRACTCS_DATACOUNT_HI", false,-1, 4,0);
        vcdp->declBus(c+1093,"$unit SCR1_DBG_ABSTRACTCS_DATACOUNT_LO", false,-1, 4,0);
        vcdp->declBus(c+1115,"$unit SCR1_DBG_HARTINFO_RESERVEDB_HI", false,-1, 4,0);
        vcdp->declBus(c+1305,"$unit SCR1_DBG_HARTINFO_RESERVEDB_LO", false,-1, 4,0);
        vcdp->declBus(c+1299,"$unit SCR1_DBG_HARTINFO_NSCRATCH_HI", false,-1, 4,0);
        vcdp->declBus(c+1153,"$unit SCR1_DBG_HARTINFO_NSCRATCH_LO", false,-1, 4,0);
        vcdp->declBus(c+1302,"$unit SCR1_DBG_HARTINFO_RESERVEDA_HI", false,-1, 4,0);
        vcdp->declBus(c+1117,"$unit SCR1_DBG_HARTINFO_RESERVEDA_LO", false,-1, 4,0);
        vcdp->declBus(c+1118,"$unit SCR1_DBG_HARTINFO_DATAACCESS", false,-1, 4,0);
        vcdp->declBus(c+1119,"$unit SCR1_DBG_HARTINFO_DATASIZE_HI", false,-1, 4,0);
        vcdp->declBus(c+1121,"$unit SCR1_DBG_HARTINFO_DATASIZE_LO", false,-1, 4,0);
        vcdp->declBus(c+1122,"$unit SCR1_DBG_HARTINFO_DATAADDR_HI", false,-1, 4,0);
        vcdp->declBus(c+1093,"$unit SCR1_DBG_HARTINFO_DATAADDR_LO", false,-1, 4,0);
        vcdp->declBus(c+1149,"$unit SCR1_AHB_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1247,"$unit SCR1_HTRANS_IDLE", false,-1, 1,0);
        vcdp->declBus(c+1134,"$unit SCR1_HTRANS_NONSEQ", false,-1, 1,0);
        vcdp->declBus(c+1247,"$unit SCR1_HTRANS_ERR", false,-1, 1,0);
        vcdp->declBus(c+1080,"$unit SCR1_HBURST_SINGLE", false,-1, 2,0);
        vcdp->declBus(c+1080,"$unit SCR1_HBURST_ERR", false,-1, 2,0);
        vcdp->declBus(c+1080,"$unit SCR1_HSIZE_8B", false,-1, 2,0);
        vcdp->declBus(c+1188,"$unit SCR1_HSIZE_16B", false,-1, 2,0);
        vcdp->declBus(c+1081,"$unit SCR1_HSIZE_32B", false,-1, 2,0);
        vcdp->declBus(c+1080,"$unit SCR1_HSIZE_ERR", false,-1, 2,0);
        vcdp->declBus(c+1193,"$unit SCR1_HPROT_DATA", false,-1, 31,0);
        vcdp->declBus(c+1097,"$unit SCR1_HPROT_PRV", false,-1, 31,0);
        vcdp->declBus(c+1090,"$unit SCR1_HPROT_BUF", false,-1, 31,0);
        vcdp->declBus(c+1092,"$unit SCR1_HPROT_CACHE", false,-1, 31,0);
        vcdp->declBit(c+1079,"$unit SCR1_HRESP_OKAY", false,-1);
        vcdp->declBit(c+1082,"$unit SCR1_HRESP_ERROR", false,-1);
        vcdp->declBit(c+1079,"$unit SCR1_HRESP_ERR", false,-1);
    }
}

void Vscr1_top_tb_ahb::traceFullThis__1(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (false && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->scr1_top_tb_ahb__DOT__rtc_clk));
        vcdp->fullBus(c+2,(vlTOPp->scr1_top_tb_ahb__DOT__fuse_mhartid),32);
        vcdp->fullBus(c+3,(vlTOPp->scr1_top_tb_ahb__DOT__imem_req_ack_stall),32);
        vcdp->fullBus(c+4,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_req_ack_stall),32);
        vcdp->fullBit(c+5,(vlTOPp->scr1_top_tb_ahb__DOT__trst_n));
        vcdp->fullBit(c+6,(vlTOPp->scr1_top_tb_ahb__DOT__tck));
        vcdp->fullBit(c+7,(vlTOPp->scr1_top_tb_ahb__DOT__tms));
        vcdp->fullBit(c+8,(vlTOPp->scr1_top_tb_ahb__DOT__tdi));
        vcdp->fullBus(c+9,(vlTOPp->scr1_top_tb_ahb__DOT__imem_hprot),4);
        vcdp->fullBus(c+10,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hprot),4);
        vcdp->fullBit(c+11,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__tracelog_full));
        vcdp->fullBus(c+12,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__temp_fhandler),32);
        vcdp->fullBus(c+13,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_be),4);
        vcdp->fullBus(c+14,(vlTOPp->scr1_top_tb_ahb__DOT__f_results),32);
        vcdp->fullBus(c+15,(vlTOPp->scr1_top_tb_ahb__DOT__f_info),32);
        vcdp->fullBus(c+16,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_cmb),32);
        vcdp->fullBit(c+17,((((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                              & (((((((((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_command_cmb) 
                                          | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_rpt_command_cmb)) 
                                         | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto_cmb)) 
                                        | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data0_cmb)) 
                                       | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data1_cmb)) 
                                      | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf0_cmb)) 
                                     | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf1_cmb)) 
                                    | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf2_cmb)) 
                                   | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf3_cmb)) 
                                  | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf4_cmb)) 
                                 | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf5_cmb))) 
                             | ((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff)))));
        vcdp->fullBus(c+18,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel)
                              ? (((5U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                  | (8U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
                                  ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data1_ff
                                  : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data0_ff)
                              : 0U)),32);
        vcdp->fullBit(c+19,(((((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                               & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_cmb)) 
                              & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_exception_cmb)) 
                             | ((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_exception_ff)))));
        vcdp->fullBit(c+20,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__reset_n_sync));
        vcdp->fullBus(c+21,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__trst_n) 
                              << 1U) | (1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff) 
                                              >> 1U)))),2);
        vcdp->fullBit(c+22,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack));
        vcdp->fullBit(c+23,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__dr_update));
        vcdp->fullBit(c+24,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__control_reg_wr));
        vcdp->fullBit(c+25,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_wr));
        vcdp->fullBit(c+26,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg_wr));
        vcdp->fullBit(c+27,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data) 
                                   >> 3U))));
        vcdp->fullBit(c+28,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data) 
                                   >> 2U))));
        vcdp->fullBit(c+29,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data) 
                                   >> 1U))));
        vcdp->fullBit(c+30,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data))));
        vcdp->fullBit(c+31,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status) 
                                   >> 3U))));
        vcdp->fullBit(c+32,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status) 
                                   >> 2U))));
        vcdp->fullBus(c+33,((3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status))),2);
        vcdp->fullBit(c+34,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_err));
        vcdp->fullBus(c+35,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel)
                              ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_reg
                              : 0U)),32);
        vcdp->fullBit(c+36,(((3U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                             | ((2U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_addr_qlfy)) 
                                & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req_qlfy))))));
        vcdp->fullBit(c+37,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event) 
                             & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__hdu_rst_n_qlfy))));
        vcdp->fullQuad(c+38,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_rdata_cmb),41);
        vcdp->fullBus(c+40,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_cmb),2);
        vcdp->fullBit(c+41,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc));
        vcdp->fullBit(c+42,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ext_irq));
        vcdp->fullBit(c+43,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie) 
                             & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie))));
        vcdp->fullBit(c+44,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie));
        vcdp->fullBit(c+45,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_empty));
        vcdp->fullBus(c+46,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_ocpd_h),3);
        vcdp->fullBit(c+47,((1U & (~ (IData)((3U == 
                                              (3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head))))))));
        vcdp->fullBit(c+48,((3U == (3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head)))));
        vcdp->fullBus(c+49,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head),16);
        vcdp->fullBit(c+50,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err_head));
        vcdp->fullBit(c+51,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err_next));
        vcdp->fullBus(c+52,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus),32);
        vcdp->fullBus(c+53,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie),32);
        vcdp->fullBus(c+54,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip),32);
        vcdp->fullBus(c+55,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ext_irq) 
                              & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_meie))
                              ? 0xbU : (((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq) 
                                         & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_mtie))
                                         ? 7U : 0xbU))),4);
        vcdp->fullQuad(c+56,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret),64);
        vcdp->fullQuad(c+58,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle),64);
        vcdp->fullBus(c+60,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten),32);
        vcdp->fullBit(c+61,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_inc_hi));
        vcdp->fullBit(c+62,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
                                   >> 8U))));
        vcdp->fullBit(c+63,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
                                   >> 7U))));
        vcdp->fullBit(c+64,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
                                   >> 6U))));
        vcdp->fullBit(c+65,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
                                   >> 5U))));
        vcdp->fullBit(c+66,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
                                   >> 4U))));
        vcdp->fullBus(c+67,((0xfU & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m))),4);
        vcdp->fullBit(c+68,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cicsr_m) 
                                   >> 1U))));
        vcdp->fullBit(c+69,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cicsr_m))));
        vcdp->fullBus(c+70,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_eoi_m),16);
        vcdp->fullBus(c+71,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[6U]),32);
        vcdp->fullBus(c+72,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[5U]),32);
        vcdp->fullBus(c+73,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[4U]),32);
        vcdp->fullBus(c+74,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[3U]),32);
        vcdp->fullBus(c+75,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[2U]),32);
        vcdp->fullBus(c+76,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[1U]),32);
        vcdp->fullBus(c+77,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[0U]),32);
        vcdp->fullBit(c+78,((((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc) 
                                | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret)) 
                               | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq)) 
                              & (~ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                    >> 3U))) & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit)))));
        vcdp->fullBit(c+79,(((((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc) 
                                 | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret)) 
                                | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq)) 
                               & (~ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                     >> 3U))) & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit))) 
                             | ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req) 
                                & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up))))));
        vcdp->fullBus(c+80,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) 
                              & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__imem_hready))
                              ? ((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__resp_fifo 
                                                >> 0x20U)))
                                  ? 2U : 1U) : 0U)),2);
        vcdp->fullBit(c+81,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) 
                             & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__imem_hready))));
        vcdp->fullBus(c+82,((7U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
                                    ? ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending_new) 
                                       - ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req) 
                                          & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_req_ack)))
                                    : (((2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__discard_resp_cnt)))))
                                        ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending_new)
                                        : ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__discard_resp_cnt) 
                                           - (IData)(1U)))))),3);
        vcdp->fullBit(c+83,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd)
                              ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_req)
                              : (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req_r))));
        vcdp->fullBit(c+84,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted)) 
                             & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_cond))));
        vcdp->fullBit(c+85,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr) 
                             & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access)))));
        vcdp->fullBus(c+86,((7U & ((IData)(4U) - ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
                                                  - (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next))))),3);
        vcdp->fullBus(c+87,((3U & (((IData)(4U) - ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
                                                   - (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next))) 
                                   >> 1U))),2);
        vcdp->fullBit(c+88,(((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp)) 
                             ^ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req))));
        vcdp->fullBit(c+89,(((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp)) 
                             ^ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req))));
        vcdp->fullBit(c+90,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)) 
                             & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req))));
        vcdp->fullBit(c+91,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd)) 
                             & ((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)) 
                                & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req)))));
        vcdp->fullBit(c+92,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)) 
                             & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req))));
        vcdp->fullBit(c+93,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd)) 
                             & ((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)) 
                                & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req)))));
        vcdp->fullBus(c+94,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd)
                              ? ((1U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                         >> 0x18U) 
                                        | ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                            >> 0x17U) 
                                           & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp))))
                                  ? (0xfffffffeU & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_res))
                                  : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc)
                              : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc)),32);
        vcdp->fullBus(c+95,(((8U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                              ? 0U : ((4U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                       ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_res)
                                       : ((2U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                           ? ((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                               ? ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req)
                                                   ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc
                                                   : 
                                                  ((0U 
                                                    != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_ldst_hit_cmb))
                                                    ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_res)
                                                    : 0U))
                                               : ((0x10U 
                                                   & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U])
                                                   ? 
                                                  ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                                      >> 5U))
                                                   : 
                                                  (0x73U 
                                                   | ((0xfff00000U 
                                                       & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                                          << 0xfU)) 
                                                      | ((0xf8000U 
                                                          & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                                                         | ((0x7000U 
                                                             & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                                                 << 0x1bU) 
                                                                | (0x7fff000U 
                                                                   & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                                                      >> 5U)))) 
                                                            | (0xf80U 
                                                               & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                                                  << 2U))))))))
                                           : ((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                               ? ((0x400U 
                                                   & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U])
                                                   ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc
                                                   : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc)
                                               : 0U))))),32);
        vcdp->fullBus(c+96,(((8U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U])
                              ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs1_data
                              : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc)),32);
        vcdp->fullBus(c+97,(((8U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
                              ? 0U : ((4U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
                                       ? ((2U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
                                                    ? 
                                                   (0xffffU 
                                                    & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata)
                                                    : 
                                                   (0xffU 
                                                    & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata)))
                                       : ((2U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
                                           ? ((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
                                               ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata
                                               : VL_EXTENDS_II(32,16, 
                                                               (0xffffU 
                                                                & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata)))
                                           : ((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
                                               ? VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata))
                                               : 0U))))),32);
        vcdp->fullBus(c+98,((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc 
                             & VL_NEGATE_I((IData)((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__core_rst_n_qlfy))))),32);
        vcdp->fullBit(c+99,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_mux_en));
        vcdp->fullBit(c+100,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_load));
        vcdp->fullBit(c+101,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_reset));
        vcdp->fullBit(c+102,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req));
        vcdp->fullBus(c+103,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr),7);
        vcdp->fullQuad(c+104,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_shift_cmb),41);
        vcdp->fullBit(c+106,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
                              & (0x16U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)))));
        vcdp->fullBit(c+107,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto_cmb));
        vcdp->fullBit(c+108,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_command_cmb));
        vcdp->fullBit(c+109,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_rpt_command_cmb));
        vcdp->fullBit(c+110,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data0_cmb));
        vcdp->fullBit(c+111,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data1_cmb));
        vcdp->fullBit(c+112,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf0_cmb));
        vcdp->fullBit(c+113,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf1_cmb));
        vcdp->fullBit(c+114,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf2_cmb));
        vcdp->fullBit(c+115,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf3_cmb));
        vcdp->fullBit(c+116,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf4_cmb));
        vcdp->fullBit(c+117,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf5_cmb));
        vcdp->fullBit(c+118,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
                              & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr)))));
        vcdp->fullBit(c+119,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel_tapout));
        vcdp->fullBus(c+120,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id_tapout),2);
        vcdp->fullBit(c+121,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel_tapout));
        vcdp->fullBit(c+122,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_out));
        vcdp->fullBit(c+123,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bypass_sel));
        vcdp->fullBit(c+124,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_idcode_sel));
        vcdp->fullBit(c+125,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bld_id_sel));
        vcdp->fullBit(c+126,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_mux_out));
        vcdp->fullBus(c+127,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_write_en),2);
        vcdp->fullBit(c+128,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_write_en));
        vcdp->fullBit(c+129,(vlTOPp->scr1_top_tb_ahb__DOT__imem_hready));
        vcdp->fullBus(c+130,(vlTOPp->scr1_top_tb_ahb__DOT__imem_hrdata),32);
        vcdp->fullBit(c+131,(vlTOPp->scr1_top_tb_ahb__DOT__imem_hresp));
        vcdp->fullBus(c+132,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__resp_fifo)),32);
        vcdp->fullBit(c+133,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__resp_fifo 
                                            >> 0x20U)))));
        vcdp->fullBus(c+134,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__resp_fifo)),32);
        vcdp->fullBit(c+135,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack));
        vcdp->fullBus(c+136,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__cmd_data),4);
        vcdp->fullBus(c+137,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__reg_data),4);
        vcdp->fullBit(c+138,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_posedge) 
                                    >> 3U))));
        vcdp->fullBit(c+139,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_posedge) 
                                    >> 2U))));
        vcdp->fullBit(c+140,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_posedge) 
                                    >> 1U))));
        vcdp->fullBit(c+141,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_posedge))));
        vcdp->fullBit(c+142,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_cmd_rctl));
        vcdp->fullBit(c+143,(vlTOPp->scr1_top_tb_ahb__DOT__rst_n));
        vcdp->fullBus(c+144,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata),32);
        vcdp->fullBus(c+145,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp),2);
        vcdp->fullBit(c+146,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_err_rvi_hi));
        vcdp->fullBit(c+147,((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp))));
        vcdp->fullBit(c+148,((2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp))));
        vcdp->fullBit(c+149,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd));
        vcdp->fullBit(c+150,((1U & (~ (((7U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_ident)) 
                                        | (5U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_ident))) 
                                       | (3U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_ident)))))));
        vcdp->fullBus(c+151,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_ident),3);
        vcdp->fullBus(c+152,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_bypass),2);
        vcdp->fullBit(c+153,((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_bypass))));
        vcdp->fullBus(c+154,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm) 
                               & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hready))
                               ? ((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
                                                 >> 0x25U)))
                                   ? 2U : 1U) : 0U)),2);
        vcdp->fullBit(c+155,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm) 
                              & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hready))));
        vcdp->fullBus(c+156,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_state_next),4);
        vcdp->fullBit(c+157,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr));
        vcdp->fullBus(c+158,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata),32);
        vcdp->fullBus(c+159,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata),32);
        vcdp->fullBit(c+160,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_dmcontrol_cmb));
        vcdp->fullBus(c+161,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_cmb),8);
        vcdp->fullBit(c+162,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro_cmb));
        vcdp->fullBit(c+163,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regacs_cmb));
        vcdp->fullBus(c+164,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regtype_cmb),4);
        vcdp->fullBus(c+165,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regfile_cmb),7);
        vcdp->fullBit(c+166,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regwr_cmb));
        vcdp->fullBus(c+167,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_cmb),12);
        vcdp->fullBus(c+168,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regsize_cmb),3);
        vcdp->fullBit(c+169,((2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regsize_cmb))));
        vcdp->fullBit(c+170,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regvalid_cmb));
        vcdp->fullBit(c+171,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_execprogbuf_cmb));
        vcdp->fullBit(c+172,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_memvalid_cmb));
        vcdp->fullBit(c+173,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_memwr_cmb));
        vcdp->fullBus(c+174,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_memsize_cmb),3);
        vcdp->fullBit(c+175,((3U > (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_memsize_cmb))));
        vcdp->fullBus(c+176,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_cmb),32);
        vcdp->fullBit(c+177,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_abstractauto_execdata0_cmb));
        vcdp->fullBus(c+178,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf0_cmb),32);
        vcdp->fullBus(c+179,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf1_cmb),32);
        vcdp->fullBus(c+180,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf2_cmb),32);
        vcdp->fullBus(c+181,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf3_cmb),32);
        vcdp->fullBus(c+182,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf4_cmb),32);
        vcdp->fullBus(c+183,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf5_cmb),32);
        vcdp->fullBit(c+184,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm_cmb));
        vcdp->fullBus(c+185,(vlTOPp->scr1_top_tb_ahb__DOT__imem_htrans),2);
        vcdp->fullBus(c+186,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo),32);
        vcdp->fullBus(c+187,((7U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U])),3);
        vcdp->fullBus(c+188,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_htrans),2);
        vcdp->fullBus(c+189,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]),32);
        vcdp->fullBit(c+190,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
                                    >> 3U))));
        vcdp->fullBit(c+191,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_req_ack));
        vcdp->fullBit(c+192,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req));
        vcdp->fullBus(c+193,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr),32);
        vcdp->fullBit(c+194,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_req_ack));
        vcdp->fullBit(c+195,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_req));
        vcdp->fullBus(c+196,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_res)),32);
        vcdp->fullBus(c+197,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data),32);
        vcdp->fullBit(c+198,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req));
        vcdp->fullBus(c+199,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_addr),32);
        vcdp->fullBit(c+200,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req));
        vcdp->fullBit(c+201,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_cmd));
        vcdp->fullBus(c+202,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_width),2);
        vcdp->fullBus(c+203,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_addr),32);
        vcdp->fullBus(c+204,(((0U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel))
                               ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data
                               : 0U)),32);
        vcdp->fullBit(c+205,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req));
        vcdp->fullBus(c+206,(((0x480000U == (0xffff0000U 
                                             & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr))
                               ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr
                               : 0U)),32);
        vcdp->fullBit(c+207,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req));
        vcdp->fullBit(c+208,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_cmd));
        vcdp->fullBus(c+209,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_width),2);
        vcdp->fullBus(c+210,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_addr),32);
        vcdp->fullBus(c+211,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_wdata),32);
        vcdp->fullBit(c+212,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_req));
        vcdp->fullBit(c+213,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_cmd));
        vcdp->fullBus(c+214,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_addr),32);
        vcdp->fullBus(c+215,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_wdata),32);
        vcdp->fullBit(c+216,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel));
        vcdp->fullBit(c+217,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_dreg_req_qlfy));
        vcdp->fullBit(c+218,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr) 
                              & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel))));
        vcdp->fullBit(c+219,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_dreg_wr_qlfy));
        vcdp->fullBus(c+220,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data),32);
        vcdp->fullBus(c+221,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_dreg_wdata_qlfy),32);
        vcdp->fullBit(c+222,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__dm_rst_n_sync));
        vcdp->fullBit(c+223,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__hdu_rst_n_sync));
        vcdp->fullBit(c+224,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_in_mux));
        vcdp->fullBit(c+225,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_in_mux));
        vcdp->fullBit(c+226,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req));
        vcdp->fullBus(c+227,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc),32);
        vcdp->fullBit(c+228,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch));
        vcdp->fullBit(c+229,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret));
        vcdp->fullBit(c+230,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
                              & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_req)))));
        vcdp->fullBit(c+231,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_hw));
        vcdp->fullBit(c+232,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_vd));
        vcdp->fullBit(c+233,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2idu_rdy));
        vcdp->fullBus(c+234,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rs1_addr),5);
        vcdp->fullBus(c+235,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs1_data),32);
        vcdp->fullBus(c+236,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rs2_addr),5);
        vcdp->fullBit(c+237,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req));
        vcdp->fullBus(c+238,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rd_data),32);
        vcdp->fullBit(c+239,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req));
        vcdp->fullBus(c+240,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data),32);
        vcdp->fullBit(c+241,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_req));
        vcdp->fullBus(c+242,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data),32);
        vcdp->fullBit(c+243,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_rw_exc));
        vcdp->fullBit(c+244,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq));
        vcdp->fullBit(c+245,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_exc));
        vcdp->fullBit(c+246,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr));
        vcdp->fullBus(c+247,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code),4);
        vcdp->fullBus(c+248,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_new_pc),32);
        vcdp->fullBit(c+249,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up));
        vcdp->fullBit(c+250,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_r_req));
        vcdp->fullBit(c+251,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req));
        vcdp->fullBus(c+252,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr),3);
        vcdp->fullBus(c+253,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata),32);
        vcdp->fullBus(c+254,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata),32);
        vcdp->fullBit(c+255,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req));
        vcdp->fullBus(c+256,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata),32);
        vcdp->fullBit(c+257,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_resp));
        vcdp->fullBit(c+258,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req_qlfy));
        vcdp->fullBus(c+259,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_wdata_qlfy),32);
        vcdp->fullBit(c+260,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon 
                                            >> 0x21U)))));
        vcdp->fullBit(c+261,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon 
                                            >> 0x20U)))));
        vcdp->fullBus(c+262,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon)),32);
        vcdp->fullBus(c+263,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_match),3);
        vcdp->fullBus(c+264,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_ldst_hit_cmb),2);
        vcdp->fullBit(c+265,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req));
        vcdp->fullBit(c+266,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2lsu_i_x_req));
        vcdp->fullBit(c+267,((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_ldst_hit_cmb))));
        vcdp->fullBus(c+268,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire),3);
        vcdp->fullBit(c+269,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon_qlfy 
                                            >> 0x21U)))));
        vcdp->fullBit(c+270,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon_qlfy 
                                            >> 0x20U)))));
        vcdp->fullBus(c+271,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon_qlfy)),32);
        vcdp->fullBit(c+272,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon_qlfy 
                                            >> 0x22U)))));
        vcdp->fullBit(c+273,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon_qlfy 
                                            >> 0x21U)))));
        vcdp->fullBit(c+274,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon_qlfy 
                                            >> 0x20U)))));
        vcdp->fullBus(c+275,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon_qlfy)),32);
        vcdp->fullBus(c+276,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy),3);
        vcdp->fullBit(c+277,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req));
        vcdp->fullBus(c+278,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_rd_data),32);
        vcdp->fullBit(c+279,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req_qlfy));
        vcdp->fullBus(c+280,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_wdata_qlfy),32);
        vcdp->fullBit(c+281,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req));
        vcdp->fullBit(c+282,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit));
        vcdp->fullBit(c+283,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_run2halt));
        vcdp->fullBit(c+284,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_vd));
        vcdp->fullBit(c+285,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2hdu_pbuf_rdy_qlfy));
        vcdp->fullBit(c+286,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_busy));
        vcdp->fullBit(c+287,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy));
        vcdp->fullBit(c+288,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_qlfy));
        vcdp->fullBus(c+289,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_r_new),30);
        vcdp->fullBus(c+290,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending_new),3);
        vcdp->fullBit(c+291,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush));
        vcdp->fullBus(c+292,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next),3);
        vcdp->fullBus(c+293,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr_next),3);
        vcdp->fullBus(c+294,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_re),2);
        vcdp->fullBus(c+295,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_we),2);
        vcdp->fullBit(c+296,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd));
        vcdp->fullBit(c+297,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_rdy));
        vcdp->fullBit(c+298,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy));
        vcdp->fullBit(c+299,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_vd));
        vcdp->fullBus(c+300,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_op1),32);
        vcdp->fullBus(c+301,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_op2),32);
        vcdp->fullBus(c+302,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_res),32);
        vcdp->fullBit(c+303,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp));
        vcdp->fullBit(c+304,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req));
        vcdp->fullBit(c+305,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_exc));
        vcdp->fullBus(c+306,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_exc_code),4);
        vcdp->fullBit(c+307,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_req));
        vcdp->fullBit(c+308,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_cond));
        vcdp->fullBus(c+309,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__next_state),2);
        vcdp->fullBit(c+310,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__iter_req));
        vcdp->fullBit(c+311,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__iter_rdy));
        vcdp->fullBus(c+312,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd),2);
        vcdp->fullBus(c+313,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd),2);
        vcdp->fullBit(c+314,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__corr_req));
        vcdp->fullBit(c+315,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_sub));
        vcdp->fullBus(c+316,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_op1),32);
        vcdp->fullBus(c+317,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_op2),32);
        vcdp->fullQuad(c+318,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_res),33);
        vcdp->fullBit(c+320,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_flags) 
                                    >> 3U))));
        vcdp->fullBit(c+321,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_flags) 
                                    >> 2U))));
        vcdp->fullBit(c+322,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_flags) 
                                    >> 1U))));
        vcdp->fullBit(c+323,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_flags))));
        vcdp->fullBit(c+324,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_sub));
        vcdp->fullQuad(c+325,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_op1),33);
        vcdp->fullQuad(c+327,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_op2),33);
        vcdp->fullQuad(c+329,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_res),33);
        vcdp->fullBus(c+331,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op1),32);
        vcdp->fullBus(c+332,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op2),5);
        vcdp->fullBus(c+333,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_res),32);
        vcdp->fullQuad(c+334,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_op1),33);
        vcdp->fullQuad(c+336,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_op2),33);
        vcdp->fullQuad(c+338,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_res),64);
        vcdp->fullBus(c+340,((0x1fU & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_res))),5);
        vcdp->fullBit(c+341,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_1_c));
        vcdp->fullBus(c+342,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_1),32);
        vcdp->fullBus(c+343,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_2),32);
        vcdp->fullBus(c+344,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_3),32);
        vcdp->fullBit(c+345,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__sgn));
        vcdp->fullBit(c+346,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__inv));
        vcdp->fullBit(c+347,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk2__DOT__sgn));
        vcdp->fullBit(c+348,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk2__DOT__inv));
        vcdp->fullBus(c+349,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk3__DOT__prev_low),31);
        vcdp->fullBit(c+350,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk3__DOT__quo));
        vcdp->fullBit(c+351,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__l_misalign));
        vcdp->fullBit(c+352,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__s_misalign));
        vcdp->fullBit(c+353,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_hwbrk));
        vcdp->fullQuad(c+354,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_hi_new),56);
        vcdp->fullBus(c+356,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_lo_new),8);
        vcdp->fullQuad(c+357,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_hi_new),56);
        vcdp->fullBus(c+359,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_lo_new),8);
        vcdp->fullBit(c+360,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc));
        vcdp->fullBit(c+361,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_up));
        vcdp->fullBit(c+362,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_up));
        vcdp->fullBit(c+363,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_up));
        vcdp->fullBit(c+364,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_up));
        vcdp->fullBit(c+365,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_up));
        vcdp->fullBit(c+366,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_up));
        vcdp->fullBit(c+367,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_up));
        vcdp->fullBus(c+368,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_up),2);
        vcdp->fullBus(c+369,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_up),2);
        vcdp->fullBit(c+370,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_inc_lo));
        vcdp->fullBit(c+371,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_inc_hi));
        vcdp->fullBit(c+372,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_up));
        vcdp->fullBus(c+373,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data),32);
        vcdp->fullBit(c+374,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc));
        vcdp->fullBit(c+375,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc));
        vcdp->fullBit(c+376,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq));
        vcdp->fullBit(c+377,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_mret));
        vcdp->fullBus(c+378,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl),16);
        vcdp->fullBus(c+379,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__invr_new),16);
        vcdp->fullBus(c+380,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__imr_new),16);
        vcdp->fullBus(c+381,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipr_new),16);
        vcdp->fullBus(c+382,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipr_clr),16);
        vcdp->fullBit(c+383,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__soi_wr_m));
        vcdp->fullBit(c+384,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__eoi_wr_m));
        vcdp->fullBit(c+385,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__unnamedblk8__DOT__cisv_found));
        vcdp->fullBus(c+386,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i),32);
        vcdp->fullBus(c+387,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__unnamedblk10__DOT__i),32);
        vcdp->fullBit(c+388,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tselect_cmb));
        vcdp->fullBus(c+389,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol_cmb),2);
        vcdp->fullBus(c+390,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2_cmb),2);
        vcdp->fullBit(c+391,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_cmb));
        vcdp->fullBus(c+392,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data_cmb),32);
        vcdp->fullBus(c+393,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__clk_en_mcontrol_cmb),2);
        vcdp->fullBus(c+394,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_execution_hit_cmb),2);
        vcdp->fullBit(c+395,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_icount_cmb));
        vcdp->fullBit(c+396,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__clk_en_icount_cmb));
        vcdp->fullBit(c+397,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_decrement_cmb));
        vcdp->fullBit(c+398,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_hit_cmb));
        vcdp->fullBus(c+399,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk1__DOT__i),32);
        vcdp->fullBus(c+400,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk2__DOT__i),32);
        vcdp->fullBus(c+401,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk3__DOT__i),32);
        vcdp->fullBit(c+402,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans_next));
        vcdp->fullBit(c+403,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update_next));
        vcdp->fullBit(c+404,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep));
        vcdp->fullBit(c+405,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_except));
        vcdp->fullBit(c+406,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak));
        vcdp->fullBit(c+407,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq));
        vcdp->fullBus(c+408,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_state_next),2);
        vcdp->fullBus(c+409,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_next),3);
        vcdp->fullBit(c+410,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr));
        vcdp->fullBit(c+411,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_sel));
        vcdp->fullBit(c+412,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_wr));
        vcdp->fullBus(c+413,((0xfU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                      >> 0x1cU))),4);
        vcdp->fullBus(c+414,((0xfffU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                        >> 0x10U))),12);
        vcdp->fullBit(c+415,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                    >> 0xfU))));
        vcdp->fullBus(c+416,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                    >> 0xcU))),3);
        vcdp->fullBit(c+417,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                    >> 0xbU))));
        vcdp->fullBus(c+418,((3U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                    >> 9U))),2);
        vcdp->fullBus(c+419,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                    >> 6U))),3);
        vcdp->fullBus(c+420,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                    >> 3U))),3);
        vcdp->fullBit(c+421,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                    >> 2U))));
        vcdp->fullBus(c+422,((3U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data)),2);
        vcdp->fullBus(c+423,((0xfU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                      >> 0x1cU))),4);
        vcdp->fullBus(c+424,((0xfffU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                        >> 0x10U))),12);
        vcdp->fullBit(c+425,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                    >> 0xfU))));
        vcdp->fullBus(c+426,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                    >> 0xcU))),3);
        vcdp->fullBit(c+427,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                    >> 0xbU))));
        vcdp->fullBus(c+428,((3U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                    >> 9U))),2);
        vcdp->fullBus(c+429,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                    >> 6U))),3);
        vcdp->fullBus(c+430,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                    >> 3U))),3);
        vcdp->fullBit(c+431,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                    >> 2U))));
        vcdp->fullBus(c+432,((3U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out)),2);
        vcdp->fullBit(c+433,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel));
        vcdp->fullBit(c+434,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr) 
                              & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel))));
        vcdp->fullBus(c+435,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_cmb),32);
        vcdp->fullBus(c+436,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_cmb),32);
        vcdp->fullBit(c+437,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rd));
        vcdp->fullBit(c+438,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_wr));
        vcdp->fullBus(c+439,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_writedata),32);
        vcdp->fullBus(c+440,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_byteen),4);
        vcdp->fullBus(c+441,((0x3fffU & (((0x480000U 
                                           == (0xffff0000U 
                                               & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr))
                                           ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr
                                           : 0U) >> 2U))),14);
        vcdp->fullBus(c+442,((0x3fffU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_addr 
                                         >> 2U))),14);
        vcdp->fullQuad(c+443,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_new),64);
        vcdp->fullQuad(c+445,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_new),64);
        vcdp->fullBit(c+447,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__control_up));
        vcdp->fullBit(c+448,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__divider_up));
        vcdp->fullBit(c+449,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimelo_up));
        vcdp->fullBit(c+450,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimehi_up));
        vcdp->fullBit(c+451,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmplo_up));
        vcdp->fullBit(c+452,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmphi_up));
        vcdp->fullBit(c+453,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__dmem_req_valid));
        vcdp->fullBit(c+454,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_cmp_flag));
        vcdp->fullBit(c+455,((0x480000U == (0xffff0000U 
                                            & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr))));
        vcdp->fullBus(c+456,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel),2);
        vcdp->fullBit(c+457,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd));
        vcdp->fullBus(c+458,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo),32);
        vcdp->fullBit(c+459,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_empty));
        vcdp->fullBit(c+460,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd));
        vcdp->fullBit(c+461,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U] 
                                    >> 3U))));
        vcdp->fullBus(c+462,((7U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U])),3);
        vcdp->fullBus(c+463,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[1U]),32);
        vcdp->fullBus(c+464,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[0U]),32);
        vcdp->fullBit(c+465,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
                                    >> 3U))));
        vcdp->fullBus(c+466,((7U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U])),3);
        vcdp->fullBus(c+467,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]),32);
        vcdp->fullBus(c+468,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[0U]),32);
        vcdp->fullBit(c+469,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_empty));
        vcdp->fullBus(c+470,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_wr_hazard),4);
        vcdp->fullBus(c+471,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_be),4);
        vcdp->fullBus(c+472,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_wr_hazard),4);
        vcdp->fullBus(c+473,(((2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel))
                               ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width)
                               : 0U)),2);
        vcdp->fullBit(c+474,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd) 
                              & (3U == (0xfU & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U])))));
        vcdp->fullBit(c+475,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon 
                                            >> 0x22U)))));
        vcdp->fullBit(c+476,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon 
                                            >> 0x21U)))));
        vcdp->fullBit(c+477,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon 
                                            >> 0x20U)))));
        vcdp->fullBus(c+478,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon)),32);
        vcdp->fullBus(c+479,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
                               ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc
                               : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc)),32);
        vcdp->fullBit(c+480,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_busy) 
                              & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__core_rst_n_qlfy))));
        vcdp->fullBit(c+481,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
                              & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__core_rst_n_qlfy))));
        vcdp->fullBus(c+482,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq)
                               ? 2U : ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak)
                                        ? 1U : ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req)
                                                 ? 3U
                                                 : 
                                                ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep)
                                                  ? 4U
                                                  : 0U))))),3);
        vcdp->fullBit(c+483,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hready));
        vcdp->fullBus(c+484,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hrdata),32);
        vcdp->fullBit(c+485,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hresp));
        vcdp->fullBus(c+486,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_rdata),32);
        vcdp->fullBit(c+487,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_rst_n));
        vcdp->fullBit(c+488,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
                                            >> 0x25U)))));
        vcdp->fullBus(c+489,((7U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
                                            >> 0x22U)))),3);
        vcdp->fullBus(c+490,((3U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
                                            >> 0x20U)))),2);
        vcdp->fullBus(c+491,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo)),32);
        vcdp->fullBit(c+492,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_cmd));
        vcdp->fullBus(c+493,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width),2);
        vcdp->fullBus(c+494,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr),32);
        vcdp->fullBit(c+495,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_imem_err));
        vcdp->fullBit(c+496,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                    >> 0xaU))));
        vcdp->fullBit(c+497,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                    >> 9U))));
        vcdp->fullBus(c+498,((0x1fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                       >> 4U))),5);
        vcdp->fullBit(c+499,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                    >> 3U))));
        vcdp->fullBus(c+500,((0xfU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                       << 1U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                                 >> 0x1fU)))),4);
        vcdp->fullBit(c+501,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    >> 0x1eU))));
        vcdp->fullBus(c+502,((3U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                     << 4U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                               >> 0x1cU)))),2);
        vcdp->fullBus(c+503,((7U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                     << 7U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                               >> 0x19U)))),3);
        vcdp->fullBit(c+504,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    >> 0x18U))));
        vcdp->fullBit(c+505,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    >> 0x17U))));
        vcdp->fullBit(c+506,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    >> 0x16U))));
        vcdp->fullBit(c+507,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    >> 0x15U))));
        vcdp->fullBit(c+508,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    >> 0x14U))));
        vcdp->fullBus(c+509,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                        << 0x11U) | 
                                       (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        >> 0xfU)))),5);
        vcdp->fullBus(c+510,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                        << 0x16U) | 
                                       (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        >> 0xaU)))),5);
        vcdp->fullBus(c+511,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        >> 5U)))),5);
        vcdp->fullBus(c+512,(((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                               << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                            >> 5U))),32);
        vcdp->fullBit(c+513,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                    >> 4U))));
        vcdp->fullBus(c+514,((0xfU & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U])),4);
        vcdp->fullBit(c+515,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1));
        vcdp->fullBit(c+516,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2));
        vcdp->fullBit(c+517,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd));
        vcdp->fullBit(c+518,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm));
        vcdp->fullBus(c+519,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        >> 5U)))),5);
        vcdp->fullBus(c+520,((0xfffU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                         << 0x1bU) 
                                        | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                           >> 5U)))),12);
        vcdp->fullBus(c+521,((3U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                     << 4U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                               >> 0x1cU)))),2);
        vcdp->fullBus(c+522,((7U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                     << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                                  >> 5U)))),3);
        vcdp->fullBus(c+523,((3U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                     << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                                  >> 5U)))),2);
        vcdp->fullBus(c+524,((3U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)),2);
        vcdp->fullBus(c+525,((0x1fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                       >> 2U))),5);
        vcdp->fullBit(c+526,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal));
        vcdp->fullBus(c+527,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3),3);
        vcdp->fullBus(c+528,((0x7fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                       >> 0x19U))),7);
        vcdp->fullBus(c+529,((0xfffU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                        >> 0x14U))),12);
        vcdp->fullBus(c+530,((0x1fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                       >> 0x14U))),5);
        vcdp->fullBit(c+531,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal));
        vcdp->fullBit(c+532,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                    >> 0xaU))));
        vcdp->fullBit(c+533,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                    >> 9U))));
        vcdp->fullBus(c+534,((0x1fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                       >> 4U))),5);
        vcdp->fullBit(c+535,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                    >> 3U))));
        vcdp->fullBus(c+536,((0xfU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                       << 1U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                                 >> 0x1fU)))),4);
        vcdp->fullBit(c+537,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    >> 0x1eU))));
        vcdp->fullBus(c+538,((7U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                     << 7U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                               >> 0x19U)))),3);
        vcdp->fullBit(c+539,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    >> 0x18U))));
        vcdp->fullBit(c+540,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    >> 0x17U))));
        vcdp->fullBit(c+541,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    >> 0x16U))));
        vcdp->fullBit(c+542,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    >> 0x15U))));
        vcdp->fullBit(c+543,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    >> 0x14U))));
        vcdp->fullBus(c+544,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                        << 0x11U) | 
                                       (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        >> 0xfU)))),5);
        vcdp->fullBus(c+545,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                        << 0x16U) | 
                                       (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        >> 0xaU)))),5);
        vcdp->fullBus(c+546,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        >> 5U)))),5);
        vcdp->fullBus(c+547,(((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                               << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                            >> 5U))),32);
        vcdp->fullBit(c+548,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                    >> 4U))));
        vcdp->fullBus(c+549,((0xfU & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U])),4);
        vcdp->fullBus(c+550,(((8U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U])
                               ? ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                   << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                                >> 5U))
                               : ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                   << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                                >> 5U)))),32);
        vcdp->fullBit(c+551,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                    >> 0xaU))));
        vcdp->fullBus(c+552,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc),32);
        vcdp->fullBus(c+553,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd),2);
        vcdp->fullBus(c+554,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_cmd),2);
        vcdp->fullBit(c+555,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_hdu_req));
        vcdp->fullBit(c+556,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_brkm_req));
        vcdp->fullBit(c+557,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt_en));
        vcdp->fullBit(c+558,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_posedge));
        vcdp->fullBus(c+559,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata),32);
        vcdp->fullBus(c+560,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp),2);
        vcdp->fullBit(c+561,(((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp)) 
                              | (2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp)))));
        vcdp->fullBit(c+562,((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp))));
        vcdp->fullBit(c+563,((2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp))));
        vcdp->fullBit(c+564,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__core_rst_n_qlfy));
        vcdp->fullBit(c+565,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__hdu_rst_n_qlfy));
        vcdp->fullBit(c+566,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__pwrup_rst_n_sync));
        vcdp->fullBit(c+567,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status_qlfy) 
                                    >> 3U))));
        vcdp->fullBit(c+568,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status_qlfy) 
                                    >> 2U))));
        vcdp->fullBus(c+569,((3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status_qlfy))),2);
        vcdp->fullBus(c+570,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_addr_qlfy),3);
        vcdp->fullBus(c+571,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_instr),32);
        vcdp->fullBit(c+572,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halted));
        vcdp->fullBit(c+573,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_run_start));
        vcdp->fullBit(c+574,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_rctl_clr));
        vcdp->fullBit(c+575,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_exception_cmb));
        vcdp->fullBit(c+576,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run));
        vcdp->fullBit(c+577,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_cmd_req));
        vcdp->fullBit(c+578,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_pbuf_start_fetch));
        vcdp->fullBit(c+579,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_rctl_wr));
        vcdp->fullBit(c+580,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req));
        vcdp->fullBit(c+581,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_resume_req));
        vcdp->fullBus(c+582,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_cmb),4);
        vcdp->fullBit(c+583,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_cmb));
        vcdp->fullBit(c+584,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_cmb));
        vcdp->fullBit(c+585,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_cmb));
        vcdp->fullBus(c+586,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_cmb),2);
        vcdp->fullBus(c+587,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmderr_cmb),3);
        vcdp->fullBus(c+588,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_req_cmb),3);
        vcdp->fullBit(c+589,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_cmb));
        vcdp->fullBit(c+590,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_init_pc_qlfy));
        vcdp->fullBus(c+591,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_cmd_qlfy),2);
        vcdp->fullBus(c+592,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_addr_qlfy),3);
        vcdp->fullBus(c+593,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_cmd_qlfy),2);
        vcdp->fullBus(c+594,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_addr_qlfy),2);
        vcdp->fullBit(c+595,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__queue_barrier));
        vcdp->fullBit(c+596,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_resp));
        vcdp->fullBit(c+597,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_resp_qlfy));
        vcdp->fullBit(c+598,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_rcode));
        vcdp->fullBit(c+599,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_rcode_qlfy));
        vcdp->fullBus(c+600,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next),2);
        vcdp->fullBit(c+601,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event_next));
        vcdp->fullBit(c+602,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_csr_update));
        vcdp->fullBus(c+603,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_cmb),3);
        vcdp->fullBit(c+604,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_cmb));
        vcdp->fullBit(c+605,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_mux_out_reg));
        vcdp->fullBit(c+606,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_mux_en_reg));
        vcdp->fullBus(c+607,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_reg),5);
        vcdp->fullBus(c+608,(((0xfU == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_state_reg))
                               ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_reg)
                               : (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_reg))),5);
        vcdp->fullBus(c+609,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_reg),5);
        vcdp->fullBus(c+610,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg),32);
        vcdp->fullBus(c+611,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg),32);
        vcdp->fullBit(c+612,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_bypass_reg__DOT__shift_reg));
        vcdp->fullBit(c+613,((1U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg)));
        vcdp->fullBit(c+614,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_bypass_reg__DOT__shift_reg));
        vcdp->fullBit(c+615,((1U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg)));
        vcdp->fullBit(c+616,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift));
        vcdp->fullBit(c+617,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff));
        vcdp->fullBit(c+618,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_buf_cell__DOT__reset_n_status_ff));
        vcdp->fullBit(c+619,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_reset_buf_cell__DOT__reset_n_ff));
        vcdp->fullBit(c+620,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_reset_buf_cell__DOT__reset_n_status_ff));
        vcdp->fullArray(c+621,(vlTOPp->scr1_top_tb_ahb__DOT__test_file),256);
        vcdp->fullBit(c+629,(vlTOPp->scr1_top_tb_ahb__DOT__test_running));
        vcdp->fullBus(c+630,(vlTOPp->scr1_top_tb_ahb__DOT__tests_passed),32);
        vcdp->fullBus(c+631,(vlTOPp->scr1_top_tb_ahb__DOT__tests_total),32);
        vcdp->fullBus(c+632,(vlTOPp->scr1_top_tb_ahb__DOT__rst_cnt),2);
        vcdp->fullBit(c+633,(vlTOPp->scr1_top_tb_ahb__DOT__rst_init));
        vcdp->fullArray(c+634,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__full_filename),256);
        vcdp->fullBit(c+642,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__test_pass));
        vcdp->fullBus(c+643,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tmpv),32);
        vcdp->fullBus(c+644,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__start),32);
        vcdp->fullBus(c+645,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__stop),32);
        vcdp->fullBus(c+646,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ref_data),32);
        vcdp->fullBus(c+647,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__test_data),32);
        vcdp->fullBus(c+648,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__fd),32);
        vcdp->fullArray(c+649,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tmpstr),2048);
        vcdp->fullBit(c+713,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk5__DOT__test_pass));
        vcdp->fullBus(c+714,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_rdata),32);
        vcdp->fullBus(c+715,(((0x1fU >= ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg) 
                                         << 3U)) ? 
                              (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_local 
                               >> ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg) 
                                   << 3U)) : 0U)),32);
        vcdp->fullBus(c+716,((((5U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                               | (8U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
                               ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data1_ff
                               : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data0_ff)),32);
        vcdp->fullBus(c+717,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_instr),32);
        vcdp->fullBus(c+718,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__cnt_res_reg),5);
        vcdp->fullBit(c+719,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_1_c_reg));
        vcdp->fullBus(c+720,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_1_reg),32);
        vcdp->fullBus(c+721,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_2_reg),32);
        vcdp->fullBus(c+722,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_3_reg),32);
        vcdp->fullBus(c+723,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__tdata2)),32);
        vcdp->fullBus(c+724,((IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__tdata2 
                                      >> 0x20U))),32);
        vcdp->fullBit(c+725,(((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                              & (1U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))));
        vcdp->fullBus(c+726,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff),3);
        vcdp->fullBit(c+727,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractauto_execdata0_ff));
        vcdp->fullBus(c+728,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data0_ff),32);
        vcdp->fullBus(c+729,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data1_ff),32);
        vcdp->fullBus(c+730,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__command_ff),32);
        vcdp->fullBus(c+731,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf0_ff),32);
        vcdp->fullBus(c+732,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf1_ff),32);
        vcdp->fullBus(c+733,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf2_ff),32);
        vcdp->fullBus(c+734,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf3_ff),32);
        vcdp->fullBus(c+735,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf4_ff),32);
        vcdp->fullBus(c+736,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf5_ff),32);
        vcdp->fullBus(c+737,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff),4);
        vcdp->fullBit(c+738,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_ff));
        vcdp->fullBus(c+739,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_ff),32);
        vcdp->fullBit(c+740,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff));
        vcdp->fullBit(c+741,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_ff));
        vcdp->fullBus(c+742,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_ff),2);
        vcdp->fullBus(c+743,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff),12);
        vcdp->fullBit(c+744,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_exception_ff));
        vcdp->fullBit(c+745,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff));
        vcdp->fullBit(c+746,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_pbuf_ebreak_ff));
        vcdp->fullBus(c+747,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_local),32);
        vcdp->fullBus(c+748,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg),2);
        vcdp->fullBus(c+749,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__unnamedblk1__DOT__i),32);
        vcdp->fullBus(c+750,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_r),32);
        vcdp->fullBit(c+751,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[2U] 
                                    >> 3U))));
        vcdp->fullBus(c+752,((7U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[2U])),3);
        vcdp->fullBus(c+753,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[1U]),32);
        vcdp->fullBus(c+754,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[0U]),32);
        vcdp->fullArray(c+755,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file),256);
        vcdp->fullBit(c+763,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file_init));
        vcdp->fullBit(c+764,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff) 
                                    >> 1U))));
        vcdp->fullBit(c+765,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff) 
                                    >> 1U))));
        vcdp->fullBit(c+766,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff) 
                                    >> 1U))));
        vcdp->fullBus(c+767,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff),2);
        vcdp->fullBus(c+768,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff),2);
        vcdp->fullBus(c+769,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff),2);
        vcdp->fullBit(c+770,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state));
        vcdp->fullBus(c+771,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_addr),32);
        vcdp->fullBus(c+772,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall),32);
        vcdp->fullBit(c+773,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_rnd));
        vcdp->fullBus(c+774,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_hrdata_l),32);
        vcdp->fullBus(c+775,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall),32);
        vcdp->fullBit(c+776,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_rnd));
        vcdp->fullBus(c+777,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_size),3);
        vcdp->fullBus(c+778,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l),32);
        vcdp->fullBit(c+779,((1U & ((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__control_reg)) 
                                    & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff) 
                                       >> 1U)))));
        vcdp->fullBit(c+780,((1U & (((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff)) 
                                     & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff))) 
                                    & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff) 
                                       >> 1U)))));
        vcdp->fullBit(c+781,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_update));
        vcdp->fullBit(c+782,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi));
        vcdp->fullBit(c+783,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel));
        vcdp->fullBit(c+784,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg))));
        vcdp->fullBus(c+785,((0xfU & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg) 
                                      >> 4U))),4);
        vcdp->fullBus(c+786,((3U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg) 
                                    >> 2U))),2);
        vcdp->fullBus(c+787,((3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg))),2);
        vcdp->fullBus(c+788,((0xfU & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shadow_reg) 
                                      >> 4U))),4);
        vcdp->fullBus(c+789,((3U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shadow_reg) 
                                    >> 2U))),2);
        vcdp->fullBus(c+790,((3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shadow_reg))),2);
        vcdp->fullBus(c+791,((7U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__control_reg) 
                                    >> 1U))),3);
        vcdp->fullBit(c+792,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__control_reg))));
        vcdp->fullBus(c+793,((3U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg) 
                                    >> 2U))),2);
        vcdp->fullBit(c+794,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg) 
                                    >> 1U))));
        vcdp->fullBit(c+795,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg))));
        vcdp->fullBus(c+796,((3U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_r) 
                                    >> 2U))),2);
        vcdp->fullBit(c+797,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_r) 
                                    >> 1U))));
        vcdp->fullBit(c+798,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_r))));
        vcdp->fullBit(c+799,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_wr_r));
        vcdp->fullBit(c+800,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_dly) 
                                    >> 3U))));
        vcdp->fullBit(c+801,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_dly) 
                                    >> 2U))));
        vcdp->fullBit(c+802,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_dly) 
                                    >> 1U))));
        vcdp->fullBit(c+803,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_dly))));
        vcdp->fullBit(c+804,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg) 
                                    >> 3U))));
        vcdp->fullBit(c+805,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg) 
                                    >> 2U))));
        vcdp->fullBit(c+806,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg) 
                                    >> 1U))));
        vcdp->fullBit(c+807,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg))));
        vcdp->fullBit(c+808,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_status_ff));
        vcdp->fullBus(c+809,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__unnamedblk1__DOT__i),32);
        vcdp->fullBit(c+810,((1U & (((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync) 
                                     >> 2U) ^ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync) 
                                               >> 1U)))));
        vcdp->fullBit(c+811,((1U & (((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync) 
                                     >> 3U) ^ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync) 
                                               >> 2U)))));
        vcdp->fullBus(c+812,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos_sync),4);
        vcdp->fullBus(c+813,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync),4);
        vcdp->fullBus(c+814,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync),3);
        vcdp->fullBit(c+815,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg) 
                               & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel)) 
                              | ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff) 
                                 & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel)))));
        vcdp->fullBit(c+816,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel) 
                              & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture))));
        vcdp->fullBit(c+817,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel) 
                              & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift))));
        vcdp->fullBit(c+818,((1U & ((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg)) 
                                    | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_qualifier_ff)))));
        vcdp->fullBit(c+819,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event));
        vcdp->fullBus(c+820,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr),3);
        vcdp->fullBus(c+821,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_reg),32);
        vcdp->fullBus(c+822,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__tselect_ff),2);
        vcdp->fullBus(c+823,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_dmode_ff),2);
        vcdp->fullBus(c+824,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_action_ff),2);
        vcdp->fullBus(c+825,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_hit_ff),2);
        vcdp->fullBus(c+826,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_m_ff),2);
        vcdp->fullBus(c+827,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_execution_ff),2);
        vcdp->fullBus(c+828,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_load_ff),2);
        vcdp->fullBus(c+829,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_store_ff),2);
        vcdp->fullBit(c+830,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_skip_ff));
        vcdp->fullBit(c+831,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_dmode_ff));
        vcdp->fullBit(c+832,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_action_ff));
        vcdp->fullBit(c+833,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_hit_ff));
        vcdp->fullBit(c+834,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_m_ff));
        vcdp->fullBus(c+835,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_count_ff),14);
        vcdp->fullBus(c+836,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state),2);
        vcdp->fullBit(c+837,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans));
        vcdp->fullBit(c+838,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update));
        vcdp->fullBit(c+839,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus) 
                                    >> 3U))));
        vcdp->fullBus(c+840,((7U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus))),3);
        vcdp->fullBus(c+841,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbgc_timeout_cnt),6);
        vcdp->fullBit(c+842,((1U & (~ (IData)((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbgc_timeout_cnt)))))));
        vcdp->fullBus(c+843,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_state),2);
        vcdp->fullBit(c+844,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_instr_wait_latching));
        vcdp->fullBus(c+845,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_cause),3);
        vcdp->fullBit(c+846,((1U & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff)))));
        vcdp->fullBit(c+847,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel));
        vcdp->fullBus(c+848,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id),2);
        vcdp->fullBit(c+849,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff))));
        vcdp->fullBit(c+850,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_req));
        vcdp->fullBus(c+851,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd),2);
        vcdp->fullBus(c+852,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__dmi_rdata_ff),32);
        vcdp->fullQuad(c+853,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff),41);
        vcdp->fullBit(c+855,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff));
        vcdp->fullBit(c+856,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff));
        vcdp->fullBit(c+857,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_ff));
        vcdp->fullBit(c+858,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff));
        vcdp->fullBit(c+859,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_ff));
        vcdp->fullBit(c+860,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff));
        vcdp->fullBit(c+861,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff));
        vcdp->fullBit(c+862,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff));
        vcdp->fullBus(c+863,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff),3);
        vcdp->fullBit(c+864,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_status_ff));
        vcdp->fullBit(c+865,((1U & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)))));
        vcdp->fullBit(c+866,((1U & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)))));
        vcdp->fullBus(c+867,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp),2);
        vcdp->fullBus(c+868,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp),2);
        vcdp->fullBus(c+869,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata),32);
        vcdp->fullBus(c+870,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_resp),2);
        vcdp->fullBit(c+871,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq));
        vcdp->fullQuad(c+872,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg),64);
        vcdp->fullBus(c+874,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc),32);
        vcdp->fullBit(c+875,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__fsm));
        vcdp->fullBus(c+876,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_r),30);
        vcdp->fullBus(c+877,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending),3);
        vcdp->fullBus(c+878,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__discard_resp_cnt),3);
        vcdp->fullBit(c+879,((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__discard_resp_cnt))));
        vcdp->fullBus(c+880,((7U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending) 
                                    - (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__discard_resp_cnt)))),3);
        vcdp->fullBit(c+881,((7U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending))));
        vcdp->fullBit(c+882,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned));
        vcdp->fullBus(c+883,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr),3);
        vcdp->fullBus(c+884,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr),3);
        vcdp->fullBus(c+885,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[0]),16);
        vcdp->fullBus(c+886,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[1]),16);
        vcdp->fullBus(c+887,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[2]),16);
        vcdp->fullBus(c+888,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[3]),16);
        vcdp->fullBit(c+889,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[0]));
        vcdp->fullBit(c+890,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[1]));
        vcdp->fullBit(c+891,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[2]));
        vcdp->fullBit(c+892,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[3]));
        vcdp->fullBus(c+893,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data
                             [(3U & ((IData)(1U) + (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr)))]),16);
        vcdp->fullBit(c+894,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_curr));
        vcdp->fullBit(c+895,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access));
        vcdp->fullBit(c+896,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted));
        vcdp->fullBit(c+897,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_start));
        vcdp->fullBus(c+898,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc_v),4);
        vcdp->fullBit(c+899,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req_r));
        vcdp->fullBus(c+900,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__curr_state),2);
        vcdp->fullBit(c+901,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__fsm));
        vcdp->fullBus(c+902,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r),4);
        vcdp->fullBus(c+903,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0U]),32);
        vcdp->fullBus(c+904,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[1U]),32);
        vcdp->fullBus(c+905,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[2U]),32);
        vcdp->fullBus(c+906,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[3U]),32);
        vcdp->fullBus(c+907,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[4U]),32);
        vcdp->fullBus(c+908,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[5U]),32);
        vcdp->fullBus(c+909,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[6U]),32);
        vcdp->fullBus(c+910,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[7U]),32);
        vcdp->fullBus(c+911,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[8U]),32);
        vcdp->fullBus(c+912,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[9U]),32);
        vcdp->fullBus(c+913,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xaU]),32);
        vcdp->fullBus(c+914,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xbU]),32);
        vcdp->fullBus(c+915,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xcU]),32);
        vcdp->fullBus(c+916,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xdU]),32);
        vcdp->fullBus(c+917,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xeU]),32);
        vcdp->fullBus(c+918,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xfU]),32);
        vcdp->fullBus(c+919,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x10U]),32);
        vcdp->fullBus(c+920,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x11U]),32);
        vcdp->fullBus(c+921,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x12U]),32);
        vcdp->fullBus(c+922,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x13U]),32);
        vcdp->fullBus(c+923,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x14U]),32);
        vcdp->fullBus(c+924,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x15U]),32);
        vcdp->fullBus(c+925,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x16U]),32);
        vcdp->fullBus(c+926,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x17U]),32);
        vcdp->fullBus(c+927,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x18U]),32);
        vcdp->fullBus(c+928,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x19U]),32);
        vcdp->fullBus(c+929,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1aU]),32);
        vcdp->fullBus(c+930,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1bU]),32);
        vcdp->fullBus(c+931,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1cU]),32);
        vcdp->fullBus(c+932,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1dU]),32);
        vcdp->fullBus(c+933,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1eU]),32);
        vcdp->fullBit(c+934,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie));
        vcdp->fullBit(c+935,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie));
        vcdp->fullBit(c+936,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_mtie));
        vcdp->fullBit(c+937,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_meie));
        vcdp->fullBit(c+938,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_msie));
        vcdp->fullBus(c+939,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch),32);
        vcdp->fullBus(c+940,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc),31);
        vcdp->fullBit(c+941,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i));
        vcdp->fullBus(c+942,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec),4);
        vcdp->fullBus(c+943,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval),32);
        vcdp->fullBus(c+944,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base),26);
        vcdp->fullBit(c+945,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_mode));
        vcdp->fullQuad(c+946,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_hi),56);
        vcdp->fullBus(c+948,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_lo),8);
        vcdp->fullQuad(c+949,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_hi),56);
        vcdp->fullBus(c+951,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_lo),8);
        vcdp->fullBit(c+952,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy));
        vcdp->fullBit(c+953,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_ir));
        vcdp->fullBus(c+954,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_i),16);
        vcdp->fullBus(c+955,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_det),16);
        vcdp->fullBus(c+956,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__invr),16);
        vcdp->fullBus(c+957,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__imr),16);
        vcdp->fullBus(c+958,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipr),16);
        vcdp->fullBus(c+959,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ier),16);
        vcdp->fullBus(c+960,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipr) 
                              & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ier))),16);
        vcdp->fullBus(c+961,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cisv_m),5);
        vcdp->fullBus(c+962,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__idxr_m),4);
        vcdp->fullBus(c+963,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_m),16);
        vcdp->fullBus(c+964,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_sync0),16);
        vcdp->fullBus(c+965,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__unnamedblk13__DOT__i),32);
        vcdp->fullBus(c+966,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt),32);
        vcdp->fullBit(c+967,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update_r));
        vcdp->fullBus(c+968,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0U]),32);
        vcdp->fullBus(c+969,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[1U]),32);
        vcdp->fullBus(c+970,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[2U]),32);
        vcdp->fullBus(c+971,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[3U]),32);
        vcdp->fullBus(c+972,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[4U]),32);
        vcdp->fullBus(c+973,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[5U]),32);
        vcdp->fullBus(c+974,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[6U]),32);
        vcdp->fullBus(c+975,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[7U]),32);
        vcdp->fullBus(c+976,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[8U]),32);
        vcdp->fullBus(c+977,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[9U]),32);
        vcdp->fullBus(c+978,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xaU]),32);
        vcdp->fullBus(c+979,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xbU]),32);
        vcdp->fullBus(c+980,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xcU]),32);
        vcdp->fullBus(c+981,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xdU]),32);
        vcdp->fullBus(c+982,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xeU]),32);
        vcdp->fullBus(c+983,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xfU]),32);
        vcdp->fullBus(c+984,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x10U]),32);
        vcdp->fullBus(c+985,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x11U]),32);
        vcdp->fullBus(c+986,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x12U]),32);
        vcdp->fullBus(c+987,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x13U]),32);
        vcdp->fullBus(c+988,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x14U]),32);
        vcdp->fullBus(c+989,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x15U]),32);
        vcdp->fullBus(c+990,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x16U]),32);
        vcdp->fullBus(c+991,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x17U]),32);
        vcdp->fullBus(c+992,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x18U]),32);
        vcdp->fullBus(c+993,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x19U]),32);
        vcdp->fullBus(c+994,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1aU]),32);
        vcdp->fullBus(c+995,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1bU]),32);
        vcdp->fullBus(c+996,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1cU]),32);
        vcdp->fullBus(c+997,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1dU]),32);
        vcdp->fullBus(c+998,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1eU]),32);
        vcdp->fullBit(c+999,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_up));
        vcdp->fullBus(c+1000,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr),5);
        vcdp->fullBus(c+1001,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler),32);
        vcdp->fullBus(c+1002,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt2),32);
        vcdp->fullBus(c+1003,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_csr_fhandler),32);
        vcdp->fullBus(c+1004,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[6U]),32);
        vcdp->fullBus(c+1005,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[5U]),32);
        vcdp->fullBus(c+1006,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[4U]),32);
        vcdp->fullBus(c+1007,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[3U]),32);
        vcdp->fullBus(c+1008,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[2U]),32);
        vcdp->fullBus(c+1009,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[1U]),32);
        vcdp->fullBus(c+1010,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[0U]),32);
        vcdp->fullQuad(c+1011,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_reg),64);
        vcdp->fullBit(c+1013,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_en));
        vcdp->fullBus(c+1014,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_div),10);
        vcdp->fullBus(c+1015,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt),10);
        vcdp->fullBit(c+1016,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__fsm));
        vcdp->fullBit(c+1017,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__port_sel_r));
        vcdp->fullBit(c+1018,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__fsm));
        vcdp->fullBus(c+1019,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel_r),2);
        vcdp->fullBit(c+1020,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm));
        vcdp->fullBit(c+1021,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full));
        vcdp->fullBit(c+1022,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full));
        vcdp->fullBit(c+1023,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg));
        vcdp->fullBit(c+1024,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_capture));
        vcdp->fullBit(c+1025,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift));
        vcdp->fullBit(c+1026,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_update));
        vcdp->fullBit(c+1027,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos));
        vcdp->fullBit(c+1028,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture));
        vcdp->fullBit(c+1029,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift));
        vcdp->fullBit(c+1030,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture) 
                               | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift))));
        vcdp->fullBus(c+1031,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__curr_pc_log),32);
        vcdp->fullBit(c+1032,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                     >> 4U))));
        vcdp->fullBit(c+1033,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                     >> 2U))));
        vcdp->fullBit(c+1034,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                     >> 5U))));
        vcdp->fullBit(c+1035,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                     >> 3U))));
        vcdp->fullBit(c+1036,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                     >> 1U))));
        vcdp->fullBit(c+1037,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                     >> 5U))));
        vcdp->fullBit(c+1038,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                     >> 3U))));
        vcdp->fullBit(c+1039,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                     >> 2U))));
        vcdp->fullBit(c+1040,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                     >> 1U))));
        vcdp->fullBit(c+1041,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl))));
        vcdp->fullBit(c+1042,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_ebreakm));
        vcdp->fullBit(c+1043,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_stepie));
        vcdp->fullBit(c+1044,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_step));
        vcdp->fullBus(c+1045,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__irq_reg),16);
        vcdp->fullBus(c+1046,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mem_err_ptr),32);
        vcdp->fullBit(c+1047,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state));
        vcdp->fullBus(c+1048,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr),32);
        vcdp->fullBit(c+1049,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr));
        vcdp->fullBus(c+1050,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_be),4);
        vcdp->fullBit(c+1051,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__trst_n_int));
        vcdp->fullBus(c+1052,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync),3);
        vcdp->fullBus(c+1053,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync),3);
        vcdp->fullBit(c+1054,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm_ff));
        vcdp->fullBit(c+1055,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff));
        vcdp->fullBit(c+1056,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_buf_cell__DOT__reset_n_ff));
        vcdp->fullBus(c+1057,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo)),32);
        vcdp->fullBit(c+1058,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
                                             >> 0x25U)))));
        vcdp->fullBus(c+1059,((7U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
                                             >> 0x22U)))),3);
        vcdp->fullBus(c+1060,((3U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
                                             >> 0x20U)))),2);
        vcdp->fullBus(c+1061,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo)),32);
        vcdp->fullBus(c+1062,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync),4);
        vcdp->fullBit(c+1063,((1U & (((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync) 
                                      >> 3U) ^ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync) 
                                                >> 2U)))));
        vcdp->fullBit(c+1064,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_clksrc_rtc));
        vcdp->fullBit(c+1065,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm));
        vcdp->fullBus(c+1066,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_state_reg),4);
        vcdp->fullBit(c+1067,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_ff));
        vcdp->fullBit(c+1068,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_lucky_ff));
        vcdp->fullBit(c+1069,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_qualifier_ff));
        vcdp->fullBit(c+1070,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_victim_ff));
        vcdp->fullBit(c+1071,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_front_ff));
        vcdp->fullBit(c+1072,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_lucky_ff));
        vcdp->fullBit(c+1073,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_qualifier_ff));
        vcdp->fullBit(c+1074,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_victim_ff));
        vcdp->fullBit(c+1075,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_front_ff));
        vcdp->fullBit(c+1076,(vlTOPp->clk));
        vcdp->fullBus(c+1077,(0x100000U),32);
        vcdp->fullBus(c+1078,(0xf8U),32);
        vcdp->fullBit(c+1079,(0U));
        vcdp->fullBus(c+1080,(0U),3);
        vcdp->fullBus(c+1081,(2U),3);
        vcdp->fullBit(c+1082,(1U));
        vcdp->fullBus(c+1083,(0xdeb11001U),32);
        vcdp->fullBit(c+1084,(0U));
        vcdp->fullBit(c+1085,(1U));
        vcdp->fullBit(c+1086,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__rst_n_sync));
        vcdp->fullBit(c+1087,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__cpu_rst_n_sync));
        vcdp->fullBus(c+1088,(2U),32);
        vcdp->fullBus(c+1089,(4U),32);
        vcdp->fullBus(c+1090,(2U),32);
        vcdp->fullBus(c+1091,(4U),32);
        vcdp->fullBus(c+1092,(3U),32);
        vcdp->fullBus(c+1093,(0U),5);
        vcdp->fullBus(c+1094,(1U),5);
        vcdp->fullBus(c+1095,(2U),5);
        vcdp->fullBus(c+1096,(0xfffffffeU),32);
        vcdp->fullBus(c+1097,(1U),32);
        vcdp->fullBus(c+1098,(0x1fU),32);
        vcdp->fullBus(c+1099,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_vect),16);
        vcdp->fullBus(c+1100,(0x10U),32);
        vcdp->fullBus(c+1101,(3U),32);
        vcdp->fullBus(c+1102,((3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_match_ff))),2);
        vcdp->fullBus(c+1103,((3U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_match_ff) 
                                     >> 2U))),2);
        vcdp->fullBit(c+1104,(1U));
        vcdp->fullBus(c+1105,(0x40U),32);
        vcdp->fullBus(c+1106,(6U),32);
        vcdp->fullBit(c+1107,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_cmd_rcode));
        vcdp->fullBit(c+1108,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_wr));
        vcdp->fullBus(c+1109,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_diff),32);
        vcdp->fullBus(c+1110,(1U),32);
        vcdp->fullBit(c+1111,(0U));
        vcdp->fullBus(c+1112,(0x20U),32);
        vcdp->fullBus(c+1113,(0U),32);
        vcdp->fullBus(c+1114,(0x19083000U),32);
        vcdp->fullBus(c+1115,(0x1fU),5);
        vcdp->fullBus(c+1116,(0x12U),5);
        vcdp->fullBus(c+1117,(0x11U),5);
        vcdp->fullBus(c+1118,(0x10U),5);
        vcdp->fullBus(c+1119,(0xfU),5);
        vcdp->fullBus(c+1120,(0xeU),5);
        vcdp->fullBus(c+1121,(0xcU),5);
        vcdp->fullBus(c+1122,(0xbU),5);
        vcdp->fullBus(c+1123,(0xaU),5);
        vcdp->fullBus(c+1124,(9U),5);
        vcdp->fullBus(c+1125,(4U),5);
        vcdp->fullBus(c+1126,(3U),5);
        vcdp->fullBit(c+1127,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__dtmcs_dmihardreset_cmb));
        vcdp->fullBit(c+1128,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__dtmcs_dmireset_cmb));
        vcdp->fullBus(c+1129,(1U),32);
        vcdp->fullBus(c+1130,(2U),32);
        vcdp->fullBus(c+1131,(0x21U),32);
        vcdp->fullBus(c+1132,(0x22U),32);
        vcdp->fullBus(c+1133,(0x28U),32);
        vcdp->fullBus(c+1134,(2U),2);
        vcdp->fullBit(c+1135,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_running));
        vcdp->fullBus(c+1136,(1U),4);
        vcdp->fullBus(c+1137,(0x7b2U),12);
        vcdp->fullBus(c+1138,(6U),5);
        vcdp->fullBus(c+1139,(2U),4);
        vcdp->fullBit(c+1140,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_ro_en));
        vcdp->fullBus(c+1141,(0U),4);
        vcdp->fullBus(c+1142,(0U),7);
        vcdp->fullBus(c+1143,(1U),7);
        vcdp->fullBus(c+1144,(0x100073U),32);
        vcdp->fullBus(c+1145,(3U),2);
        vcdp->fullBus(c+1146,(4U),3);
        vcdp->fullBit(c+1147,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_pbuf_ebreak_cmb));
        vcdp->fullBus(c+1148,(0x10000U),32);
        vcdp->fullBus(c+1149,(0x20U),32);
        vcdp->fullBus(c+1150,(0x4000U),32);
        vcdp->fullBus(c+1151,(5U),32);
        vcdp->fullBus(c+1152,(8U),5);
        vcdp->fullBus(c+1153,(0x14U),5);
        vcdp->fullBus(c+1154,(0U),32);
        vcdp->fullBus(c+1155,(0xaU),32);
        vcdp->fullBus(c+1156,(0xffff0000U),32);
        vcdp->fullBus(c+1157,(0x480000U),32);
        vcdp->fullBus(c+1158,(0xffffffe0U),32);
        vcdp->fullBus(c+1159,(0x490000U),32);
        vcdp->fullBus(c+1160,(0x14U),32);
        vcdp->fullBus(c+1161,(0xf0000000U),32);
        vcdp->fullBus(c+1162,(0xf0000100U),32);
        vcdp->fullBus(c+1163,(0xfffff100U),32);
        vcdp->fullBus(c+1164,(0xf0000200U),32);
        vcdp->fullBit(c+1165,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage_en));
        vcdp->fullBit(c+1166,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage_rangeen));
        vcdp->fullBus(c+1167,(0xffffffffU),32);
        vcdp->fullBit(c+1168,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_nc));
        vcdp->fullBit(c+1169,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_nc));
        vcdp->fullBus(c+1170,(0x1aU),32);
        vcdp->fullBus(c+1171,(0x200U),32);
        vcdp->fullBus(c+1172,(0x1c0U),32);
        vcdp->fullBus(c+1173,(0xffff0000U),32);
        vcdp->fullBus(c+1174,(0x480000U),32);
        vcdp->fullBus(c+1175,(0xffffffe0U),32);
        vcdp->fullBus(c+1176,(0x490000U),32);
        vcdp->fullBus(c+1177,(0xcU),32);
        vcdp->fullBus(c+1178,(7U),26);
        vcdp->fullBus(c+1179,(3U),4);
        vcdp->fullBus(c+1180,(7U),4);
        vcdp->fullBus(c+1181,(0xbU),4);
        vcdp->fullBus(c+1182,(0U),4);
        vcdp->fullBus(c+1183,(0x17U),32);
        vcdp->fullBus(c+1184,(5U),32);
        vcdp->fullBus(c+1185,(9U),32);
        vcdp->fullBus(c+1186,(7U),32);
        vcdp->fullBus(c+1187,(0x10U),32);
        vcdp->fullBus(c+1188,(1U),3);
        vcdp->fullBus(c+1189,(3U),3);
        vcdp->fullBus(c+1190,(5U),3);
        vcdp->fullBus(c+1191,(6U),3);
        vcdp->fullBus(c+1192,(7U),3);
        vcdp->fullBus(c+1193,(0U),32);
        vcdp->fullBus(c+1194,(8U),32);
        vcdp->fullBus(c+1195,(0xcU),32);
        vcdp->fullBus(c+1196,(0xf11U),12);
        vcdp->fullBus(c+1197,(0xf12U),12);
        vcdp->fullBus(c+1198,(0xf13U),12);
        vcdp->fullBus(c+1199,(0xf14U),12);
        vcdp->fullBus(c+1200,(0x300U),12);
        vcdp->fullBus(c+1201,(0x301U),12);
        vcdp->fullBus(c+1202,(0x304U),12);
        vcdp->fullBus(c+1203,(0x305U),12);
        vcdp->fullBus(c+1204,(0x340U),12);
        vcdp->fullBus(c+1205,(0x341U),12);
        vcdp->fullBus(c+1206,(0x342U),12);
        vcdp->fullBus(c+1207,(0x343U),12);
        vcdp->fullBus(c+1208,(0x344U),12);
        vcdp->fullBus(c+1209,(0xb00U),12);
        vcdp->fullBus(c+1210,(0xb02U),12);
        vcdp->fullBus(c+1211,(0xb80U),12);
        vcdp->fullBus(c+1212,(0xb82U),12);
        vcdp->fullBus(c+1213,(0xc01U),12);
        vcdp->fullBus(c+1214,(0xc00U),12);
        vcdp->fullBus(c+1215,(0xc02U),12);
        vcdp->fullBus(c+1216,(0xc81U),12);
        vcdp->fullBus(c+1217,(0xc80U),12);
        vcdp->fullBus(c+1218,(0xc82U),12);
        vcdp->fullBus(c+1219,(0x7b0U),12);
        vcdp->fullBus(c+1220,(4U),12);
        vcdp->fullBus(c+1221,(0x7e0U),12);
        vcdp->fullBus(c+1222,(0x7a0U),12);
        vcdp->fullBus(c+1223,(8U),12);
        vcdp->fullBus(c+1224,(0xbf0U),12);
        vcdp->fullBus(c+1225,(0xbf1U),12);
        vcdp->fullBus(c+1226,(0xbf2U),12);
        vcdp->fullBus(c+1227,(0xbf3U),12);
        vcdp->fullBus(c+1228,(0xbf4U),12);
        vcdp->fullBus(c+1229,(0xbf5U),12);
        vcdp->fullBus(c+1230,(0xbf6U),12);
        vcdp->fullBus(c+1231,(0xbf7U),12);
        vcdp->fullBit(c+1232,(0U));
        vcdp->fullBus(c+1233,(1U),2);
        vcdp->fullBus(c+1234,(0x40001104U),32);
        vcdp->fullBus(c+1235,(0U),32);
        vcdp->fullBus(c+1236,(8U),32);
        vcdp->fullBus(c+1237,(3U),2);
        vcdp->fullBus(c+1238,(7U),32);
        vcdp->fullBus(c+1239,(0xbU),32);
        vcdp->fullBus(c+1240,(0x60U),7);
        vcdp->fullBus(c+1241,(0x64U),7);
        vcdp->fullBus(c+1242,(0x58U),7);
        vcdp->fullBus(c+1243,(0x5cU),7);
        vcdp->fullBus(c+1244,(0x19U),7);
        vcdp->fullBus(c+1245,(4U),4);
        vcdp->fullBus(c+1246,(8U),32);
        vcdp->fullBus(c+1247,(0U),2);
        vcdp->fullBus(c+1248,(1U),2);
        vcdp->fullBus(c+1249,(0x7b1U),12);
        vcdp->fullBus(c+1250,(0x7b2U),12);
        vcdp->fullBus(c+1251,(0x7b3U),12);
        vcdp->fullBus(c+1252,(0U),3);
        vcdp->fullBus(c+1253,(1U),3);
        vcdp->fullBus(c+1254,(2U),3);
        vcdp->fullBus(c+1255,(4U),3);
        vcdp->fullBus(c+1256,(0x7a1U),12);
        vcdp->fullBus(c+1257,(0x7a2U),12);
        vcdp->fullBus(c+1258,(0x7a4U),12);
        vcdp->fullBus(c+1259,(0x1fU),32);
        vcdp->fullBus(c+1260,(0x1cU),32);
        vcdp->fullBus(c+1261,(0x1bU),32);
        vcdp->fullBus(c+1262,(0x15U),32);
        vcdp->fullBus(c+1263,(0x14U),32);
        vcdp->fullBus(c+1264,(0x13U),32);
        vcdp->fullBus(c+1265,(0x12U),32);
        vcdp->fullBus(c+1266,(0x11U),32);
        vcdp->fullBus(c+1267,(2U),4);
        vcdp->fullBus(c+1268,(0U),6);
        vcdp->fullBus(c+1269,(0x19U),32);
        vcdp->fullBus(c+1270,(0x18U),32);
        vcdp->fullBus(c+1271,(0x17U),32);
        vcdp->fullBus(c+1272,(9U),32);
        vcdp->fullBus(c+1273,(0U),2);
        vcdp->fullBus(c+1274,(7U),6);
        vcdp->fullBus(c+1275,(0x20U),6);
        vcdp->fullBus(c+1276,(0x29U),6);
        vcdp->fullBus(c+1277,(4U),7);
        vcdp->fullBus(c+1278,(5U),7);
        vcdp->fullBus(c+1279,(0x10U),7);
        vcdp->fullBus(c+1280,(0x11U),7);
        vcdp->fullBus(c+1281,(0x12U),7);
        vcdp->fullBus(c+1282,(0x16U),7);
        vcdp->fullBus(c+1283,(0x17U),7);
        vcdp->fullBus(c+1284,(0x18U),7);
        vcdp->fullBus(c+1285,(0x20U),7);
        vcdp->fullBus(c+1286,(0x21U),7);
        vcdp->fullBus(c+1287,(0x22U),7);
        vcdp->fullBus(c+1288,(0x23U),7);
        vcdp->fullBus(c+1289,(0x24U),7);
        vcdp->fullBus(c+1290,(0x25U),7);
        vcdp->fullBus(c+1291,(0x40U),7);
        vcdp->fullBus(c+1292,(0x1eU),5);
        vcdp->fullBus(c+1293,(0x1dU),5);
        vcdp->fullBus(c+1294,(0x1cU),5);
        vcdp->fullBus(c+1295,(0x1bU),5);
        vcdp->fullBus(c+1296,(0x1aU),5);
        vcdp->fullBus(c+1297,(0x19U),5);
        vcdp->fullBus(c+1298,(5U),5);
        vcdp->fullBus(c+1299,(0x17U),5);
        vcdp->fullBus(c+1300,(0x16U),5);
        vcdp->fullBus(c+1301,(0x15U),5);
        vcdp->fullBus(c+1302,(0x13U),5);
        vcdp->fullBus(c+1303,(0xdU),5);
        vcdp->fullBus(c+1304,(7U),5);
        vcdp->fullBus(c+1305,(0x18U),5);
    }
}
