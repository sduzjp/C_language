#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="China";
	char str2[]="Korea";
	int m,n,p;
	p=strcmp(str1,"China");
	m=strcmp(str1,str2);
	n=strcmp(str2,str1);
	printf("%d %d %d\n",m,n,p);//1>2则函数值为正整数，反之为负整数；1=2则为0！ 
	return 0;
 } 
