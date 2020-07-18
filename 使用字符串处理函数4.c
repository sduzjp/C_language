#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	char str2[100]="I LOVE YOU FOREVER £¡";
	printf("%s\n",strncpy(str1,str2,100)); 
	return 0;
 } 
