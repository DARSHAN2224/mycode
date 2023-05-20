#include<stdio.h>
struct student
{
    char name[20],grade;
    int a,b,c,total;
    float per;
};
int total(int a,int b,int c)
{
    return a+b+c;
}
float perc(float total)
{
    return total/3;
}
char grades(float per)
{
    if(per>90)
    return 'O';
    else
    if(per>80)
    return 'A';
    else
    if(per>70)
    return 'B';
    else
    return 'C';
}
void output(char name[],int tot,float p,char g)
{
    printf("name\ttotal\tpercentage\tgrade\n");
    printf("%s\t%d\t%.2f\t\t%c\n",name,tot,p,g);
}
int main()
{
     
    struct student s1,s2,s3;
    printf("enter the name and 3 subject marks of student1\n");
    scanf("%s%d%d%d",&s1.name,&s1.a,&s1.b,&s1.c);   
    printf("enter the name and 3 subject marks of student2\n");
    scanf("%s%d%d%d",&s2.name,&s2.a,&s2.b,&s2.c);   
    printf("enter the name and 3 subject marks of student3\n");
    scanf("%s%d%d%d",&s3.name,&s3.a,&s3.b,&s3.c);  
    s1.total=total(s1.a,s1.b,s1.c);
    s2.total=total(s2.a,s2.b,s2.c);
    s3.total=total(s3.a,s3.b,s3.c);
    s1.per=perc(s1.total);
    s2.per=perc(s2.total);
    s3.per=perc(s3.total);
    s1.grade=grades(s1.per);
    s2.grade=grades(s2.per);
    s3.grade=grades(s3.per);
    printf("student1 details\n");
    output(s1.name,s1.total,s1.per,s1.grade);
    printf("student2 details\n");
    output(s2.name,s2.total,s2.per,s2.grade);
    printf("student3 details\n");
    output(s3.name,s3.total,s3.per,s3.grade);

}