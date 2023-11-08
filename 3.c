/*
Integer and float data types
The integer datatype in C is used to store the integer numbers(any number including positive, negative and zero without decimal part). 
Octal values, hexadecimal values, and decimal values can be stored in int data type in C. 

Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d

Syntax of Integer

We use int keyword to declare the integer variable:

int var_name;

A Double data type in C is used to store decimal numbers (numbers with floating point values) with double precision.
 It is used to define numeric values which hold numbers with decimal values in C.

The double data type is basically a precision sort of data type that is capable of holding 64 bits of decimal numbers or floating points. 
Since double has more precision as compared to that float then it is much more obvious that it occupies twice the memory occupied by the floating-point type.
 It can easily accommodate about 16 to 17 digits after or before a decimal point.

Range: 1.7E-308 to 1.7E+308
Size: 8 bytes
Format Specifier: %lf

Syntax of Double

The variable can be declared as double precision floating point using the double keyword:

double var_name;
*/
// C using to demonstrate integer and float 
// C using Run time values Arthemetic Operators 
#include <stdio.h>
int main()
{
    int a;
    float b;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%f", &b);
    printf("addition of two numbers %f\n",a+b);
    printf("subtraction of two numbers %f\n",a-b);
    printf("multiplication of two numbers %f\n",a*b);
    printf("division of two numbers %f\n",a/b);
    return 0;
    

}