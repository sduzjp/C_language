#include<stdio.h>
int main()
{
	int a,n,i=0,sum=0,mask=1;
	scanf("%d%d",&a,&n);
	while(i<n)
	{
		mask*=10;
		i++;
	 } 
	sum=10.0/9*(mask-1)-n;
	sum=a/9.0*sum;
	printf("%d",sum);
	return 0;
}
