#include <stdio.h>

int main() {
    int a,b;
    printf("enter two numbers\n");
    printf("first number :");
    scanf("%d" ,&a);
    printf("second number :");
    scanf("%d" ,&b);
    printf("value before swaping: %d%d\n" , a,b);
    int tamp = b;
    b = a;
    a = tamp;
    printf("value after swaping: %d%d\n" , a,b);
    return 0;
}
