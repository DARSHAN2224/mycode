#include<stdio.h>
#include<math.h>
int sum(int n,int m,int r)
{ 
    return n+m;
}
int main()
{
    int n,m;
    float sq;
    scanf("%d",&n,&m);
    sq=sum(10,20,30);
    printf("%f",sq);
    return 0;
}
