#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100];
    scanf("%[^\n]s",str);
    int n=strlen(str);
    int r=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' ||str[i]=='e' || str[i]=='i' || str[i]=='o'||str[i]=='u')
        {
            str[i]='V';
        }
        else
        {
            str[i]='C';
        }
    }
    for(int i=0;i<str[i]!='\0';i++)
    {
        char ch1=str[i];
        char ch2=str[i+1];
        if(ch1==ch2)
        {
            str1[r]=str[i];
            r++;
        }
        else
         {
            str1[r]=str[i];
            r++;
        }
    }
    printf("%s",str1);
}