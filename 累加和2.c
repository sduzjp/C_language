#include<stdio.h>
int sum,number;
int main()
{
	
	do
	{
		printf("������һ������");
	    scanf("%d",&number);
	    if(number!=-1)
	    {
		sum+=number;
		}
		
    }while(number!=-1);
	printf("sum=%d",sum);
	return 0;
}
