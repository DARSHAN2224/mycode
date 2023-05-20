#include<stdio.h>
int add(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
   int s;
   int n,m;
   printf("enter two numbers\n");
   scanf("%d%d",&n,&m);
    s=add(n,m);
    printf("%d",s);
    
}
