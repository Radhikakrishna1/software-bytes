/*
The integer datatype in C is used to store the integer numbers(any number including positive, negative and zero without decimal part).
 Octal values, hexadecimal values, and decimal values can be stored in int data type in C. 

Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d

Syntax of Integer

We use int keyword to declare the integer variable:

int var_name;

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

//C program to demonstrate Sum of Int and Float
//C using Sum of integer anf float data type 
 #include <stdio.h>
int main()
{
    int a;
    float f,sum;
    a = 5;
    f = 8.5;
    sum =a + f;
    printf("this is the value of %d \n", a);
    printf("this is the  value of %f\n", f);
    printf("the sum of a and f is %f \n",a + f);
    return 0;
}
