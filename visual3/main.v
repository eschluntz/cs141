`timescale 1ns / 1ps

`default_nettype none //makes undeclared nets errors instead of automatic wires

module main(
	//default IO
	input wire unbuf_clk, rstb,
	input wire [7:0] switch,
	output wire [7:0] led,
	output wire [7:0] JB,
	input wire button_up, button_down, button_right, button_left, button_center,
	//tft IO
	output wire tft_backlight, tft_clk, tft_data_ena,
	output wire tft_display,tft_vdd,
	output wire [7:0] tft_red, tft_green, tft_blue,
	//touchpad IO
	input wire touch_busy, touch_data_out,
	output wire touch_csb, touch_clk, touch_data_in
);

//clocking signals
wire cclk, cclk_n, tft_clk_buf, tft_clk_buf_n, clocks_locked;
wire reset;
assign reset = ~rstb;

//touchpad signals
wire [11:0] touch_x, touch_y, touch_z;

//tft signals
wire [9:0] tft_x;
wire [8:0] tft_y;
wire [8:0] tft_wr_x, tft_wr_y;
wire tft_wr_ena, tft_clear;
wire [8:0] tft_wr_data;

//generate all the clocks
clock_generator CLOCK_GEN (.clk_100M_in(unbuf_clk), .CLK_100M(cclk), .CLK_100M_n(cclk_n), .CLK_9M(tft_clk_buf), .CLK_9M_n(tft_clk_buf_n), .RESET(reset), .LOCKED(clocks_locked));
//pass the tft_clk through a DDR2 output buffer (so that it can drive external loads and so that internal loads are unaffected by large skew routing)
ODDR2 tft_clk_fixer (.D0(1'b1), .D1(1'b0), .C0(tft_clk_buf), .C1(tft_clk_buf_n), .Q(tft_clk), .CE(1'b1));

//debugging
wire clearing;
wire [17:0] clearing_counter;

assign led[0] = tft_wr_ena;
assign led[1] = tft_clear;
assign led[2] = clearing;
assign led[7:3] = clearing_counter[17:13];
assign JB = 8'b0;

// tft control 
assign tft_clear = button_center;
assign tft_wr_ena = (touch_z[11] || touch_z[10] || touch_z[9]); // high pressure to write
assign tft_wr_x = (touch_x - 330) >> 3;
assign tft_wr_y = (touch_y - 170) >> 4;
assign tft_wr_data = 9'b000000000; // always write red for now




//intantiate the TFT driver
tft_driver TFT(
	.cclk(cclk),
	.rstb(rstb),
	.tft_backlight(tft_backlight),
	.tft_clk(tft_clk_buf),
	.tft_data_ena(tft_data_ena),
	.tft_display(tft_display),
	.tft_vdd(tft_vdd),
	.tft_red(tft_red),
	.tft_green(tft_green),
	.tft_blue(tft_blue),
	.wr_ena(tft_wr_ena),
	.wr_x(tft_wr_x),
	.wr_y(tft_wr_y),
	.wr_data(tft_wr_data),
	.x(tft_x), .y(tft_y),
	.clear_screen(tft_clear),
	.clearing(clearing),
	.clearing_counter(clearing_counter)
);

//instantiate the touchpad controller
touchpad_controller TOUCH(
	.cclk(cclk), .rstb(rstb), .touch_clk(touch_clk),
	.touch_busy(touch_busy),
	.data_in(touch_data_out),
	.data_out(touch_data_in),
	.touch_csb(touch_csb),
	.x(touch_x),
	.y(touch_y),
	.z(touch_z)
);
endmodule

`default_nettype wire //disable default_nettype so non-user modules work properly