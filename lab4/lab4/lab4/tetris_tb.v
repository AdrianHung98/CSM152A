`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:13:07 05/26/2022
// Design Name:   vga640x480
// Module Name:   C:/Users/Student/Desktop/section6/lab4/lab4/tetris_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vga640x480
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tetris_tb;

	// Inputs
	reg dclk;
	reg clr;
	reg clk;
	reg clk_20hz;
	reg move_left;
	reg move_right;

	// Outputs
	wire hsync;
	wire vsync;
	wire [2:0] red;
	wire [2:0] green;
	wire [1:0] blue;
	
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

	// Instantiate the Unit Under Test (UUT)
	vga640x480 uut (
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

	initial begin
		// Initialize Inputs
		dclk = 0;
		clr = 0;
		clk = 0;
		clk_20hz = 0;
		move_left = 0;
		move_right = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

