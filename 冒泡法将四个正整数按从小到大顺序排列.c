#include<stdio.h>
int main()
{
	int m,n,p,q,t;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	//m=5;n=6;p=1;q=7;
	if(m>=n);
	else 
	{
		t=n;
		n=m;
		m=t; 
	}
	if(n>=p);
	else 
	{
		t=n;
		n=p;
		p=t;
	}
	if(p>=q);
	else
	{
		t=p;
		p=q;
		q=t;
	}
	if(n>=p);
	else
	{
		t=n;
		n=p;
		p=t;
	}
	if(m>=n);
	else
	{
		t=m;
		m=n;
		n=t;
	}
	printf("%d %d %d %d",q,p,n,m);
	return 0;
}
