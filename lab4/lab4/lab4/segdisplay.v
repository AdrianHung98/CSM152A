`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:56:56 03/19/2013 
// Design Name: 
// Module Name:    segdisplay 
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
module segdisplay(
	input wire segclk,		//7-segment clock
	input wire clr,			//asynchronous reset
	input wire [13:0] score,
	output reg [6:0] seg,	//7-segment display LEDs
	output reg [3:0] an		//7-segment display anode enable
	
	);


// constants for displaying letters on display
	//seg <= 100_0000 = 0
	//seg <= 111_1001 = 1
	//seg <= 010_0100 = 2
	//seg <= 011_0000 = 3
	//seg <= 001_1001 = 4
	//seg <= 001_0010 = 5
	//seg <= 000_0010 = 6
	//seg <= 111_1000 = 7
	//seg <= 000_0000 = 8
	//seg <= 001_0000 = 9

parameter zero = 7'b100_0000; 
parameter one = 7'b111_1001;
parameter two = 7'b010_0100;
parameter three = 7'b011_0000;
parameter four = 7'b001_1001;
parameter five = 7'b001_0010;
parameter six = 7'b000_0010;
parameter seven = 7'b111_1000;
parameter eight = 7'b000_0000;
parameter nine= 7'b001_0000;

// Finite State Machine (FSM) states
parameter left = 2'b00;
parameter midleft = 2'b01;
parameter midright = 2'b10;
parameter right = 2'b11;

// state register
reg [1:0] state;

// FSM which cycles though every digit of the display every 2.62ms.
// This should be fast enough to trick our eyes into seeing that
// all four digits are on display at the same time.
always @(posedge segclk or posedge clr)
begin
	// reset condition
	if (clr == 1)
	begin
		seg <= 7'b1111111;
		an <= 7'b1111;
		state <= left;
	end
	// display the character for the current position
	// and then move to the next state
	else
	begin
		case(state)
			left:
			begin
				if (score / 1000 == 0)
					seg <= zero;
				else if (score / 1000 == 1)
					seg <= one;
				else if (score / 1000 == 2)
					seg <= two;
				else if (score / 1000 == 3)
					seg <= three;
				else if (score / 1000 == 4)
					seg <= four;
				else if (score / 1000 == 5)
					seg <= five;
				else if (score / 1000 == 6)
					seg <= six;
				else if (score / 1000 == 7)
					seg <= seven;
				else if (score / 1000 == 8)
					seg <= eight;
				else
					seg <= nine;
					
				an <= 4'b0111;
				state <= midleft;
			end
			midleft:
			begin
				if ((score / 100) % 10 == 0)
					seg <= zero;
				else if ((score / 100) % 10 == 1)
					seg <= one;
				else if ((score / 100) % 10 == 2)
					seg <= two;
				else if ((score / 100) % 10 == 3)
					seg <= three;
				else if ((score / 100) % 10 == 4)
					seg <= four;
				else if ((score / 100) % 10 == 5)
					seg <= five;
				else if ((score / 100) % 10 == 6)
					seg <= six;
				else if ((score / 100) % 10 == 7)
					seg <= seven;
				else if ((score / 100) % 10 == 8)
					seg <= eight;
				else
					seg <= nine;
					
				an <= 4'b1011;
				state <= midright;
			end
			midright:
			begin
				if ((score / 10) % 10 == 0)
					seg <= zero;
				else if ((score / 10) % 10 == 1)
					seg <= one;
				else if ((score / 10) % 10 == 2)
					seg <= two;
				else if ((score / 10) % 10 == 3)
					seg <= three;
				else if ((score / 10) % 10 == 4)
					seg <= four;
				else if ((score / 10) % 10 == 5)
					seg <= five;
				else if ((score / 10) % 10 == 6)
					seg <= six;
				else if ((score / 10) % 10 == 7)
					seg <= seven;
				else if ((score / 10) % 10 == 8)
					seg <= eight;
				else
					seg <= nine;
					
				an <= 4'b1101;
				state <= right;
			end
			right:
			begin
				if (score % 10 == 0)
					seg <= zero;
				else if (score % 10 == 1)
					seg <= one;
				else if (score % 10 == 2)
					seg <= two;
				else if (score % 10 == 3)
					seg <= three;
				else if (score % 10 == 4)
					seg <= four;
				else if (score % 10 == 5)
					seg <= five;
				else if (score % 10 == 6)
					seg <= six;
				else if (score % 10 == 7)
					seg <= seven;
				else if (score % 10 == 8)
					seg <= eight;
				else
					seg <= nine;
				an <= 4'b1110;
				state <= left;
			end
		endcase
	end
end

endmodule
