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
    input [11:0]D,
	 output reg [3:0] F,
	 output [11:0] D_new
    );
	 
	 wire sgn;
	 //reg [11:0] D_new;
	 wire [2:0] E;
	 wire [3:0] num_zeros;
	 reg [2:0]E_new;
	 sign s1 (D, sgn, D_new);
    exponent e1 (D, E, num_zeros);
	 
	 integer start, last, zeros;
	
	
    //always @(D_new,num_zeros)
	 always @(*)
	 begin
	    start = 11 - num_zeros;
		 


		 
		 //D_new2 = D_new;
		 
		 F[3] = D_new[start];
//		 $display ("%b", D_new[start]);
//		 $display ("%b", F[3]);
		 F[2] = D_new[start-1];
//		 $display ("%b", D_new[start-1]);
//		 $display ("%b", F[2]);
		 F[1] = D_new[start-2];
//		 $display ("%b", D_new[start-2]);
//		 $display ("%b", F[1]);
		 F[0] = D_new[start-3];
//       $display ("%b", D_new[start-3]);
//		 $display ("%b", F[0]);
	
//		 $display ("\n");
		 
		 if (D == 12'b100000000000)
		 begin
			F = 4'b1111;
		 end
		 
		 else if (D_new[start-4] == 1'b1)
		   begin
			  if (F == 4'b1111)	
             begin
				   F = 4'b1000;
					
					if (E  == 3'b111)
					  begin
						 F = 4'b1111;
						 E_new = E;
					  end
					else
					  begin
					    E_new = E + 1;
					  end
				 end
				 
			  else
			    begin
					F = F + 4'b0001;
				 end
			end
			
			
	 end

endmodule
