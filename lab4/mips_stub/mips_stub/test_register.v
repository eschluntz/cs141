`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:00:42 11/14/2014
// Design Name:   register
// Module Name:   D:/cs141/lab4/mips_stub/mips_stub/test_register.v
// Project Name:  mips_stub
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: register
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_register;

	// Inputs
	reg clk;
	reg rstb;
	reg wr_en;
	reg [4:0] rd_addr_1;
	reg [4:0] rd_addr_2;
	reg [4:0] wr_addr;
	reg [31:0] wr_data;

	// Outputs
	wire [31:0] rd_data_1;
	wire [31:0] rd_data_2;

	// Instantiate the Unit Under Test (UUT)
	register uut (
		.clk(clk), 
		.rstb(rstb), 
		.wr_en(wr_en), 
		.rd_addr_1(rd_addr_1), 
		.rd_addr_2(rd_addr_2), 
		.wr_addr(wr_addr), 
		.wr_data(wr_data), 
		.rd_data_1(rd_data_1), 
		.rd_data_2(rd_data_2)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rstb = 0;
		wr_en = 0;
		rd_addr_1 = 0;
		rd_addr_2 = 0;
		wr_addr = 0;
		wr_data = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rstb = 1;
		#20;
		
		rd_addr_1 = 5'b00010;
		#40;
		wr_en = 1;
		wr_addr = 5'b00010;
		wr_data = 32'd1024;
		# 40;
		wr_en = 0;
		rd_addr_1 = 5'b00011;
      #40;
		rd_addr_2 = 5'b00010;
		#40;
		// Add stimulus here

	end
	
	always #5 clk = ~clk;
      
endmodule

