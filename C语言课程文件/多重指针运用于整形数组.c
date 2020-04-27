#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int *num[5],**p;
	int i;
	for(i=0;i<5;i++)
	num[i]=&a[i];
	p=num;
	for(i=0;i<5;i++)
	printf("%d ",**(p+i));
	printf("\n");	
	return 0;
}
