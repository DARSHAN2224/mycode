#include<stdio.h>
int reverse(int n)
{
	int sum=0,rem;
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	printf("%d ",sum);
}
int main()
{
  reverse(1643);
	
	
	
}