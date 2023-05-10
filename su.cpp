#include<stdio.h>
int main(){
	int tu,stu,su;
	printf("Enter no.of total users:- ");
	scanf("%d",&tu);
	printf("Enter total no.of staff users:- ");
	scanf("%d",&stu);
	if(tu>0&&tu>su){
	su=tu-stu-stu/3;
	printf("student users:-%d ",su);
	}
	else{
		printf("INVALID");
	}
	return 0;
	
}
