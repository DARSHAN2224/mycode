#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    int sum=*p+*q;
    printf("%d",sum);
}