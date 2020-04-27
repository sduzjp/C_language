#include<stdio.h>
int diejia(int n);
int main()
{
	int n;
	scanf("%d",&n);
	diejia(n);
	printf("diejia(n)=%d\n",diejia(n));
	return 0;
 } 
int diejia(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
	
}
