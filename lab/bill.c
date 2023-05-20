#include<stdio.h>
int main()
{
    int unit;
    float amt;
    scanf("%d",&unit);
    if(unit<200)
    amt=unit*1.20;
    else
    if(unit>=200 && unit<400)
    amt=(unit-199)*1.50+199*1.20;
    else
    if(unit>399 && unit<600)
    amt=(unit-399)*1.80 + 199*1.20 + 200*1.50;
    else
    amt=(unit-599)*2.00 + 199*1.20 + 200*1.50 + 200*1.80;
    
	if(amt>=400)
    {
        amt = amt+(0.15*amt);
        printf("%.2f",amt);
    }
    else
    {
        amt = amt+100;
        printf("%.2f",amt);
    }
}