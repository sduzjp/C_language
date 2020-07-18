#include<stdio.h>
void prn_star(int n);
int main()
{
	int n;
	scanf("%d",&n);
	prn_star(n);
	return 0;
 } 
 void prn_star(int n)
 {
 	int i;
 	for(i=1;i<=n;i++)
 	{
 		printf("*");
	 }
	 printf("\n");
 }
