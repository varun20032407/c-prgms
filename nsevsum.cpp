1#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter the input:- ");
	scanf("%d",&n);
	printf("SUM OF SERIES");
	for(i=0;i<=n;i++){
		if(i%2==0){
			sum+=i;
		}
	}
	printf("\n%d",sum);
}
