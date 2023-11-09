/*
The perimeter of a rectangle is e total distance of its outer boundary. 
It is twice the sum of its length and width and it is calculated with the help of the formula:
 Perimeter = 2(length + width).

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
//  c  program with Perimeter of  rectangle.

# include <stdio.h>
int a(int l,int b);
int main()
{   int l;
    printf("\n enter the l:");
    int b;
    scanf("%d", &l);
    printf("\n enter the b:");
    scanf("%d", &b);
    printf("\n The area of rectangle is: %d", a(l,b) );
}
int a(int l, int b)
{
    return (2*l+b);
}