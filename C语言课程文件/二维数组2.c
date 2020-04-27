#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	int a[][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	//定义数组时可省略第一维的长度！但第二维不可以省略！ 
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d ",a[i][j]);	
		if(j==4)printf("\n");
	}
	return 0;
 } 
