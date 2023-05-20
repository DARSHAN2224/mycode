#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,m,p,q,sum=0;
   printf("enter the rows and column\n");
   scanf("%d%d",&n,&m);
   printf("enter the rows and column\n");
   scanf("%d%d",&p,&q);
   int a[n][m],b[p][q],c[n][q];
   if(m!=p)
   {
      printf("maxtix does not exits");
      exit(0);
   }
   printf("enter the elements of first matrix\n");
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
      scanf("%d",&a[i][j]);
      }
       
   }
   printf("enter the elements of second matrix\n");
   for (int i = 0; i < p; i++)
   {
      for (int j = 0; j < q; j++)
      {
      scanf("%d",&b[i][j]);
      }
       
   }
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < q; j++)
      {
         for (int k = 0; k < m; k++)
         {
            sum+=a[i][k]*b[k][j];
         }
         c[i][j]=sum;
         sum=0;
      }
   }
   printf("Matrix after multiplication\n");
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < q; j++)
      {
        printf("%d ",c[i][j]);
      }
      printf("\n");
   } 
}

