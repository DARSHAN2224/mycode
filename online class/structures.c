#include<stdio.h>
struct date{
	int day;
	int month;
	int year;
};
struct student{
	char rn[20];
	char name[20];
	struct date dob;
	};
int main()
{
	struct student s;
	scanf("%s", s.rn);
	scanf("%s", s.name);
	scanf("%d%d%d", &s.dob.day, &s.dob.month, &s.dob.year);
	printf("%s\n", s.rn);
	printf("%s\n", s.name);
	printf("%d-%d-%d", s.dob.day, s.dob.month, s.dob.year);

}