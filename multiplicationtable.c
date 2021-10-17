#include<stdio.h>

int main()
{
	int n,i=1,c;
	printf("value of  n :");
	scanf("%d",&n);
	while(i<=10)
	{
		c = n * i;
		printf("%d\n",c);
		i++;
	}
return 0;
}
