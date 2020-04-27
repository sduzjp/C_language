#include<stdio.h>
int a,b,cnt=0;
int main()
{
	printf("请输入一个正整数：");
	scanf("%d",&a);
	b=a;
	do
	{	
	a/=10;
	cnt++;
	} while(a>0); 
    printf("%d是个%d位数",b,cnt);
    return 0;
}
