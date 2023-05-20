#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[100],str1[100];
    scanf("%[^\n]s",str);
    // printf("%s",str);
    strcpy(str1,str);
    printf("%s",str1);
    return 0;
}
