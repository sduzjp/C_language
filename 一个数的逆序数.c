#include<stdio.h>
int x,digit;
int ret=0;
int main()
{
	printf("������һ����������");
	scanf("%d",&x);
	do{
	digit=x%10;
	ret=ret*10+digit;
	x/=10;
	}while(x>0); 
	printf("ret=%d",ret);
	return 0;
}
