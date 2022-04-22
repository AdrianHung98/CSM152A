`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:16:42 04/21/2022
// Design Name:   FPCVT
// Module Name:   C:/Users/Student/Desktop/section6/lab2/FPCVT_tb.v
// Project Name:  lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FPCVT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FPCVT_tb;

	// Inputs
	reg [11:0] D;
	
	wire S;
	wire [2:0] E;
	wire [3:0] F;
	//wire [11:0] D_significand;

	// Instantiate the Unit Under Test (UUT)
	FPCVT uut (
		.D(D),
		.S(S),
		.E(E),
		.F(F)
		//.D_significand(D_significand)
	);

	initial begin
		// Initialize Inputs
		D = 0;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here
		#40 D = 12'b111010000000;	
      #40 D = 12'b011010000000;
		#40 D = 12'b011011000000;
		#40 D = 12'b111011000000;
		#40 D = 12'b000001111100;
		#40 D = 12'b000000000010;
		#40 D = 12'b100000000000;
		#80 $finish;

	end
      
endmodule

