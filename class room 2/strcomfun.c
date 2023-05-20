#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str1[5]={'n','c','e','t','\0'};
    char str2[5]={'n','c','e','t','\0'};
    int r=strcmp(str1,str2);
    printf("%d",r);
}

