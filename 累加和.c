#include<stdio.h>
int sum,number;
int main()
{
	do
	{
	printf("������һ������");
	scanf("%d",&number);
	sum+=number;
	}while(number!=-1); 
	sum+=1;
	printf("sum=%d",sum);
	return 0;
}
