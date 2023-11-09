/*
Types of unary operators are mentioned below:

Unary minus ( – )
Increment ( ++ )
Decrement ( — )
NOT ( ! )
Addressof operator ( & )
sizeof()

The unary minus:
 operator is used to change the sign of an operand.
 It changes a positive operand to negative and a negative operand to positive. For example:

int num = 10; //positive number
int num2 = -num; //value of num2 is -10

Increment:
The increment operator ( ++ ) is used to increment the value of the variable by 1.
The increment can be done in two ways:
 prefix increment
In this method, the operator precedes the operand (e.g., ++a).
 The value of the operand will be altered before it is used.
Increment
In this method, the operator follows the operand (e.g., a++).
 The value operand will be altered after it is used
 a = 5;
 b = 5;
Pre-Incrementing a = 6
Post-Incrementing b = 5
Decrement:
In this method, the operator follows the operand (e.g., a- -).
 The value of the operand will be altered after it is used.
  a = 5;
  b = 5;
  Pre-Decrementing a = 4
  Post-Decrementing b = 5

  NOT ( ! ):
The logical NOT operator ( ! ) is used to reverse the logical state of its operand.
 If a condition is true, then the Logical NOT operator will make it false.

Example:

   If x is true, then !x is false
   If x is false, then !x is true

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
// C program to demonstrate Unary operators
// C using 4 types only in Unary

# include <stdio.h>
int main()
{
    int a,b;
    printf("enter the values of a:\n",a);
    scanf("%d", &a);
    printf("enter the values of b:\n",b);
    scanf("%d", &b);
    printf("The value of a: %d\n", a);
    printf("the value of b:%d\n", b=-a);
    printf("Pre-Incrementing a = %d\n", ++a);
    printf("Post-Incrementing b = %d\n", b++);
    printf("pre Decrement a= %d\n", --a);
    printf("post Decrement b=%d\n", b--);
    printf("!(a<b) is %d\n", (!(a<b)));
    printf("!(a>b) is %d\n", (!(a>b)));
    return 0;
} 