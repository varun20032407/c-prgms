#include<stdio.h>
int main(){
	int s,e,i;
	int sum=0;
	printf("Enter the starting range:- ");
	scanf("%d",&s);
	printf("Enter the ending range:- ");
	scanf("%d",&e);
	for(i=s;i<=e;i++){
		if(i%2==0){
			sum=sum+i;
			printf("SUM= %d",sum);
		}
	}
}
