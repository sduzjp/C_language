#include<stdio.h>
#define N 10
int main()
{
	void paixu(int *a,int n);
	int i,a[N];
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	paixu(a,N);
	for(i=0;i<N;i++)
	printf("%d ",a[i]);
	printf("\n");
	return 0;
}
void paixu(int *a,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(a+j)<*(a+i))
			{
			t=*(a+i);
			*(a+i)=*(a+j);
			*(a+j)=t;
			}
		}
	}
}
