#include<stdio.h>
char map[105][105];
int main(){
	int m,n;
	while(scanf("%d %d",&m,&n)!=EOF && (m!=0||n!=0)){
		for(int i=0;i<m;i++){
			scanf("%s",map[i]);
		}
    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(map[i][j]=='*'){
				printf("*");
			} else {
				int count=0;
				for(int k=-1;k<=1;k++){
					for(int l=-1;l<=1;l++){
						if(k==0 && l==0){
							continue;
						}
						int nx=i+k;
						int ny=j+l;
						if(nx>=0 && nx<m && ny>=0 &&ny<n && map[nx][ny]=='*'){
							count++;
						}
					}
				}
				printf("%d",count);
			}
		}
		printf("\n");
	}
	printf("\n");
}
	
   return 0;
}
