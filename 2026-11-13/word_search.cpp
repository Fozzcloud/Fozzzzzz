#include<stdio.h>
#include<string.h>
#include<ctype.h>
char word[15];
char text[1000005];
int main(){
	scanf("%s",word);
	getchar();
	scanf("%[^\n]",text);
	int len_word=strlen(word);
	int len_text=strlen(text);
	for(int i=0;i<len_word;i++){
		word[i]=tolower(word[i]);
	}
	for(int i=0;i<len_text;i++){
		text[i]=tolower(text[i]);
	}
	
	int count=0;
	int first_place=-1;
	for(int i=0;i<=len_text-len_word;i++){
		int left_require=(i==0||text[i-1]==' ');
		int right_require=(i+len_word==len_text||text[i+len_word]==' ');
		if(left_require && right_require){
			int num=1;
			for(int j=0;j<len_word;j++){
				if(text[i+j]!=word[j]){
					num=0;
					break;
				}
			}
			if(num==1){
				count++;
			if(first_place==-1){
				first_place=i;
		    	}
			}
		}
	}
	
	if(count==0){
		printf("-1");
	} else {
		printf("%d %d",count,first_place);
	}
	
	return 0;
}
