#include<stdio.h>

int main()
{
	int n,i,c;
	printf("give me a number to make multiplication table of these number :");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		c = n * i;
		printf("%d\n",c);	
	}
return 0;
}
