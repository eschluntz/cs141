`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:49:09 10/21/2014
// Design Name:   main
// Module Name:   E:/visual2_test/test_main.v
// Project Name:  visual2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_main;

	// Inputs
	reg unbuf_clk;
	reg rstb;
	reg [7:0] switch;
	reg button_up;
	reg button_down;
	reg button_right;
	reg button_left;
	reg button_center;
	reg touch_busy;
	reg touch_data_out;

	// Outputs
	wire [7:0] led;
	wire [7:0] JB;
	wire tft_backlight;
	wire tft_clk;
	wire tft_data_ena;
	wire tft_display;
	wire tft_vdd;
	wire [7:0] tft_red;
	wire [7:0] tft_green;
	wire [7:0] tft_blue;
	wire touch_csb;
	wire touch_clk;
	wire touch_data_in;
	wire cclk;

	
	integer i;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.unbuf_clk(unbuf_clk), 
		.rstb(rstb),
		.switch(switch), 
		.led(led), 
		.JB(JB), 
		.button_up(button_up), 
		.button_down(button_down), 
		.button_right(button_right), 
		.button_left(button_left), 
		.button_center(button_center), 
		.tft_backlight(tft_backlight), 
		.tft_clk(tft_clk), 
		.tft_data_ena(tft_data_ena), 
		.tft_display(tft_display), 
		.tft_vdd(tft_vdd), 
		.tft_red(tft_red), 
		.tft_green(tft_green), 
		.tft_blue(tft_blue), 
		.touch_busy(touch_busy), 
		.touch_data_out(touch_data_out), 
		.touch_csb(touch_csb), 
		.touch_clk(touch_clk), 
		.touch_data_in(touch_data_in), 
		.cclk(cclk)
	);

	always #5 unbuf_clk = ~unbuf_clk;
	initial begin
		// Initialize Inputs
		unbuf_clk = 0;
		switch = 40;
		button_up = 0;
		button_down = 0;
		button_right = 0;
		button_left = 0;
		button_center = 0;
		touch_busy = 0;
		touch_data_out = 1;
		
		switch[0] = 1;
		rstb = 0;
		repeat (500) @(posedge unbuf_clk);
		switch[0] = 0;
		repeat (500) @(posedge unbuf_clk);
		rstb = 1;

	end
      
endmodule

