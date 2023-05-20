#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        int smal=i;
        for (int j= i+1; j < n; j++)
        {
            if (a[smal]>a[j])
            {
                smal=j;
            }
            
        }
        int t=a[smal];
        a[smal]=a[i];
        a[i]=t;
        
    }
    
     for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}
