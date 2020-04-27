#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%3==0&&n%5==0)printf("n可同时被3和5整除\n");
	else printf("n不可同时被3和5整除\n");
	return 0;
 } 
