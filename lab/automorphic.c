#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int temp=num,d=1;
    while(temp>0)
    {
        temp=temp/10;
        d=d*10;
    }
    printf("%d\n",d);
    int sum;
    sum=(num*num)%d;
    printf("%d",sum);
    if(sum==num)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}