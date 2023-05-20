#include<stdio.h>
int main()
{
    int a[100],n,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
      if(a[i]%2!=0)
      {
          i=i+2;
          if(a[i]%2==0)
          {
          count++;
          }
      }
    }
     for(int i=0;i<n;i++)
    {
      if(a[i]%2==0)
      {
          i=i+2;
          if(a[i]%2!=0)
          {
          count++;
          }
      }
    }
    printf("%d",count);
}