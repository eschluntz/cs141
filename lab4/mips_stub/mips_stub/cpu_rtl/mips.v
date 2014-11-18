`timescale 1ns/1ps

`default_nettype none

module mips(clk, rstb, mem_wr_data, mem_addr, mem_rd_data, mem_wr_ena, PC);

	// inputs
	input wire clk, rstb;
	output wire mem_wr_ena;
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
	wire [2:0] alu_src_b_select;
	wire [1:0] pc_src;
	wire alu_src_a_select;
	wire pc_write;
	wire branch;
	wire reg_write;
	wire i_or_d;
	wire ir_write;
	wire reg_dst;
	wire mem_to_reg;
	
	// alu Inputs
	wire [31:0] alu_src_a;
	wire [31:0] alu_src_b;
	wire [31:0] alu_src_b_inter;

	// alu Outputs
	wire [31:0] alu_result;
	wire alu_zero;
	wire alu_overflow;
	wire alu_equal;
	
	// misc
	wire pc_en;
	wire [31:0] sign_imm;
	reg [31:0] A, B, data, alu_out, instruction;
	wire [31:0] pc_jump;
	
	
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
		.alu_src_b(alu_src_b_select), 
		.alu_src_a(alu_src_a_select), 
		.pc_write(pc_write), 
		.branch(branch), 
		.pc_src(pc_src), 
		.reg_write(reg_write), 
		.i_or_d(i_or_d), 
		.mem_write(mem_wr_ena), 
		.ir_write(ir_write),
		.reg_dst(reg_dst), 
		.mem_to_reg(mem_to_reg)
	);
	
	behavioural_alu ALU (
		.X(alu_src_a), 
		.Y(alu_src_b), 
		.op_code(alu_control), 
		.Z(alu_result), 
		.zero(alu_zero), 
		.overflow(alu_overflow), 
		.equal(alu_equal)
	);
	
	sign_extend SIGN_EXTEND (
		.in(instruction[15:0]),
		.out(sign_imm)
	);
	
	// connection wires and muxes
	// memory address and register file
	
	assign pc_en = pc_write | (branch & alu_zero);
	assign pc_jump[31:28] = PC[31:28];
	assign pc_jump[27:2] = instruction[25:0];
	assign pc_jump[1:0] = 2'b00;
	
	assign mem_addr = i_or_d ? alu_out : PC;
	assign mem_wr_data = B;
	
	assign reg_wr_addr = reg_dst ? instruction[15:11] : instruction[20:16];
	assign reg_wr_data = mem_to_reg ? data : alu_out;
	assign reg_rd_addr_1 = instruction[25:21];
	assign reg_rd_addr_2 = instruction[20:16];
	
	assign op = instruction[31:26];
	assign funct = instruction[5:0];
	
	assign alu_src_a = alu_src_a_select ? A : PC;
	assign alu_src_b_inter = alu_src_b_select == 3'b000 ? B :
									alu_src_b_select == 3'b001 ? 32'd4 :
									alu_src_b_select == 3'b010 ? sign_imm :
									alu_src_b_select == 3'b011 ?sign_imm << 2 :
														instruction[10:6]; // shamt
							

	//todo make op and func wires

	// updating registers
	always@(posedge clk) begin
		// program counter
		if (~rstb) begin
			PC <= 0;
		end 
		else begin
			if (pc_en) begin
				PC <= pc_src == 2'b00 ? alu_result :
									2'b01 ? alu_out : pc_jump;
			end
			
			// instruction
			if (ir_write) begin
				instruction <= mem_rd_data;
			end
			
			// data
			data <= mem_rd_data;
			
			// reg output
			A <= reg_rd_data_1;
			B <= reg_rd_data_2;
			
			// alu out
			alu_out <= alu_result;
		end
	end


endmodule



`default_nettype wire