#include<stdio.h>
int main(int argc, char const *argv[])
{
    char a[100],temp;
    int i,j,len=0;
    scanf(" %[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    j=len-1;
    i=0;
    while (i<j)
    {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       i++;
       j--;
    }
    
    printf("%s ",a);
    return 0;
}
