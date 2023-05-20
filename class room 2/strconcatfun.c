#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    gets(str1);
    gets(str2);
    strcat(str1,str2);
    puts(str1);
    strrev(str1);
    puts(str1);
    return 0;
}

