#include<stdio.h>
void main( )
{
char uname[15];
int units;
float bill, penalty, Total_Amount;
printf("enter the username\n");
scanf("%s",uname);
printf("enter the number of units consumed\n");
scanf("%d",&units);
if(units<=200)
{
bill=units*0.80+100;
}
else if(units>=201&&units<=300)
{
bill=(200*0.80)+((units-200)*0.90)+100;
}
else
{
bill=(200*0.80)+(100*0.90)+((units - 300)*1.00);
}
if(bill>400)
{
penalty=bill*0.15;
}
Total_Amount = bill+penalty;
printf(" \n Electricity Bill Details of Customer Are:\n");
printf(" Customer name is:%s",uname);
printf(" Total number of Units Consumed are: %d", units);
printf(" Total Amount to be payed is: %f", Total_Amount);
}