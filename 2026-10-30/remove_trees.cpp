#include<stdio.h>
const int MAX_L=10005;
int trees[MAX_L];
int main(){
	int l,m;scanf("%d %d",&l,&m);
	for(int i=0;i<=l;i++){
		trees[i]=1;
	}	
	for(int c=1;c<=m;c++){
		int a,b;scanf("%d %d",&a,&b);
		for(int i=a;i<=b;i++){
			trees[i]=0;
		}
	}
	int sum=0;
	for(int i=0;i<=l;i++){
		sum+=trees[i];
	}
	  printf("%d\n",sum);
	  
	return 0;
}
