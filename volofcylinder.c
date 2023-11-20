#include <stdio.h>
#define PI 3.14
float volume(float radius, float height);
int main()
{
    float radius, height;
    printf("RADIUS of a cylinder:\n");
    scanf("%f", &radius);
    printf("HEIGHT of a cylinder:\n");
    scanf("%f", &height);
    printf("VOLUME of a cylinder:%f \n", volume(radius, height));
}
float volume(float radius, float height)

{
    return (PI * radius * radius * height);
}