#include<stdio.h>
int N[15][15]={0};
int main(){
	int n;scanf("%d",&n);
	int turn=0;
	int turny[4]={0,1,0,-1};//右，下，左，上所对应的x y位移变化
	int turnx[4]={1,0,-1,0};
	int x=0,y=0;
	N[0][0]=1;
	for(int i=2;i<=n*n;i++){
		int willx=x+turnx[turn];
		int willy=y+turny[turn];
		if(willx>=n||willy>=n||willx<0||willy<0||N[willy][willx]!=0){
			turn=(turn+1)%4;//0->1 1->2 2->3 3->0;
		}
		x+=turnx[turn];
		y+=turny[turn];
		N[y][x]=i;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",N[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
