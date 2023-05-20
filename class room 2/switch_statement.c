#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice,a,b;
	
	while(1)
	{
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	printf("1.to add\n");
	printf("2.to sub\n");
	printf("3.to mul\n");
	printf("4.to div\n");
	printf("5.to mod\n");
	printf("6.to exit\n");
	printf("enter your choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			{		
				printf("%d\n",a+b);
				break;
			}
		case 2:
			{	
				printf("%d\n",a-b);
				break;
			}
		case 3:
			{
				printf("%d\n",a*b);
				break;
			}
		case 4:
			{
				printf("%d\n",a/b);
				break;
			}
		case 5:
			{
				printf("%d\n",a%b);
				break;
			}
		case 6:
			{
				exit(0);
			}
			
		default:printf("wrong choice\n");
	}
}
}
