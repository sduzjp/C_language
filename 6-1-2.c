#include<stdio.h>
int main()
{
	int a[100];
    int i,n;
    int j=0;
    int flag;
    for(i=0;i<100;i++)
    a[i]=i+1;
    for(i=1;i<100;i++)
    {
    	n=2;
    	flag=1;
    	while(n<a[i])
    	{
    		if(a[i]%n==0)flag=0;
    		n++;
		}
    	if(flag==1)
    	{
    		printf("%5d ",a[i]);
    		j++;
    		if(j%5==0)printf("\n");
		}
	}
	return 0;
}
