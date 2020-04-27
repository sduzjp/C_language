#include<stdio.h>
void max(int a,int b,int c)
{
	int d,max;
	if(a>=b)
	{
		d=a;
		if(c>=d)
		{
			max=c;
			printf("三个数中最大值为%d\n",max);
		}
		else{
			max=d;
			printf("三个数中最大值为%d\n",max);
		}
	}
	else{
		d=b;
		if(c>=d)
		{
			max=c;
		printf("三个数中最大值为%d\n",max);
		}
		else{
			max=d;
			printf("三个数中最大值为%d\n",max);
		}
		
	}
	
}
int main()
{
	int e,f,g;
	printf("请输入三个整数：\n");
	scanf("%d %d %d",&e,&f,&g);
	max(e,f,g);
    	
	return 0;
 } 
