#include<stdio.h>
int a(float l,float b,float h);
int main()
{
    float l;
    printf("\n enter the value of l:");
    scanf("%f", &l);
    float b;
    printf("\n enter the value of b:");
    scanf("%f", &b);
    float h;
    printf("\n enter the value of h:");
    scanf("%f", &h);
    printf("\n area of cubic is:%f",(l*b*h));
}
int a(float l,float b,float h)
{
    return(l*b*h);
}