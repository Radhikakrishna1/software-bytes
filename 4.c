/
*The integer datatype in C is used to store the integer numbers(any number including positive, negative and zero without decimal part).
 Octal values, hexadecimal values, and decimal values can be stored in int data type in C. 

Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d

Syntax of Integer

We use int keyword to declare the integer variable:

int var_name;
*/
// C program to demonstrate Three variables of Relational Operators
// C using three variables of Relatinal Operators.


#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a:\n",a);
    scanf("%d", &a);
    printf("enter the value of b:\n",b);
    scanf("%d", &b);
    printf("enter the value of c:\n",c);
    scanf("%d", &c);
    printf("a>b+c=%d\n", a>b+c);
    printf("b>a+c=%d\n", b>a+c);
    printf("c>a+b=%d\n", c>a+b);
    return 0;
}