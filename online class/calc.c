#include<stdio.h>
int main()
{
    int a,b;
	char choice;
	printf("enter n operator (+,-,*,/,%%)\n");
    scanf("%c",&choice);
    printf("enter the two operands to calculate\n");
    scanf("%d%d",&a,&b);
    switch (choice)
    {
    case '+':printf("%d + %d = %d",a,b,a+b);
        break;
    case '-':printf("%d - %d = %d",a,b,a-b);
        break;
    case '*':printf("%d * %d = %d",a,b,a*b);
        break;
    case '/':printf("%d / %d = %d",a,b,a/b);
        break;
    case '%':printf("%d %% %d = %d",a,b,a%b);
        break;
    default:
    printf("wrong choice");
        break;
    }
}
