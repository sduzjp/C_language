#include<stdio.h>
int main()
{
	int a[2][3];
	int i,j,row,column,max;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	max=a[0][0];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
			row=i;
			column=j;
		}
	}
	printf("max=%d row=%d column=%d\n",max,row,column);
	return 0;
 } 
