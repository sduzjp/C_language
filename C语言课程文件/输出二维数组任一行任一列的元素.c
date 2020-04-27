#include<stdio.h>
int main()
{
	int i,j;
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int (*p)[4];
	p=a;
	scanf("%d%d",&i,&j);
	printf("a[%d][%d]=%d\n",i,j,*(*(p+i)+j));
	printf("a[%d][%d]=%d\n",i,j,*(*(a+i)+j));
	printf("a[%d][%d]=%d\n",i,j,*(a[i]+j));
	printf("a[%d][%d]=%d\n",i,j,*(p[i]+j));
	printf("a[%d][%d]=%d\n",i,j,(*(p+i))[j]);
	printf("a[%d][%d]=%d\n",i,j,(*(a+i))[j]);
	printf("a[%d][%d]=%d\n",i,j,a[i][j]);
	return 0;
 } 
