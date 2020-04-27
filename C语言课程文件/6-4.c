#include<stdio.h>
#define N 5//行末没有分号！ 
int main()
{
	int a[N],b[N+1];
	int i,n,k;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	printf("请输入一个正整数：\n");
	scanf("%d",&n);
	for(i=0;i<N;i++)
	{
		if(n>=a[i]&&n<=a[i+1])
		{
			k=i+1;
			for(i=0;i<k;i++)
			b[i]=a[i];
			b[k]=n;
			for(i=k+1;i<N+1;i++)
			b[i]=a[i-1];
			for(i=0;i<N+1;i++)
			printf("%d ",b[i]);
		}
		else if(n<a[0])
		{
			b[0]=n;
			for(i=1;i<N+1;i++)
			b[i]=a[i-1];
			for(i=0;i<N+1;i++)
			printf("%d ",b[i]);
		}
		else if(n>a[N])
		{
			for(i=0;i<N+1;i++)
			b[i]=a[i];
			b[N]=n;
			for(i=0;i<N+1;i++)
			printf("%d ",b[i]);
		}
	}
	
	return 0;
}
