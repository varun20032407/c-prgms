#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the input:- ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(n%2==0){
		printf("%d \n",i);	
		}
	}
}