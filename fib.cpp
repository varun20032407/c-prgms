s
#include<stdio.h>
int main(){
	int a=0,b=1;
	int n,i;
	int c;
	printf("Enter the n value--> ");
	scanf("%d",&n);
	if(n==1){
		printf("%d \n",a);
	}
	else{
		printf("%d \n",a);
		printf("%d \n",b);
		for(i=2;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d \n",c);	
		}
	}
}
