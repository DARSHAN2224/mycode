#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    scanf("%d",&a[i]);
    for (int i = n-1,j=0; i >=0 ;i--, j++)
    {
        b[j]=a[i];
    }
   for (int i = 0; i < n; i++)
   {
   printf("%d ",b[i]);
   }
    
    
    return 0;
}
