#include<stdio.h>
int main()
{
	char *name[5]={"Follow me","BASIC","Great Wall","FORTAIN","Computer design"};
	char **p;
	p=name;
	int i;
	for(i=0;i<5;i++)
	{
		printf("%s\n",*(p+i));
	} 
	for(i=0;i<5;i++)
	{
		printf("%c\n",**(p+i));
	} 
	
	return 0;
 } 
