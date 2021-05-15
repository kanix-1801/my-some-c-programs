#include<stdio.h>
int main()
{
    int a,b,c;
    printf ("give me two numbers \n");
    printf ("enter the first number :");
    scanf("%d", &a);
    // & operator is used to get the address of the variable//
    printf("enter the second number  :");
    scanf("%d", &b);
    // &b will give address of b.//
    c = a + b;
    //The % operator can only be used with integers.//
    // now we use ''%'' to show our values //
    printf ("%.1i+%.1i = %.2i",a,b,c);
    return 0;
}
