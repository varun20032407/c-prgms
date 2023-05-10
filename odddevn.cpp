#include<stdio.h>
int main(){
	int n;
	printf("ENter the value of n:-");
	scanf("%d",&n);
	if(n>0){
		printf("POSITIVE");
	}
	else if(n==0){
		printf("Nethier positive nor negative");
	}
	else{
		printf("NEGATIVE");
	}
}
