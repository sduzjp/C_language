#include<stdio.h>
#define N 5//��ĩû�зֺţ� 
int main()
{
	int a[N],b[N+1];
	int i,j,t,n;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	printf("������һ����������\n");
	scanf("%d",&n);
	for(i=0;i<N;i++)
	b[i]=a[i];
	b[N]=n;
	for(i=0;i<N+1;i++)
	{
		for(j=i+1;j<N+1;j++)
		if(b[i]>b[j])
		{
			t=b[i];
			b[i]=b[j];
			b[j]=t;
		};
	}
	for(i=0;i<N+1;i++)
	printf("%d ",b[i]);
	return 0;
}
