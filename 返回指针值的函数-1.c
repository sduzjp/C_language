#include<stdio.h>
int main()
{
	int *search(int (*p)[4]);
	int score[3][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	int i,j,*p;
	for(i=0;i<3;i++)
	{
		p=search(score+i);
		if(p==*(score+i))
		{
			printf("No.%d score:",i);
			for(j=0;j<4;j++)
			printf("%d ",*(p+j)); 
			printf("\n"); 
		} 
	}
	return 0;
}
int *search(int (*p)[4])
{
	int *pt=NULL;
	int i;
	for(i=0;i<4;i++)if(*(*p+i)<60)pt=*p;
	return pt;
}
