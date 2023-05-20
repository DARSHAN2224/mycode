#include<stdio.h>
 int gcd(int a,int b)
   {int lcm;
    while (a!=0 && b!=0)
    {
        if(a>b)
        a%=b;
        else
        b%=a;
    }
    if(a==0)
    lcm= (a*b)/b;
    else
    lcm= (a*b)/a;
    return lcm;
   }
int main()
{
  int a[10],b,g;
//   printf("enter the size of array\n");
  scanf("%d",&b);
//   printf("enter the array elements");
  for (int i = 0; i < b; i++)
  {
    scanf("%d",&a[i]);
  }
  g=gcd(a[0],a[1]);
  
  for (int i = 2; i < b; i++)
  {
    g=gcd(g,a[i]);
  }
  printf("%d",g);
}
