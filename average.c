#include <stdio.h>

int main() {
// fist i take some input (number) from usger 
    long n1,n2,n3,n4,n5,sum;
    float avg;
    printf("enter n1 :");
    scanf("%li" ,&n1);
    printf("enter n2 :");
    scanf("%li" ,&n2);
    printf("enter n3 :");
    scanf("%li" ,&n3);
    printf("enter n4 :");
    scanf("%li" ,&n4);
    printf("enter n5 :");
    scanf("%li" ,&n5);
// i do sum also         
    sum = n1+n2+n3+n4+n5;
    printf("my sum is : %li\n" ,sum);
// now my average is there ;)        
    avg =(float)(n1+n2+n3+n4+n5)/2;       
    printf("your average is : (%li+%li+%li+%li+%li)/2 = %.2f" ,n1,n2,n3,n4,n5,avg);
    return 0;
}
