#include<stdio.h>
int main()
{
	int i=1,a,sum=0;
	while(i<=100000000)
	{
		a=i*i;
		sum=sum+a;
		i++;
	 } 
	 printf("sum=%d\n",sum);
	 return 0;
} 
