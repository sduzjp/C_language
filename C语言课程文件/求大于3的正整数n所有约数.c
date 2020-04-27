#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	/*for(i=1;i<=n;i++)
	//if(n%i==0)printf("%d ",i);
	if(!(n%i))printf("%d ",i);
	printf("\n"); */
	int j=0;
	for(i=1;i<=n;i++)
	if(!(n%i))
	{
		printf("%d ",i);
		j++;
		if(!(j%5))printf("\n");
	};
	
	
	return 0;
}  
