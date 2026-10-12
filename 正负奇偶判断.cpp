#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if((a>0) && (a%2==0)){printf("%d是正数，并且是偶数\n",a);}
    if((a>0) && (a%2!=0)){printf("%d是正数，并且是奇数\n",a);}
    if((a<0) && (a%2==0)){printf("%d是负数，并且是偶数\n",a);}
	if((a<0) && (a%2!=0)){printf("%d是负数，并且是奇数\n",a);}
	if((a==0)){printf("%d既不是正数也不是负数，并且是偶数\n",a);}
	
	return 0;
}
