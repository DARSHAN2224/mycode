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
	return sum;
}
int main()
{
	for(int i=100;i<=200;i++)
	if(i==reverse(i))
	printf("%d ",i);
	
	
}