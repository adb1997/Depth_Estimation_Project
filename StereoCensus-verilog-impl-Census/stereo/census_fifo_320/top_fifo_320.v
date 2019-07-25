/* Top level module for stereo core (stereo.v) 
consisting of argmin_80, popcount7, census and FIFO 
with their respective helper functions for added flow control
   
*/

module top_fifo_320(
    input wire clk,
    input wire rst,
    input wire clr,
    
    input wire enqL,
    output wire full_nL,
    input wire [7:0] din_L,
    
    input wire enqR,
    output wire full_nR,
    input wire [7:0] din_R,
    
    
    input wire out_deq,
    output wire out_empty_n,
    output wire [7:0] dout

    //output wire enable,
    
    //output wire and_inp1,
    //output wire and_inp2,
    //output wire and_inp3 
    
    //output wire DOUT_LSB 
    );


wire [7:0] data_left;
wire [7:0] data_right;
wire [6:0] data_out_7bit;
wire [7:0] data_out_8bit;
wire enable;
wire and_inp1, and_inp2, and_inp3 ;


assign enable = and_inp1 & and_inp2 & and_inp3;

//FIFO2 is active low reset    
FIFO2 fifoL(clk,~rst,din_L,enqL,full_nL,data_left,enable,and_inp1,clr);
FIFO2 fifoR(clk,~rst,din_R,enqR,full_nR,data_right,enable,and_inp2,clr);

FIFO2 fifo_out(clk,~rst,data_out_8bit,enable,and_inp3,dout,out_deq,out_empty_n,clr);

//Active high reset
stereo320 stereo1 (enable,clk,rst,data_left,data_right,data_out_7bit);

assign data_out_8bit = {1'b0,data_out_7bit};

//assign DIL_LSB = din_L[0];
//assign DIR_LSB = din_R[0];
//assign DOUT_LSB = data_out[0];

endmodule 
