#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>=97 && ch<=122) || (ch>=65 && ch<=90))
    printf("alphabet");
    else
    if (ch>=48 && ch<=57)
    printf("digit");
    else
    printf("special chracter");
}
