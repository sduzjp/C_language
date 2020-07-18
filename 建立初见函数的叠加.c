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
int main()
{
	int a,b;
	do
	{
	printf("请输入两个数：");
	scanf("%d %d",&a,&b);
	sum(a,b);
    }while(a!=-1);
	return 0;
} 
