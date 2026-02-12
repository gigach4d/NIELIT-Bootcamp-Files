// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux2x1_tb.h for the primary calling header

#ifndef VERILATED_VMUX2X1_TB___024UNIT_H_
#define VERILATED_VMUX2X1_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmux2x1_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux2x1_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vmux2x1_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux2x1_tb___024unit(Vmux2x1_tb__Syms* symsp, const char* v__name);
    ~Vmux2x1_tb___024unit();
    VL_UNCOPYABLE(Vmux2x1_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
