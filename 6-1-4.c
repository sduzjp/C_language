#include<stdio.h>
#include<math.h>
int main()
{
	int a[100];
    int i,n,k;
    int j=0;
    for(i=0;i<100;i++)
    a[i]=i+1;
    for(i=1;i<100;i++)
    {
    	k=sqrt(a[i]);
    	for(n=2;n<=k;n++)
    	if(a[i]%n==0)break;
    	if(n>k)
    	{
    		printf("%5d ",a[i]);
    		j++;
    		if(j%5==0)printf("\n");
		}
	}
	return 0;
}
