#include<stdio.h>
#include<string.h>
int main()
{
	char str[81];
	int i,num=0,word=0;
	char c;
	gets(str);
	for(i=0;(c=str[i])!='\0';i++)
	{
		if(c==' ') word=0;
		else if(word==0)
		{
			word=1;
			num++;
		}
	}
	printf("There are %d words in this line.\n",num);
	return 0;
 } 
