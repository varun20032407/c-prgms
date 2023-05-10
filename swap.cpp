#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the first number:- ");
	scanf("%d",&a);
	printf("Enter the second number:- ");
	scanf("%d",&b);
	printf("BEFORE SWAP\n");
	printf("%d \n",a);
	printf("%d \n",b);
	c=a;
	a=b;
	b=c;
	printf("AFTER SWAP\n");
	printf("%d \n",a);
	printf("%d",b);
}
