`timescale 1ns / 1ps

module toptest;

	// Inputs
	reg [13:0] bin;

	// Outputs
	wire [15:0] bcd;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.bin(bin), 
		.bcd(bcd)
	);

	initial begin
		// Initialize Inputs
		bin = 4567;
		#10;
		bin = 78;
		#10;
		bin = 67;
		#10;
		bin = 4227;
		#10;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

