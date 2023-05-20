#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],flag=0;
    for (int i = 0; i < n; i++)
    scanf("%d",&a[i]);
    for (int i = 0,j=n-1; i<j ;i++, j--)
    {
        if (a[i]!=a[j])
        {
            flag=1;
            break;
        }
    }
   if (flag)
   {
    printf("not palindrom");
   }
   else
   {
   printf("palindrom");
   }
}
