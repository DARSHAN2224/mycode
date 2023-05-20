#include<stdio.h>
int main()
{
	int num,i=2;
	scanf("%d",&num);
	do
	{
		printf("%d ",i);
		i=i+2;
	}while(i<=num);
}