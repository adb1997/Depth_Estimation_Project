
`ifndef CENSUS_POP_COUNT_7_V_
`define CENSUS_POP_COUNT_7_V_

`timescale 1ns/1ps

`include "dff.v"

// pop_count computes the population count of the input.
module pop_count_7#(
  parameter WIDTH=1
  ) (
    input wire clk,
    input wire rst,

    input wire  [WIDTH-1:0] inp,
    output wire [$clog2(WIDTH)-1:0] outp
  );

  localparam m0 = 128'h55555555555555555555555555555555;
  localparam m1 = 128'h33333333333333333333333333333333;
  localparam m2 = 128'hf0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f;
  localparam m3 = 128'hff00ff00ff00ff00ff00ff00ff00ff;
  localparam m4 = 128'hffff0000ffff0000ffff0000ffff;
  localparam m5 = 128'hffffffff00000000ffffffff;
  localparam m6 = 128'hffffffffffffffff;

  // Need to turn off of this lint check due to long-standing Verilator bug#63.
  /* verilator lint_off UNOPTFLAT */
  wire [WIDTH-1:0] x[$clog2(WIDTH)];
  dff#(.WIDTH($clog2(WIDTH))) 
    out_ff(clk, rst, x[$clog2(WIDTH)-1][$clog2(WIDTH)-1:0], outp);
  assign x[0] = (inp & m0[WIDTH-1:0]) + ((inp >> 1) & m0[WIDTH-1:0]);
  generate
  if ($clog2(WIDTH) >= 2) begin
    assign x[1] = (x[0] & m1[WIDTH-1:0]) + ((x[0] >> 2) & m1[WIDTH-1:0]);
  end
  if ($clog2(WIDTH) >= 3) begin
    assign x[2] = (x[1] & m2[WIDTH-1:0]) + ((x[1] >> 4) & m2[WIDTH-1:0]);
  end
  if ($clog2(WIDTH) >= 4) begin
    assign x[3] = (x[2] & m3[WIDTH-1:0]) + ((x[2] >> 8) & m3[WIDTH-1:0]);
  end
  if ($clog2(WIDTH) >= 5) begin
    assign x[4] = (x[3] & m4[WIDTH-1:0]) + ((x[3] >> 16) & m4[WIDTH-1:0]);
  end
  if ($clog2(WIDTH) >= 6) begin
    assign x[5] = (x[4] & m5[WIDTH-1:0]) + ((x[4] >> 32) & m5[WIDTH-1:0]);
  end
  if ($clog2(WIDTH) >= 7) begin
    assign x[6] = (x[5] & m6[WIDTH-1:0]) + ((x[5] >> 64) & m6[WIDTH-1:0]);
  end
  if ($clog2(WIDTH) > 7) begin
    initial begin
      assert(0); // Cannot handle widths larger than 128.
    end
  end
  endgenerate
  /* verilator lint_on UNOPTFLAT */

endmodule

`endif // CENSUS_POP_COUNT_7_V_

