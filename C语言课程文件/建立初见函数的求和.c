#include<stdio.h>
void sum(int a,int b)
{
	int i,sum=0; 
	for(i=a;i<=b;i++)
	{
		sum+=i;
	}
	printf("sum=%d\n",sum);
}
int main()
{
	sum(1,100);
	sum(1,200);
	sum(1,300);
	sum(1,1000);

	return 0;
 } 
