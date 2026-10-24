#include<stdio.h>
int main (){
	int num;
	do{
		if(scanf("%d",&num)==0){
			return 0;
		}
		if((num>10)||(num<1)){
			printf("输入错误，请重新输入！\n");
		}
		
	}while((num>10)||(num<1));
	printf("你最终输入的数字是：%d\n",num);
	return 0;
}
