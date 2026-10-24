#include<stdio.h>
int main(){
	int e;scanf("%d",&e);
	double money;
	if(e<=150){
		money=0.4463*e;
	} else if(e<=400){
		money=150*0.4463+0.4663*(e-150);
	} else {
		money=150*0.4463+250*0.4663+(e-400)*0.5663;
	}
	printf("%.1f\n",money);
	
	return 0;
}
