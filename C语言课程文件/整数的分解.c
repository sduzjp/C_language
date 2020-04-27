#include<stdio.h>
int x;
int cnt=0;
int ret=0;
int mask=10;
int digit; 
int main()
{
	scanf("%d",&x);
	do
	{
	
	x%=10;
	ret=ret*10+x; 
	cnt++;
	}while(x>0);
	printf("ret=%d,cnt=%d",ret,cnt);
	while(digit>0)
	{
	
		digit=ret%mask;
		printf("digit=%d ",digit);
		mask*=10;
    }
	return 0;
 } 
