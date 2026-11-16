#include<stdio.h>
struct student{
	char name[100];
	int age;
	int score;
};
struct student train(struct student s){
	s.age++;
	s.score=s.score*120/100;
	if(s.score>600){
		s.score=600;
		}return s;
	
};
struct student cls[1005];
int main(){
	int n;scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d %d",cls[i].name,&cls[i].age,&cls[i].score);
	}
	for(int i=0;i<n;i++){
		cls[i]=train(cls[i]);
		printf("%s %d %d\n",cls[i].name,cls[i].age,cls[i].score);
	}
	
	return 0;
}

