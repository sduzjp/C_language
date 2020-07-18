#include<stdio.h>
int main()
{
	const double RATE=8.25;
	const double STANDARD=40;
	double hours,salary;
	
	printf("请输入工作的小时数：");
	scanf("%lf",&hours);
	if(hours>STANDARD)
	{
		salary=RATE*STANDARD+(hours-STANDARD)*(1.5*RATE);
		printf("你的薪水是%f",salary);
	}
	else
	{
		salary=RATE*hours;
		printf("你的薪水是%f",salary);
	}
	 return 0;
	 
	
} 
