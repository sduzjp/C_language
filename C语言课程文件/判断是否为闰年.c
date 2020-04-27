#include<stdio.h>
int main()
{
	int x,y,z,year;
	printf("请输入一个年份：\n");
	scanf("%d",&year);
	x=year%4;
	if(x!=0)
	{
		printf("year=%d不是闰年\n",year);
	}
	else{
		y=year%100;
		if(y!=0)
		{
		   	printf("year=%d不是闰年\n",year);
		}
		else{
			z=year%400;
			if(z==0)
			{
					printf("year=%d不是闰年\n",year);
			}
			else{
					printf("year=%d不是闰年\n",year);
	         }
			}
		}
	
	return 0;
 } 
