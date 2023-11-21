#include <stdio.h>
int main()
{
    int add[5], sum, i;
    sum = 0;
    printf("Enter the values:\n");
    for (i = 0; i < 5; i++){
        scanf("%d", &add[i]);}
    for (i = 0; i < 5; i++){
        sum += add[i];}
    printf("SUM of Elements %d\n", sum);
    return 0;
}