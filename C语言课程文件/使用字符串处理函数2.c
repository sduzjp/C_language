/*#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100]="People's Republic of ";
	char str2[]="China"; 
	printf("%s\n%s\n",str1,str2);
	printf("%s\n",strcat(str1,str2));
	printf("%s\n",str1);//strcat(str1,str2)�ǰ�str2���ַ����ӵ�str1���棻 
	return 0;
 } */
/*#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100]="People's Republic of ";
	char str2[]="China"; 
	char str3[100];
	str3[100]=strcat(str1,str2);
	//�ַ����鲻�ܸ�ֵ���� 
	���ǿ����ø�ֵ��佫һ���ַ�����һ���ַ��ͱ��������ַ�������Ԫ�� �� 
	printf("%s\n%s\n",str1,str2);
	printf("%s\n%s\n",strcat(str1,str2),str3);
	printf("%s\n",str1);//strcat(str1,str2)�ǰ�str2���ַ����ӵ�str1���棻 
	return 0;
 } */
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[6]="China";//�ַ�����1�����㹻�󣡣� 
	char str2[]="People's Republic of"; 
	printf("%s\n%s\n",str1,str2);
	printf("%s\n",strcat(str1,str2));
	printf("%s\n",str1);//strcat(str1,str2)�ǰ�str2���ַ����ӵ�str1���棻 
	return 0;
 }
