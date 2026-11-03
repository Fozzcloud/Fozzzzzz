#include<stdio.h>
int H[20005]={0};
int main(){
	int n,count=0;scanf("%d",&n);
	int A[105]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int sum=A[i]+A[j];
			for(int k=0;k<n;k++){
				if(A[k]==sum){
					if(H[sum]==0){
						count++;
						H[sum]=1;
					}
					break;
				}
			}
		}
	}
	printf("%d",count);

	return 0;
}
