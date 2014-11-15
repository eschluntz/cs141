`timescale 1ns/1ps

`default_nettype none


module control(
	input wire clk, rstb,
	input wire [5:0] op, funct,
	
	output wire [3:0] alu_control,
	output wire [1:0] alu_src_b,
	output wire alu_src_a,
	
	output wire pc_write, branch, pc_src, reg_write,
	output wire i_or_d, mem_write, ir_write
	);
	

endmodule



`default_nettype wire