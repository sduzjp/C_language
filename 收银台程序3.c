#include<stdio.h>
int main()
{
	int price=0;
	int bill=0;
	printf("请输入您的金额:");
	scanf("%d",&price);
	printf("您的票面是");
	scanf("%d",&bill);
	int change=bill-price;
	if(change>=0)
	{
		printf("找您%d元",change);
	}
	else
	{
		int lack=0-change;
		printf("您的钱不够，还需%d元",lack);
	} 
	return 0;
	 
} 
