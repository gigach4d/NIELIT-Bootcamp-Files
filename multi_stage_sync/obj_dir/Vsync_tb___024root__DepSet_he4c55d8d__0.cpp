// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsync_tb.h for the primary calling header

#include "Vsync_tb__pch.h"
#include "Vsync_tb__Syms.h"
#include "Vsync_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vsync_tb___024root___eval_initial__TOP__Vtiming__0(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(7ULL, nullptr, 
                                       "sync_tb.v", 
                                       22);
    vlSelf->sync_tb__DOT__async_in = 1U;
    co_await vlSelf->__VdlySched.delay(0xdULL, nullptr, 
                                       "sync_tb.v", 
                                       23);
    vlSelf->sync_tb__DOT__async_in = 0U;
    co_await vlSelf->__VdlySched.delay(8ULL, nullptr, 
                                       "sync_tb.v", 
                                       24);
    vlSelf->sync_tb__DOT__async_in = 1U;
    co_await vlSelf->__VdlySched.delay(0xcULL, nullptr, 
                                       "sync_tb.v", 
                                       25);
    vlSelf->sync_tb__DOT__async_in = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "sync_tb.v", 
                                       26);
    VL_FINISH_MT("sync_tb.v", 26, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_tb___024root___dump_triggers__act(Vsync_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsync_tb___024root___eval_triggers__act(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->sync_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sync_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__sync_tb__DOT__clk__0 
        = vlSelf->sync_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsync_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
