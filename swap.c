#include<stdio.h>
void main()
 {
    int i;
    int a[4] = {1, 2, 3, 4};
    a[2] = 7; // you can also swap (optional)
    for (i = 0; i < 4; i++) 
    {
        printf("%d\n", a[i]);
    }
}