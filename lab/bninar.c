#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],n,deci,temp,sum=0;
    scanf("%d",&n);
    temp=n-1;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=n-1;i>-1;i--)
    {
         printf("%d ",temp);
        deci=a[i]*pow(2,temp);
        printf("is %d deci\n",deci);
        sum=sum+deci;
        temp--;
    }
    printf("\n\n %d",sum);
}