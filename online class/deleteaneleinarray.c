#include<stdio.h>
int main()
{
    int n,ele,pos;
    printf("enter the array size\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements\n");
    for (int i = 0; i < n; i++)
    scanf("%d",&a[i]);
    printf("enter the position to delete\n");
    scanf("%d",&pos);
    ele=a[pos];
    for (int i = pos; i <n ; i++)
    a[i]=a[i+1];
    n--;
    for (int i = 0; i < n; i++)
    printf("%d ",a[i]);
    printf("\nthe element deleted is %d",ele);
}