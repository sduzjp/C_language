/*#include<stdio.h>
int main()
{
	int a=100,b=10;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	printf("*p1=%d,*p2=%d\n",*p1,*p2);
	
	return 0;
 } */
#include<stdio.h>
int main()
{
	int a,b;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	*p1=100;
	*p2=10;
	printf("*p1=%d,*p2=%d\n",*p1,*p2);
	printf("a=%d,b=%d\n",a,b);
	printf("%d %d",p1,p2);
	return 0;
} 
