`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:28:25 03/19/2013 
// Design Name: 
// Module Name:    NERP_demo_top 
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
module tetris_top(
	input wire clk,			//master clock = 50MHz
	input wire clr,			//right-most pushbutton for reset
	input wire btnR,
	input wire btnL,
	output wire [6:0] seg,	//7-segment display LEDs
	output wire [3:0] an,	//7-segment display anode enable
	output wire dp,			//7-segment display decimal point
	output wire [2:0] red,	//red vga output - 3 bits
	output wire [2:0] green,//green vga output - 3 bits
	output wire [1:0] blue,	//blue vga output - 2 bits
	output wire hsync,		//horizontal sync out
	output wire vsync			//vertical sync out
	);

// 7-segment clock interconnect
wire segclk;

// VGA display clock interconnect
wire dclk;

// disable the 7-segment decimal points
assign dp = 1;

wire clk_1hz;

reg [28:0] counter_20hz = 29'b0;
reg clk_20hz;

always @(posedge clk)
begin

	counter_20hz <= counter_20hz + 1'b1;
		
	if (counter_20hz == 29'd600000) begin
		clk_20hz <= ~clk_20hz;
		counter_20hz <= 29'b0;
	end

end

wire move_left;
debouncer l_dp(.slow_clk(clk_20hz), .btn_in(btnL), .btn_out(move_left));
//
wire move_right;
debouncer r_dp(.slow_clk(clk_20hz), .btn_in(btnR), .btn_out(move_right));

// generate 7-segment clock & display clock
clockdiv U1(
	.clk(clk),
	.clr(clr),
	.segclk(segclk),
	.dclk(dclk)
	);

// 7-segment display controller
segdisplay U2(
	.segclk(segclk),
	.clr(clr),
	.seg(seg),
	.an(an)
	);

// VGA controller
vga640x480 U3(
	.dclk(dclk),
	.clr(clr),
	.clk(clk),
	.clk_20hz(clk_20hz),
	.move_left(move_left),
	.move_right(move_right),
	.hsync(hsync),
	.vsync(vsync),
	.red(red),
	.green(green),
	.blue(blue)
	);

endmodule
