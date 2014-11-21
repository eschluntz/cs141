`timescale 1ns/1ps

`default_nettype none

`include "alu_op_codes.v"

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
	
	output wire [3:0] alu_control,
	output wire [2:0] alu_src_b,
	output wire [1:0] pc_src,
	output wire alu_src_a,
	
	output wire pc_write, branch, reg_write,
	output wire i_or_d, mem_write, ir_write,
	output wire reg_dst, mem_to_reg
	);
	
	// Internal state
	reg [5:0] STATE;
	wire [3:0] funct_to_alu;
	
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
					
	/* 
		conversion from funct to alu codes
	*/
	assign funct_to_alu =
		(funct == 0) ? `OP_SLL : // sll	// TODO shampt
		(funct == 2) ? `OP_SRL : //srl
		(funct == 3) ? `OP_SRA : // sra
		(funct == 8) ? 0 : // jr       // TODO HANDLE THIS
		(funct == 32) ? `OP_ADD : // add
		(funct == 34) ? `OP_SUB : // sub
		(funct == 36) ? `OP_AND : // adn
		(funct == 37) ? `OP_OR : // or
		(funct == 38) ? `OP_XOR : // xor
		(funct == 39) ? `OP_NOR : // nor
		(funct == 42) ? `OP_SLT : // slt
							0; // unknown
							
							
	/* 
		Combinational logic to define each output based on state
		Define all states for which the wire is non zeo
		currently defined for states: 0-5
	*/
	assign alu_control = 
		(STATE == 0) ? 5 :
		(STATE == 2) ? 5 :
		(STATE == 3) ? 5 :
		(STATE == 11)? 5 :
		(STATE == 9) ? 6 :
		(STATE == 7) ? funct_to_alu :
							0;
	assign alu_src_b = 
		(STATE == 0) ? 1 :
		(STATE == 2) ? 3 :
		(STATE == 3) ? 2 :
		(STATE == 11)? 2 :
		(STATE == 9) ? 0 :
							0;
	assign pc_src = 
		(STATE == 9) ? 1 :
							0;
	assign alu_src_a = 
		(STATE == 3) ? 1 :
		(STATE == 11)? 1 :
		(STATE == 9) ? 1 :
		(STATE == 7) ? 1 :
							0;
	assign pc_write = 
		(STATE == 0) ? 1 :
							0;
	assign branch = 
		(STATE == 9) ? 1 :
							0;
	assign reg_write = 
		(STATE == 5) ? 1 :
		(STATE == 12)? 1 :
		(STATE == 8) ? 1 :
							0;
	assign i_or_d = 
		(STATE == 4) ? 1 :
		(STATE == 6) ? 1 :
							0;
	assign mem_write = 
		(STATE == 6) ? 1 :
							0;
	assign ir_write = 
		(STATE == 1) ? 1 :
							0;
	assign reg_dst = 
		(STATE == 12)? 0 :
		(STATE == 8)? 1 :
							0;
	assign mem_to_reg = 
		(STATE == 5) ? 1 :
							0;
		
	
	/*
		State transition logic
	*/
	always@(posedge clk) begin
		// program counter
		if (~rstb) begin
			STATE <= 0;
		end else begin
			// FETCH
			if (STATE == 0) begin // reset
				STATE <= 1;
			// extra clock cycle for memory
			end else if (STATE == 1) begin
				STATE <= 2;
			// decode
			end else if (STATE == 2) begin // decode
				if (op == `lw_op | op == `sw_op ) begin
					STATE <= 3;
				end else if (op == `addi_op) begin
					STATE <= 10;
				end else if (op == `beq_op) begin
					STATE <= 9;
				end else if (op == `r_op) begin
					STATE <= 7;
				end else begin
					STATE <= 0;
				end
			// lw/sw MemAdr
			end else if (STATE == 3) begin // mem addr
				if (op == `lw_op) begin
					STATE <= 4;
				end else if (op == `sw_op) begin
					STATE <= 6;
				end else begin
					STATE <= 0;
				end
			//	lw MemRd
			end else if (STATE == 4) begin // Mem Read
				STATE <= 5;
			// lw MemWriteback
			end else if (STATE == 5) begin // mem writeback
				STATE <= 0;
			//	sw MemWrite
			end else if (STATE == 6) begin // mem write
				STATE <= 0;
			end else if (STATE == 7) begin // R type execute
				STATE <= 8;
			end else if (STATE == 8) begin // alu write back
				STATE <= 0;
			// beq Branch
			end else if (STATE == 9) begin
				STATE <= 0;
			// addi Execute1
			end else if (STATE == 10) begin
				STATE <= 11;
			// addi Execute2
			end else if (STATE == 11) begin
				STATE <= 12;
			// addi Writeback
			end else if (STATE == 12) begin
				STATE <= 0;
			end
		end
	end

endmodule



`default_nettype wire
