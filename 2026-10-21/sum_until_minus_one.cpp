#include<stdio.h>
int main (){
	printf("输入整数进行累加并计数直到输入-1\n");
	int num=0,sum=0,count=0;
    //使用scanf的返回值判断输入是否合法（只有整数输入返回值才为1，否则为0），并排除-1的退出条件
	while(scanf("%d",&num)==1 && num!=-1){
		sum+=num;
		count+=1;
	}
	printf("总和是:%d\n",sum);
	printf("有效数字是:%d\n",count);
	
	return 0;
}
