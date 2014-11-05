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
	input wire cclk, rstb, // input clock and reset pin
	input wire touch_busy,data_in,
	output reg touch_clk, data_out,
	output reg touch_csb,
	output reg [11:0] x,y,z //coordinates and pressure of touch
);

reg [10:0] counter_num_requests; // state debug
reg [4:0] counter_per_request; // state debug
reg [1:0] counter_type; // state debug
reg [11:0] last_data; // temporary reg to store the current, un averaged value
reg [20:0] sum_data; // add up the data here to average it

wire [26:0] x_request;
wire [26:0] y_request;
wire [22:0] z_request;


reg [4:0] clk_div_counter;

// request patterns to send the touch pad
assign x_request = 23'b11010011000000000000000;
assign y_request = 23'b10010011000000000000000;
assign z_request = 23'b10110011000000000000000;



always @(posedge cclk) begin
	if(~rstb) begin
		x <= 12'd0;
		y <= 12'd0;
		z <= 12'd0;
		last_data <= 12'd0;
		sum_data <= 0;
		counter_num_requests <= 0;
		counter_per_request <= 0;
		counter_type <= 0;
		touch_csb <= 1;
		clk_div_counter <= 0;
		touch_clk <= 0;
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
				if (counter_type == 0) begin
					data_out <= x_request[22-counter_per_request];
				end else if (counter_type == 1)  begin
					data_out <= y_request[22-counter_per_request];
				end else if (counter_type == 2) begin
					data_out <= z_request[22-counter_per_request];
				end

				if (counter_per_request == 5'd22) begin // finished a request
					counter_per_request <= 0;
					if (counter_num_requests > 15) begin
					// take data and add to average
						sum_data <= sum_data + last_data;
					end
					last_data <= 0;
					
					if (counter_num_requests == 527) begin // finished all requests in group
						counter_num_requests <= 0;
						
						// take average from all requests and return data
						if (counter_type == 0) begin //            // x
							counter_type <= counter_type + 1;
							x <= sum_data[20:9];
							//x <= last_data;
							sum_data <= 0;
						end else if (counter_type == 1) begin //   // y
							counter_type <= counter_type + 1;
							y <= sum_data[20:9];
							//y <= last_data;
							sum_data <= 0;
						end else begin //	                         // z  
							counter_type <= 0;
							z <= sum_data[20:9];
							//z <= last_data;
							sum_data <= 0;
						end

					end else begin // next request
						counter_num_requests <= counter_num_requests + 1;
					end
				end else begin // next time step
					counter_per_request <= counter_per_request + 1;
				end			
			end
			if(~touch_clk) begin //positive edge logic
				if (counter_per_request > 5'd9 && counter_per_request < 5'd22) begin
					last_data[11-(counter_per_request - 5'd10)] <= data_in;
				end
			end
		end
	end
end


endmodule
`default_nettype wire
