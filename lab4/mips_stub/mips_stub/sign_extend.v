`timescale 1ns/1ps

`default_nettype none


module sign_extend(
	input wire [15:0] in,
	output wire [31:0] out
	);
	
	assign out[15:0] = in;
	assign out[31:16] = in[15] ? 16'b1111111111111111 : 16'b0000000000000000;
	
endmodule



`default_nettype wire
