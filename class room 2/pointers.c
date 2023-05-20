#include<stdio.h>
int main()
{
    int b=10,c;
    int *a;
    a=&b;
    printf("%d\n",a);
    printf("%d\n",&b);
    printf("%d\n",*a);
    return 0;
}
