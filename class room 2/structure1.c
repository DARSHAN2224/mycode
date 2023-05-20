#include<stdio.h>
struct student
{
   char name[10];
   int regno;
};

int main(int argc, char const *argv[])
{
    struct student s1;
    scanf("%d%s",&s1.regno,&s1.name);
    printf("%d\n%s",s1.regno,s1.name);
    
    return 0;
}
