#include<stdio.h>
int main(){
	int d;
	printf("Enter the number:- ");
	scanf("%d",&d);
	if(d){
		printf("DECIMAL NUMBER---> %d\n",d);
		printf("\nHEXADECIMAL NUMBER---> %x",d);
	}
	else{
		printf("INVALID");
	}
