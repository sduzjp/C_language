#include<stdio.h>
void diecheng(int a,int b); 

int main()
{
	int a,b; 
	printf("������������������");
	scanf("%d %d",&a,&b);
	diecheng(a,b);
	
	return 0;
}

void diecheng(int a,int b)
{
	int i;
	int diecheng=1;
	for(i=a;i<=b;i++)
	{
		diecheng*=i;
	}
	printf("diecheng=%d\n",diecheng);
}
 
