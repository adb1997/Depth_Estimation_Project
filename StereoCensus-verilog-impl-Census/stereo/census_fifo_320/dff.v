`ifndef LIB_DFF_V_
`define LIB_DFF_V_

`timescale 1ns/1ps

// D flip-flop with synchronous enable and reset

module dff#(
 parameter WIDTH = 1

)(
    input wire en,
    input wire clk,
    input wire rst,
    

    input wire [WIDTH-1:0] inp,
    output reg [WIDTH-1:0] outp
  );


always @(posedge clk) begin
	if (en) begin
    outp <= rst ? 0 : inp;
	end	
  end

  /* always @(posedge clk && en) begin
    if (rst)begin
        outp <= 0;
     end 
     else if (!rst) begin
        outp <= inp;     
    end
  end
 */
endmodule



`endif // LIB_DFF_V_
