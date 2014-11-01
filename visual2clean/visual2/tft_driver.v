`timescale 1ns / 1ps
`default_nettype none

`define TFT_X_RES 480 //pixel clock periods
`define TFT_Y_RES 272 //frame lines
`define TFT_X_BLANKING 45 //pixel clock periods
`define TFT_Y_BLANKING 16 //frame lines
`define TFT_X_TOTAL `TFT_X_RES + `TFT_X_BLANKING
`define TFT_Y_TOTAL `TFT_Y_RES + `TFT_Y_BLANKING
`define TFT_CLK_DIV_COUNT 5 
`define TFT_BITS_PER_COLOR 3  //512 colors
`define TFT_BITS_PER_PIXEL 9
`define TFT_X_NUM_BITS 10
`define TFT_Y_NUM_BITS 9
`define RECT_SIZE 25

module tft_driver(
	input wire cclk, // Not needed yet, but will need later.
    input wire rstb,
	input wire tft_clk,
	input wire [7:0] switches,
	input wire [(`TFT_X_NUM_BITS-1):0] xcorner,
	input wire [(`TFT_Y_NUM_BITS-1):0] ycorner,
	
	output wire tft_backlight, tft_data_ena,
	output reg tft_display,tft_vdd,
	output wire [7:0] tft_red, tft_green, tft_blue,
	output reg [(`TFT_X_NUM_BITS-1):0] x,
	output reg [(`TFT_Y_NUM_BITS-1):0] y,
	output wire new_frame
);

// RGB pixel values.
wire [(`TFT_BITS_PER_COLOR-1):0] r, g, b;
wire in_square;

// These will define the boundaries of the rectangle you will display.
wire [9:0] rect_x_min, rect_x_max, rect_y_min, rect_y_max;
// These are the center coordinates of the rectangle.
wire [9:0] rect_x, rect_y;

assign rect_x = 10'd100; // Pick a value for this.
assign rect_y = 10'd100; // Pick a value for this too.
// Fill in this code. The min and max values should extend RECT_SIZE pixels above, below, 
// left, and right of the center. You can use some behavioral Verilog here.
// Take care that they don't go negative!
assign rect_x_min = xcorner;
assign rect_x_max = xcorner + rect_x;
assign rect_y_min = ycorner;
assign rect_y_max = ycorner + rect_y;

// Pick your colors. Remember that you have to draw a blue square on an orange background. 
// You can use some behavioral Verilog here. Hint: the >, <, and ? operators will be very handy.
assign b = (in_square) ? 3'd7 : 3'd0;
assign r = (in_square) ? 3'd0 : 3'd7;
assign g = (in_square) ? 3'd0 : 3'd3;

// Signal that a new frame is coming when y has finished counting to the end of the vertical porch region.
assign new_frame = (y == `TFT_Y_RES -1);

//pwm_generator PWM0(.cclk(tft_clk), .rstb(rstb), .duty_cycle(switches), .frequency_division(32'd2), .pwm(tft_backlight));
assign tft_backlight = 1;
// Use combinational logic here to determine when this enable signal should be high and low.
// It should be based the values of x and y. Behavioral Verilog can and should be used here too.
assign tft_data_ena = (x < `TFT_X_RES && y < `TFT_Y_RES);
assign in_square = (x < rect_x_max && x > rect_x_min && y < rect_y_max && y > rect_y_min);

// We chose TFT_BITS_PER_COLOR bit values for R, G, and B, but the screen uses 8 bit values for each component.
// To translate between the two representations, set the upper TFT_BITS_PER_COLOR bits of the tft pixel values
// to R, G, B, and all the lower order bits to 0.
// Remember that if the enable signal is low, ALL bits should be zero!
// Example: if r = 011 and tft_data_ena = 1, the tft_red = 0110000.
// Be sure to use the constants like TFT_BITS_PER_COLOR, instead of hardcoding the values!
// Note: feel free to add more lines of code here...we're not constraining you to what we have provided.
assign tft_red  [7:5] = tft_data_ena ? r : 3'b0;
assign tft_red [4:0] = 5'b0;
assign tft_green  [7:5] = tft_data_ena ? g : 3'b0;
assign tft_green [4:0] = 5'b0;
assign tft_blue  [7:5] = tft_data_ena ? b : 3'b0;
assign tft_blue [4:0] = 5'b0;

always @(posedge tft_clk) begin
	/* Insert your FSM code to count x and y and set any other outputs needed. */
	
	tft_display <= rstb;
	tft_vdd <= rstb;

	if (~rstb) begin
		x <= 10'b0;
		y <= 9'b0;
	end
	else begin

		if (x == `TFT_X_TOTAL - 1) begin
			x <= 10'b0;
			if (y == `TFT_Y_TOTAL - 1) begin
				y <= 9'd0;
			end
			else begin
				y <= y + 1;
			end
		end
		else begin 
			x <= x + 1;
		end
		
	end
end

endmodule
`default_nettype wire