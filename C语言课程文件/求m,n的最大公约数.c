//#include<stdio.h>
//int main()
//{
//	int m,n,p,i;
//	scanf("%d %d",&m,&n);
//	p=m%n;//Ĭ������ʱm>=n;
//	while(p!=0)
//	{
//		p=m%n;
//		if(p==0)break;//������û�иĽ��ķ����� 
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
	p=m%n;//Ĭ������ʱm>=n;
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
