`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:22:45 04/14/2022
// Design Name:   exponent
// Module Name:   C:/Users/Student/Desktop/section6/lab2/exponent_tb.v
// Project Name:  lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: exponent
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module exponent_tb;

	// Inputs
	reg [11:0] D;

	// Outputs
	wire [2:0] E;
	wire [3:0] num_zeros;

	// Instantiate the Unit Under Test (UUT)
	exponent uut (
		.D(D), 
		.E(E),
		.num_zeros(num_zeros)
	);
  
	initial begin
		// Initialize Inputs
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
      #200 D = 12'b000000001111;
      #200 D = 12'b000000011111;
      #200 D = 12'b000000111111;
      #200 D = 12'b000001111111;
      #200 D = 12'b000011111111;
      #200 D = 12'b000111111111;
      #200 D = 12'b001111111111;
      #200 D = 12'b011111111111;
      #200 D = 12'b111110111100;
      #200 D = 12'b101111100000;
		
		#1000 $finish;
		
	end
      
endmodule

