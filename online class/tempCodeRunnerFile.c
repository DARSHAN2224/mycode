#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[100];
    
    scanf("%s",s);
    int count=0;;
    for (char i = '0'; i <='9'; i++)
    {
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]==i)
            {
                count++; 
            }
        }
        printf("%d ",count);
        count=0;
    }
}