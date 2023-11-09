/*
Mathematically,
Area of a Triangle = A = ½ (b × h) square units
where b and h are the base and height of the triangle, respectively.

Integer Data Type
The integer datatype in C is used to store the integer numbers(any number including positive, negative and zero without decimal part).
 Octal values, hexadecimal values, and decimal values can be stored in int data type in C. 

Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d

Syntax of Integer

We use int keyword to declare the integer variable:

int var_name;
*/
// C program to demonstrate Area of Triangle.
#include <stdio.h>
int main()
{
float base, height, area;
/* Input base and height of triangle */
printf("Enter base of the triangle: ");
scanf("%f", &base);
printf("Enter height of the triangle: ");
scanf("%f", &height);
/* Calculate area of triangle */
area = (base * height) / 2;


/* Print the resultant area */
printf("Area of the triangle = %.2f sq. units", area);
return 0;
}