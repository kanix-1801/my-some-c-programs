# include <stdio.h>
// I use if-else statment to checkout number is positive or negative or zero 
int main (void)
{
    int a;
    printf("give me a numbers : ");
    scanf("%d",&a);
    if(a>0)
    {
    	printf("it's positive number");
    }
    else if(a<0)
    {
    	printf("it's negative number");
    }
    else
    {
    	printf("it's zero");
    }
}
