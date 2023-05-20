#include<stdio.h>
int reverse(int num)
{
    int rem,sum=0;
    while (num>0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    return sum;
    
}
int main(int argc, char const *argv[])
{
int sum=reverse(1425);
printf("%d",sum);
    
}
