`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:41:49 04/14/2022 
// Design Name: 
// Module Name:    sign 
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
module sign(
		input [11:0]D,
		output reg sgn,
		output reg [11:0]D_new
    );
	 
//	 reg [11:0] D;
//    reg S;

	 always @*
	 begin
	   if (D[11] == 1)
		  begin
	       sgn <= 1;
			 D_new <= ~D + 1;
		  end
	   else
		  begin
	       sgn <= 0;
			 D_new <= D;
		  end
    end
	 

endmodule
