#include<stdio.h>
int mask=10;
int x,t;
int main()
{
	printf("������һ����������");
	scanf("%d",&x);
	do
	{
	t=x%mask;
	x=x/10;
	if(t!=0)
	{
	printf("%d ",t);
	}
	}while(t>0);
	return 0;
}
