#include<stdio.h>
int main()
{
	int x=3,k=2,y;
	y=x++ - --k;
	printf("x = %d k = %d y = %d",x,k,y);
}