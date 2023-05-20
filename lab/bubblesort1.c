//sort the given array using bubble sort array
#include <stdio.h>
int main()
{
	int i,j,n,t,a[100];
	printf("\nenter the number of elements");
	scanf("%d",&n);
	printf("\nenter the elements");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
		    if(a[j]>a[j+1])
		    {
		    	t=a[j];
		    	a[j]=a[j+1];
		    	a[j+1]=t;
			}

		}
	}
	printf("\nthe sorted list is ");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}