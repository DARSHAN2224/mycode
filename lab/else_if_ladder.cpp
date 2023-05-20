#include<stdio.h>
int main()
{
	int a,b,c;
	int small=a,small1=0;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("%d is greater\n",a);
	else if(b>a&&b>c)
	printf("%d is greater\n",b);
	else
	printf("%d is greater\n",c);
}