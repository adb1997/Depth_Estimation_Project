// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vstereo__Syms.h"
#include "Vstereo.h"
#include "Vstereo_fifo__W8_D275.h"
#include "Vstereo_tapped_fifo__W8_Db.h"

// FUNCTIONS
Vstereo__Syms::Vstereo__Syms(Vstereo* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__f (Verilated::catName(topp->name(),"stereo.left_buf.lines[10].f"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.left_buf.lines[10].tf"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__f (Verilated::catName(topp->name(),"stereo.left_buf.lines[1].f"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.left_buf.lines[1].tf"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__f (Verilated::catName(topp->name(),"stereo.left_buf.lines[2].f"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.left_buf.lines[2].tf"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__f (Verilated::catName(topp->name(),"stereo.left_buf.lines[3].f"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.left_buf.lines[3].tf"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__f (Verilated::catName(topp->name(),"stereo.left_buf.lines[4].f"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.left_buf.lines[4].tf"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__f (Verilated::catName(topp->name(),"stereo.left_buf.lines[5].f"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.left_buf.lines[5].tf"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__f (Verilated::catName(topp->name(),"stereo.left_buf.lines[6].f"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.left_buf.lines[6].tf"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__f (Verilated::catName(topp->name(),"stereo.left_buf.lines[7].f"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.left_buf.lines[7].tf"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__f (Verilated::catName(topp->name(),"stereo.left_buf.lines[8].f"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.left_buf.lines[8].tf"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__f (Verilated::catName(topp->name(),"stereo.left_buf.lines[9].f"))
	, TOP__stereo__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.left_buf.lines[9].tf"))
	, TOP__stereo__DOT__left_buf__DOT__tf (Verilated::catName(topp->name(),"stereo.left_buf.tf"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__f (Verilated::catName(topp->name(),"stereo.right_buf.lines[10].f"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.right_buf.lines[10].tf"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__f (Verilated::catName(topp->name(),"stereo.right_buf.lines[1].f"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.right_buf.lines[1].tf"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__f (Verilated::catName(topp->name(),"stereo.right_buf.lines[2].f"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.right_buf.lines[2].tf"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__f (Verilated::catName(topp->name(),"stereo.right_buf.lines[3].f"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.right_buf.lines[3].tf"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__f (Verilated::catName(topp->name(),"stereo.right_buf.lines[4].f"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.right_buf.lines[4].tf"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__f (Verilated::catName(topp->name(),"stereo.right_buf.lines[5].f"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.right_buf.lines[5].tf"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__f (Verilated::catName(topp->name(),"stereo.right_buf.lines[6].f"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.right_buf.lines[6].tf"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__f (Verilated::catName(topp->name(),"stereo.right_buf.lines[7].f"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.right_buf.lines[7].tf"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__f (Verilated::catName(topp->name(),"stereo.right_buf.lines[8].f"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.right_buf.lines[8].tf"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__f (Verilated::catName(topp->name(),"stereo.right_buf.lines[9].f"))
	, TOP__stereo__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__tf (Verilated::catName(topp->name(),"stereo.right_buf.lines[9].tf"))
	, TOP__stereo__DOT__right_buf__DOT__tf (Verilated::catName(topp->name(),"stereo.right_buf.tf"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__f  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__tf  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__f  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__tf  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__f  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__tf  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__f  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__tf  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__f  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__tf  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__f  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__tf  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__f  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__tf  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__f  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__tf  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__f  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__tf  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__f  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__tf  = &TOP__stereo__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__left_buf__DOT__tf  = &TOP__stereo__DOT__left_buf__DOT__tf;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__f  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__tf  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__f  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__tf  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__f  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__tf  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__f  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__tf  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__f  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__tf  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__f  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__tf  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__f  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__tf  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__f  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__tf  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__f  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__tf  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__f  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__f;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__tf  = &TOP__stereo__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__tf;
    TOPp->__PVT__stereo__DOT__right_buf__DOT__tf  = &TOP__stereo__DOT__right_buf__DOT__tf;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__f.__Vconfigure(this, true);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__tf.__Vconfigure(this, true);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__left_buf__DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__f.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__tf.__Vconfigure(this, false);
    TOP__stereo__DOT__right_buf__DOT__tf.__Vconfigure(this, false);
}
