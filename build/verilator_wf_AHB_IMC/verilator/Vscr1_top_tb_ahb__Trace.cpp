// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vscr1_top_tb_ahb__Syms.h"


//======================

void Vscr1_top_tb_ahb::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vscr1_top_tb_ahb* t=(Vscr1_top_tb_ahb*)userthis;
    Vscr1_top_tb_ahb__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vscr1_top_tb_ahb::traceChgThis(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (IData)(vlTOPp->__Vm_traceActivity)))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 6U)))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 6U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x13U)))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 6U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x23U)))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((IData)(vlTOPp->__Vm_traceActivity) 
				 | (IData)((vlTOPp->__Vm_traceActivity 
					    >> 6U))) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0x2dU))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x2eU)))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 7U)))))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 8U)))))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((IData)(vlTOPp->__Vm_traceActivity) 
				  | (IData)((vlTOPp->__Vm_traceActivity 
					     >> 8U))) 
				 | (IData)((vlTOPp->__Vm_traceActivity 
					    >> 0xbU))) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0x10U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x11U)))))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 9U)))))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 9U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x23U)))))) {
	    vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((IData)(vlTOPp->__Vm_traceActivity) 
				 | (IData)((vlTOPp->__Vm_traceActivity 
					    >> 9U))) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0x23U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x30U)))))) {
	    vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 9U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x2aU)))))) {
	    vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0xaU)))))) {
	    vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0xcU)))))) {
	    vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((IData)(vlTOPp->__Vm_traceActivity) 
				 | (IData)((vlTOPp->__Vm_traceActivity 
					    >> 0xcU))) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0x15U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x23U)))))) {
	    vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0xcU))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x16U)))))) {
	    vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0xcU))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x1dU)))))) {
	    vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((IData)(vlTOPp->__Vm_traceActivity) 
				 | (IData)((vlTOPp->__Vm_traceActivity 
					    >> 0xcU))) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0x1dU))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x23U)))))) {
	    vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0xcU))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x23U)))))) {
	    vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((IData)(vlTOPp->__Vm_traceActivity) 
				 | (IData)((vlTOPp->__Vm_traceActivity 
					    >> 0xcU))) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0x23U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x24U)))))) {
	    vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0xcU))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x2aU)))))) {
	    vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0xdU)))))) {
	    vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0xfU)))))) {
	    vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x12U)))))) {
	    vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x13U)))))) {
	    vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0x13U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x22U)))))) {
	    vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x14U)))))) {
	    vlTOPp->traceChgThis__28(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x15U)))))) {
	    vlTOPp->traceChgThis__29(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x16U)))))) {
	    vlTOPp->traceChgThis__30(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0x16U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x17U)))))) {
	    vlTOPp->traceChgThis__31(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x19U)))))) {
	    vlTOPp->traceChgThis__32(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x1bU)))))) {
	    vlTOPp->traceChgThis__33(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x1dU)))))) {
	    vlTOPp->traceChgThis__34(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x20U)))))) {
	    vlTOPp->traceChgThis__35(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x22U)))))) {
	    vlTOPp->traceChgThis__36(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x23U)))))) {
	    vlTOPp->traceChgThis__37(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0x23U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x24U)))))) {
	    vlTOPp->traceChgThis__38(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0x23U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x2aU)))))) {
	    vlTOPp->traceChgThis__39(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0x23U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x2eU)))))) {
	    vlTOPp->traceChgThis__40(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x24U)))))) {
	    vlTOPp->traceChgThis__41(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x26U)))))) {
	    vlTOPp->traceChgThis__42(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x27U)))))) {
	    vlTOPp->traceChgThis__43(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x2aU)))))) {
	    vlTOPp->traceChgThis__44(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x2bU)))))) {
	    vlTOPp->traceChgThis__45(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x2dU)))))) {
	    vlTOPp->traceChgThis__46(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x2eU)))))) {
	    vlTOPp->traceChgThis__47(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x2fU)))))) {
	    vlTOPp->traceChgThis__48(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x30U)))))) {
	    vlTOPp->traceChgThis__49(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x31U)))))) {
	    vlTOPp->traceChgThis__50(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x32U)))))) {
	    vlTOPp->traceChgThis__51(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 1U))))) {
	    vlTOPp->traceChgThis__52(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)((vlTOPp->__Vm_traceActivity 
					 >> 1U)) | (IData)(
							   (vlTOPp->__Vm_traceActivity 
							    >> 2U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x20U)))))) {
	    vlTOPp->traceChgThis__53(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 2U))))) {
	    vlTOPp->traceChgThis__54(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 3U))))) {
	    vlTOPp->traceChgThis__55(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 4U))))) {
	    vlTOPp->traceChgThis__56(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 5U))))) {
	    vlTOPp->traceChgThis__57(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 6U))))) {
	    vlTOPp->traceChgThis__58(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 7U))))) {
	    vlTOPp->traceChgThis__59(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)((vlTOPp->__Vm_traceActivity 
					>> 7U)) | (IData)(
							  (vlTOPp->__Vm_traceActivity 
							   >> 8U)))))) {
	    vlTOPp->traceChgThis__60(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)((vlTOPp->__Vm_traceActivity 
					>> 7U)) | (IData)(
							  (vlTOPp->__Vm_traceActivity 
							   >> 0xaU)))))) {
	    vlTOPp->traceChgThis__61(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 8U))))) {
	    vlTOPp->traceChgThis__62(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)((vlTOPp->__Vm_traceActivity 
					>> 8U)) | (IData)(
							  (vlTOPp->__Vm_traceActivity 
							   >> 0xaU)))))) {
	    vlTOPp->traceChgThis__63(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)((vlTOPp->__Vm_traceActivity 
					>> 8U)) | (IData)(
							  (vlTOPp->__Vm_traceActivity 
							   >> 0x12U)))))) {
	    vlTOPp->traceChgThis__64(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)((vlTOPp->__Vm_traceActivity 
					>> 8U)) | (IData)(
							  (vlTOPp->__Vm_traceActivity 
							   >> 0x29U)))))) {
	    vlTOPp->traceChgThis__65(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 9U))))) {
	    vlTOPp->traceChgThis__66(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0xaU))))) {
	    vlTOPp->traceChgThis__67(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0xbU))))) {
	    vlTOPp->traceChgThis__68(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0xcU))))) {
	    vlTOPp->traceChgThis__69(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0xdU))))) {
	    vlTOPp->traceChgThis__70(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0xeU))))) {
	    vlTOPp->traceChgThis__71(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0xfU))))) {
	    vlTOPp->traceChgThis__72(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x12U))))) {
	    vlTOPp->traceChgThis__73(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x15U))))) {
	    vlTOPp->traceChgThis__74(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x16U))))) {
	    vlTOPp->traceChgThis__75(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x17U))))) {
	    vlTOPp->traceChgThis__76(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x18U))))) {
	    vlTOPp->traceChgThis__77(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x1aU))))) {
	    vlTOPp->traceChgThis__78(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x1bU))))) {
	    vlTOPp->traceChgThis__79(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x1cU))))) {
	    vlTOPp->traceChgThis__80(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x1eU))))) {
	    vlTOPp->traceChgThis__81(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x1fU))))) {
	    vlTOPp->traceChgThis__82(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x20U))))) {
	    vlTOPp->traceChgThis__83(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x21U))))) {
	    vlTOPp->traceChgThis__84(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x25U))))) {
	    vlTOPp->traceChgThis__85(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x28U))))) {
	    vlTOPp->traceChgThis__86(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x29U))))) {
	    vlTOPp->traceChgThis__87(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x2cU))))) {
	    vlTOPp->traceChgThis__88(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__89(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = VL_ULL(0);
}

void Vscr1_top_tb_ahb::traceChgThis__2(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1,(vlTOPp->scr1_top_tb_ahb__DOT__rtc_clk));
	vcdp->chgBus(c+2,(vlTOPp->scr1_top_tb_ahb__DOT__fuse_mhartid),32);
	vcdp->chgBus(c+3,(vlTOPp->scr1_top_tb_ahb__DOT__imem_req_ack_stall),32);
	vcdp->chgBus(c+4,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_req_ack_stall),32);
	vcdp->chgBit(c+5,(vlTOPp->scr1_top_tb_ahb__DOT__trst_n));
	vcdp->chgBit(c+6,(vlTOPp->scr1_top_tb_ahb__DOT__tck));
	vcdp->chgBit(c+7,(vlTOPp->scr1_top_tb_ahb__DOT__tms));
	vcdp->chgBit(c+8,(vlTOPp->scr1_top_tb_ahb__DOT__tdi));
	vcdp->chgBus(c+9,(vlTOPp->scr1_top_tb_ahb__DOT__imem_hprot),4);
	vcdp->chgBus(c+10,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hprot),4);
	vcdp->chgBit(c+11,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__tracelog_full));
	vcdp->chgBus(c+12,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__temp_fhandler),32);
	vcdp->chgBus(c+13,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_be),4);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__3(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+14,(vlTOPp->scr1_top_tb_ahb__DOT__f_results),32);
	vcdp->chgBus(c+15,(vlTOPp->scr1_top_tb_ahb__DOT__f_info),32);
	vcdp->chgBus(c+16,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_cmb),32);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__4(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+17,((((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
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
    }
}

void Vscr1_top_tb_ahb::traceChgThis__5(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+18,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel)
			     ? (((5U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
				 | (8U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
				 ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data1_ff
				 : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data0_ff)
			     : 0U)),32);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__6(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+19,(((((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
			      & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_cmb)) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_exception_cmb)) 
			    | ((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
			       & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_exception_ff)))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__7(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+20,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__reset_n_sync));
	vcdp->chgBus(c+21,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__trst_n) 
			     << 1U) | (1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff) 
					     >> 1U)))),2);
	vcdp->chgBit(c+22,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack));
	vcdp->chgBit(c+23,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__8(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+24,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__dr_update));
	vcdp->chgBit(c+25,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__control_reg_wr));
	vcdp->chgBit(c+26,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_wr));
	vcdp->chgBit(c+27,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg_wr));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__9(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+28,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data) 
				  >> 3U))));
	vcdp->chgBit(c+29,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data) 
				  >> 2U))));
	vcdp->chgBit(c+30,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data) 
				  >> 1U))));
	vcdp->chgBit(c+31,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__10(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+32,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status) 
				  >> 3U))));
	vcdp->chgBit(c+33,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status) 
				  >> 2U))));
	vcdp->chgBus(c+34,((3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status))),2);
	vcdp->chgBit(c+35,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_err));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__11(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+36,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel)
			     ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_reg
			     : 0U)),32);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__12(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+37,(((3U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
			    | ((2U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_addr_qlfy)) 
			       & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req_qlfy))))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__13(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+38,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event) 
			    & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__hdu_rst_n_qlfy))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__14(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad(c+39,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_rdata_cmb),41);
	vcdp->chgBus(c+41,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_cmb),2);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__15(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+42,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc));
	vcdp->chgBit(c+43,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ext_irq));
	vcdp->chgBit(c+44,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie) 
			    & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie))));
	vcdp->chgBit(c+45,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie));
	vcdp->chgBit(c+46,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_empty));
	vcdp->chgBus(c+47,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_ocpd_h),3);
	vcdp->chgBit(c+48,((1U & (~ (IData)((3U == 
					     (3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head))))))));
	vcdp->chgBit(c+49,((3U == (3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head)))));
	vcdp->chgBus(c+50,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head),16);
	vcdp->chgBit(c+51,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err_head));
	vcdp->chgBit(c+52,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err_next));
	vcdp->chgBus(c+53,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus),32);
	vcdp->chgBus(c+54,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie),32);
	vcdp->chgBus(c+55,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip),32);
	vcdp->chgBus(c+56,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ext_irq) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_meie))
			     ? 0xbU : (((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq) 
					& (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_mtie))
				        ? 7U : 0xbU))),4);
	vcdp->chgQuad(c+57,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret),64);
	vcdp->chgQuad(c+59,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle),64);
	vcdp->chgBus(c+61,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten),32);
	vcdp->chgBit(c+62,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_inc_hi));
	vcdp->chgBit(c+63,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
				  >> 8U))));
	vcdp->chgBit(c+64,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
				  >> 7U))));
	vcdp->chgBit(c+65,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
				  >> 6U))));
	vcdp->chgBit(c+66,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
				  >> 5U))));
	vcdp->chgBit(c+67,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
				  >> 4U))));
	vcdp->chgBus(c+68,((0xfU & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m))),4);
	vcdp->chgBit(c+69,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cicsr_m) 
				  >> 1U))));
	vcdp->chgBit(c+70,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cicsr_m))));
	vcdp->chgBus(c+71,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_eoi_m),16);
	vcdp->chgBus(c+72,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[6U]),32);
	vcdp->chgBus(c+73,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[5U]),32);
	vcdp->chgBus(c+74,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[4U]),32);
	vcdp->chgBus(c+75,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[3U]),32);
	vcdp->chgBus(c+76,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[2U]),32);
	vcdp->chgBus(c+77,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[1U]),32);
	vcdp->chgBus(c+78,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[0U]),32);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__16(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+79,((((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc) 
			       | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret)) 
			      | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq)) 
			     & (~ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				   >> 3U))) & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit)))));
	vcdp->chgBit(c+80,(((((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc) 
				| (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret)) 
			       | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq)) 
			      & (~ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 3U))) & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit))) 
			    | ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req) 
			       & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up))))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__17(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+81,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__imem_hready))
			     ? ((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__resp_fifo 
					       >> 0x20U)))
				 ? 2U : 1U) : 0U)),2);
	vcdp->chgBit(c+82,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) 
			    & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__imem_hready))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__18(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+83,(((8U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
			     ? 0U : ((4U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
				      ? ((2U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
					  ? 0U : ((1U 
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
    }
}

void Vscr1_top_tb_ahb::traceChgThis__19(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+84,((7U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
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
    }
}

void Vscr1_top_tb_ahb::traceChgThis__20(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+85,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd)
			     ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_req)
			     : (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req_r))));
	vcdp->chgBit(c+86,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted)) 
			    & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_cond))));
	vcdp->chgBit(c+87,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr) 
			    & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access)))));
	vcdp->chgBus(c+88,((7U & ((IData)(4U) - ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
						 - (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next))))),3);
	vcdp->chgBus(c+89,((3U & (((IData)(4U) - ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
						  - (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next))) 
				  >> 1U))),2);
	vcdp->chgBit(c+90,(((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp)) 
			    ^ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req))));
	vcdp->chgBit(c+91,(((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp)) 
			    ^ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req))));
	vcdp->chgBit(c+92,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)) 
			    & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req))));
	vcdp->chgBit(c+93,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd)) 
			    & ((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)) 
			       & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req)))));
	vcdp->chgBit(c+94,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)) 
			    & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req))));
	vcdp->chgBit(c+95,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd)) 
			    & ((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)) 
			       & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req)))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__21(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+96,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd)
			     ? ((1U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					>> 0x18U) | 
				       ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					 >> 0x17U) 
					& (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp))))
				 ? (0xfffffffeU & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_res))
				 : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc)
			     : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc)),32);
	vcdp->chgBus(c+97,(((8U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
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
	vcdp->chgBus(c+98,(((8U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U])
			     ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs1_data
			     : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc)),32);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__22(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+99,((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc 
			    & VL_NEGATE_I((IData)((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__core_rst_n_qlfy))))),32);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__23(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+100,(vlTOPp->scr1_top_tb_ahb__DOT__rst_n));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__24(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+101,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_mux_en));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__25(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+102,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_load));
	vcdp->chgBit(c+103,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_reset));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__26(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+104,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req));
	vcdp->chgBus(c+105,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr),7);
	vcdp->chgQuad(c+106,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_shift_cmb),41);
	vcdp->chgBit(c+108,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
			     & (0x16U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)))));
	vcdp->chgBit(c+109,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto_cmb));
	vcdp->chgBit(c+110,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_command_cmb));
	vcdp->chgBit(c+111,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_rpt_command_cmb));
	vcdp->chgBit(c+112,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data0_cmb));
	vcdp->chgBit(c+113,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data1_cmb));
	vcdp->chgBit(c+114,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf0_cmb));
	vcdp->chgBit(c+115,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf1_cmb));
	vcdp->chgBit(c+116,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf2_cmb));
	vcdp->chgBit(c+117,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf3_cmb));
	vcdp->chgBit(c+118,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf4_cmb));
	vcdp->chgBit(c+119,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf5_cmb));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__27(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+120,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
			     & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr)))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__28(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+121,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel_tapout));
	vcdp->chgBus(c+122,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id_tapout),2);
	vcdp->chgBit(c+123,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel_tapout));
	vcdp->chgBit(c+124,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_out));
	vcdp->chgBit(c+125,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bypass_sel));
	vcdp->chgBit(c+126,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_idcode_sel));
	vcdp->chgBit(c+127,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bld_id_sel));
	vcdp->chgBit(c+128,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_mux_out));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__29(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+129,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_write_en),2);
	vcdp->chgBit(c+130,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_write_en));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__30(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+131,(vlTOPp->scr1_top_tb_ahb__DOT__imem_hready));
	vcdp->chgBus(c+132,(vlTOPp->scr1_top_tb_ahb__DOT__imem_hrdata),32);
	vcdp->chgBit(c+133,(vlTOPp->scr1_top_tb_ahb__DOT__imem_hresp));
	vcdp->chgBit(c+134,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hready));
	vcdp->chgBus(c+135,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hrdata),32);
	vcdp->chgBit(c+136,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hresp));
	vcdp->chgBus(c+137,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__resp_fifo)),32);
	vcdp->chgBus(c+138,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_rdata),32);
	vcdp->chgBit(c+139,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__resp_fifo 
					   >> 0x20U)))));
	vcdp->chgBit(c+140,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
					   >> 0x25U)))));
	vcdp->chgBus(c+141,((7U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
					   >> 0x22U)))),3);
	vcdp->chgBus(c+142,((3U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
					   >> 0x20U)))),2);
	vcdp->chgBus(c+143,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo)),32);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__31(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+144,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm) 
			      & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hready))
			      ? ((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
						>> 0x25U)))
				  ? 2U : 1U) : 0U)),2);
	vcdp->chgBit(c+145,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hready))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__32(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+146,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__cmd_data),4);
	vcdp->chgBus(c+147,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__reg_data),4);
	vcdp->chgBit(c+148,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_posedge) 
				   >> 3U))));
	vcdp->chgBit(c+149,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_posedge) 
				   >> 2U))));
	vcdp->chgBit(c+150,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_posedge) 
				   >> 1U))));
	vcdp->chgBit(c+151,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_posedge))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__33(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+152,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_cmd_rctl));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__34(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+153,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata),32);
	vcdp->chgBus(c+154,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp),2);
	vcdp->chgBus(c+155,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata),32);
	vcdp->chgBus(c+156,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp),2);
	vcdp->chgBit(c+157,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_err_rvi_hi));
	vcdp->chgBit(c+158,((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp))));
	vcdp->chgBit(c+159,((2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp))));
	vcdp->chgBit(c+160,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd));
	vcdp->chgBit(c+161,((1U & (~ (((7U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_ident)) 
				       | (5U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_ident))) 
				      | (3U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_ident)))))));
	vcdp->chgBus(c+162,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_ident),3);
	vcdp->chgBus(c+163,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_bypass),2);
	vcdp->chgBit(c+164,((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_bypass))));
	vcdp->chgBit(c+165,(((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp)) 
			     | (2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp)))));
	vcdp->chgBit(c+166,((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp))));
	vcdp->chgBit(c+167,((2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__35(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+168,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_state_next),4);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__36(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+169,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr));
	vcdp->chgBus(c+170,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata),32);
	vcdp->chgBus(c+171,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata),32);
	vcdp->chgBit(c+172,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_dmcontrol_cmb));
	vcdp->chgBus(c+173,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_cmb),8);
	vcdp->chgBit(c+174,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro_cmb));
	vcdp->chgBit(c+175,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regacs_cmb));
	vcdp->chgBus(c+176,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regtype_cmb),4);
	vcdp->chgBus(c+177,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regfile_cmb),7);
	vcdp->chgBit(c+178,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regwr_cmb));
	vcdp->chgBus(c+179,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_cmb),12);
	vcdp->chgBus(c+180,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regsize_cmb),3);
	vcdp->chgBit(c+181,((2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regsize_cmb))));
	vcdp->chgBit(c+182,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regvalid_cmb));
	vcdp->chgBit(c+183,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_execprogbuf_cmb));
	vcdp->chgBit(c+184,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_memvalid_cmb));
	vcdp->chgBit(c+185,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_memwr_cmb));
	vcdp->chgBus(c+186,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_memsize_cmb),3);
	vcdp->chgBit(c+187,((3U > (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_memsize_cmb))));
	vcdp->chgBus(c+188,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_cmb),32);
	vcdp->chgBit(c+189,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_abstractauto_execdata0_cmb));
	vcdp->chgBus(c+190,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf0_cmb),32);
	vcdp->chgBus(c+191,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf1_cmb),32);
	vcdp->chgBus(c+192,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf2_cmb),32);
	vcdp->chgBus(c+193,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf3_cmb),32);
	vcdp->chgBus(c+194,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf4_cmb),32);
	vcdp->chgBus(c+195,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf5_cmb),32);
	vcdp->chgBit(c+196,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm_cmb));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__37(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+197,(vlTOPp->scr1_top_tb_ahb__DOT__imem_htrans),2);
	vcdp->chgBus(c+198,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo),32);
	vcdp->chgBus(c+199,((7U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U])),3);
	vcdp->chgBus(c+200,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_htrans),2);
	vcdp->chgBus(c+201,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]),32);
	vcdp->chgBit(c+202,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
				   >> 3U))));
	vcdp->chgBit(c+203,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_req_ack));
	vcdp->chgBit(c+204,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req));
	vcdp->chgBus(c+205,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr),32);
	vcdp->chgBit(c+206,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_req_ack));
	vcdp->chgBit(c+207,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_req));
	vcdp->chgBus(c+208,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_res)),32);
	vcdp->chgBus(c+209,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data),32);
	vcdp->chgBit(c+210,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req));
	vcdp->chgBus(c+211,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_addr),32);
	vcdp->chgBit(c+212,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req));
	vcdp->chgBit(c+213,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_cmd));
	vcdp->chgBus(c+214,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_width),2);
	vcdp->chgBus(c+215,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_addr),32);
	vcdp->chgBus(c+216,(((0U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel))
			      ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data
			      : 0U)),32);
	vcdp->chgBit(c+217,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req));
	vcdp->chgBus(c+218,(((0x480000U == (0xffff0000U 
					    & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr))
			      ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr
			      : 0U)),32);
	vcdp->chgBit(c+219,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req));
	vcdp->chgBit(c+220,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_cmd));
	vcdp->chgBus(c+221,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_width),2);
	vcdp->chgBus(c+222,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_addr),32);
	vcdp->chgBus(c+223,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_wdata),32);
	vcdp->chgBit(c+224,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_req));
	vcdp->chgBit(c+225,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_cmd));
	vcdp->chgBus(c+226,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_addr),32);
	vcdp->chgBus(c+227,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_wdata),32);
	vcdp->chgBit(c+228,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel));
	vcdp->chgBit(c+229,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_dreg_req_qlfy));
	vcdp->chgBit(c+230,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel))));
	vcdp->chgBit(c+231,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_dreg_wr_qlfy));
	vcdp->chgBus(c+232,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data),32);
	vcdp->chgBus(c+233,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_dreg_wdata_qlfy),32);
	vcdp->chgBit(c+234,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__dm_rst_n_sync));
	vcdp->chgBit(c+235,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__hdu_rst_n_sync));
	vcdp->chgBit(c+236,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_in_mux));
	vcdp->chgBit(c+237,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_in_mux));
	vcdp->chgBit(c+238,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req));
	vcdp->chgBus(c+239,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc),32);
	vcdp->chgBit(c+240,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch));
	vcdp->chgBit(c+241,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret));
	vcdp->chgBit(c+242,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
			     & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_req)))));
	vcdp->chgBit(c+243,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_hw));
	vcdp->chgBit(c+244,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_vd));
	vcdp->chgBit(c+245,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2idu_rdy));
	vcdp->chgBus(c+246,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rs1_addr),5);
	vcdp->chgBus(c+247,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs1_data),32);
	vcdp->chgBus(c+248,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rs2_addr),5);
	vcdp->chgBit(c+249,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req));
	vcdp->chgBus(c+250,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rd_data),32);
	vcdp->chgBit(c+251,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req));
	vcdp->chgBus(c+252,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data),32);
	vcdp->chgBit(c+253,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_req));
	vcdp->chgBus(c+254,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data),32);
	vcdp->chgBit(c+255,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_rw_exc));
	vcdp->chgBit(c+256,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq));
	vcdp->chgBit(c+257,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_exc));
	vcdp->chgBit(c+258,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr));
	vcdp->chgBus(c+259,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code),4);
	vcdp->chgBus(c+260,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_new_pc),32);
	vcdp->chgBit(c+261,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up));
	vcdp->chgBit(c+262,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_r_req));
	vcdp->chgBit(c+263,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req));
	vcdp->chgBus(c+264,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr),3);
	vcdp->chgBus(c+265,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata),32);
	vcdp->chgBus(c+266,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata),32);
	vcdp->chgBit(c+267,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req));
	vcdp->chgBus(c+268,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata),32);
	vcdp->chgBit(c+269,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_resp));
	vcdp->chgBit(c+270,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req_qlfy));
	vcdp->chgBus(c+271,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_wdata_qlfy),32);
	vcdp->chgBit(c+272,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon 
					   >> 0x21U)))));
	vcdp->chgBit(c+273,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon 
					   >> 0x20U)))));
	vcdp->chgBus(c+274,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon)),32);
	vcdp->chgBus(c+275,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_match),3);
	vcdp->chgBus(c+276,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_ldst_hit_cmb),2);
	vcdp->chgBit(c+277,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req));
	vcdp->chgBit(c+278,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2lsu_i_x_req));
	vcdp->chgBit(c+279,((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_ldst_hit_cmb))));
	vcdp->chgBus(c+280,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire),3);
	vcdp->chgBit(c+281,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon_qlfy 
					   >> 0x21U)))));
	vcdp->chgBit(c+282,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon_qlfy 
					   >> 0x20U)))));
	vcdp->chgBus(c+283,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon_qlfy)),32);
	vcdp->chgBit(c+284,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon_qlfy 
					   >> 0x22U)))));
	vcdp->chgBit(c+285,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon_qlfy 
					   >> 0x21U)))));
	vcdp->chgBit(c+286,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon_qlfy 
					   >> 0x20U)))));
	vcdp->chgBus(c+287,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon_qlfy)),32);
	vcdp->chgBus(c+288,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy),3);
	vcdp->chgBit(c+289,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req));
	vcdp->chgBus(c+290,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_rd_data),32);
	vcdp->chgBit(c+291,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req_qlfy));
	vcdp->chgBus(c+292,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_wdata_qlfy),32);
	vcdp->chgBit(c+293,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req));
	vcdp->chgBit(c+294,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit));
	vcdp->chgBit(c+295,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_run2halt));
	vcdp->chgBit(c+296,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_vd));
	vcdp->chgBit(c+297,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2hdu_pbuf_rdy_qlfy));
	vcdp->chgBit(c+298,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_busy));
	vcdp->chgBit(c+299,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy));
	vcdp->chgBit(c+300,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_qlfy));
	vcdp->chgBus(c+301,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_r_new),30);
	vcdp->chgBus(c+302,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending_new),3);
	vcdp->chgBit(c+303,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush));
	vcdp->chgBus(c+304,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next),3);
	vcdp->chgBus(c+305,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr_next),3);
	vcdp->chgBus(c+306,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_re),2);
	vcdp->chgBus(c+307,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_we),2);
	vcdp->chgBit(c+308,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd));
	vcdp->chgBit(c+309,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_rdy));
	vcdp->chgBit(c+310,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy));
	vcdp->chgBit(c+311,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_vd));
	vcdp->chgBus(c+312,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_op1),32);
	vcdp->chgBus(c+313,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_op2),32);
	vcdp->chgBus(c+314,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_res),32);
	vcdp->chgBit(c+315,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp));
	vcdp->chgBit(c+316,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req));
	vcdp->chgBit(c+317,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_exc));
	vcdp->chgBus(c+318,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_exc_code),4);
	vcdp->chgBit(c+319,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_req));
	vcdp->chgBit(c+320,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_cond));
	vcdp->chgBus(c+321,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__next_state),2);
	vcdp->chgBit(c+322,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__iter_req));
	vcdp->chgBit(c+323,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__iter_rdy));
	vcdp->chgBus(c+324,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd),2);
	vcdp->chgBus(c+325,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd),2);
	vcdp->chgBit(c+326,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__corr_req));
	vcdp->chgBit(c+327,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_sub));
	vcdp->chgBus(c+328,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_op1),32);
	vcdp->chgBus(c+329,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_op2),32);
	vcdp->chgQuad(c+330,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_res),33);
	vcdp->chgBit(c+332,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_flags) 
				   >> 3U))));
	vcdp->chgBit(c+333,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_flags) 
				   >> 2U))));
	vcdp->chgBit(c+334,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_flags) 
				   >> 1U))));
	vcdp->chgBit(c+335,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_flags))));
	vcdp->chgBit(c+336,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_sub));
	vcdp->chgQuad(c+337,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_op1),33);
	vcdp->chgQuad(c+339,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_op2),33);
	vcdp->chgQuad(c+341,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_res),33);
	vcdp->chgBus(c+343,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op1),32);
	vcdp->chgBus(c+344,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op2),5);
	vcdp->chgBus(c+345,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_res),32);
	vcdp->chgQuad(c+346,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_op1),33);
	vcdp->chgQuad(c+348,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_op2),33);
	vcdp->chgQuad(c+350,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_res),64);
	vcdp->chgBus(c+352,((0x1fU & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_res))),5);
	vcdp->chgBit(c+353,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_1_c));
	vcdp->chgBus(c+354,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_1),32);
	vcdp->chgBus(c+355,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_2),32);
	vcdp->chgBus(c+356,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_3),32);
	vcdp->chgBit(c+357,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__sgn));
	vcdp->chgBit(c+358,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__inv));
	vcdp->chgBit(c+359,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk2__DOT__sgn));
	vcdp->chgBit(c+360,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk2__DOT__inv));
	vcdp->chgBus(c+361,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk3__DOT__prev_low),31);
	vcdp->chgBit(c+362,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk3__DOT__quo));
	vcdp->chgBit(c+363,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__l_misalign));
	vcdp->chgBit(c+364,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__s_misalign));
	vcdp->chgBit(c+365,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_hwbrk));
	vcdp->chgQuad(c+366,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_hi_new),56);
	vcdp->chgBus(c+368,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_lo_new),8);
	vcdp->chgQuad(c+369,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_hi_new),56);
	vcdp->chgBus(c+371,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_lo_new),8);
	vcdp->chgBit(c+372,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc));
	vcdp->chgBit(c+373,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_up));
	vcdp->chgBit(c+374,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_up));
	vcdp->chgBit(c+375,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_up));
	vcdp->chgBit(c+376,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_up));
	vcdp->chgBit(c+377,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_up));
	vcdp->chgBit(c+378,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_up));
	vcdp->chgBit(c+379,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_up));
	vcdp->chgBus(c+380,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_up),2);
	vcdp->chgBus(c+381,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_up),2);
	vcdp->chgBit(c+382,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_inc_lo));
	vcdp->chgBit(c+383,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_inc_hi));
	vcdp->chgBit(c+384,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_up));
	vcdp->chgBus(c+385,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data),32);
	vcdp->chgBit(c+386,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc));
	vcdp->chgBit(c+387,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc));
	vcdp->chgBit(c+388,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq));
	vcdp->chgBit(c+389,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_mret));
	vcdp->chgBus(c+390,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl),16);
	vcdp->chgBus(c+391,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__invr_new),16);
	vcdp->chgBus(c+392,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__imr_new),16);
	vcdp->chgBus(c+393,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipr_new),16);
	vcdp->chgBus(c+394,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipr_clr),16);
	vcdp->chgBit(c+395,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__soi_wr_m));
	vcdp->chgBit(c+396,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__eoi_wr_m));
	vcdp->chgBit(c+397,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__unnamedblk8__DOT__cisv_found));
	vcdp->chgBus(c+398,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i),32);
	vcdp->chgBus(c+399,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__unnamedblk10__DOT__i),32);
	vcdp->chgBit(c+400,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tselect_cmb));
	vcdp->chgBus(c+401,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol_cmb),2);
	vcdp->chgBus(c+402,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2_cmb),2);
	vcdp->chgBit(c+403,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_cmb));
	vcdp->chgBus(c+404,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data_cmb),32);
	vcdp->chgBus(c+405,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__clk_en_mcontrol_cmb),2);
	vcdp->chgBus(c+406,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_execution_hit_cmb),2);
	vcdp->chgBit(c+407,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_icount_cmb));
	vcdp->chgBit(c+408,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__clk_en_icount_cmb));
	vcdp->chgBit(c+409,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_decrement_cmb));
	vcdp->chgBit(c+410,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_hit_cmb));
	vcdp->chgBus(c+411,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk1__DOT__i),32);
	vcdp->chgBus(c+412,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk2__DOT__i),32);
	vcdp->chgBus(c+413,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk3__DOT__i),32);
	vcdp->chgBit(c+414,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans_next));
	vcdp->chgBit(c+415,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update_next));
	vcdp->chgBit(c+416,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep));
	vcdp->chgBit(c+417,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_except));
	vcdp->chgBit(c+418,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak));
	vcdp->chgBit(c+419,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq));
	vcdp->chgBus(c+420,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_state_next),2);
	vcdp->chgBus(c+421,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_next),3);
	vcdp->chgBit(c+422,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr));
	vcdp->chgBit(c+423,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_sel));
	vcdp->chgBit(c+424,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_wr));
	vcdp->chgBus(c+425,((0xfU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				     >> 0x1cU))),4);
	vcdp->chgBus(c+426,((0xfffU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				       >> 0x10U))),12);
	vcdp->chgBit(c+427,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				   >> 0xfU))));
	vcdp->chgBus(c+428,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				   >> 0xcU))),3);
	vcdp->chgBit(c+429,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				   >> 0xbU))));
	vcdp->chgBus(c+430,((3U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				   >> 9U))),2);
	vcdp->chgBus(c+431,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				   >> 6U))),3);
	vcdp->chgBus(c+432,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				   >> 3U))),3);
	vcdp->chgBit(c+433,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				   >> 2U))));
	vcdp->chgBus(c+434,((3U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data)),2);
	vcdp->chgBus(c+435,((0xfU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				     >> 0x1cU))),4);
	vcdp->chgBus(c+436,((0xfffU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				       >> 0x10U))),12);
	vcdp->chgBit(c+437,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				   >> 0xfU))));
	vcdp->chgBus(c+438,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				   >> 0xcU))),3);
	vcdp->chgBit(c+439,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				   >> 0xbU))));
	vcdp->chgBus(c+440,((3U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				   >> 9U))),2);
	vcdp->chgBus(c+441,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				   >> 6U))),3);
	vcdp->chgBus(c+442,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				   >> 3U))),3);
	vcdp->chgBit(c+443,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				   >> 2U))));
	vcdp->chgBus(c+444,((3U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out)),2);
	vcdp->chgBit(c+445,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel));
	vcdp->chgBit(c+446,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel))));
	vcdp->chgBus(c+447,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_cmb),32);
	vcdp->chgBus(c+448,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_cmb),32);
	vcdp->chgBit(c+449,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rd));
	vcdp->chgBit(c+450,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_wr));
	vcdp->chgBus(c+451,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_writedata),32);
	vcdp->chgBus(c+452,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_byteen),4);
	vcdp->chgBus(c+453,((0x3fffU & (((0x480000U 
					  == (0xffff0000U 
					      & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr))
					  ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr
					  : 0U) >> 2U))),14);
	vcdp->chgBus(c+454,((0x3fffU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_addr 
					>> 2U))),14);
	vcdp->chgQuad(c+455,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_new),64);
	vcdp->chgQuad(c+457,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_new),64);
	vcdp->chgBit(c+459,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__control_up));
	vcdp->chgBit(c+460,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__divider_up));
	vcdp->chgBit(c+461,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimelo_up));
	vcdp->chgBit(c+462,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimehi_up));
	vcdp->chgBit(c+463,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmplo_up));
	vcdp->chgBit(c+464,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmphi_up));
	vcdp->chgBit(c+465,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__dmem_req_valid));
	vcdp->chgBit(c+466,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_cmp_flag));
	vcdp->chgBit(c+467,((0x480000U == (0xffff0000U 
					   & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr))));
	vcdp->chgBus(c+468,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel),2);
	vcdp->chgBit(c+469,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd));
	vcdp->chgBit(c+470,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_empty));
	vcdp->chgBit(c+471,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd));
	vcdp->chgBit(c+472,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U] 
				   >> 3U))));
	vcdp->chgBus(c+473,((7U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U])),3);
	vcdp->chgBus(c+474,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[1U]),32);
	vcdp->chgBus(c+475,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[0U]),32);
	vcdp->chgBit(c+476,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
				   >> 3U))));
	vcdp->chgBus(c+477,((7U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U])),3);
	vcdp->chgBus(c+478,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]),32);
	vcdp->chgBus(c+479,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[0U]),32);
	vcdp->chgBit(c+480,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_empty));
	vcdp->chgBus(c+481,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_wr_hazard),4);
	vcdp->chgBus(c+482,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_be),4);
	vcdp->chgBus(c+483,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_wr_hazard),4);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__38(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+484,(((2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel))
			      ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width)
			      : 0U)),2);
	vcdp->chgBit(c+485,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd) 
			     & (3U == (0xfU & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U])))));
	vcdp->chgBit(c+486,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon 
					   >> 0x22U)))));
	vcdp->chgBit(c+487,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon 
					   >> 0x21U)))));
	vcdp->chgBit(c+488,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon 
					   >> 0x20U)))));
	vcdp->chgBus(c+489,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon)),32);
	vcdp->chgBus(c+490,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
			      ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc
			      : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc)),32);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__39(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+491,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_busy) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__core_rst_n_qlfy))));
	vcdp->chgBit(c+492,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__core_rst_n_qlfy))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__40(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+493,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq)
			      ? 2U : ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak)
				       ? 1U : ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req)
					        ? 3U
					        : ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep)
						    ? 4U
						    : 0U))))),3);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__41(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+494,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_cmd));
	vcdp->chgBus(c+495,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width),2);
	vcdp->chgBus(c+496,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr),32);
	vcdp->chgBit(c+497,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_imem_err));
	vcdp->chgBit(c+498,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				   >> 0xaU))));
	vcdp->chgBit(c+499,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				   >> 9U))));
	vcdp->chgBus(c+500,((0x1fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				      >> 4U))),5);
	vcdp->chgBit(c+501,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				   >> 3U))));
	vcdp->chgBus(c+502,((0xfU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				      << 1U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
						>> 0x1fU)))),4);
	vcdp->chgBit(c+503,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				   >> 0x1eU))));
	vcdp->chgBus(c+504,((3U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				    << 4U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					      >> 0x1cU)))),2);
	vcdp->chgBus(c+505,((7U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				    << 7U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					      >> 0x19U)))),3);
	vcdp->chgBit(c+506,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				   >> 0x18U))));
	vcdp->chgBit(c+507,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				   >> 0x17U))));
	vcdp->chgBit(c+508,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				   >> 0x16U))));
	vcdp->chgBit(c+509,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				   >> 0x15U))));
	vcdp->chgBit(c+510,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				   >> 0x14U))));
	vcdp->chgBus(c+511,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				       << 0x11U) | 
				      (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				       >> 0xfU)))),5);
	vcdp->chgBus(c+512,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				       << 0x16U) | 
				      (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				       >> 0xaU)))),5);
	vcdp->chgBus(c+513,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				       << 0x1bU) | 
				      (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				       >> 5U)))),5);
	vcdp->chgBus(c+514,(((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
			      << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
					   >> 5U))),32);
	vcdp->chgBit(c+515,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
				   >> 4U))));
	vcdp->chgBus(c+516,((0xfU & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U])),4);
	vcdp->chgBit(c+517,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1));
	vcdp->chgBit(c+518,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2));
	vcdp->chgBit(c+519,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd));
	vcdp->chgBit(c+520,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm));
	vcdp->chgBus(c+521,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				       << 0x1bU) | 
				      (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				       >> 5U)))),5);
	vcdp->chgBus(c+522,((0xfffU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					<< 0x1bU) | 
				       (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
					>> 5U)))),12);
	vcdp->chgBus(c+523,((3U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				    << 4U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					      >> 0x1cU)))),2);
	vcdp->chgBus(c+524,((7U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				    << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
						 >> 5U)))),3);
	vcdp->chgBus(c+525,((3U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				    << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
						 >> 5U)))),2);
	vcdp->chgBus(c+526,((3U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)),2);
	vcdp->chgBus(c+527,((0x1fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
				      >> 2U))),5);
	vcdp->chgBit(c+528,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal));
	vcdp->chgBus(c+529,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3),3);
	vcdp->chgBus(c+530,((0x7fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
				      >> 0x19U))),7);
	vcdp->chgBus(c+531,((0xfffU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
				       >> 0x14U))),12);
	vcdp->chgBus(c+532,((0x1fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
				      >> 0x14U))),5);
	vcdp->chgBit(c+533,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal));
	vcdp->chgBit(c+534,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				   >> 0xaU))));
	vcdp->chgBit(c+535,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				   >> 9U))));
	vcdp->chgBus(c+536,((0x1fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				      >> 4U))),5);
	vcdp->chgBit(c+537,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				   >> 3U))));
	vcdp->chgBus(c+538,((0xfU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				      << 1U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
						>> 0x1fU)))),4);
	vcdp->chgBit(c+539,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				   >> 0x1eU))));
	vcdp->chgBus(c+540,((3U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				    << 4U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					      >> 0x1cU)))),2);
	vcdp->chgBus(c+541,((7U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				    << 7U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					      >> 0x19U)))),3);
	vcdp->chgBit(c+542,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				   >> 0x18U))));
	vcdp->chgBit(c+543,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				   >> 0x17U))));
	vcdp->chgBit(c+544,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				   >> 0x16U))));
	vcdp->chgBit(c+545,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				   >> 0x15U))));
	vcdp->chgBit(c+546,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				   >> 0x14U))));
	vcdp->chgBus(c+547,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				       << 0x11U) | 
				      (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				       >> 0xfU)))),5);
	vcdp->chgBus(c+548,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				       << 0x16U) | 
				      (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				       >> 0xaU)))),5);
	vcdp->chgBus(c+549,(((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
			      << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
					   >> 5U))),32);
	vcdp->chgBit(c+550,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
				   >> 4U))));
	vcdp->chgBus(c+551,((0xfU & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U])),4);
	vcdp->chgBus(c+552,(((8U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U])
			      ? ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				  << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
					       >> 5U))
			      : ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				  << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
					       >> 5U)))),32);
	vcdp->chgBit(c+553,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				   >> 0xaU))));
	vcdp->chgBus(c+554,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc),32);
	vcdp->chgBus(c+555,((0x1fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				      >> 4U))),5);
	vcdp->chgBus(c+556,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd),2);
	vcdp->chgBus(c+557,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_cmd),2);
	vcdp->chgBus(c+558,((0xfU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				      << 1U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
						>> 0x1fU)))),4);
	vcdp->chgBit(c+559,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_hdu_req));
	vcdp->chgBit(c+560,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_brkm_req));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__42(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+561,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt_en));
	vcdp->chgBit(c+562,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_posedge));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__43(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+563,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_rst_n));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__44(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+564,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__core_rst_n_qlfy));
	vcdp->chgBit(c+565,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__hdu_rst_n_qlfy));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__45(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+566,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__pwrup_rst_n_sync));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__46(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+567,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status_qlfy) 
				   >> 3U))));
	vcdp->chgBit(c+568,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status_qlfy) 
				   >> 2U))));
	vcdp->chgBus(c+569,((3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status_qlfy))),2);
	vcdp->chgBus(c+570,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_addr_qlfy),3);
	vcdp->chgBus(c+571,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_instr),32);
	vcdp->chgBit(c+572,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halted));
	vcdp->chgBit(c+573,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_run_start));
	vcdp->chgBit(c+574,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_rctl_clr));
	vcdp->chgBit(c+575,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_exception_cmb));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__47(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+576,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run));
	vcdp->chgBit(c+577,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_cmd_req));
	vcdp->chgBit(c+578,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_pbuf_start_fetch));
	vcdp->chgBit(c+579,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_rctl_wr));
	vcdp->chgBit(c+580,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req));
	vcdp->chgBit(c+581,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_resume_req));
	vcdp->chgBus(c+582,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_cmb),4);
	vcdp->chgBit(c+583,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_cmb));
	vcdp->chgBit(c+584,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_cmb));
	vcdp->chgBit(c+585,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_cmb));
	vcdp->chgBus(c+586,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_cmb),2);
	vcdp->chgBus(c+587,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmderr_cmb),3);
	vcdp->chgBus(c+588,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_req_cmb),3);
	vcdp->chgBit(c+589,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_cmb));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__48(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+590,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_init_pc_qlfy));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__49(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+591,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_cmd_qlfy),2);
	vcdp->chgBus(c+592,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_addr_qlfy),3);
	vcdp->chgBus(c+593,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_cmd_qlfy),2);
	vcdp->chgBus(c+594,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_addr_qlfy),2);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__50(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+595,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__queue_barrier));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__51(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+596,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_resp));
	vcdp->chgBit(c+597,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_resp_qlfy));
	vcdp->chgBit(c+598,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_rcode));
	vcdp->chgBit(c+599,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_rcode_qlfy));
	vcdp->chgBus(c+600,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next),2);
	vcdp->chgBit(c+601,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event_next));
	vcdp->chgBit(c+602,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_csr_update));
	vcdp->chgBus(c+603,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_cmb),3);
	vcdp->chgBit(c+604,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_cmb));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__52(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+605,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_mux_out_reg));
	vcdp->chgBit(c+606,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_mux_en_reg));
	vcdp->chgBus(c+607,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_reg),5);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__53(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+608,(((0xfU == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_state_reg))
			      ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_reg)
			      : (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_reg))),5);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__54(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+609,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_reg),5);
	vcdp->chgBus(c+610,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg),32);
	vcdp->chgBus(c+611,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg),32);
	vcdp->chgBit(c+612,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_bypass_reg__DOT__shift_reg));
	vcdp->chgBit(c+613,((1U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg)));
	vcdp->chgBit(c+614,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_bypass_reg__DOT__shift_reg));
	vcdp->chgBit(c+615,((1U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg)));
	vcdp->chgBit(c+616,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__55(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+617,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__56(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+618,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_buf_cell__DOT__reset_n_status_ff));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__57(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+619,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_reset_buf_cell__DOT__reset_n_ff));
	vcdp->chgBit(c+620,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_reset_buf_cell__DOT__reset_n_status_ff));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__58(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+621,(vlTOPp->scr1_top_tb_ahb__DOT__test_file),256);
	vcdp->chgBit(c+629,(vlTOPp->scr1_top_tb_ahb__DOT__test_running));
	vcdp->chgBus(c+630,(vlTOPp->scr1_top_tb_ahb__DOT__tests_passed),32);
	vcdp->chgBus(c+631,(vlTOPp->scr1_top_tb_ahb__DOT__tests_total),32);
	vcdp->chgBus(c+632,(vlTOPp->scr1_top_tb_ahb__DOT__rst_cnt),2);
	vcdp->chgBit(c+633,(vlTOPp->scr1_top_tb_ahb__DOT__rst_init));
	vcdp->chgArray(c+634,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__full_filename),256);
	vcdp->chgBit(c+642,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__test_pass));
	vcdp->chgBus(c+643,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tmpv),32);
	vcdp->chgBus(c+644,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__start),32);
	vcdp->chgBus(c+645,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__stop),32);
	vcdp->chgBus(c+646,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ref_data),32);
	vcdp->chgBus(c+647,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__test_data),32);
	vcdp->chgBus(c+648,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__fd),32);
	vcdp->chgArray(c+649,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tmpstr),2048);
	vcdp->chgBit(c+713,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk3__DOT__unnamedblk5__DOT__test_pass));
	vcdp->chgBus(c+714,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_rdata),32);
	vcdp->chgBus(c+715,(((0x1fU >= ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg) 
					<< 3U)) ? (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_local 
						   >> 
						   ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg) 
						    << 3U))
			      : 0U)),32);
	vcdp->chgBus(c+716,((((5U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
			      | (8U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
			      ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data1_ff
			      : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data0_ff)),32);
	vcdp->chgBus(c+717,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_instr),32);
	vcdp->chgBus(c+718,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__cnt_res_reg),5);
	vcdp->chgBit(c+719,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_1_c_reg));
	vcdp->chgBus(c+720,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_1_reg),32);
	vcdp->chgBus(c+721,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_2_reg),32);
	vcdp->chgBus(c+722,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_3_reg),32);
	vcdp->chgBus(c+723,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__tdata2)),32);
	vcdp->chgBus(c+724,((IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__tdata2 
				     >> 0x20U))),32);
	vcdp->chgBit(c+725,(((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
			     & (1U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))));
	vcdp->chgBus(c+726,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff),3);
	vcdp->chgBit(c+727,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractauto_execdata0_ff));
	vcdp->chgBus(c+728,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data0_ff),32);
	vcdp->chgBus(c+729,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data1_ff),32);
	vcdp->chgBus(c+730,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__command_ff),32);
	vcdp->chgBus(c+731,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf0_ff),32);
	vcdp->chgBus(c+732,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf1_ff),32);
	vcdp->chgBus(c+733,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf2_ff),32);
	vcdp->chgBus(c+734,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf3_ff),32);
	vcdp->chgBus(c+735,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf4_ff),32);
	vcdp->chgBus(c+736,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf5_ff),32);
	vcdp->chgBus(c+737,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff),4);
	vcdp->chgBit(c+738,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_ff));
	vcdp->chgBus(c+739,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_ff),32);
	vcdp->chgBit(c+740,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff));
	vcdp->chgBit(c+741,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_ff));
	vcdp->chgBus(c+742,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_ff),2);
	vcdp->chgBus(c+743,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff),12);
	vcdp->chgBit(c+744,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_exception_ff));
	vcdp->chgBit(c+745,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff));
	vcdp->chgBit(c+746,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_pbuf_ebreak_ff));
	vcdp->chgBus(c+747,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_local),32);
	vcdp->chgBus(c+748,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg),2);
	vcdp->chgBus(c+749,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__unnamedblk1__DOT__i),32);
	vcdp->chgBus(c+750,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_r),32);
	vcdp->chgBit(c+751,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[2U] 
				   >> 3U))));
	vcdp->chgBus(c+752,((7U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[2U])),3);
	vcdp->chgBus(c+753,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[1U]),32);
	vcdp->chgBus(c+754,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[0U]),32);
	vcdp->chgArray(c+755,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file),256);
	vcdp->chgBit(c+763,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file_init));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__59(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+764,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff) 
				   >> 1U))));
	vcdp->chgBit(c+765,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff) 
				   >> 1U))));
	vcdp->chgBit(c+766,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff) 
				   >> 1U))));
	vcdp->chgBus(c+767,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff),2);
	vcdp->chgBus(c+768,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff),2);
	vcdp->chgBus(c+769,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff),2);
	vcdp->chgBus(c+770,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mem_err_ptr),32);
	vcdp->chgBit(c+771,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state));
	vcdp->chgBus(c+772,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_addr),32);
	vcdp->chgBus(c+773,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall),32);
	vcdp->chgBit(c+774,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_rnd));
	vcdp->chgBus(c+775,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_hrdata_l),32);
	vcdp->chgBus(c+776,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall),32);
	vcdp->chgBit(c+777,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_rnd));
	vcdp->chgBit(c+778,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state));
	vcdp->chgBus(c+779,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr),32);
	vcdp->chgBit(c+780,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr));
	vcdp->chgBus(c+781,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_size),3);
	vcdp->chgBus(c+782,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_be),4);
	vcdp->chgBus(c+783,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l),32);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__60(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+784,((1U & ((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__control_reg)) 
				   & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff) 
				      >> 1U)))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__61(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+785,((1U & (((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff)) 
				    & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff))) 
				   & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff) 
				      >> 1U)))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__62(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+786,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_update));
	vcdp->chgBit(c+787,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi));
	vcdp->chgBit(c+788,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel));
	vcdp->chgBit(c+789,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg))));
	vcdp->chgBus(c+790,((0xfU & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg) 
				     >> 4U))),4);
	vcdp->chgBus(c+791,((3U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg) 
				   >> 2U))),2);
	vcdp->chgBus(c+792,((3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg))),2);
	vcdp->chgBus(c+793,((0xfU & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shadow_reg) 
				     >> 4U))),4);
	vcdp->chgBus(c+794,((3U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shadow_reg) 
				   >> 2U))),2);
	vcdp->chgBus(c+795,((3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shadow_reg))),2);
	vcdp->chgBus(c+796,((7U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__control_reg) 
				   >> 1U))),3);
	vcdp->chgBit(c+797,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__control_reg))));
	vcdp->chgBus(c+798,((3U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg) 
				   >> 2U))),2);
	vcdp->chgBit(c+799,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg) 
				   >> 1U))));
	vcdp->chgBit(c+800,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg))));
	vcdp->chgBus(c+801,((3U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_r) 
				   >> 2U))),2);
	vcdp->chgBit(c+802,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_r) 
				   >> 1U))));
	vcdp->chgBit(c+803,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_r))));
	vcdp->chgBit(c+804,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_wr_r));
	vcdp->chgBit(c+805,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_dly) 
				   >> 3U))));
	vcdp->chgBit(c+806,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_dly) 
				   >> 2U))));
	vcdp->chgBit(c+807,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_dly) 
				   >> 1U))));
	vcdp->chgBit(c+808,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_dly))));
	vcdp->chgBit(c+809,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg) 
				   >> 3U))));
	vcdp->chgBit(c+810,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg) 
				   >> 2U))));
	vcdp->chgBit(c+811,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg) 
				   >> 1U))));
	vcdp->chgBit(c+812,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg))));
	vcdp->chgBit(c+813,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_status_ff));
	vcdp->chgBus(c+814,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__unnamedblk1__DOT__i),32);
	vcdp->chgBit(c+815,((1U & (((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync) 
				    >> 2U) ^ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync) 
					      >> 1U)))));
	vcdp->chgBit(c+816,((1U & (((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync) 
				    >> 3U) ^ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync) 
					      >> 2U)))));
	vcdp->chgBus(c+817,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos_sync),4);
	vcdp->chgBus(c+818,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync),4);
	vcdp->chgBus(c+819,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync),3);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__63(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+820,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg) 
			      & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel)) 
			     | ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff) 
				& (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel)))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__64(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+821,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture))));
	vcdp->chgBit(c+822,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__65(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+823,((1U & ((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg)) 
				   | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_qualifier_ff)))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__66(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+824,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event));
	vcdp->chgBus(c+825,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr),3);
	vcdp->chgBus(c+826,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_reg),32);
	vcdp->chgBus(c+827,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__tselect_ff),2);
	vcdp->chgBus(c+828,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_dmode_ff),2);
	vcdp->chgBus(c+829,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_action_ff),2);
	vcdp->chgBus(c+830,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_hit_ff),2);
	vcdp->chgBus(c+831,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_m_ff),2);
	vcdp->chgBus(c+832,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_execution_ff),2);
	vcdp->chgBus(c+833,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_load_ff),2);
	vcdp->chgBus(c+834,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_store_ff),2);
	vcdp->chgBit(c+835,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_skip_ff));
	vcdp->chgBit(c+836,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_dmode_ff));
	vcdp->chgBit(c+837,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_action_ff));
	vcdp->chgBit(c+838,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_hit_ff));
	vcdp->chgBit(c+839,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_m_ff));
	vcdp->chgBus(c+840,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_count_ff),14);
	vcdp->chgBus(c+841,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state),2);
	vcdp->chgBit(c+842,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans));
	vcdp->chgBit(c+843,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update));
	vcdp->chgBit(c+844,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus) 
				   >> 3U))));
	vcdp->chgBus(c+845,((7U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus))),3);
	vcdp->chgBus(c+846,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbgc_timeout_cnt),6);
	vcdp->chgBit(c+847,((1U & (~ (IData)((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbgc_timeout_cnt)))))));
	vcdp->chgBus(c+848,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_state),2);
	vcdp->chgBit(c+849,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_instr_wait_latching));
	vcdp->chgBus(c+850,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_cause),3);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__67(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+851,((1U & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff)))));
	vcdp->chgBit(c+852,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel));
	vcdp->chgBus(c+853,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id),2);
	vcdp->chgBit(c+854,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff))));
	vcdp->chgBit(c+855,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_req));
	vcdp->chgBus(c+856,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd),2);
	vcdp->chgBus(c+857,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__dmi_rdata_ff),32);
	vcdp->chgQuad(c+858,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff),41);
	vcdp->chgBit(c+860,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff));
	vcdp->chgBit(c+861,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff));
	vcdp->chgBit(c+862,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_ff));
	vcdp->chgBit(c+863,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff));
	vcdp->chgBit(c+864,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_ff));
	vcdp->chgBit(c+865,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff));
	vcdp->chgBit(c+866,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff));
	vcdp->chgBit(c+867,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff));
	vcdp->chgBus(c+868,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff),3);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__68(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+869,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_status_ff));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__69(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+870,((1U & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)))));
	vcdp->chgBit(c+871,((1U & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)))));
	vcdp->chgBus(c+872,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp),2);
	vcdp->chgBus(c+873,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp),2);
	vcdp->chgBus(c+874,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata),32);
	vcdp->chgBus(c+875,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_resp),2);
	vcdp->chgBit(c+876,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq));
	vcdp->chgQuad(c+877,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg),64);
	vcdp->chgBus(c+879,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc),32);
	vcdp->chgBit(c+880,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__fsm));
	vcdp->chgBus(c+881,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_r),30);
	vcdp->chgBus(c+882,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending),3);
	vcdp->chgBus(c+883,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__discard_resp_cnt),3);
	vcdp->chgBit(c+884,((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__discard_resp_cnt))));
	vcdp->chgBus(c+885,((7U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending) 
				   - (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__discard_resp_cnt)))),3);
	vcdp->chgBit(c+886,((7U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending))));
	vcdp->chgBit(c+887,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned));
	vcdp->chgBus(c+888,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr),3);
	vcdp->chgBus(c+889,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr),3);
	vcdp->chgBus(c+890,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[0]),16);
	vcdp->chgBus(c+891,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[1]),16);
	vcdp->chgBus(c+892,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[2]),16);
	vcdp->chgBus(c+893,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[3]),16);
	vcdp->chgBit(c+894,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[0]));
	vcdp->chgBit(c+895,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[1]));
	vcdp->chgBit(c+896,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[2]));
	vcdp->chgBit(c+897,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[3]));
	vcdp->chgBus(c+898,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data
			    [(3U & ((IData)(1U) + (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr)))]),16);
	vcdp->chgBit(c+899,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_curr));
	vcdp->chgBit(c+900,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access));
	vcdp->chgBit(c+901,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted));
	vcdp->chgBit(c+902,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_start));
	vcdp->chgBus(c+903,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc_v),4);
	vcdp->chgBit(c+904,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req_r));
	vcdp->chgBus(c+905,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__curr_state),2);
	vcdp->chgBit(c+906,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__fsm));
	vcdp->chgBus(c+907,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r),4);
	vcdp->chgBus(c+908,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0U]),32);
	vcdp->chgBus(c+909,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[1U]),32);
	vcdp->chgBus(c+910,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[2U]),32);
	vcdp->chgBus(c+911,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[3U]),32);
	vcdp->chgBus(c+912,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[4U]),32);
	vcdp->chgBus(c+913,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[5U]),32);
	vcdp->chgBus(c+914,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[6U]),32);
	vcdp->chgBus(c+915,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[7U]),32);
	vcdp->chgBus(c+916,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[8U]),32);
	vcdp->chgBus(c+917,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[9U]),32);
	vcdp->chgBus(c+918,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xaU]),32);
	vcdp->chgBus(c+919,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xbU]),32);
	vcdp->chgBus(c+920,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xcU]),32);
	vcdp->chgBus(c+921,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xdU]),32);
	vcdp->chgBus(c+922,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xeU]),32);
	vcdp->chgBus(c+923,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xfU]),32);
	vcdp->chgBus(c+924,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x10U]),32);
	vcdp->chgBus(c+925,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x11U]),32);
	vcdp->chgBus(c+926,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x12U]),32);
	vcdp->chgBus(c+927,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x13U]),32);
	vcdp->chgBus(c+928,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x14U]),32);
	vcdp->chgBus(c+929,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x15U]),32);
	vcdp->chgBus(c+930,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x16U]),32);
	vcdp->chgBus(c+931,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x17U]),32);
	vcdp->chgBus(c+932,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x18U]),32);
	vcdp->chgBus(c+933,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x19U]),32);
	vcdp->chgBus(c+934,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1aU]),32);
	vcdp->chgBus(c+935,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1bU]),32);
	vcdp->chgBus(c+936,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1cU]),32);
	vcdp->chgBus(c+937,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1dU]),32);
	vcdp->chgBus(c+938,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1eU]),32);
	vcdp->chgBit(c+939,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie));
	vcdp->chgBit(c+940,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie));
	vcdp->chgBit(c+941,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_mtie));
	vcdp->chgBit(c+942,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_meie));
	vcdp->chgBit(c+943,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_msie));
	vcdp->chgBus(c+944,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch),32);
	vcdp->chgBus(c+945,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc),31);
	vcdp->chgBit(c+946,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i));
	vcdp->chgBus(c+947,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec),4);
	vcdp->chgBus(c+948,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval),32);
	vcdp->chgBus(c+949,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base),26);
	vcdp->chgBit(c+950,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_mode));
	vcdp->chgQuad(c+951,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_hi),56);
	vcdp->chgBus(c+953,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_lo),8);
	vcdp->chgQuad(c+954,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_hi),56);
	vcdp->chgBus(c+956,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_lo),8);
	vcdp->chgBit(c+957,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy));
	vcdp->chgBit(c+958,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_ir));
	vcdp->chgBus(c+959,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_i),16);
	vcdp->chgBus(c+960,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_det),16);
	vcdp->chgBus(c+961,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__invr),16);
	vcdp->chgBus(c+962,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__imr),16);
	vcdp->chgBus(c+963,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipr),16);
	vcdp->chgBus(c+964,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ier),16);
	vcdp->chgBus(c+965,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipr) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ier))),16);
	vcdp->chgBus(c+966,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cisv_m),5);
	vcdp->chgBus(c+967,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__idxr_m),4);
	vcdp->chgBus(c+968,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_m),16);
	vcdp->chgBus(c+969,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_sync0),16);
	vcdp->chgBus(c+970,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__unnamedblk13__DOT__i),32);
	vcdp->chgBus(c+971,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt),32);
	vcdp->chgBit(c+972,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update_r));
	vcdp->chgBus(c+973,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0U]),32);
	vcdp->chgBus(c+974,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[1U]),32);
	vcdp->chgBus(c+975,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[2U]),32);
	vcdp->chgBus(c+976,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[3U]),32);
	vcdp->chgBus(c+977,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[4U]),32);
	vcdp->chgBus(c+978,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[5U]),32);
	vcdp->chgBus(c+979,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[6U]),32);
	vcdp->chgBus(c+980,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[7U]),32);
	vcdp->chgBus(c+981,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[8U]),32);
	vcdp->chgBus(c+982,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[9U]),32);
	vcdp->chgBus(c+983,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xaU]),32);
	vcdp->chgBus(c+984,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xbU]),32);
	vcdp->chgBus(c+985,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xcU]),32);
	vcdp->chgBus(c+986,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xdU]),32);
	vcdp->chgBus(c+987,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xeU]),32);
	vcdp->chgBus(c+988,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xfU]),32);
	vcdp->chgBus(c+989,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x10U]),32);
	vcdp->chgBus(c+990,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x11U]),32);
	vcdp->chgBus(c+991,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x12U]),32);
	vcdp->chgBus(c+992,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x13U]),32);
	vcdp->chgBus(c+993,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x14U]),32);
	vcdp->chgBus(c+994,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x15U]),32);
	vcdp->chgBus(c+995,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x16U]),32);
	vcdp->chgBus(c+996,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x17U]),32);
	vcdp->chgBus(c+997,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x18U]),32);
	vcdp->chgBus(c+998,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x19U]),32);
	vcdp->chgBus(c+999,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1aU]),32);
	vcdp->chgBus(c+1000,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1bU]),32);
	vcdp->chgBus(c+1001,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1cU]),32);
	vcdp->chgBus(c+1002,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1dU]),32);
	vcdp->chgBus(c+1003,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1eU]),32);
	vcdp->chgBit(c+1004,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_up));
	vcdp->chgBus(c+1005,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr),5);
	vcdp->chgBus(c+1006,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler),32);
	vcdp->chgBus(c+1007,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_diff),32);
	vcdp->chgBus(c+1008,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt2),32);
	vcdp->chgBus(c+1009,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_csr_fhandler),32);
	vcdp->chgBus(c+1010,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[6U]),32);
	vcdp->chgBus(c+1011,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[5U]),32);
	vcdp->chgBus(c+1012,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[4U]),32);
	vcdp->chgBus(c+1013,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[3U]),32);
	vcdp->chgBus(c+1014,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[2U]),32);
	vcdp->chgBus(c+1015,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[1U]),32);
	vcdp->chgBus(c+1016,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[0U]),32);
	vcdp->chgBus(c+1017,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__unnamedblk2__DOT__i),32);
	vcdp->chgQuad(c+1018,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_reg),64);
	vcdp->chgBit(c+1020,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_en));
	vcdp->chgBus(c+1021,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_div),10);
	vcdp->chgBus(c+1022,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt),10);
	vcdp->chgBit(c+1023,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__fsm));
	vcdp->chgBit(c+1024,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__port_sel_r));
	vcdp->chgBit(c+1025,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__fsm));
	vcdp->chgBus(c+1026,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel_r),2);
	vcdp->chgBit(c+1027,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm));
	vcdp->chgBit(c+1028,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full));
	vcdp->chgBit(c+1029,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__70(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1030,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo)),32);
	vcdp->chgBus(c+1031,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__curr_pc_log),32);
	vcdp->chgBit(c+1032,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
					    >> 0x25U)))));
	vcdp->chgBus(c+1033,((7U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
					    >> 0x22U)))),3);
	vcdp->chgBus(c+1034,((3U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
					    >> 0x20U)))),2);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__71(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1035,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__72(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1036,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_capture));
	vcdp->chgBit(c+1037,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift));
	vcdp->chgBit(c+1038,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_update));
	vcdp->chgBit(c+1039,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__73(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1040,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture));
	vcdp->chgBit(c+1041,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift));
	vcdp->chgBit(c+1042,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture) 
			      | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__74(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1043,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 4U))));
	vcdp->chgBit(c+1044,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 2U))));
	vcdp->chgBit(c+1045,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 5U))));
	vcdp->chgBit(c+1046,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 3U))));
	vcdp->chgBit(c+1047,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 1U))));
	vcdp->chgBit(c+1048,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 5U))));
	vcdp->chgBit(c+1049,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 4U))));
	vcdp->chgBit(c+1050,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 3U))));
	vcdp->chgBit(c+1051,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 2U))));
	vcdp->chgBit(c+1052,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 1U))));
	vcdp->chgBit(c+1053,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl))));
	vcdp->chgBit(c+1054,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_ebreakm));
	vcdp->chgBit(c+1055,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_stepie));
	vcdp->chgBit(c+1056,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_step));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__75(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1057,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__irq_reg),16);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__76(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1058,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__77(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1059,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__trst_n_int));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__78(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1060,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync),3);
	vcdp->chgBus(c+1061,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync),3);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__79(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1062,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm_ff));
	vcdp->chgBit(c+1063,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__80(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1064,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_buf_cell__DOT__reset_n_ff));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__81(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1065,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync),4);
	vcdp->chgBit(c+1066,((1U & (((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync) 
				     >> 3U) ^ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync) 
					       >> 2U)))));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__82(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1067,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_clksrc_rtc));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__83(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1068,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_state_reg),4);
    }
}

void Vscr1_top_tb_ahb::traceChgThis__84(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1069,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_ff));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__85(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1070,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_lucky_ff));
	vcdp->chgBit(c+1071,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_qualifier_ff));
	vcdp->chgBit(c+1072,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_victim_ff));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__86(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1073,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_front_ff));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__87(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1074,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_lucky_ff));
	vcdp->chgBit(c+1075,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_qualifier_ff));
	vcdp->chgBit(c+1076,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_victim_ff));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__88(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1077,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_front_ff));
    }
}

void Vscr1_top_tb_ahb::traceChgThis__89(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1078,(vlTOPp->clk));
    }
}
