#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char st2[10];
    char str1[5]={'n','c','e','t','\0'};
    gets(st2);
    int n,n1;
    n=strlen(str1);
    printf("%d\n",n);
    n1=strlen(st2);
    printf("%d",n1);
}

