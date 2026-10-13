#include<stdio.h>
int main(){
	int a;
	while(1){
		
	
	printf("请输入分数：\n");
	scanf("%d",&a);
    if((a>=0) && (a<=100)){
		if(a>=90){
			printf("优秀\n");
		}else if(a>=80){
			printf("良好\n");
		}else if(a>=60){
			printf("及格\n");
		}else{
		    printf("不及格\n");
			}
	}
	else{
	printf("输入错误\n");
	
	}
		}
			return 0;	
		

}		
	

	
	

