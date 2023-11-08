/*
The area of a parallelogram can be determined by multiplying its base by its altitude. 
As a parallelogram’s base and height are perpendicular to one another. 
Thus, the following formula can be used to determine a parallelogram’s area,

Area of Parallelogram = Base × Height 

A = b × h

where,
b is the base of Parallelogram
h is the height of Parallelogram
Integer data type

Integer Data Type
The integer datatype in C is used to store the integer numbers(any number including positive, negative and zero without decimal part). Octal values, hexadecimal values, and decimal values can be stored in int data type in C. 

Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d

Syntax of Integer

We use int keyword to declare the integer variable:

int var_name;
*/
//c program to demonstrate Area of Parallelogram
//use of integer data type by using Parallelogram

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
