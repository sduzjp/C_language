#include<stdio.h>
#define N 10 
int main()
{
	void exchange(int a[],int n); 
	int i,a[N];
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	exchange(a,N);
	for(i=0;i<N;i++)
	printf("%d ",a[i]);
	printf("\n"); 
	return 0;
}
void exchange(int *p,int n)
{
	int i,j,t,m;
	m=(n-1)/2;
	for(i=0;i<=m;i++)
	{
		j=n-1-i;
		t=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=t;
	}
}
