#include<stdio.h>
int main()
{
	int max(int a,int b);
	int min(int a,int b);
	int add(int a,int b);
	int a,b;
	int (*p1)(int,int);
	int (*p2)(int,int);
	int (*p3)(int,int);
	p1=max;
	p2=min;
	p3=add;
	scanf("%d%d",&a,&b);
	printf("%d %d %d",(*p1)(a,b),(*p2)(a,b),(*p3)(a,b));
	return 0;
 } 
int max(int a,int b)
{
	int x;
	x=(a>b)?a:b;
	return x;
}
int min(int a,int b)
{
	int x;
	x=(a<b)?a:b;
	return x;
}
int add(int a,int b)
{
	return (a+b);
}
