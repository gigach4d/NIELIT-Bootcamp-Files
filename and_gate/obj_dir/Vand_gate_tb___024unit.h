// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vand_gate_tb.h for the primary calling header

#ifndef VERILATED_VAND_GATE_TB___024UNIT_H_
#define VERILATED_VAND_GATE_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vand_gate_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vand_gate_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vand_gate_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vand_gate_tb___024unit(Vand_gate_tb__Syms* symsp, const char* v__name);
    ~Vand_gate_tb___024unit();
    VL_UNCOPYABLE(Vand_gate_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
