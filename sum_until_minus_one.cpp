#include<stdio.h>
int main (){
	int num=0,sum=0,count=0;
	while(1){
		scanf("%d",&num);
		if(num==-1){
			break;
		}
		sum+=num;
		count+=1;
	}
	printf("总和是：%d\n",sum);
	printf("个数是:%d\n",count);
	
	return 0;
}
