#include<stdio.h>
void sum(int a,int b)
{
	int i,sum=0; 
	for(i=a;i<=b;i++)
	{
		sum+=i;
	}
	printf("sum=%d\n",sum);
}
void sub(a,b)
{
	//printf("请输入两个数：");
	//scanf("%d %d",&a,&b);
	sum(a,b);
	//printf("sum=%d\n",sum);
}
int main()
{
    sub(1,10);
    sub(1,20);
	return 0;
} 
