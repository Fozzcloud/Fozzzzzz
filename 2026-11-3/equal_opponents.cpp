#include<stdio.h>
#include<stdlib.h>
int main(){
	int N,count=0;scanf("%d",&N);
	int A[1005][3];
	for(int i=0;i<N;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(int i=1;i<N;i++){
		for(int j=i+1;j<N;j++){
			int sumi=A[i][1]+A[i][2]+A[i][0];
			int sumj=A[j][1]+A[j][2]+A[j][0];
			if(abs(A[i][1]-A[j][1])<=5 &&
			   abs(A[i][2]-A[j][2])<=5 &&
			   abs(A[i][0]-A[j][0])<=5 &&
			   abs(sumi-sumj)<=10){
			   count++;
			}
		}
	}
	printf("%d\n",count);
	
	return 0;
}
