`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:47:48 04/14/2022
// Design Name:   sign
// Module Name:   C:/Users/Student/Desktop/section6/lab2/sign_tb.v
// Project Name:  lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sign
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sign_tb;

	// Inputs
	reg [11:0] D;

	// Outputs
	wire sgn;
	wire [11:0] D_new;

	// Instantiate the Unit Under Test (UUT)
	sign uut (
		.D(D), 
		.sgn(sgn), 
		.D_new(D_new)
	);


	initial begin
		// Initialize Inputs
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#20 D = 12'b010101010101;
		#20 D = 12'b101010101010;
		#20 D = 12'b111011000000;
		#1000 $finish;
		
	end
	
      
endmodule

