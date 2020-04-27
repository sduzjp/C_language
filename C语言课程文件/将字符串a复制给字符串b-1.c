#include<stdio.h>
int main()
{
	char a[20]="I LOVE YOU";
	char b[20];
	char *p1,*p2;
	for(p1=a,p2=b;*p1!='\0';p1++,p2++)
	*p2=*p1;
	*p2='\0';
	printf("%s\n",a);
	printf("%s\n",b);
	for(p1=a;*p1!='\0';p1++)
	printf("%c",*p1);
	printf("\n");
	for(p2=b;*p2!='\0';p2++)
	printf("%c",*p2);
	printf("\n");	
	return 0;
}
