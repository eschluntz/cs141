`timescale 1ns/1ps

`default_nettype none
`define ADDR_SIZE 5
`define DATA_SIZE 32
`define FULL_SIZE `DATA_SIZE * `DATA_SIZE

module register(clk, rstb, wr_en, rd_addr_1, rd_addr_2, wr_addr, wr_data, rd_data_1, rd_data_2);

	input wire clk, rstb, wr_en;
	input wire [`ADDR_SIZE-1:0] rd_addr_1, rd_addr_2, wr_addr;
	input wire [`DATA_SIZE-1:0] wr_data;
	output wire [`DATA_SIZE-1:0] rd_data_1, rd_data_2;
	
	// actual data
	reg [`FULL_SIZE-1:0] all_data;
	
	assign rd_data_1 = all_data[((rd_addr_1+1) << `ADDR_SIZE)-1 -: `DATA_SIZE-1];
	assign rd_data_2 = all_data[((rd_addr_2+1) << `ADDR_SIZE)-1 -: `DATA_SIZE-1];
	
	always @(posedge clk) begin
		if (~rstb) begin
			all_data <= `FULL_SIZE'd0;
		end else begin
			if (wr_en) begin
				all_data[((wr_addr+1) << `ADDR_SIZE)-1 -: `DATA_SIZE-1] <= wr_data;
			end
		end
	end


endmodule



`default_nettype wire
