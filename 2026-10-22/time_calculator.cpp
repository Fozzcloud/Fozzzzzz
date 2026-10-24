#include<stdio.h>
int main(){
	int a,b,c,d,e,f;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	e=((c-a)*60+d-b)/60;
	f=((c-a)*60+d-b)%60;
	printf("%d %d\n",e,f);
	
	return 0;
}
