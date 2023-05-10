#include<stdio.h>
int main(){
	int arr[100],n,i,sum;
	printf("Enter the number of elements:- ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the element:- ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("Sum--> %d",sum);
	printf("Average--> %d",sum/n);
}
