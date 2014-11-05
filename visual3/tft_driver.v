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

module tft_driver(
	input wire cclk, rstb,
	input wire tft_clk,
	output wire tft_backlight, tft_data_ena,
	output reg tft_display, tft_vdd,
	output wire [7:0] tft_red, tft_green, tft_blue,
    
	input wire wr_ena,  // write enable signal for video RAM. Active high. This should only be high if the screen is being touched.
   input wire clear_screen,  // Tells the tft_driver to clear the screen. Input is received from a button pressed on the FPGA.
	output reg clear_done,  // Tells the main module that the clear process is complete.
	input wire [8:0] wr_x,  // x coordinate of the point currently being touched.
	input wire [8:0] wr_y,  // y coordinate of the point currently being touched.
	input wire [(`TFT_BITS_PER_PIXEL-1):0] wr_data,  // Data to be written to the video RAM. This corresponds to the color of the line that will be drawn.
    
    // Same as from Visual 1 and 2.
	output reg [(`TFT_X_NUM_BITS-1):0] x,
	output reg [(`TFT_Y_NUM_BITS-1):0] y,
	output wire new_frame
);

// Video memory read and write addresses. They will be assigned values from the tft_address_generator modules.
wire [16:0] video_ram_wr_addr, video_ram_rd_addr, wr_addr;

// If we are not writing to the video RAM, this should be low.
wire video_ram_wr_ena;

// This creates addresses from x and y coordinates. It has already been written for you.
tft_address_generator TFT_ADDR_0 (.x(wr_x), .y(wr_y), .addr(wr_addr));
tft_address_generator TFT_ADDR_1 (.x(x[8:0]), .y(y), .addr(video_ram_rd_addr));

// You need to separate the RGB components from color and assign values to tft_red/green/blue accordingly.
wire [(`TFT_BITS_PER_PIXEL-1):0] color;

// This value will be written to the video RAM. It needs to be set based on whether we are clearing the screen or if we are writing a new value to the RAM.
wire [(`TFT_BITS_PER_PIXEL-1):0] video_ram_wr_data;


// writing to ram
assign video_ram_wr_ena = wr_ena;
assign video_ram_wr_addr = wr_addr;

// reading from ram with x,y
// already done

coregen_video_ram VRAM(
	.clka(cclk), .clkb(tft_clk),
	.wea(video_ram_wr_ena), 
	.addra(video_ram_wr_addr),
	.dina(video_ram_wr_data),
	.addrb(video_ram_rd_addr), 
	.doutb(color),
    // This is a dual port memory structure, so it can read and write two values to two different addresses simultaneously. We won't be using this feature.
	.web(1'b0),
	.dinb(9'b0)	
);

/* You will need to write an FSM to clear the screen when the clear_screen input is received. That can go here.

The clear_screen button may be released before the screen is actually fully cleared, but that should not stop 
the clearing process! You may need to create additional wires and registers to ensure that the screen clear works correctly.
*/

/* Insert the relevant pieces of your code from Lab 3 Visual 2 here. */

// spoofing old code for now


// RGB pixel values.
wire [(`TFT_BITS_PER_COLOR-1):0] r, g, b;


// Pick your colors. Remember that you have to draw a blue square on an orange background. 
// You can use some behavioral Verilog here. Hint: the >, <, and ? operators will be very handy.
assign r = color[2:0];
assign g = color[5:3];
assign b = color[8:6];

// Signal that a new frame is coming when y has finished counting to the end of the vertical porch region.
assign new_frame = (y == `TFT_Y_RES -1);

//pwm_generator PWM0(.cclk(tft_clk), .rstb(rstb), .duty_cycle(switches), .frequency_division(32'd2), .pwm(tft_backlight));
assign tft_backlight = 1;
// Use combinational logic here to determine when this enable signal should be high and low.
// It should be based the values of x and y. Behavioral Verilog can and should be used here too.
assign tft_data_ena = (x < `TFT_X_RES && y < `TFT_Y_RES);

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