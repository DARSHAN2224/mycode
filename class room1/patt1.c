#include<stdio.h>
int main()
{
    int i,w,j,n;
    scanf("%d",&n);
    int t=n*2;
    w=n;
        for(i=1;i<t;i++)
        {
            for(j=1;j<t;j++)
            {
                printf("%d",w);
            	
            }
            printf("\n");
           w--;
        }
}