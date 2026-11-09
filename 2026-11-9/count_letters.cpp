#include<stdio.h>
char input[4][105]={0};
char output[405][30]={0};
int main(){
	int letter[26]={0};
	int MAX=0;
	for(int i=0;i<4;i++){
		scanf(" %[^\n]",input[i]);
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<105;j++){
			if(input[i][j]>='A' && input[i][j]<='Z'){
				int a=input[i][j]-65;
				letter[a]++;
				if(letter[a]>MAX){
					MAX=letter[a];
				}
			}
		}
	}
	for(int i=0;i<26;i++){
		for(int j=0;j<letter[i];j++){
			output[MAX-j-1][i]=1;
		}
	}
	for(int i=0;i<MAX;i++){
		int last=-1;
		for(int j=0;j<26;j++){
			if(output[i][j]==1){
				last=j;
			}
		}
		if(last!=-1){
		for(int j=0;j<=last;j++){
			if(output[i][j]==0){
				printf(" ");
			} else if(output[i][j]==1){
				printf("*");
			}
			if(j<last){
				printf(" ");
			}
		}
		printf("\n");
		}
	}
	for(int i=0;i<26;i++){
		printf("%c",i+65);
		if(i<25){
			printf(" ");
		}
	}
	
	return 0;
}
