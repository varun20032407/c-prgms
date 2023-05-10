#include<stdio.h>
int main()
{
	// Declaring Variables
	float x=1.9,y=2.4;
	int a,b;

	printf("Value Of x:%f",x);
	printf("Value Of y:%f",y);

	// Simple Conversion

	a = (int)(x+0.5);
	b = (int)(y+0.5);
	printf("Value Of a:%d",a);
	printf("Value Of b:%d",b);
}
