#include<stdio.h>
#define N 5
int main()
{
	int a[N],b[N];
	int i;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	b[N-1-i]=a[i];
	for(i=0;i<N;i++)
	a[i]=b[i];
	for(i=0;i<N;i++)
	printf("%d ",a[i]);
	return 0;
}
