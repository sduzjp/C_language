#include<stdio.h>
int x,m,n;

int main()
{
	printf("������������������");
	scanf("%d %d",&m,&n);
	for(x=m;x<=n;x++)
    {
    	int i; 
        int isprime=1;
    
	    for(i=2;i<x;i++)
	    {
		   int a=x%i;
	  
		   if(a==0)
		   {
		      isprime=0;
		      break;
		   }
	
	    } 
	    if(isprime==1)
	   {
	 	  printf("x=%d������\n",x);
	   }
    }
	 return 0;
 } 
