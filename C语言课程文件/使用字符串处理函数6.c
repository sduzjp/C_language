#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="I LOVE YOU";
	char str2[]="China";
	int m,n,p;
	m=strlen(str1);
	n=strlen(str2);
	p=strlen("zhoujianping");
	printf("%d %d %d\n",m,n,p);//�����ַ������ȣ�������'\0'�� 
	return 0;
 } 
