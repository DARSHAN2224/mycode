#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int m1,m2,m3,total;
}s[20];

int main()
{
    int i,n;
    float classtotal=0,avg;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name,mark1,marks2 and marks3\n");
        scanf("%s%d%d%d",&s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        classtotal=classtotal+s[i].total;
    }
    printf("Student details are:\n");
    printf("name\tm1\tm2\tm3\t\n");
    printf("------------------------\n");
    for (int  i = 0; i < n; i++)
    {
        printf("%s\t%d\t%d\t%d\n",s[i].name,s[i].m1,s[i].m2,s[i].m3);
    }
    avg=classtotal/n;
    printf("\nAverage of class = %.2f\n",avg);
    printf("\nStudents scoring Above avg.\n\n");
    for (int i = 0; i < n; i++)
    {
        if (s[i].total>avg)
        {
            printf("%s %d\n",s[i].name,s[i].total);
        }
    }
    printf("\nStudents scoring below avg.\n\n");
    for (int i = 0; i < n; i++)
    {
        if (s[i].total<avg)
        {
            printf("%s %d\n",s[i].name,s[i].total);
        }
    }
}
