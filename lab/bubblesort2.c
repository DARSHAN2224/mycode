#include<stdio.h>
int main()
{
    int n;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elments\n");
    int a[10];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
     for (int j = 0; j < n-1; j++)
     {
        if (a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        
     }
     
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
  
}
