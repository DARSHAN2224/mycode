#include<stdio.h>
void main()
{
int a[20],i,n,sum=0;
int *ptr;
float mean;
printf("enter the number of elements in list\n");
scanf("%d",&n);
ptr=a;
printf("enter %d array elements",n);
for(i=0;i<n;i++)
{
scanf("%d",ptr);
ptr++;
}
printf("the elements in list are\n");
ptr=a;
for(i=0;i<n;i++)
{
printf("%d\n",*ptr);
ptr++;
}
ptr=a;
for(i=0;i<n;i++)
{
sum=sum+(*ptr);
ptr++;
}
mean=sum/n;
printf("sum=%d",sum);
printf("mean=%f",mean);
}