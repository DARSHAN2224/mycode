#include<stdio.h>
#include<math.h>
#define PI 3.142
int main()
{
int i, degree;
float x, sum=0,term,nume,deno;
printf("Enter the value of degree:");
scanf("%d",&degree);
x = degree * (PI/180); //converting degree into radian
nume = x;
deno = 1;
i=2;
do
{
term = nume/deno;
nume = -nume*x*x;
deno = deno*i*(i+1);
sum=sum+term;
i=i+2;
} while (fabs(term) >= 0.00001); // Accurate to 4 digits
printf("The computed sin(x) value of %d is %.3f\n", degree, sum);
printf("Using Built function sin(x) value of %d is %.3f", degree, sin(x));
}