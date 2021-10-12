#include<stdio.h>

int main (void)
{
	int x,y,z,r;
// x is using for divisor and y is for dividend and z for quotient//
// r is using for get remainder//	
	printf("give me divisor :");
	scanf("%d", &x);
	printf("give me dividend :");
	scanf("%d", &y);
	z = y/x;
	r = y - (x*z);
// i want remainder without use modulus "%" operator //
// if we use modulus operator then our code should be r = y % x; // 
	printf("so now our remainder is : %d\n",r);
//    KANIX-1801 //	
}
