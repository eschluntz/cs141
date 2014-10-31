`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:57:49 10/24/2014
// Design Name:   touchpad_controller
// Module Name:   E:/visual2_test/test_touch.v
// Project Name:  visual2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: touchpad_controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_touch;

	// Inputs
	reg cclk;
	reg rstb;
	reg touch_busy;
	reg data_in;

	// Outputs
	wire touch_clk;
	wire data_out;
	wire touch_csb;
	wire [8:0] x;
	wire [8:0] y;
	wire [8:0] z;
	wire [3:0] counter_num_requests;
	wire [4:0] counter_per_request;
	wire [1:0] counter_type;
	wire [11:0] last_data;
	wire [14:0] sum_data;


	// Instantiate the Unit Under Test (UUT)
	touchpad_controller uut (
		.cclk(cclk), 
		.rstb(rstb), 
		.touch_busy(touch_busy), 
		.data_in(data_in), 
		.touch_clk(touch_clk), 
		.data_out(data_out), 
		.touch_csb(touch_csb), 
		.x(x), 
		.y(y), 
		.z(z),
		.counter_num_requests(counter_num_requests),
		.counter_per_request(counter_per_request),
		.counter_type(counter_type),
		.last_data(last_data),
		.sum_data(sum_data)
	);

	initial begin
		// Initialize Inputs
		cclk = 0;
		rstb = 0;
		touch_busy = 0;
		data_in = 1;
		
		repeat (5) @(posedge cclk);
		rstb = 1;
		
        
		// Add stimulus here

	end
	always #5 cclk = ~cclk;
      
endmodule

