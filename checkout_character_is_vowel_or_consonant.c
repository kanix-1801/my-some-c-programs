# include <stdio.h>
// I use if-else statment to checkout which charater is a vowel or not 
int main (void)
{
    char a;
    printf("write a charater which you want to check up it's vowel or consonant: ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
    	printf("it's a vowel charater");
    }
     else
    {
    	printf("it's a consonant charater");
    }
}
