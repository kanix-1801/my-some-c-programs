#include <stdio.h>

int main (void)
{
	int a,b;
	printf("a :");
	scanf("%d",&a);
	printf("b :");
	scanf("%d",&b);
	printf("%d%d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d%d\n",a,b);	
}
