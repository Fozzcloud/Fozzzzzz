#include<stdio.h>
int main(){
    int x,n,a,b,c;
    scanf("%d %d",&x,&n);
    a=(n)/7;
    b=(n)%7;
    if(x+b-1<6){
		c=b;
	} else if(x+b==7){
		c=b-1;
		} else {c=b-2;}
		printf("%d",(5*a+c)*250);
		
		return 0;
	}

	
	
	
	
