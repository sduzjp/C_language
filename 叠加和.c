#include<stdio.h>
int n,i,sum=0;
int main()
{
	printf("��������n��");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum=%d",sum);
	return 0;
 } 
