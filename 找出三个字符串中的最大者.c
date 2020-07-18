#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	char str1[3][20];
	int i;
	for(i=0;i<3;i++)
	scanf("%s",str1[i]);
	if(strcmp(str1[0],str1[1])>0)
	strcpy(str,str1[0]);
	else strcpy(str,str1[1]);
	if(strcmp(str1[2],str)>0)
	strcpy(str,str1[2]);
	printf("%s",str);
	return 0;
 } 
