#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    strrev(ch);
    printf("%s",ch);
}