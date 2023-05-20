#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,ele,flag=0,beg=0,las;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elments\n");
    int a[n];
    las=n-1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter an element to search\n");
    scanf("%d",&ele);
    while (beg<=las)
    {  
        int m=(beg+las)/2;
        if (ele==a[m])
        {
            flag=1;
            break;
        }
        else
        if(ele>a[m])
        {
            las=m-1;
        }
        else
        {
            beg=m+1;
        }
    }
    if(flag)
    printf("YES");
    else
    printf("NO");
    return 0;
}
