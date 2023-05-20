#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,ele,flag;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elments\n");
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter an element to search\n");
    scanf("%d",&ele);
    for (int i = 0; i < n; i++)
    {
        if (ele==a[i])
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if(flag)
    printf("YES");
    else
    printf("NO");
    return 0;
}
