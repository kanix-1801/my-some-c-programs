#include <stdio.h>

int main (void)
{
	int ts,sec,min,hr;
	printf("write total second :");
	scanf("%d",&ts);
	hr = ts / 3600;
	min = (ts % 3600) / 60;
	sec = (ts % 3600) % 60 ;
// i changed total second to hour,minute,second//
	printf ("%d : %d : %d", hr , min , sec);
// there our sequence is hour : minute : second // 
}
