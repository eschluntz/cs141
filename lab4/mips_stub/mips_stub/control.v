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
	
	output wire pc_write, branch, branch_ne, reg_write,
	output wire i_or_d, mem_write, ir_write,
	output wire [1:0] reg_dst, 
	output wire mem_to_reg
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
		(STATE == 16)? 0 :
		(STATE == 19)? 1 :
		(STATE == 22)? 2 :
		(STATE == 25)? 7 :
		(STATE == 9) ? 6 :
		(STATE == 27)? 6 :
		(STATE == 7) ? funct_to_alu :
							0;
	assign alu_src_b = 
		(STATE == 0) ? 1 :
		(STATE == 2) ? 3 :
		(STATE == 3) ? 2 :
		(STATE == 11)? 2 :
		(STATE == 16)? 2 :
		(STATE == 19)? 2 :
		(STATE == 22)? 2 :
		(STATE == 25)? 2 :
		(STATE == 9) ? 0 :
		(STATE == 27)? 0 :
							0;
	assign pc_src = 
		(STATE == 9) ? 1 :
		(STATE == 27)? 1 :
		(STATE == 13)? 2 :
		(STATE == 29)? 2 :
							0;
	assign alu_src_a = 
		(STATE == 3) ? 1 :
		(STATE == 11)? 1 :
		(STATE == 16)? 1 :
		(STATE == 19)? 1 :
		(STATE == 22)? 1 :
		(STATE == 25)? 1 :
		(STATE == 9) ? 1 :
		(STATE == 27) ? 1 :
		(STATE == 7) ? 1 :
							0;
	assign pc_write = 
		(STATE == 0) ? 1 :
		(STATE == 13)? 1 :
		(STATE == 29)? 1 :
							0;
	assign branch = 
		(STATE == 9) ? 1 :
							0;
	assign branch_ne = 
		(STATE == 27) ? 1 :
							0;
	assign reg_write = 
		(STATE == 5) ? 1 :
		(STATE == 12)? 1 :
		(STATE == 17)? 1 :
		(STATE == 20)? 1 :
		(STATE == 23)? 1 :
		(STATE == 26)? 1 :
		(STATE == 28)? 1 :
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
		(STATE == 17)? 0 :
		(STATE == 20)? 0 :
		(STATE == 23)? 0 :
		(STATE == 26)? 0 :
		(STATE == 28)? 2 :
		(STATE == 8) ? 1 :
							0;
	assign mem_to_reg = 
		(STATE == 5) ? 1 :
		(STATE == 28)? 0 :
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
				end else if (op == `j_op) begin
					STATE <= 13;
				end else if (op == `andi_op) begin
					STATE <= 15;
				end else if (op == `ori_op) begin
					STATE <= 18;
				end else if (op == `xori_op) begin
					STATE <= 21;
				end else if (op == `slti_op) begin
					STATE <= 24;
				end else if (op == `bne_op) begin
					STATE <= 27;
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
			// jump
			end else if (STATE == 13) begin
				STATE <= 0;
			// andi Execute1
			end else if (STATE == 15) begin
				STATE <= 16;
			// andi Execute2
			end else if (STATE == 16) begin
				STATE <= 17;
			// andi Writeback
			end else if (STATE == 17) begin
				STATE <= 0;
			// ori Execute1
			end else if (STATE == 18) begin
				STATE <= 19;
			// ori Execute2
			end else if (STATE == 19) begin
				STATE <= 20;
			// ori Writeback
			end else if (STATE == 20) begin
				STATE <= 0;
			// xori Execute1
			end else if (STATE == 21) begin
				STATE <= 22;
			// xori Execute2
			end else if (STATE == 22) begin
				STATE <= 23;
			// xori Writeback
			end else if (STATE == 23) begin
				STATE <= 0;
			// slti Execute1
			end else if (STATE == 24) begin
				STATE <= 25;
			// slti Execute2
			end else if (STATE == 25) begin
				STATE <= 26;
			// slti Writeback
			end else if (STATE == 26) begin
				STATE <= 0;
			// bne Branch
			end else if (STATE == 27) begin
				STATE <= 0;
			// jal write register
			end else if (STATE == 28) begin
				STATE <= 29;
			// jal update
			end else if (STATE == 29) begin
				STATE <= 0;
			end
		end
	end

endmodule



`default_nettype wire
