/*
Integer Data Type
The integer datatype in C is used to store the integer numbers(any number including positive, negative and zero without decimal part). Octal values, hexadecimal values, and decimal values can be stored in int data type in C. 

Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d

Syntax of Integer

We use int keyword to declare the integer variable:

int var_name;
*/
//c program to demonstrate  Arthemetic operators
//use of integer addition
# include <stdio.h>
int main()
{
    int a,b,sum;
    a=10;
    b= 30;
    sum=a+b;
    printf("this is sum of a and b %d \n",a+b);
    return 0;

}