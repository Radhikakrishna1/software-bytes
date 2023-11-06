//  c  program with area of  rectangle  values
# include <stdio.h>
int a(int l,int b);
int main()
{   int l;
    printf("\n enter the l:");
    int b;
    scanf("%d", &l);
    printf("\n enter the b:");
    scanf("%d", &b);
    printf("\n The area of rectangle is: %d", a(l,b) );
}
int a(int l, int b)
{
    return (2*l+b);
}