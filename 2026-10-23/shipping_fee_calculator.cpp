#include<stdio.h>
#include<math.h>
int main(){
	float W,X,prize;
	scanf("%f %f",&W,&X);
	if(W<=0||X<=0){
		printf("Error");
		return 0;
	}else if(W<=1){
		prize=8;
	}else if(W<=3){
		prize=8+(W-1)*3;
	}else if(W<=10){
		prize=14+(W-3)*2;
	}else {
		prize=28+(W-10)*1.5;
	}
	if(X<=100){
		
	}else if(X<=500){
		prize*=1.2;
	}else if(X<=1000){
		prize*=1.5;
	}else {
		prize*=1.8;
	}
	printf("%d\n",(int)ceil(prize));
	
	return 0;
}
