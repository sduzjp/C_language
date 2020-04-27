#include<stdio.h>
int main()
{
	int k=1,sum1=0,sum2=0;
	double t,sum3=0.0,sum=0.0;
	for(k=1;k<=100;k++)sum1+=k;
	for(k=1;k<=50;k++)sum2+=k*k;
	for(k=1;k<=10;k++)
	{
		t=1.0/k;
		sum3+=t;
	}
	sum=sum1+sum2+sum3;
	printf("sum1=%d,sum2=%d,sum3=%lf,sum=%lf\n",sum1,sum2,sum3,sum);
	return 0;
}
