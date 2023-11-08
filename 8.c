/*
The area of a circle is the amount of space enclosed within the boundary of a circle.
 The region within the boundary of the circle is the area occupied by the circle. 
 It may also be referred to as the total number of square units inside that circle. 
 Area of Circle = πr2 or πd2/4 in square units, where

(Pi) π = 22/7 or 3.14.
r = radius of the circle
d = diameter of the circle

Pi (π) is the ratio of circumference to diameter of any circle. It is a special mathematical constant.


In C programming float data type is used to store floating-point values.
 Float in C is used to store decimal and exponential values. 
 It is used to store decimal numbers (numbers with floating point values) with single precision.

Range: 1.2E-38 to 3.4E+38
Size: 4 bytes
Format Specifier: %f

Syntax of float

The float keyword is used to declare the variable as a floating point:

float var_name;
*/
// including the area and radius with float values
# include <stdio.h>
#define PI 3.14
float area (float r);
int main()
{
    float r;
    printf("\nenter the radius:");
    scanf("%f", &r);
    printf("\n The area of circle is: %f", area(r));
}
float area(float r)
{

    return (PI*r*r);
}