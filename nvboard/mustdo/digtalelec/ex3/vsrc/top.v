module top(
	 input [2:0]BTN,
	 input [3:0]SW1,
	 input [3:0]SW2,
	 output [6:0]LD//LD654分别为 结果为0 溢出 进位 
);
	wire [6:0]resul0,resul1,resul2,resul3,resul4,resul5,resul6,resul7;
	wire [6:0]sig0,sig1,sig2,sig3,sig4,sig5,sig6,sig7,temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7;
	add add3(SW1,SW2,resul0);
	subtraction sub3(SW1,SW2,resul1);
	NOT not3(SW1,resul2);
    AND and3(SW1,SW2,resul3);
	OR or3(SW1,SW2,resul4);
	XOR xor3(SW1,SW2,resul5);
	compare c3(SW1[2:0],SW2[2:0],resul6);
	EQ3 eq3(SW1[2:0],SW2[2:0],resul7);
	assign sig0={7{~BTN[2]&~BTN[1]&~BTN[0]}};
	assign sig1={7{~BTN[2]&~BTN[1]&BTN[0]}};
	assign sig2={7{~BTN[2]&BTN[1]&~BTN[0]}};
	assign sig3={7{~BTN[2]&BTN[1]&BTN[0]}};
	assign sig4={7{BTN[2]&~BTN[1]&~BTN[0]}};
	assign sig5={7{BTN[2]&~BTN[1]&BTN[0]}};
	assign sig6={7{BTN[2]&BTN[1]&~BTN[0]}};
	assign sig7={7{BTN[2]&BTN[1]&BTN[0]}};
	assign temp0=sig0&resul0;
	assign temp1=sig1&resul1;
	assign temp2=sig2&resul2;
	assign temp3=sig3&resul3;
	assign temp4=sig4&resul4;
	assign temp5=sig5&resul5;
	assign temp6=sig6&resul6;
	assign temp7=sig7&resul7;
	assign LD=(temp0)|(temp1)|(temp2)|(temp3)|(temp4)|(temp5)|(temp6)|(temp7);





endmodule
module add1(input a,input b,input cin,output sum,output cout);
	 assign {cout,sum}=a+b+cin;
endmodule
module add(input [3:0]SW1,input [3:0]SW2,output [6:0]LD);
	wire cout1,cout2,cout3,cout4,s0,s1,s2,s3;
	wire [2:0]l; 
	 add1 insert_0(SW1[0],SW2[0],1'b0,s0,cout1);
	 add1 insert_1(SW1[1],SW2[1],cout1,s1,cout2);
	 add1 insert_2(SW1[2],SW2[2],cout2,s2,cout3);
	 add1 insert_3(SW1[3],SW2[3],cout3,s3,cout4);
    assign LD[4]=cout4;
	assign LD[5]=cout3^cout4;
	assign LD[3:0]={s3,s2,s1,s0};
	assign l={s2,s1,s0};
	assign LD[6]=~|l;
endmodule

module subtraction(input [3:0]SW1,input [3:0]SW2,output [6:0]LD);
	 wire [3:0]SW2s;
	 wire [3:0]SW0s;
	 assign SW0s=~SW2[3:0]+4'b0001;
	 assign {SW2s[3],SW2s[2:0]}={1'b1,SW0s[2:0]};
	 add insert_0(SW1,SW2s,LD);
endmodule


module NOT(input [3:0]SW1,output [6:0]ld);
	 assign ld={{3{1'b0}},~SW1};
endmodule

module AND(input [3:0]SW1,input [3:0]SW2,output [6:0]ld);
	 assign ld={{3{1'b0}},SW1&SW2};
endmodule
module OR(input [3:0]SW1,input [3:0]SW2,output [6:0]ld);
	 assign ld={{3{1'b0}},SW1|SW2};
endmodule

module XOR(input [3:0]SW1,input [3:0]SW2,output [6:0]ld);
	 assign ld={{3{1'b0}},SW1^SW2};
endmodule


module compare(
    input [2:0] SW1,
    input [2:0] SW2, 
    output [6:0]LD     
);
    wire [2:0] gt, lt;
    wire eq1,eq2,eq0;
    assign gt[2] = SW1[2] & ~SW2[2];
    assign lt[2] = ~SW1[2] & SW2[2];
    assign eq2 = ~(SW1[2] ^ SW2[2]);
    assign gt[1] = eq2 & (SW1[1] & ~SW2[1]);
    assign lt[1] = eq2 & (~SW1[1] & SW2[1]);
    assign eq1 = eq2 & ~(SW1[1] ^ SW2[1]);
    assign gt[0] = eq1 & (SW1[0] & ~SW2[0]);
    assign lt[0] = eq1 & (~SW1[0] & SW2[0]);
    assign eq0 = eq1 & ~(SW1[0] ^ SW2[0]);
    assign LD[6:4] = {3{gt[2] | gt[1] | gt[0]}};
    assign LD[2:0] = {3{lt[2] | lt[1] | lt[0]}};
    assign LD[3] = eq0;
endmodule
module EQ3(
    input [2:0] SW1,
    input [2:0] SW2, 
    output [6:0]LD     
);
    wire [2:0] gt, lt;
    wire eq1,eq2,eq0;
    assign gt[2] = SW1[2] & ~SW2[2];
    assign lt[2] = ~SW1[2] & SW2[2];
    assign eq2 = ~(SW1[2] ^ SW2[2]);
    assign gt[1] = eq2 & (SW1[1] & ~SW2[1]);
    assign lt[1] = eq2 & (~SW1[1] & SW2[1]);
    assign eq1 = eq2 & ~(SW1[1] ^ SW2[1]);
    assign gt[0] = eq1 & (SW1[0] & ~SW2[0]);
    assign lt[0] = eq1 & (~SW1[0] & SW2[0]);
    assign eq0 = eq1 & ~(SW1[0] ^ SW2[0]);
    assign LD={7{eq0}};
endmodule
