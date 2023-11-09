
/*
The integer datatype in C is used to store the integer numbers(any number including positive, negative and zero without decimal part).
 Octal values, hexadecimal values, and decimal values can be stored in int data type in C. 

Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d

Syntax of Integer

We use int keyword to declare the integer variable:

int var_name;
*/
// C program to demonstrate Postive value into Negative value
// C to assign postive value to negative value
#include <stdio.h>
int main()
{
    int a;
    printf("enter the the value of a:");
    scanf("%d", &a);
    int b=-a;
    printf("%d", b=-a);
    return 0;
}