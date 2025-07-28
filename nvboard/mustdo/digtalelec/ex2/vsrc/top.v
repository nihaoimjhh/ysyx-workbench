module top(
	input [7:0]SW,
	output [2:0]LD,
	output LD4,
	output [6:0]SEG,
	output [7:0]SEG0
);
	assign LD[2]=(~SW[7]&~SW[6]&~SW[5]&SW[4])|(~SW[7]&~SW[6]&SW[5])|(~SW[7]&SW[6])|(SW[7]);
	assign LD[1]=(~SW[7]&~SW[6]&~SW[5]&~SW[4]&~SW[3]&SW[2])|(~SW[7]&~SW[6]&~SW[5]&~SW[4]&SW[3])|(~SW[7]&SW[6])|(SW[7]);
	assign LD[0]=(~SW[7]&~SW[6]&~SW[5]&~SW[4]&~SW[3]&~SW[2]&SW[1])|(~SW[7]&~SW[6]&~SW[5]&~SW[4]&SW[3])|(~SW[7]&~SW[6]&SW[5])|(SW[7]);
	assign LD4=~(~SW[7]&~SW[6]&~SW[5]&~SW[4]&~SW[3]&~SW[2]&~SW[1]);
	assign SEG[6]=(~LD[2]&~LD[1]&LD[0])|(LD[2]&~LD[1]&~LD[0]);
	assign SEG[5]=(LD[2]&~LD[1]&LD[0])|(LD[2]&LD[1]&~LD[0]);
	assign SEG[4]=(~LD[2]&LD[1]&~LD[0]);
	assign SEG[3]=(~LD[2]&~LD[1]&LD[0])|(LD[2]&~LD[1]&~LD[0])|(LD[2]&LD[1]&LD[0]);
	assign SEG[2]=~((~LD[2]&~LD[1]&~LD[0])|(~LD[2]&LD[1]&~LD[0])|(LD[2]&LD[1]&~LD[0]));
	assign SEG[1]=(~LD[2]&~LD[1]&LD[0])|(~LD[2]&LD[1]&~LD[0])|(~LD[2]&LD[1]&LD[0])|(LD[2]&LD[1]&LD[0]);
	assign SEG[0]=(~LD[2]&~LD[1]&~LD[0])|(~LD[2]&~LD[1]&LD[0])|(LD[2]&LD[1]&LD[0]) ;
	assign SEG0={8{1'b1}};


endmodule
