#include<stdio.h>
int main()
{
    int a[100],o[100],e[100],n,l=0,k=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {    
        if(a[i]%2==0)
        {
            e[k]=a[i];
            k++;
        }
        else
        {
            o[l]=a[i];
            l++;
        }
    }
    for(int i=0;i<l;i++)
    {
    printf("%d ",o[i]);
    }
    for(int i=0;i<k;i++)
    {
    printf("%d ",e[i]);
    }
}












