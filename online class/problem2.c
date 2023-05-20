#include<stdio.h>
int main()
{
    char ch[100];
    int cl=0,cn=0,cs=0,csc=0,cu=0;
    scanf("%[^\n]s",ch);
    for (int i = 0; ch[i]!='\0'; i++)
    {
    if(ch[i]>='a' && ch[i]<='z')
    cl++;
    else
    if(ch[i]>='A' && ch[i]<='Z')
    cu++;
    else
    if (ch[i]>='0' && ch[i]<='9')
    cn++;
    else
    if (ch[i]==' ')
    cs++;
    else
    csc++;
    }
    printf("no of upper case %d\n",cu);
    printf("no of lower case %d\n",cl);
    printf("no of digits %d\n",cn);
    printf("no of spaces %d\n",cs);
    printf("no of special characters %d\n",csc);
}
