#include<stdio.h>
int main()
{
    int num,sum=0;
    // int temp=num;
     scanf("%d",&num);
    int dup=num*num;
   
    while(dup>0)
    {
        int rem=dup%10;
        sum=sum+rem;
        dup=dup/10;
//        printf("%d",sum);
    }
//    printf("%d",sum);
    if(sum==num)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}