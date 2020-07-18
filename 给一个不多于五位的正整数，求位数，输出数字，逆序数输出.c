#include<stdio.h>
int main()
{
	int n;
	int a,b,c,d,e,f,ret=0;
	scanf("%d",&n);
	//求出它是几位数？ 
	if(n>=10000)printf("n是一个五位数\n"); 
	else if(n>=1000&&n<10000)printf("n是一个四位数\n"); 
	else if(n>=100&&n<1000)printf("n是一个三位数\n"); 
	else if(n>=10&&n<100)printf("n是一个二位数\n"); 
	else if(n>=1&&n<10)printf("n是一个一位数\n"); 
	//从高到低分别输出每一位数字 
	a=n/10000;
	b=n%10000/1000;
	c=n%1000/100;
	d=n%100/10;
	e=n%10;
	if(a!=0)printf("%d %d %d %d %d\n",a,b,c,d,e);
	else if(b!=0)printf("%d %d %d %d\n",b,c,d,e);
	else if(c!=0)printf("%d %d %d\n",c,d,e) ;
	else if(d!=0)printf("%d %d\n",d,e) ;
	else if(e!=0)printf("%d\n",e) ;
	//按逆序输出各位数字 
	do{
		f=n%10;
		ret=ret*10+f;
		n/=10;
	}while(n!=0);
	printf("ret=%d",ret);
	return 0;
 } 
