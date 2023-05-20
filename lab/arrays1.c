#include<stdio.h>
int main()
{
	int a[10],skip[10];
	for(int i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
		skip[i]=0;
	}
	for(int i=0;i<4;i++)
	{
		if(a[i]==4)
		{
			skip[i]=1;
		}	
		if(skip[i])
		continue;
		printf("%d",a[i]);
	}
}