#include<stdio.h>
int main()
{
	/*char string[]="I LOVE YOU";
	printf("%c",*(string+2));*/
	char *string,str[100];
	//string="I LOVE YOU";
	string=str;
	gets(string);
	puts(string);
	/*printf("%s\n",string);
	printf("%c\n",*string);*/
	return 0;
}
