// programme for finding value of raius of circle
#include <stdio.h>
#define pi 3.14
float area (float r);
int main()
{
    float r;
    printf ("/n enter the radius:");
    scanf ("%f", &r);
    printf ("/n the area of circle is :%f", area (r));
}
float area(float r)
{
    return(pi*r*r);
}