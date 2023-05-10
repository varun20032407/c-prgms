#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter the input:- ");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("SUM OF SERIES");
	for(i=0;i<=n;i++){
		if(i!=n){
			printf("%d +",i);
		}
		else{
			printf("%d = %d",i,sum);
		}
	}
}
