#include"stdio.h"
int main()
{
	long a0, a1, a;
  	int n;
  	a0=1;
  	a1=1;
  	printf("%ld %ld ",a0,a1);
  	for(n=2;n<40;n++)
	{ 	a=a0+a1;
        if(n%5==0) printf("\n");
	  	printf("%ld ",a);
	  	a0=a1;
	  	a1=a;
	}
	return 0;
}
