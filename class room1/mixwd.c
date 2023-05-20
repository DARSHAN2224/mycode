#include<stdio.h>
int main()
{
    int num,even=0,odd=0;
    scanf("%d",&num);
    while(num>0)
    {
        int rem=num%10;
        if(rem%2==0)
        {
        	printf("%d\n",rem);
        	even++;
    	}
        else
        {
        	printf("%d\n",rem);
        	odd++;
    	}
        num=num/10;
    }
    if(even>0&&odd==0)
    printf("Even");
    else
    if(even>0&&odd>0)
    printf("Mixed");
    else
    printf("Odd");
}