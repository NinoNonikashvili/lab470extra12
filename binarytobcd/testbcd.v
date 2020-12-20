`timescale 1ns / 1ps


module testbcd;

	// Inputs
	reg clk;

	// Outputs
	wire [15:0] four_digit_input;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.four_digit_input(four_digit_input)
	);
always #5 clk=!clk;
	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

