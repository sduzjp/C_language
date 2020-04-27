#include<stdio.h>
int main()
{
	void isprime(int a);
	int a;
	printf("请输入一个正整数：\n");
	scanf("%d",&a); 
	isprime(a);
	return 0;
}
void isprime(int a)
{
	int n;
	for(n=2;n<a;n++)
	if(a%n==0)break;
	if(n==a)printf("a=%d is a prime\n",a);
	else printf("a=%d is not a prime\n",a);
}
