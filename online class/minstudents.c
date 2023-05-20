#include<stdio.h>
#include<limits.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the  number of students\n");
    scanf("%d",&n);
    int marks[n];
    printf("Enter the marks of %d students\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&marks[i]);
    }
    int min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(marks[i]<min)
        {
            min=marks[i];
        }
    }
    printf("The maximum marks is %d",min);
}
