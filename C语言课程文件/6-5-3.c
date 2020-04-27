#include<stdio.h>
#define N 5
int main()
{
	int a[N];
	int i,j,t;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	j=(N-1)/2;
	for(i=0;i<j;i++)
	{
		t=a[i];
		a[i]=a[N-1-i];
		a[N-1-i]=t;
	}
	for(i=0;i<N;i++)
	printf("%d ",a[i]);
	return 0;
 } 
