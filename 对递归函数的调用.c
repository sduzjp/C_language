#include<stdio.h>
int fact(int n)
{
	if(n==0) return 1;
	else return (fact(n-1)*n);
 } 
void main()
{
	int n,s;
	scanf("%d",&n);
	s=fact(n);
	printf("%d!=%d",n,s);
}
