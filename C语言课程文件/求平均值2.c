#include<stdio.h>
int number=0;
int sum=0;
int count=-1;
int main()
{
	while(number!=-1)
	{
		sum+=number;
		count++; 
		printf("������������֣�");
	    scanf("%d",&number);
	}
	double average;
	average=1.0*sum/count;
	printf("��Щ����ƽ��ֵ��%f",average);
	return 0;
}
