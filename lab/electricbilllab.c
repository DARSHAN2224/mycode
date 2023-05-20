#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[10];
    float unit,charge,subcharge;
    printf("Enter the name and units consumed\n");
    scanf("%s %f",name,&unit);
    if(unit<=200)
    charge=unit*0.80+100;
    else if(unit<=300)
    charge=(unit-200)*0.90+160+100;
    else
    charge=(unit-300)*1+250+100;

    if(charge>=400)
    subcharge=charge+(charge*0.15);
    else
    subcharge=charge;
    printf("Name:%s\nunits:%.2f\ncharge:%.2f",name,unit,subcharge);
    }
