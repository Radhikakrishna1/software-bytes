#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter a string to be REVERSE:\n");
    scanf("%s",&str);
    printf("Enter a string AFTER REVERSE is:%s \n",strrev(str));
    return 0;
}