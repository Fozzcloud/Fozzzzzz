#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand((unsigned int)time(NULL));//基于时间的随机值种子
	int x,y;
	if((scanf("%d %d",&x,&y))!=2){
		printf("输入错误\n");
		return 0;
	}
	if(x>y){
		int z;
		z=x;x=y;y=z;
	}
	int a;a=(double)rand()/RAND_MAX*(y-x)+x;
	printf("猜数字%d~%d\n",x,y);
	int i;
	do{
		if((scanf("%d",&i))!=1){
			printf("输入错误\n");
			return 0;
		} else {
			if(i<a){
			printf("小了\n");
		} else if(i>a){
			printf("大了\n");
		} else {
			printf("对了\n");
		}
		}
	}while(i!=a);
	
	return 0;
}
