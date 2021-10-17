# include <stdio.h>
// I use if-else statment to checkout which year is a leap year or which not 
int main (void)
{
    int a;
    printf("write a year which you want see it's leap year or not : ");
    scanf("%d",&a);
    if(a%4==0)
    {
    	printf("it's a leap year");
    }
     else
    {
    	printf("it's not a leap year");
    }
}
