#include<stdio.h>
int main()
{
	int a=2,b=3;
	char *format="a=%d,b=%d\n";
	printf(format,a,b);
	char format1[]="a=%d,b=%d\n";
	printf(format,a,b);
	return 0;
 } 
