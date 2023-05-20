#include<stdio.h>
#define MAX_N 100
int main()
{
  int n, arr[MAX_N];
  int skip[MAX_N];

  int sum = 0;
  int items = 0;
  scanf("%d",&n);
  for(int i =0 ;i < n; ++i)
  {
    scanf("%d",&arr[i]);
    skip[i] = 0;
  }

  for(int i=0; i<n; i++)
  {
    int count = 0;

    if (skip[i]) continue;

    for(int j=0; j<n; j++)
    {
      if(arr[i]==arr[j])
      {
        count++;
        skip[j] = 1;
      }
    }
    if(arr[i] == count)
    {
      sum =sum*10+arr[i];
      items++;
    }
  }

  if (items == 0)
  {
    printf("-1");
  }
  else
  { 
  	int min=sum%10,max=0;
    while(sum!=0)
    {
    	int rem=sum%10;
    	if(rem>max)
    	max=rem;
    	if(rem<min)
    	min=rem;
    	sum=sum/10;
	}
	printf("%d %d",max,min);
  }
}