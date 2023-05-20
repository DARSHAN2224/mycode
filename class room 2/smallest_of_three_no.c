#include<stdio.h>
int main()
{
	int a,b,c;
	int small=0,small1=0;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		small=b;
		small1=c;
		printf("%d is greater\n",a);
	}
	else
	{
		if(b>a&&b>c)
		{
		small=a;
		small1=c;
		printf("%d is greater\n",b);
		}
		else
		{
		small=a;
		small1=b;
		printf("%d is greater\n",c);
	}
	if(small<small1)
	printf("%d is smaller",small);
	else
	printf("%d is smaller",small1);
	}
}