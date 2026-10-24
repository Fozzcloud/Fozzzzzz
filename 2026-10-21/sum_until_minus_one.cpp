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
	printf("×ÜºÍÊÇ£º%d\n",sum);
	printf("¸öÊýÊÇ:%d\n",count);
	
	return 0;
}
