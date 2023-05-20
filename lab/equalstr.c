#include<stdio.h>
int main()
{
    char a[10],b[10],temp;
    int i,j,len=0,len1=0;
    gets(a);
    scanf(" %[^\n]s",&b);
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        len1++;
    }
    if(len1==len)
    {
        for ( i = 0; i<len; i++)
        {
          if (a[i]!=b[i])
          {
            printf("not equal");
          }
        }
        printf("equal");
    }
    else
    printf("not equal");
}
