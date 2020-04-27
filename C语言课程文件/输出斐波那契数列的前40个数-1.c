#include<stdio.h>
int main()
{
	int a[40];
	int i,j;
	a[0]=1;
	a[1]=1;
	for(i=2;i<40;i++)
	a[i]=a[i-1]+a[i-2];
	for(i=0,j=0;i<40;i++)
	{
		printf("%d ",a[i]);
		j++;
		if(!(j%5))printf("\n");
	}
	return 0;
} 
