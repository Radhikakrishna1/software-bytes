/*
The integer datatype in C is used to store the integer numbers(any number including positive, negative and zero without decimal part).
 Octal values, hexadecimal values, and decimal values can be stored in int data type in C. 

Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d

 unsigned int:
 Range:0 to 4,294,967,295
 size: 4 bytes
 Format Specifier: %u

 long int:
 Range:-2,147,483,648 to 2,147,483,647 
size: 4
Format Specifier: %ld

Syntax of Integer

We use int keyword to declare the integer variable:

int var_name;

*/
// C program to demonstrate unsigned with long integer.
#include <stdio.h>
int main()
{
    // Integer value with positive data.
    int a = 9;
    // integer value with negative data.
    int b = -9;
    // U or u is Used for Unsigned int in C.
    int c = 89U;
    // L or l is used for long int in C.
    long int d = 99998L;
    printf("Integer value with positive data: %d\n", a);
    printf("Integer value with negative data: %d\n", b);
    printf("Integer value with an unsigned int data: %u\n",
           c);
    printf("Integer value with an long int data: %ld", d);
    return 0;
}