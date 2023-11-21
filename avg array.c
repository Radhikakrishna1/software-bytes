#include <stdio.h>
int main()
{
    int num[10] = {5, 4, 9, 1, 3};
    int sum = 0, n, avg, i;
    for (i = 0; i < 5; i++)
    {
        sum += num[i];
        printf("SUM of elements in array:%d \n", sum);
    }
    n = 5;
    avg = sum / 5;
    printf("AVERAGE:%d \n", avg);
    return 0;
}