#include<stdio.h>
#define N 10
int main()
{
	int x,psum,nsum,i;

	for(i=0,psum=0,nsum=0;i<N;i++)
	{
		scanf("%d",&x);
		if(x==0)break;
		//else if(x>0) psum+=x;
		//else nsum+=x;
		if(x>0)
		{
			psum+=x;
			continue;
		}
		nsum+=x;
	}
	printf("psum=%d,nsum=%d",psum,nsum);
	return 0;
}
