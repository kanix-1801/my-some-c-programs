# include <stdio.h>
// I use if-else statment to checkout which charater is lowercase alphabet or uppercase alphabet 
int main (void)
{
    char a;
    printf("write a alphabet which you want to check up it's uppercase or lowercase: ");
    scanf("%c",&a);
    if(a>='a'&&a<='z')
    {
    	printf("it is lowercase alphabet ");
    }
    else if(a>='A'&&a<='Z')
    {
    	printf("it's a uppercase alphabet ");
    }
    else
    {
    	printf("it's not a alphabet ");
    }
}
