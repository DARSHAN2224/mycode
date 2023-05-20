#include<stdio.h>
int main()
{
    int num,sum=0,flag=0;
    scanf("%d",&num);
    while(flag==0)
    {
        while(num>0)
        {
            int rem=num%10;
            
            sum=sum+(rem*rem);
            num=num/10;
            
        }
        if(sum==1)
        {
            flag=1;
            printf("True");
            break;
        }
        else if(sum!=1&&sum!=4)
        {
        num=sum;
        sum=0;
		}
    }
    if(sum!=1)
    printf("False");
}