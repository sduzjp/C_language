#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("����������������");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			max=a;
			printf("�����Ǹ�����%d",max);
		}
		else{
			max=c;
			printf("�����Ǹ�����%d",max);
		}
	}
	else{
		if(b>c)
		{
			max=b;
			printf("�����Ǹ�����%d",max);
		}
		else{
			max=c;
			printf("�����Ǹ�����%d",max);
		}
	} 
	return 0;
 } 
