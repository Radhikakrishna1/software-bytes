#include<stdio.h>
int a(int b,int h);
int main()
{
    int b;
    printf("enter the values of b:");
    scanf("%d", &b);
    int h;
    printf("enter the values of h:");
    scanf("%d", &h);
    printf("\n The area of PARALLELOGRAM is :%d",(a=(b*h)));
    return 0;
}
   int a(int b,int h) 
{
    return a =(b*h);
}
