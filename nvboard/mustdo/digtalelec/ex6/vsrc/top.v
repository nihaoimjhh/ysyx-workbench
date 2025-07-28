module top(input clk,input reset,output reg [7:0]out,output reg [6:0]hex_high,output reg [6:0]hex_low);
	 reg x8=1'b0;
	 
     always@(posedge clk or posedge reset)begin
		 if(reset)
			 out<=8'b00000001;
		 else begin
			 x8<=out[4]^out[3]^out[2]^out[0];
			 out<={x8,out[7:1]};
		 end




	 end

always @(*) begin
    case (out[7:4])
        4'b0000: hex_high = 7'b0000001; // '0'
        4'b0001: hex_high = 7'b1001111; // '1'
        4'b0010: hex_high = 7'b0010010; // '2'
        4'b0011: hex_high = 7'b0000110; // '3'
        4'b0100: hex_high = 7'b1001100; // '4'
        4'b0101: hex_high = 7'b0100100; // '5'
        4'b0110: hex_high = 7'b0100000; // '6'
        4'b0111: hex_high = 7'b0001111; // '7'
        4'b1000: hex_high = 7'b0000000; // '8'
        4'b1001: hex_high = 7'b0000100; // '9'
        4'b1010: hex_high = 7'b0001000; // 'A'
        4'b1011: hex_high = 7'b1100000; // 'b'
        4'b1100: hex_high = 7'b0110001; // 'C'
        4'b1101: hex_high = 7'b1000010; // 'd'
        4'b1110: hex_high = 7'b0110000; // 'E'
        4'b1111: hex_high = 7'b0111000; // 'F'
    endcase

    case (out[3:0])
        4'b0000: hex_low = 7'b0000001; // '0'
        4'b0001: hex_low = 7'b1001111; // '1'
        4'b0010: hex_low = 7'b0010010; // '2'
        4'b0011: hex_low = 7'b0000110; // '3'
        4'b0100: hex_low = 7'b1001100; // '4'
        4'b0101: hex_low = 7'b0100100; // '5'
        4'b0110: hex_low = 7'b0100000; // '6'
        4'b0111: hex_low = 7'b0001111; // '7'
        4'b1000: hex_low = 7'b0000000; // '8'
        4'b1001: hex_low = 7'b0000100; // '9'
        4'b1010: hex_low = 7'b0001000; // 'A'
        4'b1011: hex_low = 7'b1100000; // 'b'
        4'b1100: hex_low = 7'b0110001; // 'C'
        4'b1101: hex_low = 7'b1000010; // 'd'
        4'b1110: hex_low = 7'b0110000; // 'E'
        4'b1111: hex_low = 7'b0111000; // 'F'
    endcase
end











endmodule
