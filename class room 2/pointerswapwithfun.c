#include<stdio.h>
int swap(int *x,int *y);
int main()
{
    int a=10,b=20,c;
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
int swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}