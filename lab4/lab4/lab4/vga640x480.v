`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:30:38 03/19/2013 
// Design Name: 
// Module Name:    vga640x480 
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
module vga640x480(
	input wire dclk,			//pixel clock: 25MHz
	input wire clr,			//asynchronous reset
	input move_left,
	input move_right,
	input clk_20hz,
	input wire segclk,
	output wire hsync,		//horizontal sync out
	output wire vsync,		//vertical sync out
	output reg [2:0] red,	//red vga output
	output reg [2:0] green, //green vga output
	output reg [1:0] blue,	//blue vga output,
	output wire [6:0] seg,	//7-segment display LEDs
	output wire [3:0] an
	);


// video structure constants
parameter hpixels = 800;// horizontal pixels per line
parameter vlines = 521; // vertical lines per frame
parameter hpulse = 96; 	// hsync pulse length
parameter vpulse = 2; 	// vsync pulse length
parameter hbp = 144; 	// end of horizontal back porch
parameter hfp = 784; 	// beginning of horizontal front porch
parameter vbp = 31; 		// end of vertical back porch
parameter vfp = 511; 	// beginning of vertical front porch
// active horizontal video is therefore: 784 - 144 = 640
// active vertical video is therefore: 511 - 31 = 480

// registers for storing the horizontal & vertical counters
reg [9:0] hc;
reg [9:0] vc;



// Horizontal & vertical counters --
// this is how we keep track of where we are on the screen.
// ------------------------
// Sequential "always block", which is a block that is
// only triggered on signal transitions or "edges".
// posedge = rising edge  &  negedge = falling edge
// Assignment statements can only be used on type "reg" and need to be of the "non-blocking" type: <=
always @(posedge dclk or posedge clr)
begin
	// reset condition
	if (clr == 1)
	begin
		hc <= 0;
		vc <= 0;
	end
	else
	begin
		// keep counting until the end of the line
		if (hc < hpixels - 1)
			hc <= hc + 1;
		else
		// When we hit the end of the line, reset the horizontal
		// counter and increment the vertical counter.
		// If vertical counter is at the end of the frame, then
		// reset that one too.
		begin
			hc <= 0;
			if (vc < vlines - 1)
				vc <= vc + 1;
			else
				vc <= 0;
		end
		
	end
end

// generate sync pulses (active low)
// ----------------
// "assign" statements are a quick way to
// give values to variables of type: wire
assign hsync = (hc < hpulse) ? 0:1;
assign vsync = (vc < vpulse) ? 0:1;


reg clk_1hz;
reg clk_fast;
reg [28:0] counter_fast = 29'b0;
reg [28:0] counter_1hz = 29'b0;
reg [13:0] score;
reg [2:0] random;


segdisplay U2(
	.segclk(segclk),
	.clr(clr),
	.score(score),
	.seg(seg),
	.an(an)
	);
	
//initial begin
//	score = 1'b1;
//end



always @(posedge dclk)
begin

	counter_1hz <= counter_1hz + 1'b1;
	counter_fast <= counter_fast + 1'b1;
	random <= random + 1'b1;
		
	if (counter_1hz == 29'd5000000) begin //d60000000
		clk_1hz <= ~clk_1hz;
		counter_1hz <= 29'b0;
	end
	
	if (counter_fast == 29'd200000) begin //d60000000
		clk_fast <= ~clk_fast;
		counter_fast <= 29'b0;
	end

	if (random == 3'b111)
		random <= 3'b000;

end

reg [149:0] gameboard = 150'b0;
reg [149:0] temp_gameboard = 150'b0;

integer y_disp = 0;

integer i = 0;
integer j = 0;
reg all_1s = 1;
integer start = -1;

reg isSquare = 0;

integer temp = 0;

always @(posedge clk_1hz or posedge clr)
begin

	if (clr == 1)
	begin
		gameboard = 150'b0;
		y_disp = 0;
		score = 1'b0;
	end
	// vertical movement
	// check adjacent blocks square
	else if (isSquare == 1 && (y_disp + 2) <= 14 && gameboard[((y_disp + 2) * 10) + x_disp] == 0 && gameboard[((y_disp + 2) * 10) + x_disp + 1] == 0)
		y_disp = y_disp + 1;
	// check adjacent rectangle
	else if (isSquare == 0 && (y_disp + 4) <= 14 && gameboard[((y_disp + 4) * 10) + x_disp] == 0)
	begin
		y_disp = y_disp + 1;
	end
	// save object and reset
	else
	begin
		// saving object logic
		// square:
		if (isSquare == 1)
		begin
			gameboard[(y_disp * 10) + x_disp] = 1;
			gameboard[((y_disp + 1) * 10) + x_disp] = 1;
			gameboard[(y_disp * 10) + (x_disp + 1)] = 1;
			gameboard[((y_disp + 1) * 10) + (x_disp + 1)] = 1;
		end
		
		// rectangle (vertical)
		else if (isSquare == 0)
		begin
			gameboard[(y_disp * 10) + x_disp] = 1;
			gameboard[((y_disp + 1) * 10) + x_disp] = 1;
			gameboard[((y_disp + 2) * 10) + x_disp] = 1;
			gameboard[((y_disp + 3) * 10) + x_disp] = 1;
		end
		
		y_disp = 0;
		isSquare = ~random[2];
		start = -1;
		
		
		// check if any row is all 1s
		for (i = 14; i >= 0; i = i - 1)
		begin
			all_1s = 1;
			
			for (j = 0; j <= 9; j = j + 1)
			begin
				// check if row is all 1s
				if (gameboard[(i * 10) + j] == 0)
				begin
					// this row is not completely 1s
					all_1s = 0;
				end
			end
			
			if (all_1s == 1 && start == -1)
			begin
				start = i;
				if (score == 14'b10011100001111)
					score = 1'b0;
				else
					score = score + 1'b1;
			end
			
			all_1s = 1;
			if (start != -1)
			begin
				for (j = 0; j <= 9; j = j + 1)
				begin
					if (i > 0)
						gameboard[(i * 10) + j] = gameboard[((i - 1) * 10) + j];
					else if (i == 0)
						gameboard[(i * 10) + j] = 0;
						
					if (gameboard[(i * 10) + j] == 0)
						all_1s = 0;
				end
				
//				if (all_1s == 1)
//					i = i + 1;
			end
			
			
////			if (all_1s == 1)
////			begin
////				if (score == 14'b10011100001111)
////					score = 1'b0;
////				else
////					score = score + 1'b1;
////			end
	
		end
	end
	
end

integer x_disp = 0;


always @(posedge clk_20hz)
begin
// check adjacent blocks
	if (isSquare)
	begin
		if (move_right == 1 && (x_disp + 2) <= 9 && gameboard[(y_disp * 10) + (x_disp + 2)] == 0 && gameboard[((y_disp + 1) * 10) + (x_disp + 2)] == 0)
			x_disp = x_disp + 1;
		else if (move_left == 1 && (x_disp - 1) >= 0 && gameboard[(y_disp * 10) + (x_disp - 1)] == 0 && gameboard[((y_disp + 1) * 10) + (x_disp - 1)] == 0)
			x_disp = x_disp - 1;
	end
	else if (isSquare == 0)
	begin
		if (move_right == 1 && (x_disp + 1) <= 9 && gameboard[(y_disp * 10) + (x_disp + 1)] == 0 && gameboard[((y_disp + 1) * 10) + (x_disp + 1)] == 0 && gameboard[((y_disp + 2) * 10) + (x_disp + 1)] == 0 && gameboard[((y_disp + 3) * 10) + (x_disp + 1)] == 0)
			x_disp = x_disp + 1;
		else if (move_left == 1 && (x_disp - 1) >= 0 && gameboard[(y_disp * 10) + (x_disp - 1)] == 0 && gameboard[(y_disp * 10) + (x_disp - 1)] == 0 && gameboard[((y_disp + 1) * 10) + (x_disp - 1)] == 0 && gameboard[((y_disp + 2) * 10) + (x_disp - 1)] == 0 && gameboard[((y_disp + 3) * 10) + (x_disp - 1)] == 0)
			x_disp = x_disp - 1;
	end
end


integer curr_x = 0;
integer curr_y = 0;

integer width = 32;
integer height = 128;

// display 100% saturation colorbars
// ------------------------
// Combinational "always block", which is a block that is
// triggered when anything in the "sensitivity list" changes.
// The asterisk implies that everything that is capable of triggering the block
// is automatically included in the sensitivty list.  In this case, it would be
// equivalent to the following: always @(hc, vc)
// Assignment statements can only be used on type "reg" and should be of the "blocking" type: =
always @(*)
begin
	// first check if we're within vertical active video range
	if (vc >= vbp && vc < vfp)
	begin
		// now display different colors every 80 pixels
		// while we're within the active horizontal range
		// -----------------
		// display moving square
		// change ranges
		if (isSquare)
		begin
			width = 64;
			height = 64;
		end
		else
		begin
			width = 32;
			height = 128;
		end
		
		if (vc >= (vbp + (y_disp * 32)) && vc < (vbp + height + (y_disp * 32)) && hc >= (hbp + 160 + (x_disp * 32)) && hc < (hbp + 160 + width + (x_disp * 32)))
		begin
			red = 3'b101;
			green = 3'b101;
			blue = 2'b11;
		end
		// display saved object 
		// display white bar
		else if (hc >= (hbp + 160) && hc < (hbp+480))
		begin
		
			// display saved or white
			curr_x = (hc - hbp - 160) / 32;
			curr_y = (vc - vbp) / 32;
			
			
			if (gameboard[(curr_y * 10) + curr_x] == 1)
			begin
				red = 3'b111;
				green = 3'b101;
				blue = 2'b11;
			end
			else
			begin
				red = 3'b111;
				green = 3'b111;
				blue = 2'b11;
			end
		end
		// we're outside active horizontal range so display black
		else
		begin
			red = 0;
			green = 0;
			blue = 0;
		end
	end
	// we're outside active vertical range so display black
	else
	begin
		red = 0;
		green = 0;
		blue = 0;
	end
end

endmodule
