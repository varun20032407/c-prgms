#include<Stdio.h>
#include<String.h>
dec(char a)
{
	if(a=='1')
	{
		return 1;
	}
	else if(a=='2')
	{
		return 2;
	}
	else if(a=='3')
	{
		return 3;
	}
	else if(a=='4')
	{
		return 4;
	}
	else if(a=='5')
	{
		return 5;
	}
	else if(a=='6')
	{
		return 6;
	}
	else if(a=='7')
	{
		return 7;
	}
	else if(a=='8')
	{
		return 8;
	}
	else if(a=='9')
	{
		return 9;
	}
	else if(a=='a')
	{
		return 10;
	}
	else if(a=='b')
	{
		return 11;
	}
	else if(a=='c')
	{
		return 12;
	}
	else if(a=='d')
	{
		return 13;
	}
	else if(a=='e')
	{
		return 14;
	}
	else 
	{
		return 15;
	}
}
int main()
{
	int i,h[10],p=1,n,d=0;
	char s[10];
	printf("Enter N:");
	scanf("%s",s);
	i=strlen(s)-1;
	while(i>=0)
	{
		h[i]=dec(s[i]);
		d=d+(h[i]*p);
		p*=16;
		i--;
	}
	printf("decimal valude=%d",d);
}
