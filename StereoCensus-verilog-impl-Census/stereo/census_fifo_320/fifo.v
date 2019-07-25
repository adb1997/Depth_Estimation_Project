// Flip-flip FIFO.
 

`ifndef LIB_FIFO_V_
`define LIB_FIFO_V_

`timescale 1ns/1ps

`include "dff.v"

// This is a basic flip-flip FIFO with synchronous reset.
module fifo#(
      parameter WIDTH=1,
    parameter DEPTH=1
  ) (
      input wire en,
      input wire clk,
      input wire rst,

      input  wire [WIDTH-1:0] inp,
      output wire [WIDTH-1:0] outp
  );

    wire [WIDTH-1:0] regi[DEPTH-1:0];

    assign outp = regi[DEPTH-1];

    dff#(WIDTH) sr0(en, clk, rst, inp, regi[0]);

    genvar i;
    generate
        for (i = 0; i < DEPTH-1; i=i+1) begin : shift
            dff#(WIDTH) sr(en, clk, rst, regi[i], regi[i+1]);
        end
    endgenerate

endmodule

`endif // LIB_FIFO_V_
