#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    int t=*p;
    *p=*q;
    *q=t;
    printf("a=%d b=%d",a,b);
}