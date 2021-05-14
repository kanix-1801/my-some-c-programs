#include <stdio.h>

int main() {
    int p,r,t;
    float si;
    printf("Enter some value for Rate of interest & time :\n");
    printf("enter principal :");
    scanf("%d" ,&p);
    printf("enter rate :");
    scanf("%d" ,&r);
    printf("enter time in year :");
    scanf("%d" ,&t);
    si= (float)(p*r*t)/100;
    printf("your simple interest is %f" ,si);
}
