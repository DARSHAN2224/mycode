#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i=num;
	while(i>=1)
	{	
	 	if(i%2!=0)
		printf("%d ",i);
		i--;
	}
}