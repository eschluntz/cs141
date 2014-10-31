`timescale 1ns / 1ps
`default_nettype none

`define TOUCH_CLK_DIV_COUNT 25

// Maybe useful defines
`define TOUCH_X_ADJ_MIN 12'h090
`define TOUCH_X_POST_ADJ_MAX 12'h745

`define TOUCH_Y_ADJ_MIN 12'h060
`define TOUCH_Y_POST_ADJ_MAX 12'h6F0

// Important!  The data_in pin here corresponds to the spi_data_out pin on the lab handout.
// Likewise, the spi_data_in pin on the handout corresponds to the data_out port here!
// The spi_* signals are named from the point of view of the touchpad itself, whereas the signals
// here are named from the point of view of the module. That is to say, data_out here is what the module
// is sending, data_in is what the module is receiving.

module touchpad_controller(
	input wire cclk, rstb,
	input wire touch_busy,data_in,
	output reg touch_clk, data_out,
	output reg touch_csb,
	output reg [11:0] x,y,z,
	output reg [3:0] counter_num_requests,
	output reg [4:0] counter_per_request,
	output reg [1:0] counter_type
);

wire [19:0] x_request;
wire [19:0] y_request;
wire [19:0] z_request;

reg [4:0] clk_div_counter;

assign x_request = 20'b11010011000000000000;
assign y_request = 20'b10010011000000000000;
assign z_request = 20'b10110011000000000000;

always @(posedge cclk) begin
	if(~rstb) begin
		x <= 12'd0;
		y <= 12'd0;
		z <= 12'd0;
		touch_clk <= 0;
		clk_div_counter <= 0;
		counter_num_requests <= 0;
		counter_per_request <= 0;
		counter_type <= 0;
	end
	else begin
		touch_csb <= 0;
		if(clk_div_counter != (`TOUCH_CLK_DIV_COUNT-1)) begin
			clk_div_counter <= clk_div_counter + 6'd1;
		end
		else begin
			clk_div_counter <= 0;
			touch_clk <= ~touch_clk;
			if(touch_clk) begin  //negative edge logic
				if (counter_num_requests == 4'd1 && counter_per_request > 5'd7) begin
					if (counter_type == 0) begin
						x[counter_per_request - 5'd8] <= data_in;
					end else if (counter_type == 1)  begin
						y[counter_per_request - 5'd8] <= data_in;
					end else if (counter_type == 2) begin
						z[counter_per_request - 5'd8] <= data_in;
					end
				end
				if (counter_type == 0) begin
					data_out <= x_request[counter_per_request];
				end else if (counter_type == 1)  begin
					data_out <= y_request[counter_per_request];
				end else if (counter_type == 2) begin
					data_out <= z_request[counter_per_request];
				end

				if (counter_per_request == 5'd19) begin
					counter_per_request <= 0;
					if (counter_num_requests == 4'd1) begin
						counter_num_requests <= 0;
						counter_type <= counter_type + 1;
						if (counter_type == 4) begin
							counter_type <= 0;
						end
					end 
					else begin
						counter_num_requests <= counter_num_requests + 1;
					end
				end
				else begin
					counter_per_request <= counter_per_request + 1;
				end
				/* PUT ALL CODE HERE FOR NEGATIVE EDGE FSM LOGIC! */
			end
		end
	end
end

endmodule
`default_nettype wire
