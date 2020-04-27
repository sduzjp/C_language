#include<stdio.h>
#define N 10
int main()
{
	void paixu(int a[],int n);
	int i,a[N];
	int *p;
	p=a;
	for(;p<a+N;p++)
	scanf("%d",p);
	p=a;
	paixu(p,N);
	for(;p<a+N;p++)
	printf("%d ",*p);
	printf("\n");
	return 0;
}
void paixu(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}
	}
}
