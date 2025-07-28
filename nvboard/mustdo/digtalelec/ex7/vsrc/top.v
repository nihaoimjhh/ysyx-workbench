module top(input clk,input rst ,input ps2_clk,input ps2_data,output [6:0]zero1,output [6:0]zero2,output reg [7:0]outdata,output reg LD,output reg [7:0]count,output reg [6:0]count_high,output reg [6:0]count_low,output reg [6:0]key_code_high,output reg [6:0]key_code_low,output reg [6:0]ascii_high,output reg [6:0]ascii_low);
	parameter push=1,loos=0;
	reg state,next_state;
	reg [7:0]key_code;
	reg tep=1;
	reg [7:0]temp=8'b0;




     always@(posedge ps2_clk)begin
		 case(state)
			 push:next_state<=(key_code==8'hf0)?loos:push;
			 loos:next_state<=(key_code==8'hf0)?loos:push;
		 endcase
	 end
	assign zero1=7'b1111111;
	assign zero2=7'b1111111;
	ps2_keyboard my_keyboard(.clk(clk),.resetn(~rst),.ps2_clk(ps2_clk),.ps2_data(ps2_data),.outdata(outdata));
	SEG my_countSEG(count,count_high,count_low);
	SEGstate my_codeSEG(outdata,key_code_high,key_code_low,state);
	SEGascii my_ascii(outdata,ascii_high,ascii_low,state);	
	always@(posedge ps2_clk or posedge rst)begin
		if(rst)begin
			state<=loos;
			count<=8'b0;
		end
		else
			state<=next_state;
		 $display("state%x next_state%x",state,next_state);
	end
	always@(posedge ps2_clk or posedge rst)begin
		if(key_code==8'hf0)begin
			tep<=1;
		end
		if(~tep)
			key_code<=outdata;
		else
			tep<=0;
	
		if(state&~next_state)
			  count<=count+1;
		else
			count<=count;

     //   $display("key_code %x",key_code);
       // $display("count %x",count);

	end



endmodule
