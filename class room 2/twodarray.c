#include<stdio.h>
int main()
{
    int n,m;
    printf("enter row and column size\n");
    scanf("%d%d",&n,&m);
    printf("enter the array elements\n");
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        printf("enter b[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
}
