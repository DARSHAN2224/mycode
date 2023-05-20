#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,len=0;
    scanf(" %[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
    
    }
    i--;
    for(j=0;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    b[j]='\0';
    printf("%s ",b);
    return 0;
}
