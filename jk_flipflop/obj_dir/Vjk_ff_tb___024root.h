// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjk_ff_tb.h for the primary calling header

#ifndef VERILATED_VJK_FF_TB___024ROOT_H_
#define VERILATED_VJK_FF_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vjk_ff_tb___024unit;


class Vjk_ff_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vjk_ff_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vjk_ff_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ jk_ff_tb__DOT__reset;
    CData/*0:0*/ jk_ff_tb__DOT__clk;
    CData/*0:0*/ jk_ff_tb__DOT__j;
    CData/*0:0*/ jk_ff_tb__DOT__k;
    CData/*0:0*/ jk_ff_tb__DOT__q;
    CData/*0:0*/ __Vtrigprevexpr___TOP__jk_ff_tb__DOT__j__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__jk_ff_tb__DOT__k__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__jk_ff_tb__DOT__q__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__jk_ff_tb__DOT__reset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__jk_ff_tb__DOT__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vjk_ff_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vjk_ff_tb___024root(Vjk_ff_tb__Syms* symsp, const char* v__name);
    ~Vjk_ff_tb___024root();
    VL_UNCOPYABLE(Vjk_ff_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
