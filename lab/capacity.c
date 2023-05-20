#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    float dis,fir,sec;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    fir=(x2-x1)^2;
    printf("%f",fir);
}