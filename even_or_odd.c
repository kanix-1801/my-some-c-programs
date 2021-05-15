# include <stdio.h>
//I use Arithmetic Operators Modulus % to remainder after division (modulo division)
int main (void)
{
    int a;
    printf("give me a numbers to see that's even or odd\n");
    printf("enter your numbers : ");
    scanf("%d",&a);
    if(a % 2 == 0 )
    {
        printf("%d is even\n",a);
    }
    else
    {
        printf("%d is odd\n",a);
    }
}
