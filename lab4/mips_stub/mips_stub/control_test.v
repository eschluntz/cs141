`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:12:19 11/14/2014
// Design Name:   control
// Module Name:   D:/cs141/lab4/mips_stub/mips_stub/control_test.v
// Project Name:  mips_stub
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module control_test;

	// Inputs
	reg clk;
	reg rstb;
	reg [5:0] op;
	reg [5:0] funct;

	// Outputs
	wire [3:0] alu_control;
	wire [1:0] alu_src_b;
	wire alu_src_a;
	wire pc_write;
	wire branch;
	wire pc_src;
	wire reg_write;
	wire i_or_d;
	wire mem_write;
	wire ir_write;
	wire reg_dst;
	wire mem_to_reg;

	// Instantiate the Unit Under Test (UUT)
	control uut (
		.clk(clk), 
		.rstb(rstb), 
		.op(op), 
		.funct(funct), 
		.alu_control(alu_control), 
		.alu_src_b(alu_src_b), 
		.alu_src_a(alu_src_a), 
		.pc_write(pc_write), 
		.branch(branch), 
		.pc_src(pc_src), 
		.reg_write(reg_write), 
		.i_or_d(i_or_d), 
		.mem_write(mem_write), 
		.ir_write(ir_write), 
		.reg_dst(reg_dst), 
		.mem_to_reg(mem_to_reg)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rstb = 0;
		op = 0;
		funct = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

