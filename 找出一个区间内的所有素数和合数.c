#include<stdio.h>
int x;
int i,m,n; 

int main()
{
	printf("请输入两个正整数：");
	scanf("%d %d",&m,&n);
	x=m;
	while(x<=n)
	{
		int isprime=0;
		for(i=2;i<x;i++)
		{
			int a=x%i;
			if(a==0)
			{
				isprime=1;
				break;
			}
		}
		if(isprime==1)
		{
			printf("%d是合数\n",x);
		} 
		else{
			printf("%d是素数\n",x);
		}
		  
		x++;
	}
	return 0;
}
