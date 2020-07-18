#include<stdio.h>
void diecheng(int a,int b)
{
	int i;
	int diecheng=1;
	for(i=a;i<=b;i++)
	{
		diecheng*=i;
	}
	printf("diecheng=%d\n",diecheng);
}
int main()
{
	diecheng(1,10);
	diecheng(2,10);
	diecheng(3,10);
	return 0;
}
 
