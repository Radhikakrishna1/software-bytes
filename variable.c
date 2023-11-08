
/*
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
//c program to demonstrate Arthemethic operators
//use of integer,two operators.
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the value of A is :\n");
    scanf("%d", &a);
    printf("enter the value of B is :\n");
    scanf("%d", &b);
    printf("sum of two numbers is %d", a+b);
    printf("difference of two numbers is %d",a-b);
    return 0;
    
}