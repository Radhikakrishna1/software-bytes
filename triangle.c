/*
Mathematically,
Area of a Triangle = A = ½ (b × h) square units
where b and h are the base and height of the triangle, respectively.
*/
// C program to demonstrate Area of Triangle.
#include <stdio.h>
int main()
{
float base, height, area;
/* Input base and height of triangle */
printf("Enter base of the triangle: ");
scanf("%f", &base);
printf("Enter height of the triangle: ");
scanf("%f", &height);
/* Calculate area of triangle */
area = (base * height) / 2;


/* Print the resultant area */
printf("Area of the triangle = %.2f sq. units", area);
return 0;
}