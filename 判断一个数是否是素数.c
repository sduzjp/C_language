#include<stdio.h>
int x;
int i; 
int isprime=0;
int main()
{
	printf("请输入一个正整数：");
	scanf("%d",&x); 
	for(i=2;i<x;i++)
	{
		int a=x%i;
	  
		if(a==0)
		{
		    isprime=1;
		}
	
	 } 
	 if(isprime==1)
	 {
	 	printf("x=%d不是素数",x);
	 }
	 else{
	 	printf("x=%d是素数",x);
	 }
	 return 0;
 } 
