#include<stdio.h>
int main()
{
	int num,sum=0;
	scanf("%d",&num);
	int i=1;
	do
	{
		sum=sum+i;
		i++;
	}while(i<=num);
	printf("%d",sum);
	
}