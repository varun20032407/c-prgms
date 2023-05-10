#include<stdio.h>
int main(){
	int arr[5];
	int tm=0,avg,n;
	printf("enter number of elements:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter marks of subject %d:- ",i+1);
		scanf("%d",&arr[i]);
		tm+=arr[i];
	}
	avg=tm/n;
	printf("total:- %d",tm);
	printf("\naverage:- %d",avg);
	return 0;
}
