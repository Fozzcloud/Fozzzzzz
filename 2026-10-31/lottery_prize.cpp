#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int p[7];
	int con[8];
	for(int i=0;i<7;i++){
		int prize;scanf("%d",&prize);
		p[i]=prize;
	}
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<7;j++){
			for(int k=0;k<7;k++){
				int a;scanf("%d",&a);
				if(a==p[k]){
					count++;
				}
			}
		}
	con[count]++;
}	
		for(int i=7;i>0;i--){
			printf("%d\n",con[i]);
		}
		
	return 0;
}
