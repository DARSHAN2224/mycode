#include<stdio.h>
int main()
{
    int n,gcd;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
       for (int j = 1; j <= a[i]; j++) {
		if (a[i] % j == 0 && a[i+j] % j == 0) {
			gcd = j;
		}
	}
    }
    printf("%d", gcd);
}