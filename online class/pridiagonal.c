#include<stdio.h>
#include<limits.h>
int main(int argc, char const *argv[])
{
    int n,m;
    printf("Enter the array elements\n");
    scanf("%d%d",&n,&m);
    int marks[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&marks[i][j]);
        }
        
    }
    int sum=0,j;
    for(int i=0;i<n;i++)
    {
    int max=INT_MIN;
    for (j = 0; j < m; j++)
    {
       if(marks[i][j]>0)
       max=marks[i][j]; 
    }
    sum=sum+max;
}
     printf("%d ",sum);
}
