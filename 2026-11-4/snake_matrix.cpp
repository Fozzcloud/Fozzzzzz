#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int N[n][n];
	int q=0;int w=0;//顺着蛇形推进并记录
	int in=1;
	for(int w=0;w<n;w++){
		N[0][w]=in;
		in++;
	}
	int t=n-1;//每两次同方向推进后推进距离减1
	while(N[q][w]<n*n){
		for(int i=0;i<=1;i++){//循环两次每两次同方向推进距离相同
			for(int i=0;i<t;i++){
				q++;N[q][w]=in;in++;
			}
			t-=1;
		}
		for(int i=0;i<=1;i++){
			for(int i=0;i<t;i++){
				w--;N[q][w]=in;in++;
			}
			t-=1;
		}
		for(int i=0;i<=1;i++){
			for(int i=0;i<t;i++){
				q--;N[q][w]=in;in++;
			}
			t-=1;
		}	
		for(int i=0;i<=1;i++){
			for(int i=0;i<t;i++){
			    w++;N[q][w]=in;in++;
			}
			t-=1;
		}	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",N[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
