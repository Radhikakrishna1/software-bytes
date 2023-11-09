/*
The area of a circle is the region enclosed by the circle’s boundary. 
In this article, we will learn the program to find the area of a circle in C programming.

The area of a circle can simply be evaluated using the formula:

Area = Pi * r2

where r is the radius of the circle and the value of Pi is 3.14159265358.
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

// programme for finding value of radius of circle

// C Program to Calculate Area of Square
// c program Square of a circle 
#include <stdio.h>
int main()
{
    int side, area;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    area = side * side;
    printf("Area of the Square having side %d is: %d", side, area);
    return 0;
}