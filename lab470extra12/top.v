`timescale 1ns / 1ps
 module top(
	input clk, btn0, btn1, 	 
	output reg[6:0] led,
	output reg [3:0] anode
    );
  
parameter integer max = 4000; 
	reg [14:0] counter = 0;
	reg [30:0] sec_counter=0;
	reg [15:0] four_digit_input=0;
	reg [13:0] binaryNof_sec=0; 
	reg [1:0] enable_anode=0;  
	integer bit_counter;
	  
	always @(posedge clk)   
		begin
			if(btn0) 
			begin
				sec_counter<=0;
				binaryNof_sec<=0;
			end
			else if(btn1==0)
			begin
				sec_counter<=sec_counter+1;
				if(sec_counter==50000000) begin
				binaryNof_sec<=binaryNof_sec+1;
				sec_counter<=0;  end
			end
			
			//enabling display with its clock 
			counter <= counter + 1;
			if (counter == max) 
				begin
				counter <= 0;
	       	case(enable_anode)
				0: begin
							anode <= 4'b1110;  
							enable_anode <= 1;
							case(four_digit_input[15:12])
							 0: led = 7'b1000000; // "0"    //CG CF CE CD CC CB CA  
							 1: led = 7'b1111001; // "1" 
							 2: led = 7'b0100100; // "2" 
							 3: led = 7'b0110000; // "3" 
							 4: led = 7'b0011001; // "4" 
							 5: led = 7'b0010010; // "5" 
							 6: led = 7'b0100000; // "6" 
							 7: led = 7'b1111000; // "7" 
							 8: led = 7'b0000000; // "8"  
							 9: led = 7'b0010000; // "9" 
							 default: led = 7'b1000000; // "0"
							 endcase
						end
				1: begin
							anode <= 4'b1101; 
							enable_anode <= 2;
							case(four_digit_input[11:8])
							 0: led = 7'b1000000; // "0"    //CG CF CE CD CC CB CA  
							 1: led = 7'b1111001; // "1" 
							 2: led = 7'b0100100; // "2" 
							 3: led = 7'b0110000; // "3" 
							 4: led = 7'b0011001; // "4" 
							 5: led = 7'b0010010; // "5" 
							 6: led = 7'b0100000; // "6" 
							 7: led = 7'b1111000; // "7" 
							 8: led = 7'b0000000; // "8"  
							 9: led = 7'b0010000; // "9" 
							 default: led = 7'b1000000; // "0"
							 endcase
						end
				2: begin
							anode <= 4'b1011; 
							enable_anode <= 3;
							case(four_digit_input[7:4])
							 0: led = 7'b1000000; // "0"    //CG CF CE CD CC CB CA  
							 1: led = 7'b1111001; // "1" 
							 2: led = 7'b0100100; // "2" 
							 3: led = 7'b0110000; // "3" 
							 4: led = 7'b0011001; // "4" 
							 5: led = 7'b0010010; // "5" 
							 6: led = 7'b0100000; // "6" 
							 7: led = 7'b1111000; // "7" 
							 8: led = 7'b0000000; // "8"  
							 9: led = 7'b0010000; // "9" 
							 default: led = 7'b1000000; // "0"
							 endcase 
						end
				3: begin
							anode <= 4'b0111;   
							enable_anode <=0;
							case(four_digit_input[3:0])
							 0: led = 7'b1000000; // "0"    //CG CF CE CD CC CB CA  
							 1: led = 7'b1111001; // "1" 
							 2: led = 7'b0100100; // "2" 
							 3: led = 7'b0110000; // "3" 
							 4: led = 7'b0011001; // "4" 
							 5: led = 7'b0010010; // "5" 
							 6: led = 7'b0100000; // "6" 
							 7: led = 7'b1111000; // "7" 
							 8: led = 7'b0000000; // "8"  
							 9: led = 7'b0010000; // "9" 
							 default: led = 7'b1000000; // "0"
							 endcase
					end
			endcase
			end
		
		end  
		always @( binaryNof_sec)
		begin
		four_digit_input=0;
		 for (bit_counter=0;bit_counter<14; bit_counter=bit_counter+1) begin					
         if (four_digit_input[3:0] >= 5)   
				four_digit_input[3:0] = four_digit_input[3:0] + 3;		
			if (four_digit_input[7:4] >= 5) 
				four_digit_input[7:4] = four_digit_input[7:4] + 3;
			if (four_digit_input[11:8] >= 5) 
				four_digit_input[11:8] = four_digit_input[11:8] + 3;
			if (four_digit_input[15:12] >= 5)
				four_digit_input[15:12] = four_digit_input[15:12] + 3;
			four_digit_input = {four_digit_input[14:0],binaryNof_sec[13-bit_counter]};	
			
    end
		
		end
		

endmodule
