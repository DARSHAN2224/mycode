#include<stdio.h>
#include<math.h>
int main()
{
float a[10],mean, std, sum=0, sumstd=0;
int n,i;
printf("\n Enter the no of elements\n");
scanf("%d",&n);

printf("\n Enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%f",a+i);
}
for(i=0;i<n;i++)
{
sum=sum+ *(a+i);
}
mean=sum/n;
for(i=0;i<n;i++)
{
sumstd=sumstd + pow((*(a+i) - mean),2);
}
std= sqrt(sumstd/n);
printf("\n Sum=%.3f\t",sum);
printf("\n Mean=%.3f\t",mean);
printf("\n Standard deviation=%.3f\t",std);
}