`timescale 1ns / 1ps
`default_nettype none
//////////////////////////////////////////////////////////////////////////////////
// 
// Module Name:    pwm_generator 
// Description: 
//
//////////////////////////////////////////////////////////////////////////////////
module pwm_generator(cclk, rstb, duty_cycle, frequency_division, pwm);
	//port definitions
	input wire cclk, rstb;
	input wire [7:0] duty_cycle;
	input wire[31:0] frequency_division; 
	output wire pwm;
	reg [7:0] count;
	
	// for dividing our frequency
	wire my_clock;
	pulse_train freq_divider(.clk(cclk), .rstb(rstb), .X(frequency_division), .pulse(my_clock));
	
	assign pwm = (count < duty_cycle);
	
	always @(posedge cclk) begin
		$display("clock");
		if (~rstb) begin
			count <= 8'd0;
			$display("reset");
		end
		else begin
			// incrementing counter
			if (my_clock) begin
				count <= count + 8'd1;
			end
		end
	end
	

endmodule
`default_nettype wire
