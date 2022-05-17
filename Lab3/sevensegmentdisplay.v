`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:48:29 04/26/2022 
// Design Name: 
// Module Name:    sevensegmentdisplay 
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
module sevensegmentdisplay(
	input clk, btnS, btnR, btnD, btnL,
	output reg [6:0] seg,
	output reg [3:0] an
	//output reg [3:0] display [3:0]
    );
	
	//reg [27:0] hz1_clk;
	
	wire [3:0] seconds_mod10;
	wire [2:0] seconds_mod6;
	wire [3:0] minutes_mod10;
	wire [2:0] minutes_mod6;
	
	wire clk_1hz;
	wire clk_50hz;
	wire clk_20hz;
	wire clk_2hz;
	clockdivider cd(.clk(clk), .clk_1hz(clk_1hz), .clk_50hz(clk_50hz), .clk_20hz(clk_20hz),
	.clk_2hz(clk_2hz)); 

		
	wire pause_debouncer;
	debouncer dp(.slow_clk(clk_20hz), .btn_in(btnR), .btn_out(pause_debouncer));
	
	wire adj_debouncer;
	debouncer adj_dp(.slow_clk(clk_20hz), .btn_in(btnD), .btn_out(adj_debouncer));
	
	wire sel_debouncer;
	debouncer sel_dp(.slow_clk(clk_20hz), .btn_in(btnL), .btn_out(sel_debouncer));
	
	clockcounter counter(.clk(clk_1hz), .clk_2hz(clk_2hz), .rst(btnS), .pause(pause_debouncer), 
	.adj(adj_debouncer), .sel(sel_debouncer), .seconds_mod10(seconds_mod10), 
	.seconds_mod6(seconds_mod6), .minutes_mod10(minutes_mod10), .minutes_mod6(minutes_mod6));

	//an <= 0000 equals all on
	//seg <= 0000000 equals all segments on

	//seg <= GFEDCBA
	
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

 // create 1 hz clock
 // 2 hz clock
 // 500 - 700 for debouncing
 // 50 - 70 for display
	
	reg [1:0] X = 2'b00;
	reg [6:0] skip = 7'b0;
	reg isAdj = 0;
	reg isMin = 1;
	
	always @(posedge adj_debouncer) begin
		isAdj <= ~isAdj;
	end
	
	always @(posedge sel_debouncer) begin
		if (isAdj == 1) begin
			isMin <= ~isMin;
		end
	end
	
	always @(posedge clk_50hz) begin			
		if (X == 2'b00) begin
			an <= 4'b1110;
			
			if (isAdj == 1 & skip >= 7'b01_11111 & isMin == 0) begin
				seg = 7'b111_1111;
			end else begin	
				case(seconds_mod10)
				4'b0000 :seg = 7'b100_0000;
				4'b0001 :seg = 7'b111_1001;
				4'b0010 :seg = 7'b010_0100;
				4'b0011 :seg = 7'b011_0000;
				4'b0100 :seg = 7'b001_1001;
				4'b0101 :seg = 7'b001_0010;
				4'b0110 :seg = 7'b000_0010;
				4'b0111 :seg = 7'b111_1000;
				4'b1000 :seg = 7'b000_0000;
				4'b1001 :seg = 7'b001_0000;
				default: seg = 7'b100_0000;
				endcase
			end
			X <= 2'b01; end
		 else if (X == 2'b01) begin
			an <= 4'b1101;
			
			if (isAdj == 1 & skip >= 7'b01_11111 & isMin == 0) begin
				seg = 7'b111_1111;
			end else begin	
				case(seconds_mod6)
				3'b000 :seg = 7'b100_0000;
				3'b001 :seg = 7'b111_1001;
				3'b010 :seg = 7'b010_0100;
				3'b011 :seg = 7'b011_0000;
				3'b100 :seg = 7'b001_1001;
				3'b101 :seg = 7'b001_0010;
				default: seg = 7'b100_0000;
				endcase
			end
			X <= 2'b10; end
			
		 else if (X == 2'b10) begin 
			an <= 4'b1011;
			
			if (isAdj == 1 & skip >= 7'b01_11111 & isMin == 1) begin
				seg = 7'b111_1111;
			end else begin	
				case(minutes_mod10)
				4'b0000 :seg = 7'b100_0000;
				4'b0001 :seg = 7'b111_1001;
				4'b0010 :seg = 7'b010_0100;
				4'b0011 :seg = 7'b011_0000;
				4'b0100 :seg = 7'b001_1001;
				4'b0101 :seg = 7'b001_0010;
				4'b0110 :seg = 7'b000_0010;
				4'b0111 :seg = 7'b111_1000;
				4'b1000 :seg = 7'b000_0000;
				4'b1001 :seg = 7'b001_0000;
				default: seg = 7'b100_0000;
				endcase
			end
			X <= 2'b11; end
			
		 else if (X == 2'b11) begin
			an <= 4'b0111;
			
			if (isAdj == 1 & skip >= 7'b01_11111 & isMin == 1) begin
				seg = 7'b111_1111;
			end else begin	
				case(minutes_mod6)
				3'b000 :seg = 7'b100_0000;
				3'b001 :seg = 7'b111_1001;
				3'b010 :seg = 7'b010_0100;
				3'b011 :seg = 7'b011_0000;
				3'b100 :seg = 7'b001_1001;
				3'b101 :seg = 7'b001_0010;
				default: seg = 7'b100_0000;
				endcase
			end
			X <= 2'b00; end
			
		else begin
			X <= 2'b00;
		end
		
		if (skip == 7'b11_11111) begin
			skip <= 0;
		end else begin
			skip <= skip + 1;
		end
		
		
	end //always



	
endmodule
