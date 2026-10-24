#include<stdio.h>
int main(){
	int b,c,d,e;
	float a,f;
	scanf("%f",&a);
	b=a/100,c=(a-100*b)/10,d=((int)a)%10,e=((int)(a*10))%10;
	f=e+d*0.1+c*0.01+0.001*b;
	printf("%.3f",f);
	
	return 0;
}
