//#include<stdio.h>
//int main()
//{
//    int num,car;
//    scanf("%d",&num);
//    if(num>4)
//    car=num/4;
//    else
//    car=1;
//    printf("%d",car);
//}
#include<stdio.h>
int main()
{
    int num,car;
    scanf("%d",&num);
    if(num>4)
    car=num/4;
    else
    if(num<4&&num!=0)
    car=1;
    else
    car=0;
    printf("%d",car);
}