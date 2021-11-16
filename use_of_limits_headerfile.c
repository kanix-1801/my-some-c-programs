#include <stdio.h>
#include <limits.h>

int main()
{
	int x = INT_MIN;
	int y = INT_MAX;
	printf("rang of signed integer is from : %d to %d\n", x,y);
	int a = 0;
	int b = UINT_MAX;
	printf("rang of unsigned integer is from : %u to %u\n", a,b);
	int c = SHRT_MIN;
	int d = SHRT_MAX;
	printf("rang of short signed integer is from : %d to %d\n", c,d);
	int u = 0;
	int v = USHRT_MAX;
	printf("rang of short unsigned integer is from : %u to %u\n", u,v);
	int q = CHAR_MIN;
	int w = CHAR_MAX;
	printf("rang of signed character is from : %d to %d\n", q,w);
	int e = 0;
	int s = UCHAR_MAX;
	printf("rang of unsigned character is from : %u to %u\n", e,s);
	int p = LONG_MIN;
	int o = LONG_MAX;
	printf("rang of signed long integer is from : %ld to %ld\n", p,o);
	int t = 0;
	int r = ULONG_MAX;
	printf("rang of unsigned long integer is from : %u to %u\n", t,r);
	return 0;
}
