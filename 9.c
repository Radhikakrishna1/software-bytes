/*
The perimeter of a rectangle is e total distance of its outer boundary. 
It is twice the sum of its length and width and it is calculated with the help of the formula:
 Perimeter = 2(length + width).
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