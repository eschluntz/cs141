`default_nettype none


module ram(
	clk0, wr_ena0, wr_addr0, wr_data0, rd_addr0, rd_data0,
	clk1,                              rd_addr1, rd_data1
);

parameter N = 32;  //bus  width
parameter W = 10;  //actual addr width
parameter L = 1<<W;  //memory length

parameter INIT = "./x.memh";
input wire clk0, clk1, wr_ena0;
input wire [W-1:0]  wr_addr0,  rd_addr0, rd_addr1;
input wire [N-1:0] wr_data0;
output wire  [N-1:0] rd_data0, rd_data1;

reg  [N-1:0] MEM [0:L-1];

assign rd_data0 = MEM[rd_addr0];
assign rd_data1 = MEM[rd_addr1];

initial begin
	$display("initializing %m's memory from '%s'", INIT);
	$readmemh(INIT, MEM);
end
always @(posedge clk0) begin
	if(wr_ena0) begin
		MEM[wr_addr0] <= wr_data0;
	end
end

endmodule


`default_nettype wire
