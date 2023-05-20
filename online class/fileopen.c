#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num;
    FILE *fp;
    fp=fopen("file","w");
//     if(fp == NULL)
//    {
//       printf("Error!");   
//       exit(1);             
//    }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fp,"%d",num);
   fclose(fp);
}