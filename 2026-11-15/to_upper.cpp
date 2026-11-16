#include<stdio.h>
#include<ctype.h>
#include<string.h>
char text[105];
int main(){
	scanf("%s",text);
	int len=strlen(text);
	for(int i=0;i<len;i++){
		text[i]=toupper(text[i]);
	}
	printf("%s",text);
	
	return 0;
}
