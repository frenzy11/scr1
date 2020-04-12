// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vscr1_top_tb_ahb.h for the primary calling header

#ifndef _VSCR1_TOP_TB_AHB___024UNIT_H_
#define _VSCR1_TOP_TB_AHB___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vscr1_top_tb_ahb__Syms;
class Vscr1_top_tb_ahb_VerilatedVcd;


//----------

VL_MODULE(Vscr1_top_tb_ahb___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vscr1_top_tb_ahb__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vscr1_top_tb_ahb___024unit);  ///< Copying not allowed
  public:
    Vscr1_top_tb_ahb___024unit(const char* name = "TOP");
    ~Vscr1_top_tb_ahb___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vscr1_top_tb_ahb__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
