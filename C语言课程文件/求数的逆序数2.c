#include<stdio.h>
int x,t;
int main()
{
	printf("������һ����������");
	scanf("%d",&x);
	while(x>0)
	{
    	t=x%10;
        x/=10;
        printf("%d",t);
        if(t>0)
		{
		printf(" ",t);
		}
		 
	}
	return 0;
}
