#include<stdio.h>
int main(){
	int d;
	printf("Enter the number:- ");
	scanf("%x",&d);
	if(d){
		printf("HEXADECIMAL NUMBER---> %x\n",d);
		printf("\nDECIMAL NUMBER---> %d",d);
	}
	else{
		printf("INVALID");
	}
}
