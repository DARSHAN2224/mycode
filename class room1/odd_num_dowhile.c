#include<stdio.h>
int main()
{
	int num,i=1;
	scanf("%d",&num);
	do
	{
		if(i%2!=0)
		printf("%d ",i);
		i++;
	}while(i<=num);
}