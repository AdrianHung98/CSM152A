`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:34:58 05/26/2022 
// Design Name: 
// Module Name:    left_movement 
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
module left_movement(input reg [0:15][0:9] screen,
							input integer orig_hor_block, 
							input integer vert_block,
							output integer hor_block
    );


initial
begin
	if (orig_hor_block == 0 || screen[vert_block][orig_hor_block - 1] == 1)
	begin
		// don't move left
		hor_block = orig_hor_block;
	end
	else
	begin
		// move left one block
		hor_block = orig_hor_block - 1;
	end
end

endmodule
