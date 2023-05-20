#include<stdio.h>
int main()
{
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{	
			printf("first class");
			break;
			}
		case 2:
			{	
				printf("second class");
				break;
			}
		case 3:
			{	
				printf("pass class");
				break;
			}
		default:printf("no class");
	}
}
