#include <stdio.h>

int main(void)
{
	int c,r,s;
	printf("how many row star pattern you want to see :");
	scanf("%d",&s);
	
	for (c=0; c<s; c++)
	{
		
		for(r=0; r<c+1; r++)
		{
			printf("*");
		}
		printf("\n");
	}
}
