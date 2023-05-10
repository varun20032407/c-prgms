#include<stdio.h>
#include<math.h>
float p,n,r;
float si(float p,float n,float r){
return (p*n*r)/100;	
}
int main(){
	float p,n,r;
	char ch[100];
	printf("Enter value of principal amount:- ");
	scanf("%f",&p);
	printf("Enter value of no.of years:- ");
	scanf("%f",&n);
	printf("Is customer senior citizen(y/n):- ");
	scanf("%s",&ch);
	if(ch=="y"||"Y"){
		printf("SIMPLE INTEREST:- %f",si(p,n,12));
	}
	else if(ch=="n"||"N"){
		printf("SIMPLE INTEREST:- %f",si(p,n,10));
	}
	else{
		printf("INVALID");
	}
}
