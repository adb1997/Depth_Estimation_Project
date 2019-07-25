// To find the minimum disparity for search range 80
// Uses argmin_helper function 


`ifndef CENSUS_ARGMIN_80_V_
`define CENSUS_ARGMIN_80_V_

module argmin_80#(
    parameter WIDTH=1
  ) (
    input wire en,
    input wire clk,
    input wire rst,

    input wire [WIDTH*80-1:0] inp,

    output wire [WIDTH-1:0] outp,
    output wire [$clog2(80)-1:0] outp_addr
  );

  localparam ADDR_WIDTH = $clog2(80);

  wire [WIDTH*40-1:0]      data_0;
  wire [ADDR_WIDTH*40-1:0] addr_0;

  argmin_helper#(.WIDTH(WIDTH), .ADDR_WIDTH(ADDR_WIDTH), .NUM_INP(80),
                 .NUM_OUTP(40), .STAGE(0))
                ah_0(en,clk, rst, inp, 0, data_0, addr_0);

  wire [WIDTH*20-1:0]      data_1;
  wire [ADDR_WIDTH*20-1:0] addr_1;

  argmin_helper#(.WIDTH(WIDTH), .ADDR_WIDTH(ADDR_WIDTH), .NUM_INP(40),
                 .NUM_OUTP(20), .STAGE(1))
                ah_1(en,clk, rst, data_0, addr_0, data_1, addr_1);

  wire [WIDTH*10-1:0]      data_2;
  wire [ADDR_WIDTH*10-1:0] addr_2;

  argmin_helper#(.WIDTH(WIDTH), .ADDR_WIDTH(ADDR_WIDTH), .NUM_INP(20),
                 .NUM_OUTP(10), .STAGE(2))
                ah_2(en,clk, rst, data_1, addr_1, data_2, addr_2);

  wire [WIDTH*5-1:0]      data_3;
  wire [ADDR_WIDTH*5-1:0] addr_3;

  argmin_helper#(.WIDTH(WIDTH), .ADDR_WIDTH(ADDR_WIDTH), .NUM_INP(10),
                 .NUM_OUTP(5), .STAGE(3))
                ah_3(en, clk, rst, data_2, addr_2, data_3, addr_3);

  wire [WIDTH*3-1:0]      data_4;
  wire [ADDR_WIDTH*3-1:0] addr_4;

  argmin_helper#(.WIDTH(WIDTH), .ADDR_WIDTH(ADDR_WIDTH), .NUM_INP(5),
                 .NUM_OUTP(3), .STAGE(4))
                ah_4(en, clk, rst, data_3, addr_3, data_4, addr_4);

  wire [WIDTH*2-1:0]      data_5;
  wire [ADDR_WIDTH*2-1:0] addr_5;

  argmin_helper#(.WIDTH(WIDTH), .ADDR_WIDTH(ADDR_WIDTH), .NUM_INP(3),
                 .NUM_OUTP(2), .STAGE(5))
                ah_5(en, clk, rst, data_4, addr_4, data_5, addr_5);

  wire [WIDTH*1-1:0]      data_6;
  wire [ADDR_WIDTH*1-1:0] addr_6;

  argmin_helper#(.WIDTH(WIDTH), .ADDR_WIDTH(ADDR_WIDTH), .NUM_INP(2),
                 .NUM_OUTP(1), .STAGE(6))
                ah_6(en, clk, rst, data_5, addr_5, data_6, addr_6);

  assign outp      = data_6;
  assign outp_addr = addr_6;

endmodule

`endif // CENSUS_ARGMIN_V_

