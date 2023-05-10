#include<stdio.h>
int main(){
	int sum[20],rem=0,i=0,b1,b2;
	printf("Enter the value 1:- ");
	scanf("%d",&b1);
	printf("Enter the value 2:- ");
	scanf("%d",&b2);
	while(b1!=0 || b2!=0){
		sum[i++]=(b1%10+b2%10+rem)%2;
		rem=(b1%10+b2%10+rem)/2;
		b1=b1/10;
		b2=b2/10;
	}
	if(rem!=0){
		sum[i++]=rem;
		--i;
		printf("SUM OF TWO BINARY NUMBERS---> ");
	}
	while(i>=0){
		printf("%d",sum[i--]);
	}
}
