#include<stdio.h>
int main(){
	int n=0,k;
	double sum=0.0;
	scanf("%d",&k);
	while(sum<=k){
		sum+=1.0/(1+n);
		n++;
	} 
	printf("%d\n",n);
	
	return 0;
}
