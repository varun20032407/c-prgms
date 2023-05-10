#include<stdio.h>
int main(){
	printf("\t--EVEN NUMBERS AND ODD NUMBERS--\n");
	int s,e,i;
	int esum=0,osum=0;
	printf("\n\n\t\t\tENTER THE STARTING RANGE--> ");
	scanf("%d",&s);
	printf("\n\t\t\tENTER THE ENDING RANGE--> ");
	scanf("%d",&e);
	for(i=s;i<=e;i++){
		if(i%2==0){
			esum=esum+i;
		}
		else{
			osum=osum+i;
		}
	}
	printf("\t\t\t----SUM OF EVEN===> %d",esum);
	printf("\n\t\t\t----SUM OF ODD===> %d",osum);
	printf("\n\t\t\tTHANK YOU FOR USING THIS PROGRAM!!");
}
