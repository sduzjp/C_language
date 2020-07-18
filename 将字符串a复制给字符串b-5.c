#include<stdio.h>
int main()
{
	void copystring1(char *a,char *b);
	char *a="I LOVE YOU";
	char str[20],*b;
	b=str;
	copystring1(a,b);
	printf("%s\n%s\n",a,b);
	return 0;
}
void copystring1(char *a,char *b)
{
	int i;
	/*for(i=0;*(a+i)!='\0';i++)
	*(b+i)=*(a+i);
	*(b+i)='\0';*/
	/*for(i=0;*(a+i);i++)
	*(b+i)=*(a+i);
	*(b+i)='\0';*/
	//for(i=0;*(b+i)=*(a+i);i++);
	for(;*b=*a;a++,b++);
}
	
