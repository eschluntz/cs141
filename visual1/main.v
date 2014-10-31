`timescale 1ns / 1ps

`default_nettype none //makes undeclared nets errors instead of automatic wires

module main(
	//default IO
	input wire unbuf_clk, rstb,
	input wire [7:0] switch,
	output wire [7:0] led,
	output wire [7:0] JB,
	input wire button_up, button_down, button_right, button_left, button_center, touch_data_out, touch_busy,
	//tft IO
	output wire tft_backlight, tft_clk, tft_data_ena,
	output wire tft_display,tft_vdd,
	output wire [7:0] tft_red, tft_green, tft_blue,
	output wire touch_clk, touch_data_in
);

//clocking signals
wire cclk, cclk_n, tft_clk_buf, tft_clk_buf_n, clocks_locked;
wire reset;
assign reset = ~rstb;

//tft signals
wire [9:0] tft_x;
wire [8:0] tft_y;
wire tft_new_frame;
reg [9:0] xcorner;
reg [8:0] ycorner;
reg [19:0] counter;

//debugging signals
//feel free to connect signals here so that you can probe/see them
assign led = 0; 
assign JB = 8'b0;

//generate all the clocks
clock_generator CLOCK_GEN (.clk_100M_in(unbuf_clk), .CLK_100M(cclk), .CLK_100M_n(cclk_n), .CLK_9M(tft_clk_buf), .CLK_9M_n(tft_clk_buf_n), .RESET(reset), .LOCKED(clocks_locked));
//pass the tft_clk through a DDR2 output buffer (so that it can drive external loads and so that internal loads are unaffected by large skew routing)
ODDR2 tft_clk_fixer (.D0(1'b1), .D1(1'b0), .C0(tft_clk_buf), .C1(tft_clk_buf_n), .Q(tft_clk), .CE(1'b1));

tft_driver TFT(
	.cclk(cclk),
	.rstb(rstb),
	.switches(switch),
	.tft_backlight(tft_backlight),
	.tft_clk(tft_clk_buf),
	.tft_data_ena(tft_data_ena),
	.tft_display(tft_display),
	.tft_vdd(tft_vdd),
	.tft_red(tft_red),
	.tft_green(tft_green),
	.tft_blue(tft_blue),
	.xcorner(xcorner),
	.ycorner(ycorner),
	.x(tft_x), .y(tft_y),
	.new_frame(tft_new_frame)
);

// temp blanks
wire touch_csb;
wire [11:0] touch_x, touch_y, touch_z; //coordinates and pressure of touch



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

always @(posedge cclk) begin
	if (~rstb) begin
		ycorner <= touch_y[8:0];
		xcorner <= touch_x[9:0];
		counter <= 20'd0;
	end
	else begin
		/*
		if (counter == 20'd1000000) begin
			counter <= 20'd0;
			if (button_up) begin
				ycorner <= ycorner - 9'd1;
			end
			else if (button_down) begin
				ycorner <= ycorner + 9'd1;
			end
			
			if (button_left) begin
				xcorner <= xcorner - 10'd1;
			end
			else if (button_right) begin
				xcorner <= xcorner + 10'd1;
			end
		end
		else begin
			counter <= counter + 20'd1;
		end
		*/
		ycorner <= touch_y[11:3];
		xcorner <= touch_x[10:3];
	end
	
	if (xcorner > 379) begin
		xcorner <= 10'd379;
	end
	
	if (ycorner > 171) begin
		ycorner <= 10'd171;
	end
end



endmodule

`default_nettype wire //disable default_nettype so non-user modules work properly