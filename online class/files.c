#include<stdio.h>

int main()
{
    FILE *fptr1,*fptr2;
    fptr1=fopen("demo","r");
    fptr2=fopen("demo1","w");
    int n;
    fscanf(fptr1,"%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(fptr1,"%d",&a[i]);
    }
    square(a);
}
