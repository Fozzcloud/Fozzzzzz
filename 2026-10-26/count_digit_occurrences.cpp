#include<stdio.h>
int main(){
	int x,n,count=0;
printf("输入n x求1~n中x出现次数\n");
	scanf("%d %d",&n,&x);
	for(int i=1;i<=n;i++){
		for(int t=i;t!=0;t/=10){
			if(t%10==x){
				count++;
			}
		}
	}
	printf("%d\n",count);
	
	return 0;
}
