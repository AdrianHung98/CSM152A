`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:11:40 05/05/2022 
// Design Name: 
// Module Name:    clockcounter 
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

module clockdivider(input clk, output reg clk_1hz = 1'b0, output reg clk_50hz, 
	output reg clk_2hz,
	output reg clk_20hz
    );
reg [28:0] counter_1hz = 29'b0;
reg [28:0] counter_50hz = 29'b0;
reg [28:0] counter_20hz = 29'b0;
reg [28:0] counter_2hz = 29'b0;
 
always @(posedge clk) begin
	counter_1hz <= counter_1hz + 1'b1;
	counter_50hz <= counter_50hz + 1'b1;
	counter_20hz <= counter_20hz + 1'b1;
	counter_2hz <= counter_2hz + 1'b1;
	
	if (counter_1hz == 29'd60000000) begin //d60000000
		clk_1hz <= ~clk_1hz;
		counter_1hz <= 29'b0;
	end
	
	if (counter_50hz == 29'd250000) begin
		clk_50hz <= ~clk_50hz;
		counter_50hz <= 29'b0;
	end
	
	if (counter_20hz == 29'd600000) begin
		clk_20hz <= ~clk_20hz;
		counter_20hz <= 29'b0;
	end
	
	if (counter_2hz == 29'd30000000) begin
		clk_2hz <= ~clk_2hz;
		counter_2hz <= 29'b0;
	end
end

endmodule


module clockcounter(
	input clk, input clk_2hz, input rst, input pause, input adj, input sel,
	output reg [3:0] seconds_mod10,
	output reg [2:0] seconds_mod6, 
	output reg [3:0] minutes_mod10,
	output reg [2:0] minutes_mod6
    );
	 
	reg isPaused = 0;
	reg isAdj = 0;
	reg skip = 1;
	reg isMin = 1;
	
	always @(posedge pause) begin
		isPaused <= ~isPaused;
	end
	
	always @(posedge adj) begin
		isAdj <= ~isAdj;
	end
	
	always @(posedge sel) begin
		isMin <= ~isMin;
	end

	
	// 2 HZ
	always @(posedge clk_2hz, posedge rst)
	begin

			
			if (rst == 1) begin
				seconds_mod10 <= 0;
				seconds_mod6 <= 0;
				minutes_mod10 <= 0;
				minutes_mod6 <= 0;
				
					if (skip == 0) begin
						skip <= 1;
					end else begin
						skip <= 0;
					end
			
			end else if (isPaused == 0 & (isAdj == 1 | skip == 0)) begin
					if (skip == 0) begin
						skip <= 1;
					end else begin
						skip <= 0;
					end
			
				if (seconds_mod10 == 9) begin
					seconds_mod10 <= 0;
					if (seconds_mod6 == 5) begin
						seconds_mod6 <= 0;
						if (minutes_mod10 == 9) begin
							minutes_mod10 <= 0;
							if (minutes_mod6 == 5) begin
								minutes_mod6 <= 0;
							end else begin
								minutes_mod6 <= minutes_mod6 + 1'b1;
							end
						end else begin //if minutes_mod6
							minutes_mod10 <= minutes_mod10 + 1'b1;
						end
					end else begin //if minutes_mod10
						seconds_mod6 <= seconds_mod6 + 1'b1;
					end
				end else begin //if seconds_mod6
					seconds_mod10 <= seconds_mod10 +1'b1;
				end //if seconds_mod10
			end else begin
				if (skip == 0) begin
					skip <= 1;
				end else begin
					skip <= 0;
				end
			end
			
			
	end
//	end
endmodule




