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
		
		//negative number base case
		#40 D = 12'b1110_1000_0000;

		//positive number base case
      #40 D = 12'b0110_1000_0000;
		
		//positive number with rounding
		#40 D = 12'b0110_1100_0000;
		
		//negative number with rounding
		#40 D = 12'b1110_1100_0000;
		
		//positive number with rounding and overflow in significand
		#40 D = 12'b0000_0111_1100;
		
		//negative number with rounding and overflow in significand
		#40 D = 12'b1111_1000_0100;
		
		//positive number with rounding and overflow in exponent and significand
		#40 D = 12'b0111_1111_1111;
		
		//negative number with rounding and overflow in exponent
		#40 D = 12'b1000_0000_0001;
		
		//positive number with leading zeros exceeding 8 bits
		#40 D = 12'b0000_0000_0010;
		
		//maximum negative number (-2048)
		#40 D = 12'b1000_0000_0000;
		#80 $finish;

	end
      
endmodule

