#include<stdio.h>
int main()
{
	int x;
	int one=1;
	int two=1;
	int five=1;
	scanf("%d",&x);
	while(one<x*10)
	{
		while(two<x*10/2)
		{
			while(five<x*10/5)
			{
				if(one*1+two*2+five*5==x*10)
				{
					printf("������%d��1��%d��2��%d5�Ǵճ�xԪ\n",one,two,five);
					break;
			    }
			    five++;
			}
			two++;
		}
		
		one++;
	}
	
	return 0;
 } 
