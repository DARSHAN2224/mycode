#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c,x1,x2,d;
  printf("Enter three co-efficents a,b,c of quadratic equation\n");
  scanf("%f%f%f",&a,&b,&c);
  d=b*b-4*a*c;
  if(d==0)
  {
    printf("***Roots are equal***\n");
    x1=x2=-b/(2*a);
    printf("Root1=Root2=%f\n",x1);
  }
  else if(d>0)
   {
    // 1 -5 2
    printf("***Roots are real and distinct***\n");
    x1=-b/(2*a)+sqrt(d)/(2*a);
    x2=-b/(2*a)-sqrt(d)/(2*a);
    printf("Root1=%f\n Root2=%f\n",x1,x2);
  }
  else
  {
    // 3 2 1
     printf("***Roots are imaginary***\n");
    x1=-b/(2*a);
    x2=sqrt(fabs(d))/(2*a);
    printf("Root1=%f+i%f\n",x1,x2);
    printf("Root2=%f-i%f\n",x1,x2);
  }
}
