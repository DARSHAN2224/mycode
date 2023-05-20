#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[20],i,n,ele,pos;
    printf("enter the numbers of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter th position to insert the elements\n");
    scanf("%d",&pos);
    printf("enter the element to insert\n");
    scanf("%d",&ele);
    for(i=n;i>=pos;i--)
    a[i+1]=a[i];
    a[pos]=ele;
    n++;
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
