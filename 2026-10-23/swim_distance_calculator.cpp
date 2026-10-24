#include<stdio.h>
int main(){
	int x,n,a=0;scanf("%d %d",&x,&n);
	for(int i=x;i<x+n;i++){
		if((i+1)%7==0||i%7==0){
			a++;
		}
		}
	printf("%d\n",(n-a)*250);
	
	return 0;
}
