#include<stdio.h>
int a,b,cnt=0;
int main()
{
	printf("������һ����������");
	scanf("%d",&a);
	b=a;
	do
	{	
	a/=10;
	cnt++;
	} while(a>0); 
    printf("%d�Ǹ�%dλ��",b,cnt);
    return 0;
}
