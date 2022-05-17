`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:06:24 05/06/2022 
// Design Name: 
// Module Name:    debouncer 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module dff(input slow_clk, input in, output reg out);
	
	initial begin
	out = 1'b0;
	end
	
	always @(posedge slow_clk) begin
		out <= in;
	end
	
endmodule

module debouncer(
    input slow_clk, input btn_in, output btn_out);
	 
	 wire s1, s2, s3;
	 dff d1(.slow_clk(slow_clk), .in(btn_in), .out(s1));
	 dff d2(.slow_clk(slow_clk), .in(s1), .out(s2));
	 dff d3(.slow_clk(slow_clk), .in(s2), .out(s3));
	 
	 assign btn_out = s2 & ~s3;


endmodule
