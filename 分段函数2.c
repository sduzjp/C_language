#include<stdio.h>
int main()
{
	float fx(float x);
	float x;
	scanf("%f",&x);
	printf("%f\n",fx(x));
	return 0;
 } 
float fx(float x)
{
	float y;
	if(x<1) y=x;
	else if(x>=1&&x<10) y=2*x-1;
	else y=3*x-11;
	return y;
}
