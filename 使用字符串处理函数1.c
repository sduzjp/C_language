/*#include<stdio.h>
#include<string.h>
int main()
{
	//char c[100]="I LOVE YOU";
	//char c1[100]="I LOVE YOU FOREVER";
	char c[100],c1[100];
	gets(c);
	gets(c1);
	puts(c);
	puts(c1);
	return 0; 
}*/
#include<stdio.h>
#include<string.h>
int main()
{
	//char c[100]="I LOVE YOU";
	//char c1[100]="I LOVE YOU FOREVER";
	char c[100],c1[100];
	gets(c,c1);
	puts(c,c1);//puts,gets只能输出、输入一个字符串！！ 
	return 0; 
}
