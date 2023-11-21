#include<stdio.h>
void main()
{
   int add[5]={5,7,3,1,66},sum,i;
   sum=0;
   for(i=0;i<5;i++)
    sum=sum+add[i];
    printf("SUM OF ELEMENTS:%d \n",sum);
}