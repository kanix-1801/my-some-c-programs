#include <stdio.h>
// we are doing to revers 3 digit number

int main() {
    int n, num1,num2,num3;
  // first we take 3 digit number
    printf("write a 3 digit number which you want to reverse: ");
    scanf("%d",&n);
    printf("before to swipe your number is %d\n",n);
    num1 = n/100;
    printf("your first digit is : %d\n",num1);
    num2 = (n % 100)/10;
    printf("your second digit is : %d\n",num2);
    num3 = (n % 10);
    printf("your third digit is : %d\n",num3);
  // now we going to reverse your given number
    printf("after the swap your reverse number is %d%d%d" ,num3,num2,num1);
    return 0;
}
