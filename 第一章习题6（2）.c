#include<stdio.h>
int main()
{
	int a,b,c,t,max;
	printf("����������������\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b)
	{
		t=a;
		if(t>=c)
		{
			max=t;
			printf("max=%d",max);
		}
		else{
			max=c;
			printf("max=%d",max);
		}
		
	}
	else
	{
		t=b;
		if(t>=c)
		{
			max=t;
			printf("max=%d",max);
		}
		else{
			max=c;
			printf("max=%d",max);
		}
		
	}
	
	return 0;
}
