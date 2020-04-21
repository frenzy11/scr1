// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vscr1_top_tb_ahb__Syms_H_
#define _Vscr1_top_tb_ahb__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vscr1_top_tb_ahb.h"
#include "Vscr1_top_tb_ahb___024unit.h"

// SYMS CLASS
class Vscr1_top_tb_ahb__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vscr1_top_tb_ahb*              TOPp;
    
    // CREATORS
    Vscr1_top_tb_ahb__Syms(Vscr1_top_tb_ahb* topp, const char* namep);
    ~Vscr1_top_tb_ahb__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
