/*#include<stdio.h>
int main()
{
	int i,j;
	int a[][4]={{1},{2},{}};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d ",a[i][j]);	
		if(j==4)printf("\n");
	}
	return 0;
 } */
#include<stdio.h>
int main()
{
	int i,j;
	int a[][4]={1,2,3};//��������Ļ�����Ԫ��ֵ��һ��Ϊ0���� 
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d ",a[i][j]);	
		if(j==4)printf("\n");
	}
	return 0;
 } 
