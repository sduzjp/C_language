#include<stdio.h>
int n,i;
int fact=1;
int main()
{
	printf("������һ����������");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("%d!=%d",n,fact);
	return 0;
}
