#include<stdio.h>
int mask=10;
int x,t;
int main()
{
	printf("请输入一个正整数：");
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
