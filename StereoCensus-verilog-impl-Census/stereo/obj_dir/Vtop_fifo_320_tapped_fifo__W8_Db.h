// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_fifo_320.h for the primary calling header

#ifndef _Vtop_fifo_320_tapped_fifo__W8_Db_H_
#define _Vtop_fifo_320_tapped_fifo__W8_Db_H_

#include "verilated.h"

class Vtop_fifo_320__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vtop_fifo_320_tapped_fifo__W8_Db) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(en,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(inp,7,0);
    VL_OUT8(outp,7,0);
    VL_OUTW(taps,87,0,3);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__regis[11],7,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vcellout__sr0____pinNumber5,7,0);
    VL_SIG8(shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5,7,0);
    VL_SIG8(shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5,7,0);
    VL_SIG8(shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5,7,0);
    VL_SIG8(shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5,7,0);
    VL_SIG8(shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5,7,0);
    VL_SIG8(shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5,7,0);
    VL_SIG8(shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5,7,0);
    VL_SIG8(shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5,7,0);
    VL_SIG8(shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5,7,0);
    VL_SIG8(shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5,7,0);
    
    // INTERNAL VARIABLES
  private:
    Vtop_fifo_320__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_fifo_320_tapped_fifo__W8_Db& operator= (const Vtop_fifo_320_tapped_fifo__W8_Db&);  ///< Copying not allowed
    Vtop_fifo_320_tapped_fifo__W8_Db(const Vtop_fifo_320_tapped_fifo__W8_Db&);  ///< Copying not allowed
  public:
    Vtop_fifo_320_tapped_fifo__W8_Db(const char* name="TOP");
    ~Vtop_fifo_320_tapped_fifo__W8_Db();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop_fifo_320__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__tf__34(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__tf__25(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__tf__26(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__tf__27(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__tf__28(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__tf__29(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__tf__30(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__tf__31(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__tf__32(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__tf__33(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__tf__23(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__tf__44(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__tf__35(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__tf__36(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__tf__37(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__tf__38(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__tf__39(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__tf__40(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__tf__41(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__tf__42(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__tf__43(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__tf__24(Vtop_fifo_320__Syms* __restrict vlSymsp);
    void _settle__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__tf__1(Vtop_fifo_320__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
