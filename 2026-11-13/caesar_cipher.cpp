#include<stdio.h>
#include<string.h>
int main(){
	int num;scanf("%d",&num);
	char text[55];scanf("%s",text);
	int len=strlen(text);
	for(int i=0;i<len;i++){
		if(text[i]+num>'z'){
			text[i]+=num-26;
		} else {
			text[i]+=num;
		}
	}
		printf("%s",text);
	
	
	return 0;
}
