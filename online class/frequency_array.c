#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],count=1,temp;
    float avg,sum=0,trial=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {  
    	temp=a[i];
    	if(a[i]!=-1)
    	{  
    		for(int j=i+1;j<n;j++)
	        {
	            if(a[i]==a[j])
	            {
	                count++;
	                a[j]=-1;
	            }
	        }
    	}
        if(count==temp)
        {
            trial++;
            sum=sum+temp;
        }
        count=1;
    }
//    printf("%f %f \n",sum,trial);
    avg=sum/trial;
    printf("%.2f",avg);
}