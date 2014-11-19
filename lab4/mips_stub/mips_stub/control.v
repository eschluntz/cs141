`timescale 1ns/1ps

`default_nettype none

// state definitions
`define sw_op		6'b101011
`define lw_op		6'b100011
`define r_op		6'b000000
`define beq_op 	6'b000100
`define addi_op 	6'b001000
`define j_op    	6'b000010
`define andi_op 	6'b001100
`define ori_op 	6'b001101
`define xori_op 	6'b001110
`define slti_op 	6'b001010
`define bne_op 	6'b000101
`define jal 		6'b000011
`define jr	 		6'b001000

module control(
	input wire clk, rstb,
	input wire [5:0] op, funct,
	
	output reg [3:0] alu_control,
	output reg [2:0] alu_src_b,
	output reg [1:0] pc_src,
	output reg alu_src_a,
	
	output reg pc_write, branch, reg_write,
	output reg i_or_d, mem_write, ir_write,
	output reg reg_dst, mem_to_reg
	);
	
	// Internal state
	reg [3:0] STATE;
	
	/* all zeros
					i_or_d <= 0;
					alu_src_a <= 0;
					alu_src_b <= 0;
					alu_control <= 0;
					pc_src <= 0;
					pc_write <= 0;
					branch <= 0;
					reg_write <= 0;
					mem_write <= 0;
					ir_write <= 0;
					reg_dst <= 0;
					mem_to_reg <= 0;
					*/
	
	
	always@(posedge clk) begin
		// program counter
		if (~rstb) begin
			STATE <= 0;
		end else begin
			if (STATE == 0) begin // reset
				i_or_d <= 0;
				alu_src_a <= 0;
				alu_src_b <= 1;
				alu_control <= 5;
				pc_src <= 0;
				pc_write <= 1;
				branch <= 0;
				reg_write <= 0;
				mem_write <= 0;
				ir_write <= 1;
				reg_dst <= 0;
				mem_to_reg <= 0;
				
				STATE <= 1;
				
			end else if (STATE == 1) begin // decode
				i_or_d <= 0;
				alu_src_a <= 0;
				alu_src_b <= 3;
				alu_control <= 5;
				pc_src <= 0;
				pc_write <= 0;
				branch <= 0;
				reg_write <= 0;
				mem_write <= 0;
				ir_write <= 0;
				reg_dst <= 0;
				mem_to_reg <= 0;
				
				// switching
				if (op == `lw_op | op == `sw_op ) begin
					STATE <= 2;
				end else begin
					STATE <= 0;
				end
				
			end else if (STATE == 2) begin // mem addr
				i_or_d <= 0;
				alu_src_a <= 1;
				alu_src_b <= 2;
				alu_control <= 0;
				pc_src <= 0;
				pc_write <= 0;
				branch <= 0;
				reg_write <= 0;
				mem_write <= 0;
				ir_write <= 0;
				reg_dst <= 0;
				mem_to_reg <= 0;
				
				// switching
				if (op == `lw_op) begin
					STATE <= 3;
				end else if (op == `sw_op) begin
					STATE <= 5;
				end else begin
					STATE <= 0;
				end
				
			end else if (STATE == 3) begin // Mem Read
				i_or_d <= 1;
				alu_src_a <= 0;
				alu_src_b <= 0;
				alu_control <= 0;
				pc_src <= 0;
				pc_write <= 0;
				branch <= 0;
				reg_write <= 0;
				mem_write <= 0;
				ir_write <= 0;
				reg_dst <= 0;
				mem_to_reg <= 0;
				
				// switching
				STATE <= 4;
			
			end else if (STATE == 4) begin // mem writeback
				i_or_d <= 0;
				alu_src_a <= 0;
				alu_src_b <= 0;
				alu_control <= 0;
				pc_src <= 0;
				pc_write <= 0;
				branch <= 0;
				reg_write <= 1;
				mem_write <= 0;
				ir_write <= 0;
				reg_dst <= 0;
				mem_to_reg <= 1;
				
				// switching
				STATE <= 0;
				
			end else if (STATE == 5) begin // mem write
				i_or_d <= 1;
				alu_src_a <= 0;
				alu_src_b <= 0;
				alu_control <= 0;
				pc_src <= 0;
				pc_write <= 0;
				branch <= 0;
				reg_write <= 0;
				mem_write <= 1;
				ir_write <= 0;
				reg_dst <= 0;
				mem_to_reg <= 0;
				
				// switching
				STATE <= 0;
				
			end
		end
	end

endmodule



`default_nettype wire
