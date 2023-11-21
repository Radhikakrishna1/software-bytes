#include<stdio.h>
int main()
{
    int a[3],b[2],sum=0,i,j;
    printf("enter the values:\n");
    for(i=0;i<3;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("enter  the array:\n");
    for(j=0;j<2;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("Display the elements:\n");
    for(i=0;i<3;i++){
        printf("%d ",a[i]);
         sum+=a[i];
    }
    printf("\ndisplay the elements:\n");
    for(j=0;j<2;j++)
    {
        printf("%d ",b[j]);
        sum+=b[j];
    }
    printf("Sum of two elements:%d \n",sum);
    return 0;
}