#include<stdio.h>
int main(){
	int d;
	printf("Enter the number:- ");
	scanf("%o",&d);
	if(d){
		printf("OCTAL NUMBER---> %o\n",d);
		printf("\nDECIMAL NUMBER---> %d",d);
	}
	else{
		printf("INVALID");
	}
}

