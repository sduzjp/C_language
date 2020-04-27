//#include<stdio.h>
//int main()
//{
//	int m,n,p,i;
//	scanf("%d %d",&m,&n);
//	p=m%n;//默认输入时m>=n;
//	while(p!=0)
//	{
//		p=m%n;
//		if(p==0)break;//这里有没有改进的方法？ 
//		m=n;
//		n=p;
//		
//	}
//	i=n;
//	printf("i=%d",i);
//	
//	return 0;
// } 
#include<stdio.h>
int main()
{
	int m,n,p,i;
	scanf("%d %d",&m,&n);
	p=m%n;//默认输入时m>=n;
	while(p!=0)
	{
		p=m%n;
		m=n;
		n=p;
		
	}
	i=m;
	printf("i=%d",i);
	
	return 0;
 } 
