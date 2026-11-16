#include<stdio.h>
int n;
char S[105];
int MAX;
int Compute(){
	int count=0;
	for(int i=0;i<n-1;i++){
		if(S[i]=='V' && S[i+1]=='K'){
			count++;
		}
	}
	return count;
}
int main(){
	scanf("%d",&n);
	scanf("%s",S);
	MAX=Compute();
	for(int i=0;i<n;i++){
		int old=S[i];
		if(S[i]=='V'){
			S[i]='K';
		} else if(S[i]=='K'){
			S[i]='V';
		}
		int temp=Compute();
		if(temp>MAX){
			MAX=temp;
		}
		S[i]=old;
	}
	printf("%d\n",MAX);
	
	return 0;
}
