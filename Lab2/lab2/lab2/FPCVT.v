`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:39:47 04/14/2022 
// Design Name: 
// Module Name:    FPCVT 
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
module FPCVT(
		//inputs
		input [11:0] D,
		//Outputs
		output S,
		output [2:0] E,
		output [3:0] F
		//output [11:0] D_significand
    );
	 
	 reg [3:0] num_zeros;
	 reg [11:0] D_sign;
	 wire [11:0] D_significand;
	 
	 
	 sign s1 (D, S, D_sign);
    exponent e1 (D, E, num_zeros);
	 significand signficand1(D, F, D_significand);
	 



endmodule
