#include<stdio.h>
int main()
{
	int x,y,z,year;
	printf("������һ����ݣ�\n");
	scanf("%d",&year);
	x=year%4;
	if(x!=0)
	{
		printf("year=%d��������\n",year);
	}
	else{
		y=year%100;
		if(y!=0)
		{
		   	printf("year=%d��������\n",year);
		}
		else{
			z=year%400;
			if(z==0)
			{
					printf("year=%d��������\n",year);
			}
			else{
					printf("year=%d��������\n",year);
	         }
			}
		}
	
	return 0;
 } 
