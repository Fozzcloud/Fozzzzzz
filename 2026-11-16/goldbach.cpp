#include<stdio.h>

int IsPrime(int n){
	if(n<=1){
		return 0;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int N;scanf("%d",&N);
	for(int i=4;i<=N;i+=2){
		for(int j=2;j<=i/2;j++){
			int k=i-j;
			if(IsPrime(j) && IsPrime(k)){
				printf("%d=%d+%d\n",i,j,k);
				break;
			}
		}
	}
	
	return 0;
}
