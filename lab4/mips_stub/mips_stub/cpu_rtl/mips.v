`timescale 1ns/1ps

`default_nettype none

module mips(clk, rstb, mem_wr_data, mem_addr, mem_rd_data, mem_wr_ena, PC);

	// inputs
	input wire clk, rstb;
	output reg mem_wr_ena;
	output wire [31:0] mem_wr_data, mem_addr;
	input wire [31:0] mem_rd_data;             
	output reg [31:0] PC;
	
	// internal wires ---------------------
	// register
	wire [4:0] reg_rd_addr_1;
	wire [4:0] reg_rd_addr_2;
	wire [4:0] reg_wr_addr;
	wire [31:0] reg_wr_data;

	// Register Outputs
	wire [31:0] reg_rd_data_1;
	wire [31:0] reg_rd_data_2;
	
	// control
	wire [5:0] op;
	wire [5:0] funct;

	// control Outputs
	wire [3:0] alu_control;
	wire [1:0] alu_src_b;
	wire alu_src_a;
	wire pc_write;
	wire branch;
	wire pc_src;
	wire reg_write;
	wire i_or_d;
	wire ir_write;
	
	// alu Inputs
	reg [31:0] alu_x;
	reg [31:0] alu_y;

	// alu Outputs
	wire [31:0] alu_result;
	wire alu_zero;
	wire alu_overflow;
	wire alu_equal;
	
	
	register REGISTER (
		.clk(clk), 
		.rstb(rstb), 
		.wr_en(reg_write), 
		.rd_addr_1(reg_rd_addr_1), 
		.rd_addr_2(reg_rd_addr_2), 
		.wr_addr(reg_wr_addr), 
		.wr_data(reg_wr_data), 
		.rd_data_1(reg_rd_data_1), 
		.rd_data_2(reg_rd_data_2)
	);
	
	control CONTROL (
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
		.mem_write(mem_wr_ena), 
		.ir_write(ir_write)
	);
	
	behavioural_alu ALU (
		.X(X), 
		.Y(Y), 
		.op_code(alu_control), 
		.Z(Z), 
		.zero(zero), 
		.overflow(overflow), 
		.equal(equal)
	);
	
	

assign mem_addr = 0;
always@(posedge clk) begin
mem_wr_ena <= 0;
end


endmodule



`default_nettype wire