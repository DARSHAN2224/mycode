#include<stdio.h>
struct student{
	char name[10];
	char rollno[20];
	int age;
	float cpga;
};
int main(){
	struct student s;
	printf("enter the name: ");
	scanf("%s",&s.name);
	printf("enter the roll number: ");
	scanf("%s",&s.rollno);
	printf("enter the age: ");
	scanf("%d",&s.age);
	printf("enter the cpga: ");
	scanf("%f",&s.cpga);
	printf("%s\t%s\t%d\t%.2f\n",s.name,s.rollno,s.age,s.cpga);
}	
