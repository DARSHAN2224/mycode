#include<stdio.h>
int main()
{                                                                                  
  int n, arr[100],s[100];
  int sum = 0,items = 0;
  scanf("%d",&n);
  for(int i =0 ;i < n; i++)
  {
    scanf("%d",&arr[i]);
    s[i] = 0;
  }

  for(int i=0; i<n; i++)
  {
    int count = 0;

    if (s[i]) 
	continue;

    for(int j=0; j<n; j++)
    {
      if(arr[i]==arr[j])
      {
        count++;
        s[j] = 1;
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
  	int r[100];
  	int i=0;
    while(sum!=0)
    {
    	int rem=sum%10;
    	r[i]=rem;
    	i++;
    	sum=sum/10;
	}
for (int j = i - 1; j > -1; j--) {
        printf("%d ", r[j]);
  }
}
}