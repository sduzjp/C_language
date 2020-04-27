#include<stdio.h>
void fact(int a,int b)
{
	int fact=1;
	int i;
	for(i=a;i<=b;i++)
	{
		fact*=i;
	}
	printf("fact=%d\n",fact);
 } 

int main()
{
	int x,y;
	do
	{
	    printf("请输入两个正整数：");
		scanf("%d %d",&x,&y);
		fact(x,y);
    }while(x!=0);
	
	return 0;
}
