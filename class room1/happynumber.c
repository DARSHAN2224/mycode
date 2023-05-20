//#include<stdio.h>
//int main()
//{
//    int num,flag=0,sum=0;
//    scanf("%d",&num);
//    while(flag==0)
//    {
//        while(num>0)
//        {
//            int rem=num%10;
//            int s=rem*rem;
//            sum=sum+s;
//            num=num/10;
//            // printf("%d inside\n",sum);
//        }
//        // printf("%d outside\n",sum);
//        if(sum==1||sum==7)
//        {
//            flag=1;
//            printf("True");
//            break;
//        }
//        else
//        if((sum>=0&&sum<1)&&(sum>1&&sum<=9))
//        {
//            flag=1;
//            printf("False");
//            break;
//        }
//        num=sum;
//        sum=0;
//    }
//}
#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,num,temp,sum=0;
// printf("Enter number\n");
 scanf("%d",&num);
  while(sum!=1 && sum!=4)
  {
   sum=0;
   while(num>0)
  {
    j=num%10;
    sum+=(j*j);
    num=num/10; 
  }
  num=sum;
  }
  
  if(sum==1)
 printf("True");
 else
 printf("False");
}