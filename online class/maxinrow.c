#include<stdio.h>
#include<limits.h>
int main(int argc, char const *argv[])
{
    printf("Enter the array elements\n");
    int marks[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&marks[i][j]);
        }
        
    }
    int sum=0,j;
    for(int i=0;i<2;i++)
    {
    int max=INT_MIN;
    for (j = 0; j < 3; j++)
    {
       if(marks[i][j]>0)
       max=marks[i][j]; 
    }
    sum=sum+max;
}
     printf("%d ",sum);
}
