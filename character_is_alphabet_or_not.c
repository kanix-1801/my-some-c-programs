# include <stdio.h>
// I use if-else statment to checkout which charater is alphabet or not 
int main (void)
{
    char a;
    printf("write a charater which you want to check up it's alphabet or not: ");
    scanf("%c",&a);
    if(a>='a'&&a<='z'||a>='A'&&a<='Z')
    {
    	printf("it is alphabet");
    }
     else
    {
    	printf("it's not a alphabet ");
    }
}
