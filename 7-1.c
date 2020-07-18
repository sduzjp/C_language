#include<stdio.h>
int main()
{
	int zdgys(int a,int b);
	int zxgbs(int a,int b);
	int a,b;
	printf("请输入两个正整数：\n");
	scanf("%d%d",&a,&b);
	printf("zdgys(a,b)=%d\nzxgbs(a,b)=%d\n",zdgys(a,b),zxgbs(a,b));
	return 0;
 } 
int zdgys(int a,int b)
{
	int t=1;
	if(a>=b)
	{
		while(t)
		{
			t=a%b;
			a=b;
			b=t;
		}
		return a;
	 } 
	 else
	 {
	 	t=a;
	 	a=b;
	 	b=t;
	 	while(t)
		{
			t=a%b;
			a=b;
			b=t;
		}
		return a;
	 }
}
int zxgbs(int a,int b)
{
	int x,y;
	x=zdgys(a,b);
	y=a*b/x;
	return y;
}
