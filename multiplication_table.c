#include <stdio.h>

int main() {
    int a=0,b;
    //writen by kanishk :)
    printf("give me a number to make multiplication table of these number : ");
    scanf("%d",&b);
    while(a < 10)
    {
        printf("%d\n", b*(a + 1) );
        a++;
    }

    return 0;
}
