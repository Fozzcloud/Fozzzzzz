#include<stdio.h>
#include<math.h>
int main(){
	int m,t,s,num,surplus;scanf("%d %d %d",&m,&t,&s);
	num=ceil(1.0*s/t);
	if(num>=m){
		surplus=0;
	} else {
		surplus=m-num;
	}
	printf("%d\n",surplus);
	
	return 0;
}
