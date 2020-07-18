#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	extern void enter_string(char *);
  	extern void delete_string(char *,char);
  	extern void prin_string(char *);
  	char c, str[80];
  	enter_string(str);
  	scanf("%c",&c);
  	delete_string(str, c);
  	prin_string(str);
  	return 0;
}
