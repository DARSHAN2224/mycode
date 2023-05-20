#include<stdio.h>

int main()
{
    int i,j,n,t;

    // printf("Enter number of rows: ");
    scanf("%d",&n);
    if(n%2==0)
    t=n/2;
    else
    t=n/2+1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=t;j++)
        {
            printf("%d", j);
        }

        for(j=1;j<=t-1;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}