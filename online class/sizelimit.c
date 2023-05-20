#include<stdio.h>
#include<limits.h>
int main()
{
    printf("short:\nupperbound %hd\nlowerbound %hd\n",SHRT_MIN,SHRT_MAX);
    printf("int:\nupperbound %d\nlowerbound %d\n",INT_MIN,INT_MAX);
    printf("long:\nupperbound %ld\nlowerbound %ld\n",LONG_MIN,LONG_MAX);
    printf("long long:\nupperbound %lld\nlowerbound %lld",LLONG_MIN,LLONG_MAX);
}
