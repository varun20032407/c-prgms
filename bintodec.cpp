#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int bin,t,r,y,dec;
	printf("Enter the binary number:- ");
	scanf("%d",&bin);
	t=bin;
	while(t!=0){
		r=t%10;
		if(r!=0&&r!=1){
			printf("Invalid");
			exit(0);
		}
		t=t/10;
	}
	y=bin;
	int n=0;
	while(y!=0){
		r=y%10;
		dec+=r*pow(2,n);
		y=y/10;
		n++;
	}  
	printf("BINARY CODE---> %d",bin);
	printf("\nDECIMAL CODE---> %d",dec);
}




