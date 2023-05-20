#include<stdio.h>
int main()
{
    int a=10;
    char b='c';
    int *ptr;
    ptr=&a;
    // printf("%d%d",ptr,&a);
    printf("%d\n",ptr+1);
    printf("%d\n",ptr);
    printf("%d\n",sizeof(int));
}