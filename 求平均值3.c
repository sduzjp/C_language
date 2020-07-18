#include<stdio.h>
int number=0; 
int sum=0;
int count=-1;
int main()
{
	for(number=0;number!=-1;count++)
	{
		sum+=number;
		printf("请输入你的数字：");
	    scanf("%d",&number);
	}
	double average;
	average=1.0*sum/count;
	printf("这些数的平均值是%f",average);
	return 0;
}
