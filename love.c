
/*
In C programming float data type is used to store floating-point values.
 Float in C is used to store decimal and exponential values. 
 It is used to store decimal numbers (numbers with floating point values) with single precision.

Range: 1.2E-38 to 3.4E+38
Size: 4 bytes
Format Specifier: %f

Syntax of float

The float keyword is used to declare the variable as a floating point:

float var_name;
*/
// C using to demonstrate Float in Arithmetic Operators 
// C using float values
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