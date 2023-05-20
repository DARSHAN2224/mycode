#include<stdio.h>
int main()
{
    long long x,y,lcm;
    scanf("%lld%lld",&x,&y);
    int t=y,t2=x;
    while(y)
    {	
//		printf("%d ",y); 
        int temp=x; 
        x=y; 
        y=temp%y; 
    }
//    printf("%d uuwd ",x);
    lcm=(t2*t)/x;
    printf("%lld",lcm);
}