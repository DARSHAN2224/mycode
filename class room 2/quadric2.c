#include<stdio.h>
#include<math.h>
void main( )
{
float a,b,c,d,real,img,root1,root2;
printf("\n Enter the values for a, b and c\n");
scanf("%f%f%f",&a,&b,&c);
if(a==0)
{
printf("\n Invalid Co-efficient roots cannot be computed\n");
}
else
{
d=b*b-4*a*c;
printf("\n The value of Discriminant(d) is %f ", d);
if(d==0)
{
printf("\n The real and equal roots are:\n");
root1 = root2 =-b/(2*a);
printf("root1=root2=%.2f",root1);
}
else if(d>0)
{
printf("\n The real and distinct roots are:\n");
root1=(-b+sqrt(d))/(2*a);
root2=(-b - sqrt(d))/(2*a);
printf("root1=%.2f and root2=%.2f",root1,root2);
}
else
{
printf("\n The complex roots are:\n");
real =-b/(2*a);
img=sqrt(fabs(d))/(2*a);
printf("root1=%.2f+%.2fi\t",real,img);
printf("root2 =%f-%.2fi",real,img);
}
}
}