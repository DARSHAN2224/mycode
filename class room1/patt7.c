#include<stdio.h>
int main(){
    int n,i,j,w,p,t;
    scanf("%d",&n);
    if(n%2==0)
    t=n/2;
    else
    t=n/2+1;
    for(i=1;i<=n;i++)
    {
        w=1,p=1;
        for(j=1;j<=t-1;j++)
        {
            if(j<=t)
            {
                printf("%d",w);
                w++;
            }
            else
            {
                printf("%d",p);
                p++;
            }
        }
        printf("\n");
    }
}