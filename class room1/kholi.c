#include<stdio.h>
int main()
{
    int x,num1,num2,num;
    scanf("%d",&x);
	if(x%15==5)
    num=x/15+2;
    else if(x%15==10)
    num=x/15+1;
    else 
    num=-1;
    printf("%d",num);
}