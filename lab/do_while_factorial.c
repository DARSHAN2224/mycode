#include<stdio.h>
int main()
{
	int num,prod=1;
	scanf("%d",&num);
	int i=1;
	do
	{
		prod=prod*i;
		i++;
	}while(i<=num);
	printf("%d",prod);
	
}