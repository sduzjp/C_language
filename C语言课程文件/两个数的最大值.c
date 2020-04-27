#include<stdio.h>
int main()
{
	int a,b,max;
	printf("请输入两个数");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		max=a;
		printf("大的那个数是%d\n",max);
	}
	else{
		max=b;
		printf("大的那个数是%d\n",max);
	}
	return 0;
} 
