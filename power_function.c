#include <stdio.h>
#include <math.h>

int main(void)
{
    double base, expe,result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponet: ");
    scanf("%lf", &expe);
// my math.h header file support pow() function    
    result = pow(base,expe);
//We can control the number of the decimal digits to be printed in C
//We use “%. n” before “lf” in the %lf to print a double number with a precision on 'n'        
    printf("%.1lf^%.1lf = %.2lf" ,base,expe,result);
}
