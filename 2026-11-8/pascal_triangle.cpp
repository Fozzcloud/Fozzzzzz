#include<stdio.h>
int N[25][25]={0};
int main(){
	N[1][1]=1;
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i;j++){
			N[i][j]=N[i-1][j-1]+N[i-1][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d",N[i][j]);
			if(j!=i){
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
