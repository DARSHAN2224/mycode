#include<stdio.h>
// void fibonacci(int n);
long long fibonacci1(long long n);
int main(int argc, char const *argv[])
{
    long long n,sum;
    scanf("%lld",&n);
    // fibonacci(n);
    sum=fibonacci1(n);
    printf("-----------------------\n");
    printf("%d",sum);
    return 0;
}
// void fibonacci(int n)
// {
//     long long n1=0,n2=1,n3;
//     printf("%lld %lld ",n1,n2);
//     for (int i = 3; i <=n; i++)
//     {
//         n3=n1+n2;
//         printf("%lld ",n3);
//         n1=n2;
//         n2=n3;
//     }
// }
long long fibonacci1(long long n)
{
    if(n==0)
    return 0;
    else
    if(n==1)
    return 1;
    else
    return fibonacci1(n-1)+fibonacci1(n-2);
}