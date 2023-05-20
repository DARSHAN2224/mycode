#include<stdio.h>
int main()
{
    int t,n,a,b,k,ven=0,fra=0;
    scanf("%d",&t);
    for(int i=0;i<=t;i++)
    {
        scanf("%d%d%d",&n,&a,&b,&k);
        for(int i=1;i<=n;i++)
        {
            if(n%a==0&&n%b!==0)
            ven++;
            else
            if(n%b==0 && n%a!=0)
            fra++;
        }
    }
}