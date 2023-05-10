#include<stdio.h>
int main(){
	int e,n,p;
	int m;
	printf("\n\t\t\t------>CYCLOMATIC COMPLEXITY<------\n");
	printf("\n\t\t\t\tENTER THE NUMBER OF EDGES---> ");
	scanf("%d",&e);
	printf("\n\t\t\t\tENTER THE NUMBER OF NODES---> ");
	scanf("%d",&n);
	printf("\n\t\t\t\tENTER THE NUMBER OF PREDICATE NODES---> ");
	scanf("%d",&p);
	m=e-n+(2*p);
	printf("\n\n\t\t\t\t\t<----THE CYCLOMATIC COMPLEXITY OF THE GRAPH----> %d",m);
}
