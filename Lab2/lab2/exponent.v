`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:15:10 04/14/2022 
// Design Name: 
// Module Name:    exponent 
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
module exponent(
		input [11:0] D,
		output reg [2:0] E,
		output reg [3:0] num_zeros
    );
	 
	 wire [11:0] D_new;
	 wire sgn;
	 

	 sign s1(.D(D), .sgn(sgn), .D_new(D_new));

	 always @D
	 begin

	   if (D_new[11:4] == 8'b00000000)
		  begin
		    E <= 3'b000;
			 num_zeros <= 8;
		  end
		  
		else if (D_new[11:5] == 7'b0000000)
		  begin
		    E <= 3'b001;
			 num_zeros <= 7;
		  end
		  
		else if (D_new[11:6] == 6'b000000)
		  begin
		    E <= 3'b010;
			 num_zeros <= 6;
		  end
		  
		else if (D_new[11:7] == 5'b00000)
		  begin
		    E <= 3'b011;
			 num_zeros <= 5;
		  end
		  
		else if (D_new[11:8] == 4'b0000)
		  begin
		    E <= 3'b100;
			 num_zeros <= 4;
		  end
		  
		else if (D_new[11:9] == 3'b000)
		  begin
		    E <= 3'b101;
			 num_zeros <= 3;
		  end
		  
		else if (D_new[11:10] == 2'b00)
		  begin
		    E <= 3'b110;
			 num_zeros <= 2;
		  end
		 
      else
		  begin
		    E <= 3'b111;
			 num_zeros <= 1;
		  end
	 
	 end


endmodule
