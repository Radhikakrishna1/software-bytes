/*Volume of cuboid is the total space that the box occupies in three-dimensional space;
 A cuboid is a three-dimensional structure with six rectangular faces. 
 These six faces of a cuboid exist as a pair of three parallel faces. 
 Therefore, volume is a measure based on the dimensions of these faces: length, width, and height. 
 It is measured in cubic units. 

Volume of cuboid = Length × Width × Height (cubic unit)

Float data type

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
// C using to demonstrate Volume of Cuboid
// C using float type 
#include<stdio.h>
int a(float l,float b,float h);
int main()
{
    float l;
    printf("\n enter the value of l:");
    scanf("%f", &l);
    float b;
    printf("\n enter the value of b:");
    scanf("%f", &b);
    float h;
    printf("\n enter the value of h:");
    scanf("%f", &h);
    printf("\n area of cubic is:%f",(l*b*h));
}
int a(float l,float b,float h)
{
    return(l*b*h);
}