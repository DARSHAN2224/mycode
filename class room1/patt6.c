//       1     
//     1 2 1   
//   1 2 3 1 2 
// 1 2 3 4 1 2 3
//     1
//   1 2 1
// 1 2 3 2 1
#include<stdio.h>
int main()
{
    int n,i,j,w,q;
    scanf("%d",&n);
    int s=n-1,p=1;
    for (i = 1; i <= n; i++)
    {
        w=1;q=1;
        for ( j = 1; j <=s; j++)
        {
            printf("  ");
        }
        for ( j = 1; j <=p; j++)
        {
            if(j<=p/2+1)
            {
            printf("%d ",w);
            w++;
            }
            else
            {
            printf("%d ",q);
            q++;
            }
        }
        p=p+2;
        s--;
        printf("\n");
    }
    
}