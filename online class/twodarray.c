#include<stdio.h>
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
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",marks[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
