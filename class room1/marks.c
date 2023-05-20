#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	if(m<=39)
	printf("Grade F");
	else
	if(m<=49)
	printf("Grade E");
	else
	if(m<=59)
	printf("Grade D");
	else
	if(m<=69)
	printf("Grade C");
	else
	if(m<=79)
	printf("Grade B");
	else
	if(m<=89)
	printf("Grade A");
	else
	printf("Grade O");
}