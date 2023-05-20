#include<stdio.h>
int main()
{
    int n,r=0,x,count1;
    scanf("%d",&n);
    int a[n],f[n],count[n],coun[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        f[i]=0;
    }
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    {
        count1=0;
        if (f[i])
        continue;
        for (int j = 0; j < n; j++)
        {
            if(a[i]==a[j])
            {
                count[r]=a[i];
                count1++;
                coun[r]=count1;
                f[j]=1;
            }
        }
       r++;
    }
    int arr[x],s=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        { 
            if(coun[i]==coun[j] && coun[i]>1)
            {
               if (count[i]<count[j])
               {
                    arr[s]=count[j];
                    arr[s+1]=count[i];
                    s=s+2;
               }
            }
            
        }
        
    }
    for (int i = 0; i < x; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}
    
