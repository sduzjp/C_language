#include<stdio.h>
#define N 5
int main()
{
	int a[N];
	int i,t;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	t=a[N-1];
	for(i=N-1;i>0;i--)
	a[i]=a[i-1];
	a[0]=t;
	/*t=a[N-1];
	for(i=N-1;i>0;i--)
	a[i]=a[i-1];
	a[0]=t;*/
	for(i=0;i<N;i++)
	printf("%d ",a[i]);
	return 0;
}
