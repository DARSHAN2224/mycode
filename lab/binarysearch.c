#include<stdio.h>
int main()
{
    int n,pos;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in sorted order\n");
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Enter the element to search\n");
    int ele;
    scanf("%d",&ele);
    int beg=0;
    int end=n-1,flag=0;
    while (beg<=end)
    {
        int m =(beg+end)/2;
         if (a[m]==ele)
        {
            flag=1;
            pos=m;
            break;
        }
        else
        if (a[m]>ele)
        end=m-1;
        else
        beg=m+1;
        
    }
    if (flag)
    {
        printf("Element is found at %d index",pos);
    }
    else
    printf("Element not found in the list");
}