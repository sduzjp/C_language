#include<stdio.h>
int main()
{
	int a[10];
	int i,*p;
	for(i=0;i<10;i++)
	a[i]=i+1; 
	p=a+5;
	printf("%d\n",*p++);//6
	printf("%d\n",*p--);//7
	printf("%d\n",*++p);//7
	printf("%d\n",*--p);//6
	printf("%d\n",++*p);//7
	printf("%d\n",--*p);//6
	printf("%d\n",(*p)++);//6
	printf("%d\n",(*p)--);//7
	return 0;
}
