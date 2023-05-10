#include<stdio.h>
int x,n;
int add(int x,int n){
	return x+n;
}
int sub(int x,int n){
	return x-n;
}
int mul(int x,int n){
	return x*n;
}
int div(int x,int n){
	return x/n;
}
int power(int x,int n){
	if(n==0)
	return 1;
	else if(n%2==0)
	return power(x,n/2)*power(x,n/2);
	else
	return x*power(x,n/2)*power(x,n/2);
}
int main(){
	int x,n,ch;
	printf("1.ADD");
	printf("\n2.SUB");
	printf("\n3.MULTI");
	printf("\n4.DIV");
	printf("\n5.POW");
	scanf("%d",&ch);
	printf("Enter the value of x:- ");
	scanf("%d",&x);
	printf("Enter the value of n:- ");
	scanf("%d",&n);
	switch(ch){
		case 1:{
			printf("ADD= %d",add(x,n));
			break;
		}
		case 2:{
			printf("SUB= %d",sub(x,n));
			break;
		}
		case 3:{
			printf("MULTI= %d",mul(x,n));
			break;
		}
		case 4:{
			printf("DIV= %d",div(x,n));
			break;
		}
		case 5:{
			printf("POWER= %d",power);
			break;
		}
		default:
			printf("INVALID");
	}
	return 0;
}
