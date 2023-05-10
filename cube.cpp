#include<stdio.h>
int main(){
	int n,t,sum=0;
	printf("Enter the value of n: -");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		t=i*i*i;
		sum+=t;
	}
	printf("%d",sum);
}
