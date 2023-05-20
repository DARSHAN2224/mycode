#include<stdio.h>
int main()
{
	int num,prod=1;
	scanf("%d",&num);
	int i=1;
	while(i<=num)
	{
		prod=prod*i;
		i++;
	}
	printf("%d",prod);
	
}