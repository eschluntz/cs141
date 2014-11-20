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
	
	output wire [3:0] alu_control,
	output wire [2:0] alu_src_b,
	output wire [1:0] pc_src,
	output wire alu_src_a,
	
	output wire pc_write, branch, reg_write,
	output wire i_or_d, mem_write, ir_write,
	output wire reg_dst, mem_to_reg
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
					
	/* 
		Combinational logic to define each output based on state
		Define all states for which the wire is non zeo
		currently defined for states: 0-5
	*/
	assign alu_control = 
		(STATE == 0) ? 5 :
		(STATE == 2) ? 5 :
		(STATE == 3) ? 5 :
							0;
	assign alu_src_b = 
		(STATE == 0) ? 1 :
		(STATE == 2) ? 3 :
		(STATE == 3) ? 2 :
							0;
	assign pc_src = 
							0;
	assign alu_src_a = 
		(STATE == 3) ? 1 :
							0;
	assign pc_write = 
		(STATE == 0) ? 1 :
							0;
	assign branch = 
							0;
	assign reg_write = 
		(STATE == 5) ? 1 :
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
			if (STATE == 0) begin // reset
				STATE <= 1;
			end else if (STATE == 1) begin
				STATE <= 2;
				
			end else if (STATE == 2) begin // decode
				if (op == `lw_op | op == `sw_op ) begin
					STATE <= 3;
				end else begin
					STATE <= 0;
				end
				
			end else if (STATE == 3) begin // mem addr
				if (op == `lw_op) begin
					STATE <= 4;
				end else if (op == `sw_op) begin
					STATE <= 6;
				end else begin
					STATE <= 0;
				end
				
			end else if (STATE == 4) begin // Mem Read
				STATE <= 5;
			
			end else if (STATE == 5) begin // mem writeback
				STATE <= 0;
				
			end else if (STATE == 6) begin // mem write
				STATE <= 0;
				
			end
		end
	end

endmodule



`default_nettype wire
