/*
        **Array in C is one of the most used data structures in
              C programming.It is a simple and fast way of storing multiple
                  values under a single name.An array in C is a fixed -
    size collection of similar data items
        stored in contiguous memory locations.

            *Syntax of Array Declaration :

    data_type array_name[size];
or
    data_type array_name[size1][size2]...[sizeN];

*Array Initialization with Declaration :

    data_type array_name[size] = {value1, value2, ... valueN};

*Array Initialization with Declaration without Size :

    data_type array_name[] = {1, 2, 3, 4, 5};

*Array Initialization after Declaration(Using Loops) :

                                                       for (int i = 0; i < N; i++)
{
    array_name[i] = valuei;
}
*/

// Array In C programming to find out the average of 4 integers.

#include <stdio.h>
    int main()
{
    int avg = 0;
    int sum = 0;
    int i;
    int num[4];
    /* We are using a for loop to traverse through the array
     * while storing the entered values in the array
     */
    for (i = 0; i < 4; i++)
    {
   printf("Enter the values of Integer:%d\n", (i+1));
   scanf("%d",&num[i]);
    }
    for (i = 0; i < 4; i++)
    {
        sum = sum + num[i];
    }
    avg = sum / 4;
    printf("Enter the values of AVERAGE: %d \n", avg);
    return 0;
}