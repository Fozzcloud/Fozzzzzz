#include<stdio.h>
#include<math.h>
int main(){
	int h,r;scanf("%d %d",&h,&r);
	float v;
	v=h*3.14*r*r;
	int n=(int)ceil(20000.0/v);
	printf("%d\n",n);
	
	return 0;
}
