`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:47:24 10/10/2014
// Design Name:   tft_driver
// Module Name:   F:/cs141/visual1/visual1/tft_driver_test.v
// Project Name:  visual1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: tft_driver
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tft_driver_test;

	// Inputs
	reg cclk;
	reg rstb;
	reg tft_clk;

	// Outputs
	wire tft_backlight;
	wire tft_data_ena;
	wire tft_display;
	wire tft_vdd;
	wire [7:0] tft_red;
	wire [7:0] tft_green;
	wire [7:0] tft_blue;
	wire [9:0] x;
	wire [8:0] y;
	wire new_frame;
	integer i;

	// Instantiate the Unit Under Test (UUT)
	tft_driver uut (
		.cclk(cclk), 
		.rstb(rstb), 
		.tft_clk(tft_clk), 
		.tft_backlight(tft_backlight), 
		.tft_data_ena(tft_data_ena), 
		.tft_display(tft_display), 
		.tft_vdd(tft_vdd), 
		.tft_red(tft_red), 
		.tft_green(tft_green), 
		.tft_blue(tft_blue), 
		.x(x), 
		.y(y), 
		.new_frame(new_frame)
	);

	initial begin
		// Initialize Inputs
		cclk = 0;
		rstb = 0;
		tft_clk = 0;
		

		rstb = 0;
		for (i = 0; i < 20; i = i + 1) begin
			tft_clk = ~tft_clk;
			#5;
		end
		rstb = 1;
		
		for (i = 0; i < 2 * 525 * 288; i = i + 1) begin
			tft_clk = ~tft_clk;
			#5;
		end

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

