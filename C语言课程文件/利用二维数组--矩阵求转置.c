#include<stdio.h>
int main()
{
	int i,j;
	int a[2][3],b[3][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);//输入数组元素数值时要加地址符！！区分输入字符数组 
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		b[j][i]=a[i][j];
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",a[i][j]);
		if(j==3)printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		printf("%d ",b[i][j]);
		if(j==2)printf("\n");
	 } 
	return 0;
 } 
