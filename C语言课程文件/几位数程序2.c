#include<stdio.h>
int a,b,cnt=0;
int main()
{
	printf("������һ����������");
	scanf("%d",&a);
	b=a;
	a/=10;
	cnt++;
	while(a>0)
	{
		a/=10;
		cnt++;
	}
    printf("%d�Ǹ�%dλ��",b,cnt);
    return 0;
}
