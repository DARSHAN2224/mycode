//     1
//   1 2 1
// 1 2 3 2 1
#include<stdio.h>
int main()
{
    int n,i,j,w;
    printf("Enter the nth row:");
    scanf("%d",&n);
    int s=n-1,p=1;
    for (i = 1; i <= n; i++)
    {
        w=1;
        for ( j = 1; j <=s; j++)
        {
            printf("  ");
        }
        for ( j = 1; j <=p; j++)
        {
           
            if(j<=p/2)
            {
                printf("%d ",w);
                w++;
            }
            else
            {
                printf("%d ",w);
                w--;
            }
        }
        p=p+2;
        s--;
        printf("\n");
    }
    
}