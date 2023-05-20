#include<stdio.h>
int main()
{
    int sum=0,count,n,iteam=0;
    scanf("%d",&n);
    int a[100],s[100],f[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s[i]=0;
    }
    for(int i=0;i<n;i++)
    {
       count=0;
       if(s[i])
       continue;
       for(int j=0;j<n;j++)
       {
           if(a[i]==a[j])
           {
               count++;
               s[j]=1;
           }
       }
       if(count==a[i])
       {
       	   f[iteam]=a[i];
       	   iteam++;
           
       }
    }
    printf("%d",count);
    
}