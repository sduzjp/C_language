#include<stdio.h>
int x;
int i,m,n; 

int main()
{
	printf("������������������");
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
			printf("%d�Ǻ���\n",x);
		} 
		else{
			printf("%d������\n",x);
		}
		  
		x++;
	}
	return 0;
}
