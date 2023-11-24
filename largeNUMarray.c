#include<stdio.h>
int main()
{
    int arr[5]={4,61,39,0,83};
    int i,largest;
    largest=arr[0];
    for(i=0;i<5;i++)
    if(largest<arr[i])
    largest=arr[i];
    printf("THE LARGEST NUMBER:%d \n",largest);
    return 0;
}