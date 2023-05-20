#include<stdio.h>
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    int temp=num;
    while(temp>0)
    {
        int rem;
        rem=temp%10; 
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(num==sum)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}