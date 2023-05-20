#include <stdio.h>

int main(void) 
{
	// your code goes here
	int x,t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d",&x);
	    if(x>100)
	    {
	    	  x=x-10;
		}
	  printf("%d\n",x);
	}
    
}


