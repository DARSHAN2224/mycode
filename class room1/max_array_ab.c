#include<stdio.h>
int main()
{
    int ar[100],n,a,b,max=0,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++)
    {
        if(ar[i]<a||ar[i]>b)
        {
            max=0;
            if(ar[i]>max)
            {
                count++;
              max=ar[i];  
            }
        }
    }
    if(count==0)
    printf("-1");
    else
    printf("%d",max);
}