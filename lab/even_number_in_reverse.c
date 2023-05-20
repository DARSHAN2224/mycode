#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i=num;
	while(i>=2)
	{	
		printf("%d ",i);
		i=i-2;
	}
}