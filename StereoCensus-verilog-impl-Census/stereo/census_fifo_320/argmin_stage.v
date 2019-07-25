`ifndef CENSUS_ARGMIN_STAGE_V_
`define CENSUS_ARGMIN_STAGE_V_

`timescale 1ns/1ps


`include "dff.v"
// This is an individual stage of the argmin tree. It takes in two arguments,
// along with their candidates for the argmin value, and produces a new
// candidate (the minimum of the two inputs), and a new argmin value.  The
// argmin value gets a 0 in the stage's bit if the left input is smaller, and
// a 1 if the right input is smaller.
module argmin_stage#(
  parameter WIDTH=1,
  parameter ADDR_WIDTH=1,
  parameter STAGE=1
  ) (
  input wire en, 
  input wire clk,
  input wire rst,

  input wire [WIDTH-1:0] left_val,
  // One bit of the address input will go unused
  /* verilator lint_off UNUSED */
  input wire [ADDR_WIDTH-1:0] left_addr,
  /* verilator lint_on UNUSED */

  input wire [WIDTH-1:0] right_val,
  /* verilator lint_off UNUSED */
  input wire [ADDR_WIDTH-1:0] right_addr,
  /* verilator lint_on UNUSED */

  output wire [WIDTH-1:0] outp,
  output wire [ADDR_WIDTH-1:0] outp_addr
  );

  wire left_lte;

  wire [WIDTH-1:0] outp_next;
  wire [ADDR_WIDTH-1:0] outp_addr_next;

  dff#(.WIDTH(WIDTH)) out_ff(en,clk, rst, outp_next, outp);
  dff#(.WIDTH(ADDR_WIDTH)) out_addr_ff(en, clk, rst, outp_addr_next, outp_addr);

  assign left_lte = left_val <= right_val;

  assign outp_next = left_lte ? left_val : right_val;

  genvar i;
  generate
  for (i = 0; i < ADDR_WIDTH; i=i+1) begin : name3
    if (i == STAGE) begin
      assign outp_addr_next[i] = !left_lte;
    end else begin
      assign outp_addr_next[i] = left_lte ? left_addr[i] : right_addr[i];
    end
  end
  endgenerate

endmodule

`endif // CENSUS_ARGMIN_STAGE_V_
