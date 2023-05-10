#include<stdio.h>
#include<math.h>
float si(float p,float n,float r){
return p*n*r/100;	
}
int main(){
	float p,n,r;
	char ch[100];
	printf("Enter value of principal amount:- ");
	scanf("%f",&p);
	printf("Enter value of no.of years:- ");
	scanf("%f",&n);
	printf("Enter rate of interest:- ");
	scanf("%f",&r);
	printf("SIMPLE INTEREST:- %f",si(p,n,r));
}
