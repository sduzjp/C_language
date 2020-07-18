#include<stdio.h>
int main()
{
	char a[]="I LOVE YOU";
	char b[20];
	int i;
	/*for(i=0;*(a+i)!='\0';i++)
	*(b+i)=*(a+i);
	*(b+i)='\0';*/
	/*for(i=0;*(a+i);i++)
	*(b+i)=*(a+i);
	*(b+i)='\0';*/
	for(i=0;*(b+i)=*(a+i);i++);
	printf("%s\n",a);
	printf("%s\n",b); 
	return 0;
 } 
