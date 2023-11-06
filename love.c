#include <stdio.h>
int main()
{
    float a;
    float b;
    printf(" enter the value of a:\n");
    scanf("%f", &a);
    printf("enter the value of b:\n");
    scanf("%f", &b);
    printf("a+b= %f +a-b= %f is %f\n", ((a+b)+(a-b)));
    printf("a*b =%f +a/b = %f\n", (a*b),(a/b),(a*b)+(a/b));
    return 0;
}