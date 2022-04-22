`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:19:06 04/19/2022
// Design Name:   significand
// Module Name:   C:/Users/Student/Desktop/section6/lab2/significand_tb.v
// Project Name:  lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: significand
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module significand_tb;

	// Inputs
	reg [11:0]D;

	// Outputs
	wire [3:0] F;
	wire [11:0] D_new;

	// Instantiate the Unit Under Test (UUT)
	significand uut (
		.D(D), 
		.F(F),
		.D_new(D_new)
	);

	initial begin
		// Initialize Inputs
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		// Add stimulus here
		#20 D = 12'b111010000000;	
      #20 D = 12'b011010000000;
		#20 D = 12'b011011000000;
		#20 D = 12'b111011000000;
		#20 D = 12'b000001111100;
		#1000 $finish;

	end
      
endmodule

