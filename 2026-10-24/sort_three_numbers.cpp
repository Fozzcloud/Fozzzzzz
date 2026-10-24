#include<stdio.h>
int main(){
	int a,b,c,d,e;scanf("%d %d %d",&a,&b,&c);
	if(a>=b){
		d=a,a=b,b=d;
	}
	if(c<a){
		d=a,e=b,a=c,b=d,c=e;
	} else if(c>=a && c<b){
		d=b,b=c,c=d;
	}
	printf("%d %d %d\n",a,b,c);
	
	return 0;
}
