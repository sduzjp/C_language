#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int A;
int main(int argc, char *argv[]) 
{
 	int power(int),b=3,c,d,m;
  	printf("enter the number a and its power m:\n");
   	scanf("%d%d",&A,&m);
   	c=A*b;
   	printf("%d*%d=%d\n",A,b,c);
   	d=power(m);
   	printf("%d**%d=%d\n",A,m,d);
   	return 0;
}
