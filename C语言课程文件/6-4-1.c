#include<stdio.h>
#define N 5//行末没有分号！ 
int main()
{
	int a[N],b[N+1];
	int i,j,t,n;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	printf("请输入一个正整数：\n");
	scanf("%d",&n);
	for(i=0;i<N;i++)
	b[i]=a[i];
	b[N]=n;
	for(i=0;i<N+1;i++)
	{
		for(j=0;j<N;j++)
		if(b[j]>b[j+1])
		{
			t=b[j];
			b[j]=b[j+1];
			b[j+1]=t;
		};
	}
	for(i=0;i<N+1;i++)
	printf("%d ",b[i]);
	return 0;
}
