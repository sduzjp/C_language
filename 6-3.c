#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j,sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	sum+=a[i][i];
	printf("%d\n",sum);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%5d",a[i][j]);
		if(j==3)printf("\n");
	}
	return 0;
}
