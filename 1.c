/*
In C language int and char are two different keywords used to specify data types.
 int : Integer data type . char : Character data type .
 
 C uses char type to store characters and letters. However, the char type is integer type 
 because underneath C stores integer numbers instead of characters.

 The size of the character is 1 byte.
Range: (-128 to 127) or (0 to 255)
Size: 1 byte
Format Specifier: %c

Syntax of char
The char keyword is used to declare the variable of character type:

char var_name;
*/

//c program to demonstrate
//use of char data type
#include <stdio.h>
int main()
{
    int a;
    char c,sum;
    a=5;
    c='p';
    sum=a+c;
    printf("this is the  value of a %d \n",a);
    printf("this is the value of c %c \n",c);
    printf("sum of a and c is %c \n", a+c);
    return 0;
}