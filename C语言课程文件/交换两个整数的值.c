#include<stdio.h>
int a,b,t;
int main()
{
	printf("请输入两个整数：");
	scanf("%d %d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("a=%d,b=%d",a,b);
	return 0;
		 
}

