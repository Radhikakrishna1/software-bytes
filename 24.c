/*Array in C is one of the most used data structures in C programming.It is a simple and fast way of storing multiple values under a single name.

     *Syntax of Array Declaration :

    data_type array_name[size];
or
    data_type array_name[size1][size2]...[sizeN];

*Array Initialization with Declaration :

    data_type array_name[size] = {value1, value2, ... valueN};

*Array Initialization after Declaration(Using Loops) :

                                                       for (int i = 0; i < n; i++)
{
    array_name[i] = valuei;
}
*/
// C Programs using arrays in run time values.
#include <stdio.h>
int main()
{
    int randy[5];
    printf("Enter the values :");
    for (int i = 0; i < 5; i++)
    {
        //printf("entered loop\n");
        scanf("%d", &randy[i]);
        //printf("%d is i \n",i);
        //printf("randy[ %d ] is %d \n",i,randy[i]);
    }
   

    printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 5; ++i)
   {
     printf("%d\n", randy[i]);
   }
  return 0;
}