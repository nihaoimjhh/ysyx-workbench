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

#include "sdb.h"

#define NR_WP 5

/*typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  TODO: Add more members if necessary 
} WP;*/

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].remove = 1;//逻辑删除
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    wp_pool[i].expr[0]='\0';
  }

  head = NULL;
  free_ = wp_pool;
}
WP *new_wp(bool *success){//把free从第一个断了，然后接到head里面
	 WP *freetemp=NULL;
	 WP *headtemp=NULL;
	 if(free_==NULL){
		 *success=false;
		 printf("The number of monitors is running out. Please delete one\n");
	 }
	 else{
		 freetemp=free_;//取头
		 free_=free_->next;//断头
		 freetemp->next=NULL;//封口
		 if(head==NULL){//头就是空的，和下面那种情况不一样
	         head=freetemp;

			 freetemp->remove=0;
		 }
		 else{
		 for(headtemp=head;headtemp->next!=NULL;headtemp=headtemp->next){}//遍历已有监视点，找到末尾
			 headtemp->next=freetemp;//续尾
			 freetemp->remove=0;
		 }
	 }
	 return freetemp;//接收返回值后直接用就行
};
WP *free_wp(WP *wp,bool *success){
	 WP *freetemp=NULL;
	 WP *headtemp=NULL;
	 if(wp==NULL){
		 *success=false;
		 return free_;
	 }
	 if(wp->remove==1){
		 *success=false;
		 printf("The watch is not enabled\n");
	 }
	 else{
		 wp->expr[0]='\0';//清除才能用strcpy
		 wp->ans=0;
		 if(head==wp){//头指的就是要删的
			 headtemp=head;//取头
			 head=head->next;//断头
			 headtemp->next=NULL;//封口
			 if(free_==NULL){//头就是空的和下面情况不一样
				 free_=headtemp;
				 wp->remove=1;
			 }
			 else{
				 for(freetemp=free_;freetemp->next!=NULL;freetemp=freetemp->next){}//遍历空，找到末尾
					 freetemp->next=headtemp;//续尾
					 wp->remove=1;
			 }
		 }
		 else{
			 for(headtemp=head;headtemp->next!=wp;headtemp=headtemp->next){

			 			 }//遍历已有监视点，找到需要删除的监视点的上一个指针
		     if(free_==NULL){//头就是空的和下面情况不一样
				 free_=headtemp->next;
				 headtemp->next=headtemp->next->next;//删点
				 free_->next=NULL;//封口，不封口new的时候死循环
				 free_->remove=1;
			 }
			 else{
				 for(freetemp=free_;freetemp->next!=NULL;freetemp=freetemp->next){}//遍历空，找到末尾
					 freetemp->next=headtemp->next;//续尾
					 headtemp->next=headtemp->next->next;//删点删点应该在封口之前不然报错
					 freetemp->next->next=NULL;//封口
					 freetemp->next->remove=1;
			 } 
		 }
	 
	 }
	 return free_;
}
/* TODO: Implement the functionality of watchpoint */
WP *wp_creat(char *args,word_t ans,bool *success){
	 WP *headtemp=NULL;
	 headtemp=new_wp(success);
	 if(*success){
		 strcpy(headtemp->expr,args);
		 headtemp->ans=expr(args,success);
	 }
	 
	 return headtemp;

}
void wp_remove(char *args){	 
 	 int N=0;
	 int i=0;
	 int remove=0;
	 bool success=true;
	 if(strcmp(args,"all")==0){
		 for(i=0;i<NR_WP;i++){
	   	  	 if(wp_pool[i].remove==0){
	   		     free_wp(&wp_pool[i],&success);
	   		     if(!success){
	   		         printf("There was an error in deleting a watchpoint:%d\n",i);
	   		     }
	   		     else{
	   		         printf("Deleted watchpoint:%d successfully\n",i);
					 remove=1;
	   		     }
		     }
		 }
		 if(remove==0)
			 printf("No watchpoints to delete\n");
	 }
	 else if(!sscanf(args,"%d",&N)){
			 printf("Please enter the serial number you want to delete\n");
	 }
	 else if(sscanf(args,"%d",&N)){
		 if(N>=NR_WP){
			 printf("There are only %d watchpoints\nWatchpoint NO.%d does not exist\n",NR_WP,N);
		 }
		 else{
			 free_wp(&wp_pool[N],&success);
			 if(!success){
				 printf("There was an error in deleting a watchpoint:%d\n",N);
			 }
			 else{
				 printf("Deleted watchpoint:%d successfully\n",N);
			 }
		 }
     }
}
void wp_print(){
	 int i,flag=0;
	 for(i=0;i<NR_WP;i++){
		 if(wp_pool[i].remove==0){
			 flag=1;
			 printf("NO.%d\texpr:%s\tnowans:%u\n",wp_pool[i].NO,wp_pool[i].expr,wp_pool[i].ans);
		 }
	 }
	 if(flag==0){
		 printf("no watchpoints\n");
	 }
}
int wp_check(){
	 int i=0,flag=0;
	 word_t newans;
	 bool success;
	 for(i=0;i<NR_WP;i++){
		 if(wp_pool[i].remove==1) continue;
		 else{
			 newans=expr(wp_pool[i].expr,&success);
			 if(newans!=wp_pool[i].ans){
				 printf("expr:%s                 NO.%d\nOld value = %u\nNew value = %u\n",wp_pool[i].expr,i,wp_pool[i].ans,newans);
				 wp_pool[i].ans=newans;
				 flag=1;
			 }
		 }
	 
	 }
	 return flag;
}














