#include<stdio.h>
int main()
{
	char c;
	c=getchar();
	while(c!='\n')
	{
		if(c>='a'&&c<='z')c='a'+(c-'a'+3)%26;
		else if(c>='A'&&c<='Z')c='A'+(c-'A'-3+26)%26;
		putchar(c);
		putchar('\n');
		c=getchar();
	}
	return 0;
} 
