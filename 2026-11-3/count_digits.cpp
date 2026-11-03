#include<stdio.h>
int main(){
	int M,N;scanf("%d %d",&M,&N);
	int count[10]={0};
	for(int i=M;i<=N;i++){
		int b=i;
		while(b!=0){
			int a=b%10;
			count[a]++;
			b/=10;
		}
		
	}
	printf("%d",count[0]);
	for(int i=1;i<=9;i++){
		printf(" %d",count[i]);
	}
	
	return 0;
}
