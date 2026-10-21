#include<stdio.h>
int main (){
	int num=0,sum=0,count=0;
	while(scanf("%d",&num)==1&&(num!=-1)){
		sum+=num;
		count+=1;
	}
	printf("总和是：%d\n",sum);
	printf("个数是:%d\n",count);
	
	return 0;
}
