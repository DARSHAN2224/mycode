#include<stdio.h>
struct student
{
    char name[20];
    
    union 
    {
        int date;
        int mon;
        int year;
    };
    int regno;
};
typedef struct student s;
int main()
{
    s s[10];
    int n;
    printf("enter the number of students\n");
    scanf("%d",&n);
    printf("enter the student name,regno,date,month,year\n");
    for (int i = 0; i < n; i++)
    {
       scanf("%s%d%d%d%d",s[i].name,&s[i].regno,&s[i].date,&s[i].mon,&s[i].year);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d %d %d\n",s[i].name,s[i].regno,s[i].date,s[i].mon,s[i].year);
    }
    
    
    
}