#include<stdio.h>
#include<math.h>
int main()
{
	int i,flag;
	int n=2,j=0;
	//int k;
	
	while(1)
	{
		//k=sqrt(n);
		//for(i=2,flag=1;i<=k;i++)
		for(i=2,flag=1;i<n;i++)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			printf("%d ",n);
			j++;
			if(j==5)printf("\n");
		}
		n++;
		if(j==10)break;
	}
	return 0;
 } 
