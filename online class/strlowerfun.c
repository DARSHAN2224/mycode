#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    strlwr(ch);
    printf("%s",ch);
}