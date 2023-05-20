#include<stdio.h>
void swap()
{   
    int a,b,t;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("%d %d",a,b);
}
int main()
{
    swap();
}
