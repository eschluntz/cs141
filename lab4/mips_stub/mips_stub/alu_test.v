`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:43:52 11/14/2014
// Design Name:   behavioural_alu
// Module Name:   D:/cs141/lab4/mips_stub/mips_stub/alu_test.v
// Project Name:  mips_stub
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: behavioural_alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_test;

	// Inputs
	reg [31:0] X;
	reg [31:0] Y;
	reg [3:0] op_code;

	// Outputs
	wire [31:0] Z;
	wire zero;
	wire overflow;
	wire equal;

	// Instantiate the Unit Under Test (UUT)
	behavioural_alu uut (
		.X(X), 
		.Y(Y), 
		.op_code(op_code), 
		.Z(Z), 
		.zero(zero), 
		.overflow(overflow), 
		.equal(equal)
	);

	initial begin
		// Initialize Inputs
		X = 0;
		Y = 0;
		op_code = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

