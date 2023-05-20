#include<stdio.h>
int main()
{
	int i,j,num,p=1;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=p;j++)
		{
			printf("*");
		}
		printf("\n");
		p++;
	}
}