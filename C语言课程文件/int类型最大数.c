#include<stdio.h>
int main()
{
	int a=0,count=1,b=1;
	while(++a>0);
	printf("int类型最大数是%d\n",a-1);
	while(count<32)
	{
		b*=2;
		count++;
	}
	printf("%d\n",b-1);
	return 0;
}
