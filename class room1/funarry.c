#include<stdio.h>
int display(int *b);
int main()
{
    int a[10];
    int n;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        display(&a[i]);
    }
}
    int display(int *b)
    {
        printf("%d ",*b);
    }
    
