#include<stdio.h>
int main()
{
	int price=0;
	int bill=0;
	printf("���������Ľ��:");
	scanf("%d",&price);
	printf("����Ʊ����");
	scanf("%d",&bill);
	int change=bill-price;
	if(change>=0)
	{
		printf("����%dԪ",change);
	}
	else
	{
		int lack=0-change;
		printf("����Ǯ����������%dԪ",lack);
	} 
	return 0;
	 
} 
