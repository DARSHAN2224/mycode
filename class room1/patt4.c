#include<stdio.h>
int main()
{
    int n,i,j,p,s=0;
    scanf("%d",&n);
    int t=n*2-1;
    s=n-1;
    p=1;
    // w=1;
    for (i = 1; i<=n; i++)
    {
        for ( j = 1; j<=s; j++)
        {
            printf(" ");
        }
        for (int j= 1;j<=p;j++)
        {
            printf("*");
        }
        printf("\n");
        p=p+2;
        s--;
    }
    
}