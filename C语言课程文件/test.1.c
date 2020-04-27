#include<stdio.h>
int main()
{
	char t,s[5]="abcd";
	int i;
	t=s[3];
	for(i=3;i>0;i--)
	{
		s[i]=s[i-1];
	}
	s[0]=t;
	printf("%s",s);
	return 0;
 } 
