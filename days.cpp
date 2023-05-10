#include<stdio.h>
int main(){
	int n,y,w,d;
	printf("Enter number of days:- ");
	scanf("%d",&n);
	if(n>0){
	y=n/365;
	w=(n%365)/7;
	d=(n%365)%7;
	printf("No.of years:- %d",y);
	printf("\nNo.of weeks:- %d",w);
	printf("\nNo.of days:- %d",d);
}
else{
	printf("INVALID");
}
}
