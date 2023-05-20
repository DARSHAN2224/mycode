#include<stdio.h>
int main()
{
	int num,sum=0;
	scanf("%d",&num);
	int i=1;
	while(i<=num)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
	
}