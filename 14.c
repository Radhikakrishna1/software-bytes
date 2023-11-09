/*
Addressof operator ( & )
sizeof()

AddressOf Operator (&):
The Unary AddressOf Operator is denoted as ampersand (&) symbol,
 which is used to find the address of a variable defined in computer memory.
 ex: if we give any num the address of num,is address which locates in memory unit

sizeof() Operator:
As the name suggests, this operator is used to get the size of a data item in bytes. 
For example: size of int is 4 bytes so if you use this operator on an int operator, it will return 4.

means if we give our name or any long charecter or number then we use this Operator to increase
 the memory allocation
 whether the use may be given is long or short we do'nt know thats why allocate memory reservation 
 purpose only

 The Correct format specifier for sizeof() operator is %zu, you can also use %lu but it is not portable.

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
// C program to demonstrate the use of 'address-of(&)'
// operator
#include <stdio.h>
 
int main()
{
 
    int a = 20;
    printf("Address of a = %d\n", &a);
 // printing the size of double and int using sizeof
    printf("Size of double: %d\n", sizeof(double));
    printf("Size of int: %d\n", sizeof(int));
    return 0;
}