`ifndef LIB_TAPPED_FIFO_V_
`define LIB_TAPPED_FIFO_V_

`timescale 1ns/1ps

`include "dff.v"

// This is a basic flip-flip FIFO with synchronous reset, and taps along the
// entire length. The most significant word of the taps is the same as the
// output of the first fifo, and the least is the same as the output of the last
// fifo.
module tapped_fifo#(
      parameter WIDTH=1,
    parameter DEPTH=1
  ) (
      input wire en,
      input wire clk,
      input wire rst,

      input  wire [WIDTH-1:0] inp,
    output wire [WIDTH*DEPTH-1:0] taps,
      output wire [WIDTH-1:0] outp
  );

    wire [WIDTH-1:0] regis[DEPTH-1:0];

    assign outp = regis[DEPTH-1];

    dff#(WIDTH) sr0(en, clk, rst, inp, regis[0]);

  assign taps[(WIDTH*DEPTH-1):(WIDTH*(DEPTH-1))] = regis[0];

    genvar i;
    generate
      for (i = 0; i < DEPTH-1; i=i+1) begin : shift
            dff#(WIDTH) sr(en,clk, rst, regis[i], regis[i+1]);
      assign taps[((WIDTH*DEPTH-1)-(WIDTH*(i+1))):(WIDTH*(DEPTH-(i+2)))] = 
        regis[i+1];
      end
    endgenerate

endmodule

`endif // LIB_TAPPED_FIFO_V_
