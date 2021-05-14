#include <stdio.h>

int main()
{
    int rad;
 // Fist i need to make constant for take value of PI after that
 // I need take some input (value of circle's radius) from user      
    float PI = 3.14, area, ci;
    printf("give me radius :");
    scanf("%d" ,&rad);
//first i give area as a output than give circumference of circle by using our constant and user input
    area = PI*rad*rad;
    printf("your circle's area is : %f\n" ,area);
    ci = 2*PI*rad;
    printf("your circle's circumference is : %f\n" ,ci);
}
