module running_average(
	cclk, rstb, ena,
	raw,
	clean
);

parameter WIDTH = 8;
parameter ORDER = 2;

input cclk, rstb, ena;

input  [(WIDTH-1):0] raw;
output reg [(WIDTH-1):0] clean;

reg [(WIDTH+ORDER-1):0] sum;
reg [ORDER:0] count;

always @(posedge cclk) begin
	if(~rstb) begin
		sum <= 0;
		count <= 0;
		clean <= 0;
		$display("in reset!");
	end
	else begin
		if(ena) begin
			sum <= sum + raw;
			count <= count + 1;
			if(count[ORDER]) begin
				clean <= sum>>ORDER;
				sum <= 0;
				count <= 0;
			end
			
		end
	end
end

endmodule