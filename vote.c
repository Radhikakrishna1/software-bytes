#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);
    (age>=18)?(printf("ELIGIBLE FOR VOTE:")):(printf("NOT ELIGIBLE FOR VOTE"));
    return 0;
}