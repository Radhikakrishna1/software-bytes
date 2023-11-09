/*
We use the ternary operator in C to run one code when the condition is
true and another code when the condition is false.
 For example,

(age >= 18) ? printf("Can Vote") : printf("Cannot Vote");
Here, when the age is greater than or equal to 18, Can Vote is printed.
 Otherwise, Cannot Vote is printed.

Syntax of Ternary Operator

The syntax of ternary operator is :

testCondition ? expression1 : expression 2;
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
// C program to demonstrate Ternary Operators
// C using ternary operator

#include <stdio.h>

int main()
{
    int number = 3;
    number%2==0 ? printf("terinary even number\n") : printf("terinary odd number\n") ;
    number>=35 ? printf("pass") : printf("fail");
    return 0;
}