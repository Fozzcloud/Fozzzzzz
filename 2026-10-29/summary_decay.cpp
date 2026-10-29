#include<stdio.h>
int main(){
	int n=0;
	float s;scanf("%f",&s);
	float sum=0,a=2.0;
	while(sum<s){
		sum+=a;
		a*=0.98;
		n++;
	}
	printf("%d\n",n);

	return 0;
}
