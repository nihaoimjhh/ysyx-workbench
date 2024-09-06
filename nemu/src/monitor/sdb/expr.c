/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <stdlib.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <memory/vaddr.h>
# define MAX_TOKENS 2000
static word_t eval(int p,int q,bool *success);
static int check_parentheses(int p,int q,bool *success);
static int findop(int p,int q);
enum {
  TK_NOTYPE = 256, TK_EQ,TK_NUM,TK_HEXNUM,TK_REG,TK_NOEQ,TK_AND,TK_OR,DEREF,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {
//rules的结构体不需要深究
  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"-", '-'},         
  {"\\*", '*'},         
  {"\\(", '('},         
  {"\\)", ')'},         
  {"/", '/'},         
  {"0x[a-fA-F0-9]+", TK_HEXNUM},//必须把这个放在NUM判断前面，否则前面的0就会被NUM读走，导致x留下然后出现错误         
  {"\\$[a-zA-Z0-9]+", TK_REG},         
  {"[0-9]+", TK_NUM},         
  {"==", TK_EQ},        // equal
  {"!=", TK_NOEQ},        // equal
  {"&&", TK_AND},        // equal
  {"\\|\\|", TK_OR},        // equal
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[MAX_TOKENS] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;
static bool make_token(char *e) {
  word_t temp;
  int position = 0;//初始位置
  bool success=1;
  int i;//遍历规则使用
  regmatch_t pmatch;//存储匹配的结果

  nr_token = 0;//当前已经识别了的数量

  while (e[position] != '\0') {//处理循环
    /* Try all rules one by one. */
	 
    for (i = 0; i < NR_REGEX; i ++) {//遍历rules
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {//so==0的目的是必须要从匹配的串的头匹配成功，不能对一点点。对一点点不算对，直接pass
        char *substr_start = e + position;//字段开始的地方
        int substr_len = pmatch.rm_eo;//匹配字段长度so是0所以eo是匹配字段长度

//        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
//            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;//改变位置再次循环匹配

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
		 success=1;
		 if(rules[i].token_type==TK_NOTYPE) //空格匹配到了就跳过
			 break;
		 tokens[nr_token].type = rules[i].token_type;//匹配到的type按顺序考进tokens,完成args到tokens的转换
        switch (rules[i].token_type) {
		     case TK_NUM:
				 strncpy(tokens[nr_token].str,substr_start,substr_len);//数字拷进str
				 tokens[nr_token].str[substr_len]='\0';
				 break;
			 case TK_HEXNUM:
				 strncpy(tokens[nr_token].str,substr_start,substr_len);//数字拷进str
				 tokens[nr_token].str[substr_len]='\0';
				 temp=(word_t)strtoul(tokens[nr_token].str,NULL,16);//NULL可以放没有处理的部分，由于这里全是16进制数，不需要这个信息，这个是输出信息
				 sprintf(tokens[nr_token].str,"%u",temp);//覆盖，16进制转10进制之后以字符串再写进去 
				 tokens[nr_token].type=TK_NUM;//在这就给他操作了，直接16转10然后处理成数字后面就不用大变
				 break;
			 case TK_REG:
				 strncpy(tokens[nr_token].str,substr_start,substr_len);//数字拷进str
				 tokens[nr_token].str[substr_len]='\0';
				 temp=isa_reg_str2val(tokens[nr_token].str,&success);
				 if(success==0)
					 return false;
				 else{
					 sprintf(tokens[nr_token].str,"%u",temp);
				 }
				 tokens[nr_token].type=TK_NUM;//在这就给他操作了，把寄存器直接当值
				 break;
			 case TK_AND:
				 strncpy(tokens[nr_token].str,substr_start,substr_len);//数字拷进str
				 tokens[nr_token].str[substr_len]='\0';
				 break;
			 case TK_OR:
				 strncpy(tokens[nr_token].str,substr_start,substr_len);//数字拷进str
				 tokens[nr_token].str[substr_len]='\0';
				 break;
			 case TK_NOEQ:
				 strncpy(tokens[nr_token].str,substr_start,substr_len);//数字拷进str
				 tokens[nr_token].str[substr_len]='\0';
				 break;
			 
        }
		 nr_token++;//token数量加1
		 if(nr_token==MAX_TOKENS){
			 printf("The matched expression exceeds MAX_TOKENS:%d\n",MAX_TOKENS);
			 return false;
		 }
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }  
  return true;
}

static int check_parentheses(int p,int q,bool *success){
	 int i;
	 int left=0,right=0;
	 if(tokens[p].type==')'){
		 *success=false; 
		 printf("There is a problem with the brackets\n"); 
		 return false;
	 }//第一个就是)直接错误
     for(i=p;i<=q;i++){
		 if(tokens[i].type=='(')
			 left++;
		 if(tokens[i].type==')')
			 right++;
	 }
	 if(left!=right){
		 *success=false;
		 printf("There is a problem with the number of brackets\n"); 
		 return false;
		 }//先把能想到的排除的先排除了再说。
	 left=0;
	 for(i=p;i<=q;i++){
		 if(tokens[i].type=='(')
			 left++;
		 if(tokens[i].type==')'){
			 left--;
			 if(left==0&&i<q){
				 return false;
				 //防止双括号()()内双括号直接干掉。//打的补丁
			 }
		 }
	 }
	 if(tokens[p].type=='('&&left==0&&tokens[q].type==')')//这里有一次q写成p了，调试的时候编译器直接把p优化了导致运行到上面p就没了，调半天调不出来。回头一瞟。我去,编译器还会吃我的p
		 return true;
	 else
		 return false;
	 if(left<0){*success=false; return false;}//防范于未然

}
static int findop(int p,int q){//到这里的时候先不考虑括号合不合法，假设合法
	 int i=0,op=0,parent=0,flag1=0,flag2=0,flag3=0;//flag用来标记op是不是已经被+-占掉了。+-有最高权利,优先级判定
	 for(i=p;i<=q;i++){//主循环遍历找op,注意多重解引用是第一个为op，不是最后一个和四则运算不一样
		 if(tokens[i].type=='(')
			 parent++;//防止多重嵌套，我开始用的是1和0:
		 if(tokens[i].type==')')
			 parent--;//由于op不可能出现在()里面所以要标记跳过,parent是>0的时候说明现在在括号里面,不用考虑合不合法，在前层函数已经判断过了
		 if(parent>0)
			 continue;
		 else if(parent==0){
			 if(tokens[i].type=='+'||tokens[i].type=='-'){
				 op=i;
				 flag1=1;
			 }
			 if((tokens[i].type=='*'||tokens[i].type=='/')&&flag1==0){
				 op=i;
				 flag2=1;
			 }

			 if((tokens[i].type==TK_EQ||tokens[i].type==TK_NOEQ||tokens[i].type==TK_AND||tokens[i].type==TK_OR)&&flag1==0&&flag2==0){
				 op=i;
				 flag3=1;
		     }
			 		    
		 }
	     }
	 
	 parent=0;
     for(i=p;i<=q;i++){//防止*0x80000000**0x80000000乘号不被识别为第一个op

		 if(tokens[i].type=='(')
			 parent++;//防止多重嵌套，我开始用的是1和0:
		 if(tokens[i].type==')')
			 parent--;//由于op不可能出现在()里面所以要标记跳过,parent是>0的时候说明现在在括号里面,不用考虑合不合法，在前层函数已经判断过了
		 if(parent>0)
			 continue;
		 else if(parent==0){
			 if(tokens[i].type==DEREF&&flag1==0&&flag2==0&&flag3==0){
				 op=i;
				 break;//保证从前面确定op并且不能第一个识别了就break;防止*0x80000000**0x80000000中间运算符直接被先确定为第一个解引用，DEREF应该是最后最后确定
			 }
		 }
	 }
	 return op;
	 	
}
static word_t eval(int p,int q,bool *success){//求val1和val2代表的值,最后相加，如果俩是表达式，则递归。总的来说，总要转化成数字运算数字。数字是表达式。
	int op;
    word_t val1,val2;
	 if(*success==false){return 0;}//一旦错误，立刻返回。
	if(p>q){ *success=false;return 0;}
    else if(p==q){//表达式运算是主要递归目的是数字运算数字，再向上传值。在这里是递归的终点。值运算在后面，其实数字也是特殊的值运算，应该和后面的switch归为一类。
		 if(tokens[p].type==TK_NUM)
			 return (word_t)strtoul(tokens[p].str,NULL,10);
		 else
			 *success=false;
	}
	else if(check_parentheses(p,q,success)==true){//去括号函数
		 return eval(p+1,q-1,success);
	}
	else{
		 op=findop(p,q);
		 if(tokens[op].type==DEREF){
			val1=-1;//确定DEREF现在可以正常操作了，只需要解引用就行了,解引用的运算层次最低
		 }
		 else{
		     val1=eval(p,op-1,success);//一次p写成q了半天找不到错
		 }
		     val2=eval(op+1,q,success);
		 switch (tokens[op].type){//值运算
			 case '+': return val1+val2; break;
			 case '-':
			//		 if(val1<val2){
			//		 printf("The evaluation stops because some part of the expression has a number less than 0. The type is uint_32\n"); 
			//			 *success=false;//感觉负数判断没啥用
			//		 }
			//		 else
					 return val1-val2; 
					 break;
			 case '*': return val1*val2; break;
			 case '/': 
					if(val2!=0)
						 return val1/val2;
					else {
						 *success=false;
						 printf("Arithmetic error occurred.The dividend appears 0\n");
						 return 0;
						 }
			 case TK_EQ: return val1==val2; break;
			 case TK_NOEQ: return val1!=val2; break;
			 case TK_AND: return val1&&val2; break;
			 case TK_OR: return val1||val2; break;
			 case DEREF: 
						 if(val2>=0x80000000&&val2<=0x87ffffff){
							 return vaddr_read(val2,4);
						 }
						 else{
							 printf("Invalid memory address:%u\n",val2);
							 break;
						 }
			default:assert(false);//搞一个这个比较好一点
		 }	
	}
	 return 0;

}
word_t expr(char *e, bool *success) {
	int i;
	*success=1;
  if (!make_token(e)) {
    *success = false;//token这一关都没过就直接返回false就够了
    return 0;
  }

   for (i = 0; i < nr_token; i ++) {
		    if (tokens[i].type == '*' && (i == 0 || (tokens[i - 1].type !=TK_NUM&&tokens[i - 1].type !=')'))) {
			    tokens[i].type = DEREF;
			 }
	}
//     printf("nr_token:%d\n",nr_token);
//	for(i=0;i<nr_token;i++){
//		 if(tokens[i].type==TK_NUM)
//			 printf("|NUM|\t");//看看装进去没有
//		 else if(tokens[i].type==DEREF){
//			 printf("|DEREF|\t");//看看装进去没有
//		 }
//		 else 
//			 printf("|%c|\t",tokens[i].type);
//	}
//	printf("\n");
//	for(i=0;i<nr_token;i++){
//		 printf("|%s|\t",tokens[i].str);//看看装进去没有
//	
//	}
//	printf("\n");


  return eval(0,nr_token-1,success);	

}
