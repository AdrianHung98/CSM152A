`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:43:14 04/14/2022 
// Design Name: 
// Module Name:    significand 
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
module significand(
    input D,
	 output reg [3:0] F
    );
	 
	 wire sgn;
	 wire [11:0] D_new;
	 wire [2:0] E;
	 wire [3:0] num_zeros;
	 
	 sign s1 (D, sgn, D_new);
    exponent e1 (D, E, num_zeros);
	 
	 
	 
    always @*
	 begin
	    integer start = 11 - num_zeros;
       integer last = start - 4;

       F <= D_new[start:last];

       if (F == 4'b1111)	
          F = 4'b1000;		 
	 end

endmodule
