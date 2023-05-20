#include<stdio.h>
#include<string.h>
void compare(char str1[],char str2[]);
void concat(char str1[],char str2[]);
void length(char str1[]);
void main()
{
    char str1[50],str2[50];
    int ch;
    printf("Enter th choice \n1.compare\t 2:concatenation\t 3:length\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:printf("Enter string1:\t");
        scanf("%s",str1);
        printf("Enter sting2:\t");
        scanf("%s",str2);
        compare(str1,str2);
        break;
    case 2:printf("Enter string1:\t");
        scanf("%s",str1);
        printf("Enter sting2:\t");
        scanf("%s",str2);
        concat(str1,str2);
        break;
    case 3:printf("Enter string:\t");
        scanf("%s",str1);
        length(str1);
        break;
    
    default:printf("wrong choice");
        break;
    }
}
void compare(char str1[],char str2[])
{
    if(strcmp(str1,str2)==0)
    printf("String are equal\n");
    else
    printf("string are not equal\n");
}
void concat(char str1[],char str2[])
{
    strcat(str1,str2);
    printf("Resultant string is %s",str1);
}
void length(char str1[])
{
    int n;
    n=strlen(str1);
    printf("length of the given string is %d",n);
}