# include <stdio.h>
// I use if-else statment to checkout which one is greatest
int main (void)
{
    int a,b,c;
    printf("give me 3 numbers\n");
    printf("give me first numbers : ");
    scanf("%d",&a);
    printf("give me second numbers : ");
    scanf("%d",&b);
    printf("give me third numbers : ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is greatest\n",a);
        }
        else
        {
            printf("%d is greatest\n",c);
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("%d is greatest\n",b);
        }
        else
        {
            printf("%d is greatest\n",c);
        }
    }
}    
