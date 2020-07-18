#include<stdio.h>
int main()
{
	void copystring(char a[],char b[]);
	char *a="I LOVE YOU";
	char str[20],*b;//="I HATE YOU";
	b=str;
	copystring(a,b);
	printf("%s\n%s\n",a,b);
	return 0;
 } 
void copystring(char a[],char b[])
{
	int i;
	/*for(i=0;a[i]!='\0';i++)
	b[i]=a[i];
	b[i]='\0';*/
	/*for(i=0;a[i];i++)
	b[i]=a[i];
	b[i]='\0';*/
	for(i=0;b[i]=a[i];i++);
	
}
