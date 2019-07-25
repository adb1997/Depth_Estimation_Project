// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstereo.h for the primary calling header

#include "Vstereo_tapped_fifo__W8_Db.h" // For This
#include "Vstereo__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vstereo_tapped_fifo__W8_Db) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vstereo_tapped_fifo__W8_Db::__Vconfigure(Vstereo__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vstereo_tapped_fifo__W8_Db::~Vstereo_tapped_fifo__W8_Db() {
}

//--------------------
// Internal Methods

void Vstereo_tapped_fifo__W8_Db::_settle__TOP__stereo__DOT__left_buf__DOT__tf__1(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_settle__TOP__stereo__DOT__left_buf__DOT__tf__1\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,95,0,3);
    // Body
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp1[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regs
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regs
						      [9U] 
						      << 8U) 
						     | this->__PVT__regs
						     [0xaU])));
    __Vtemp1[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regs
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regs
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regs
								    [2U] 
								    << 8U) 
								   | this->__PVT__regs
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regs
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [6U] 
								     << 8U) 
								    | this->__PVT__regs
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regs
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regs
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp1[0U];
    this->taps[1U] = __Vtemp1[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__tf__23(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__tf__23\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp2,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : (IData)(vlTOPp->inp_left)));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp2[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regs
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regs
						      [9U] 
						      << 8U) 
						     | this->__PVT__regs
						     [0xaU])));
    __Vtemp2[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regs
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regs
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regs
								    [2U] 
								    << 8U) 
								   | this->__PVT__regs
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regs
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [6U] 
								     << 8U) 
								    | this->__PVT__regs
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regs
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regs
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp2[0U];
    this->taps[1U] = __Vtemp2[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__tf__25(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__tf__25\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp3,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp3[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regs
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regs
						      [9U] 
						      << 8U) 
						     | this->__PVT__regs
						     [0xaU])));
    __Vtemp3[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regs
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regs
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regs
								    [2U] 
								    << 8U) 
								   | this->__PVT__regs
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regs
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [6U] 
								     << 8U) 
								    | this->__PVT__regs
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regs
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regs
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp3[0U];
    this->taps[1U] = __Vtemp3[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__tf__26(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__tf__26\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp4,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp4[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regs
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regs
						      [9U] 
						      << 8U) 
						     | this->__PVT__regs
						     [0xaU])));
    __Vtemp4[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regs
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regs
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regs
								    [2U] 
								    << 8U) 
								   | this->__PVT__regs
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regs
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [6U] 
								     << 8U) 
								    | this->__PVT__regs
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regs
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regs
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp4[0U];
    this->taps[1U] = __Vtemp4[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__tf__27(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__tf__27\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp5,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp5[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regs
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regs
						      [9U] 
						      << 8U) 
						     | this->__PVT__regs
						     [0xaU])));
    __Vtemp5[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regs
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regs
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regs
								    [2U] 
								    << 8U) 
								   | this->__PVT__regs
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regs
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [6U] 
								     << 8U) 
								    | this->__PVT__regs
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regs
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regs
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp5[0U];
    this->taps[1U] = __Vtemp5[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__tf__28(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__tf__28\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp6,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp6[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regs
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regs
						      [9U] 
						      << 8U) 
						     | this->__PVT__regs
						     [0xaU])));
    __Vtemp6[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regs
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regs
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regs
								    [2U] 
								    << 8U) 
								   | this->__PVT__regs
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regs
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [6U] 
								     << 8U) 
								    | this->__PVT__regs
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regs
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regs
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp6[0U];
    this->taps[1U] = __Vtemp6[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__tf__29(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__tf__29\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp7,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp7[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regs
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regs
						      [9U] 
						      << 8U) 
						     | this->__PVT__regs
						     [0xaU])));
    __Vtemp7[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regs
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regs
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regs
								    [2U] 
								    << 8U) 
								   | this->__PVT__regs
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regs
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [6U] 
								     << 8U) 
								    | this->__PVT__regs
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regs
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regs
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp7[0U];
    this->taps[1U] = __Vtemp7[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__tf__30(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__tf__30\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp8,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp8[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regs
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regs
						      [9U] 
						      << 8U) 
						     | this->__PVT__regs
						     [0xaU])));
    __Vtemp8[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regs
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regs
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regs
								    [2U] 
								    << 8U) 
								   | this->__PVT__regs
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regs
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [6U] 
								     << 8U) 
								    | this->__PVT__regs
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regs
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regs
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp8[0U];
    this->taps[1U] = __Vtemp8[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__tf__31(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__tf__31\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp9,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp9[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regs
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regs
						      [9U] 
						      << 8U) 
						     | this->__PVT__regs
						     [0xaU])));
    __Vtemp9[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regs
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regs
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regs
								    [2U] 
								    << 8U) 
								   | this->__PVT__regs
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regs
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [6U] 
								     << 8U) 
								    | this->__PVT__regs
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regs
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regs
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp9[0U];
    this->taps[1U] = __Vtemp9[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__tf__32(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__tf__32\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp10,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp10[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regs
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [2U] 
								       << 8U) 
								      | this->__PVT__regs
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regs
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regs
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regs
									[6U] 
									<< 8U) 
								       | this->__PVT__regs
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regs
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regs
						       [9U] 
						       << 8U) 
						      | this->__PVT__regs
						      [0xaU])));
    __Vtemp10[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regs
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [2U] 
								     << 8U) 
								    | this->__PVT__regs
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regs
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [6U] 
								      << 8U) 
								     | this->__PVT__regs
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regs
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regs
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp10[0U];
    this->taps[1U] = __Vtemp10[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__tf__33(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__tf__33\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp11,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp11[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regs
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [2U] 
								       << 8U) 
								      | this->__PVT__regs
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regs
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regs
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regs
									[6U] 
									<< 8U) 
								       | this->__PVT__regs
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regs
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regs
						       [9U] 
						       << 8U) 
						      | this->__PVT__regs
						      [0xaU])));
    __Vtemp11[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regs
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [2U] 
								     << 8U) 
								    | this->__PVT__regs
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regs
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [6U] 
								      << 8U) 
								     | this->__PVT__regs
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regs
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regs
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp11[0U];
    this->taps[1U] = __Vtemp11[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__tf__34(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__tf__34\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp12,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp12[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regs
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [2U] 
								       << 8U) 
								      | this->__PVT__regs
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regs
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regs
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regs
									[6U] 
									<< 8U) 
								       | this->__PVT__regs
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regs
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regs
						       [9U] 
						       << 8U) 
						      | this->__PVT__regs
						      [0xaU])));
    __Vtemp12[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regs
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [2U] 
								     << 8U) 
								    | this->__PVT__regs
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regs
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [6U] 
								      << 8U) 
								     | this->__PVT__regs
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regs
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regs
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp12[0U];
    this->taps[1U] = __Vtemp12[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__tf__24(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__tf__24\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp13,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : (IData)(vlTOPp->inp_right)));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp13[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regs
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [2U] 
								       << 8U) 
								      | this->__PVT__regs
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regs
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regs
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regs
									[6U] 
									<< 8U) 
								       | this->__PVT__regs
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regs
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regs
						       [9U] 
						       << 8U) 
						      | this->__PVT__regs
						      [0xaU])));
    __Vtemp13[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regs
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [2U] 
								     << 8U) 
								    | this->__PVT__regs
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regs
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [6U] 
								      << 8U) 
								     | this->__PVT__regs
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regs
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regs
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp13[0U];
    this->taps[1U] = __Vtemp13[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__tf__35(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__tf__35\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp14,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp14[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regs
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [2U] 
								       << 8U) 
								      | this->__PVT__regs
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regs
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regs
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regs
									[6U] 
									<< 8U) 
								       | this->__PVT__regs
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regs
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regs
						       [9U] 
						       << 8U) 
						      | this->__PVT__regs
						      [0xaU])));
    __Vtemp14[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regs
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [2U] 
								     << 8U) 
								    | this->__PVT__regs
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regs
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [6U] 
								      << 8U) 
								     | this->__PVT__regs
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regs
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regs
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp14[0U];
    this->taps[1U] = __Vtemp14[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__tf__36(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__tf__36\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp15,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp15[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regs
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [2U] 
								       << 8U) 
								      | this->__PVT__regs
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regs
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regs
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regs
									[6U] 
									<< 8U) 
								       | this->__PVT__regs
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regs
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regs
						       [9U] 
						       << 8U) 
						      | this->__PVT__regs
						      [0xaU])));
    __Vtemp15[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regs
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [2U] 
								     << 8U) 
								    | this->__PVT__regs
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regs
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [6U] 
								      << 8U) 
								     | this->__PVT__regs
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regs
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regs
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp15[0U];
    this->taps[1U] = __Vtemp15[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__tf__37(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__tf__37\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp16,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp16[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regs
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [2U] 
								       << 8U) 
								      | this->__PVT__regs
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regs
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regs
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regs
									[6U] 
									<< 8U) 
								       | this->__PVT__regs
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regs
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regs
						       [9U] 
						       << 8U) 
						      | this->__PVT__regs
						      [0xaU])));
    __Vtemp16[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regs
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [2U] 
								     << 8U) 
								    | this->__PVT__regs
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regs
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [6U] 
								      << 8U) 
								     | this->__PVT__regs
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regs
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regs
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp16[0U];
    this->taps[1U] = __Vtemp16[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__tf__38(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__tf__38\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp17,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp17[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regs
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [2U] 
								       << 8U) 
								      | this->__PVT__regs
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regs
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regs
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regs
									[6U] 
									<< 8U) 
								       | this->__PVT__regs
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regs
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regs
						       [9U] 
						       << 8U) 
						      | this->__PVT__regs
						      [0xaU])));
    __Vtemp17[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regs
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [2U] 
								     << 8U) 
								    | this->__PVT__regs
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regs
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [6U] 
								      << 8U) 
								     | this->__PVT__regs
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regs
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regs
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp17[0U];
    this->taps[1U] = __Vtemp17[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__tf__39(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__tf__39\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp18,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp18[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regs
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [2U] 
								       << 8U) 
								      | this->__PVT__regs
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regs
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regs
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regs
									[6U] 
									<< 8U) 
								       | this->__PVT__regs
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regs
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regs
						       [9U] 
						       << 8U) 
						      | this->__PVT__regs
						      [0xaU])));
    __Vtemp18[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regs
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [2U] 
								     << 8U) 
								    | this->__PVT__regs
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regs
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [6U] 
								      << 8U) 
								     | this->__PVT__regs
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regs
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regs
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp18[0U];
    this->taps[1U] = __Vtemp18[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__tf__40(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__tf__40\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp19,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp19[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regs
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [2U] 
								       << 8U) 
								      | this->__PVT__regs
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regs
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regs
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regs
									[6U] 
									<< 8U) 
								       | this->__PVT__regs
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regs
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regs
						       [9U] 
						       << 8U) 
						      | this->__PVT__regs
						      [0xaU])));
    __Vtemp19[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regs
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [2U] 
								     << 8U) 
								    | this->__PVT__regs
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regs
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [6U] 
								      << 8U) 
								     | this->__PVT__regs
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regs
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regs
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp19[0U];
    this->taps[1U] = __Vtemp19[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__tf__41(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__tf__41\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp20,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp20[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regs
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [2U] 
								       << 8U) 
								      | this->__PVT__regs
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regs
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regs
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regs
									[6U] 
									<< 8U) 
								       | this->__PVT__regs
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regs
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regs
						       [9U] 
						       << 8U) 
						      | this->__PVT__regs
						      [0xaU])));
    __Vtemp20[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regs
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [2U] 
								     << 8U) 
								    | this->__PVT__regs
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regs
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [6U] 
								      << 8U) 
								     | this->__PVT__regs
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regs
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regs
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp20[0U];
    this->taps[1U] = __Vtemp20[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__tf__42(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__tf__42\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp21,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp21[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regs
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [2U] 
								       << 8U) 
								      | this->__PVT__regs
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regs
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regs
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regs
									[6U] 
									<< 8U) 
								       | this->__PVT__regs
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regs
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regs
						       [9U] 
						       << 8U) 
						      | this->__PVT__regs
						      [0xaU])));
    __Vtemp21[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regs
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [2U] 
								     << 8U) 
								    | this->__PVT__regs
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regs
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [6U] 
								      << 8U) 
								     | this->__PVT__regs
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regs
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regs
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp21[0U];
    this->taps[1U] = __Vtemp21[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__tf__43(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__tf__43\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp22,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp22[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regs
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [2U] 
								       << 8U) 
								      | this->__PVT__regs
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regs
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regs
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regs
									[6U] 
									<< 8U) 
								       | this->__PVT__regs
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regs
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regs
						       [9U] 
						       << 8U) 
						      | this->__PVT__regs
						      [0xaU])));
    __Vtemp22[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regs
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [2U] 
								     << 8U) 
								    | this->__PVT__regs
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regs
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [6U] 
								      << 8U) 
								     | this->__PVT__regs
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regs
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regs
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp22[0U];
    this->taps[1U] = __Vtemp22[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__tf__44(Vstereo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__tf__44\n"); );
    Vstereo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp23,95,0,3);
    // Body
    // ALWAYS at ../lib/dff.v:36
    this->__Vcellout__sr0____pinNumber4 = (0xffU & 
					   ((IData)(vlTOPp->rst)
					     ? 0U : 
					    vlSymsp->TOP__stereo__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__f.__PVT__regs
					    [0x274U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [0U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [1U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [2U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [3U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [4U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [5U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [6U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [7U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [8U]));
    // ALWAYS at ../lib/dff.v:36
    this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 
	= (0xffU & ((IData)(vlTOPp->rst) ? 0U : this->__PVT__regs
		    [9U]));
    this->__PVT__regs[0U] = this->__Vcellout__sr0____pinNumber4;
    this->__PVT__regs[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4;
    this->__PVT__regs[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4;
    __Vtemp23[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regs
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [2U] 
								       << 8U) 
								      | this->__PVT__regs
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regs
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regs
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regs
									[6U] 
									<< 8U) 
								       | this->__PVT__regs
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regs
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regs
						       [9U] 
						       << 8U) 
						      | this->__PVT__regs
						      [0xaU])));
    __Vtemp23[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regs
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regs
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regs
								     [2U] 
								     << 8U) 
								    | this->__PVT__regs
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regs
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [6U] 
								      << 8U) 
								     | this->__PVT__regs
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regs
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regs
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[2U] 
										<< 8U) 
										| this->__PVT__regs
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regs
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regs
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regs
										[6U] 
										<< 8U) 
										| this->__PVT__regs
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp23[0U];
    this->taps[1U] = __Vtemp23[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regs
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regs
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regs
								      [2U] 
								      << 8U) 
								     | this->__PVT__regs
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regs
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regs
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regs
								       [6U] 
								       << 8U) 
								      | this->__PVT__regs
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

void Vstereo_tapped_fifo__W8_Db::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstereo_tapped_fifo__W8_Db::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    inp = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(88,taps);
    outp = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
	    __PVT__regs[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __Vcellout__sr0____pinNumber4 = VL_RAND_RESET_I(8);
    shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4 = VL_RAND_RESET_I(8);
    shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4 = VL_RAND_RESET_I(8);
    shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4 = VL_RAND_RESET_I(8);
    shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4 = VL_RAND_RESET_I(8);
    shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4 = VL_RAND_RESET_I(8);
    shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4 = VL_RAND_RESET_I(8);
    shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4 = VL_RAND_RESET_I(8);
    shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4 = VL_RAND_RESET_I(8);
    shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4 = VL_RAND_RESET_I(8);
    shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4 = VL_RAND_RESET_I(8);
}
