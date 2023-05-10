#include<stdio.h>
int main(){
	int d;
	printf("Enter the number:- ");
	scanf("%d",&d);
	if(d){
		printf("DECIMAL NUMBER---> %d\n",d);
		printf("\nOCTAL NUMBER---> %o",d);
	}
	else{
		printf("INVALID");
	}
}
