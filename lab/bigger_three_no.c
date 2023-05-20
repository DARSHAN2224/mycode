#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("%d is greater",a);
	}
	
	if(b>c)
	{
		if(b>a)
		printf("%d is greater",b);
	}
		if(c>a)
	{
		if(c>b)
		printf("%d is greater",c);
	}

	
}