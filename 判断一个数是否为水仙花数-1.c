#include<stdio.h>
#include<math.h>
int main()
{
	void issxhs(int n,int m);
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
		t=t+pow(p,m);
		n=n/10;
	}
	if(temp==t)
	printf("true");
	else
	printf("false");
}

