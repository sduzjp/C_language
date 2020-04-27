#include<stdio.h>
int main()
{
	int i,j,n,diecheng=1,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1,diecheng=1;j<=i;j++)
		diecheng*=j;
		sum+=diecheng;
	}
	printf("sum=%d\n",sum);
	return 0;
}
