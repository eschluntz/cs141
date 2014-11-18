`timescale 1ns/1ps

`default_nettype none


module control(
	input wire clk, rstb,
	input wire [5:0] op, funct,
	
	output wire [3:0] alu_control,
	output wire [2:0] alu_src_b,
	output wire [1:0] pc_src,
	output wire alu_src_a,
	
	output wire pc_write, branch, reg_write,
	output wire i_or_d, mem_write, ir_write,
	output wire reg_dst, mem_to_reg
	);
	
	assign alu_control = 0;
	assign alu_src_b = 0;
	assign pc_src = 0;
	assign alu_src_a = 0;
	
	assign pc_write = 1;
	assign branch = 0;
	assign reg_write = 0;
	assign i_or_d = 0;
	assign mem_write = 1;
	assign ir_write = 1;
	assign reg_dst = 0;
	assign mem_to_reg = 0;

endmodule



`default_nettype wire
