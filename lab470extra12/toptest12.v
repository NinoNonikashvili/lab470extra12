`timescale 1ns / 1ps



module toptest12;

	// Inputs  
	reg clk;

	// Outputs
	wire [6:0] led;
	wire [3:0] anode;   

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.led(led), 
		.anode(anode)  
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

