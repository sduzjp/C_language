#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	y=0;
	if(x>=0)
	{
		if(x>0)y=1;
	}
	else y=-1;
	printf("%d\n",y);
	return 0;
}
