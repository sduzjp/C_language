#include<stdio.h>
int x;
int i; 
int isprime=0;
int main()
{
	printf("������һ����������");
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
	 	printf("x=%d��������",x);
	 }
	 else{
	 	printf("x=%d������",x);
	 }
	 return 0;
 } 
