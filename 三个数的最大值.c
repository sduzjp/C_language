#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("请输入三个整数：");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			max=a;
			printf("最大的那个数是%d",max);
		}
		else{
			max=c;
			printf("最大的那个数是%d",max);
		}
	}
	else{
		if(b>c)
		{
			max=b;
			printf("最大的那个数是%d",max);
		}
		else{
			max=c;
			printf("最大的那个数是%d",max);
		}
	} 
	return 0;
 } 
