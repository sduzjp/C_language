#include<stdio.h>
int x=12435;
int mask=10;
int t;
int main()
{
	do
	{
	t=x%mask;
	x=x/10;
	if(t!=0)
	{
	printf("%d ",t);
	}
	}while(t>0);
	return 0;
}
