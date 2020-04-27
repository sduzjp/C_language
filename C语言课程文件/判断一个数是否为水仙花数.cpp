#include<stdio.h>
int chengfang(int p,int m);
void issxhs(int n,int m);
int main()
{

	int n,m;
	scanf("%d%d",&n,&m);
	issxhs(n,m);
	return 0;
}
void issxhs(int n,int m)
{
	int p,temp,t=0;
	temp=n;
	while(n>0)
	{
		p=n%10;
		t=t+chengfang(p,m);
		n=n/10;
	}
	if(temp==t)
	printf("true");
	else
	printf("false");
}
int chengfang(int p,int m)
{
	int t=1,i;
	for(i=1;i<=m;i++)
	t*=p;
	return t;
}
