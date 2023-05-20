#include<stdio.h>
#include<string.h>
union student
{
    char name[10];
    int i;
    float f;
};

int main()
{
    union student s1;
    strcpy(s1.name,"darshan");
    printf("%s\n",s1.name);
    s1.i=10;
    printf("%d\n",s1.i);
    s1.f=123.3443;
    printf("%.2f\n",s1.f);

}