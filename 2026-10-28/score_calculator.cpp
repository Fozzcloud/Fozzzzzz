#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int sum=0,max=0,min=10;
	float con;
	for(int i=0;i<n;i++){
		int score;scanf("%d",&score);
		if(score<min){
			min=score;
		}
		if(score>max){
			max=score;
		}
		sum+=score;
	}
	con=(float)(sum-max-min)/(n-2);
	printf("%.2f\n",con);
	
	return 0;
}
