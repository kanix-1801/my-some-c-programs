#include <stdio.h>

int main() {
    int n, num1,num2,num3,num4,sum;
    
    printf("write a 4 digit number i will give you sum of these digit : ");
    scanf("%d",&n);
    num1 = n/1000;
    printf("your first digit is : %d\n",num1);
    num2 = (n % 1000)/100;
    printf("your second digit is : %d\n",num2);
    num3 = (n % 100)/10;
    printf("your third digit is : %d\n",num3);
    num4 = (n % 10);
    printf("your fourth digit is : %d\n",num4);
    sum = num1+num2+num3+num4;
    printf("sum of these number's digits is %d+%d+%d+%d = %d" ,num4,num3,num2,num1,sum);
    return 0;
}
