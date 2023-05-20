#include<stdio.h>
int rec(int n)
{   
    int f=1;
    if(n==1)
    return 1;
    else
    {
    return n*rec(n-1);
    f=f*n;
    }
    return f;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int r=rec(n);
    printf("%d",r);
    return 0;
}
