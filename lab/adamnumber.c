#include<stdio.h>
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    int t=num;
    while(num>0)
    {
        int rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    int temp=sum*sum,sum1=0;
    printf("%d\n",temp);
    while(temp>0)
    {
        int rem=temp%10;
        sum1=sum1*10+rem;
        temp=temp/10;
    }
//    printf("%d\n%d",sum1,num*num);
    
    if((t*t)==sum1)
    printf("True");
    else
    printf("False");
}