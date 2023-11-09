/*
Assignment operators are used to assigning value to a variable.
 The left side operand of the assignment operator is a variable and right side operand of the assignment
  operator is a value.
 The value on the right side must be of the same data-type of the variable on the left side otherwise
 the compiler will raise an error.
Different types of assignment operators are shown below:

“=”: This is the simplest assignment operator.
 This operator is used to assign the value on the right to the variable on the left.

(a += b) can be written as (a = a + b)
If initially value stored in a is 5. Then (a += 6) = 11.

(a -= b) can be written as (a = a - b)
If initially value stored in a is 8. Then (a -= 6) = 2.

(a *= b) can be written as (a = a * b)
If initially value stored in a is 5. Then (a *= 6) = 30.

(a /= b) can be written as (a = a / b)
If initially value stored in a is 6. Then (a /= 2) = 3.
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
// C program to demonstrate all Aaaignment Operators.
// Working of assignment operators

#include <stdio.h>
int main()
{
    int a = 5, b = 6;
    printf("a= b %d \n", a = b);
    printf("a+= b%d \n", a +=b);
    printf("a-= b%d \n", a -= b);
    printf("a*= b%d \n", a *= b);
    printf("a/= b %d \n", a /= b);
    printf("a% =b%d \n", a %= b);
    return 0;
}