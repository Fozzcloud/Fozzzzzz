#include<stdio.h>
int A[3005]={0};
int sum[3005]={0};
int main(){
	int n,m;scanf("%d %d",&n,&m);
	int min_sum=99999;
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	for(int i=0;i<=n-m;i++){
		for(int j=i;j<=i+m-1;j++){
			sum[i]+=A[j];
		}
		if(sum[i]<min_sum){
			min_sum=sum[i];
		}
	}
	printf("%d\n",min_sum);
	
	return 0;
}

