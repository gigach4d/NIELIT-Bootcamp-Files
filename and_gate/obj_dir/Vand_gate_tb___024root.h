// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vand_gate_tb.h for the primary calling header

#ifndef VERILATED_VAND_GATE_TB___024ROOT_H_
#define VERILATED_VAND_GATE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vand_gate_tb___024unit;


class Vand_gate_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vand_gate_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vand_gate_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ and_gate_tb__DOT__a;
    CData/*0:0*/ and_gate_tb__DOT__b;
    CData/*0:0*/ and_gate_tb__DOT__out;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__and_gate_tb__DOT__a__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__and_gate_tb__DOT__b__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__and_gate_tb__DOT__out__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vand_gate_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vand_gate_tb___024root(Vand_gate_tb__Syms* symsp, const char* v__name);
    ~Vand_gate_tb___024root();
    VL_UNCOPYABLE(Vand_gate_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
