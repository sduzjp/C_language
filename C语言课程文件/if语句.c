#include<stdio.h>
int age=0;
int main()
{
	printf("请输入您的年龄:");
	scanf("%d",&age);
	printf("您的年龄是%d",age);
	if(age<35)
	{
		printf("您的年龄是美好的！");
	}
	printf("请好好珍惜您的时光！");
	return 0;
	 
} 
