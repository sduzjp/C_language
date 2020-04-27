#include<stdio.h>
int a,b,cnt=0;
int main()
{
	printf("请输入一个正整数：");
	scanf("%d",&a);
	b=a;
	a/=10;
	cnt++;
	while(a>0)
	{
		a/=10;
		cnt++;
	}
    printf("%d是个%d位数",b,cnt);
    return 0;
}
