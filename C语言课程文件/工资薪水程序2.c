#include<stdio.h>
int main()
{
	const double RATE=8.25;
	const double STANDARD=40;
	double hours,salary;
	
	printf("�����빤����Сʱ����");
	scanf("%lf",&hours);
	if(hours>STANDARD)
	{
		salary=RATE*STANDARD+(hours-STANDARD)*(1.5*RATE);
		printf("���нˮ��%f",salary);
	}
	else
	{
		salary=RATE*hours;
		printf("���нˮ��%f",salary);
	}
	 return 0;
	 
	
} 
