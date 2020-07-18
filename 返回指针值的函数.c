#include<stdio.h>
int main()
{
	int *search(int (*a)[4],int n);
	int score[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
	int i,*p;
	p=search(score,2);
	for(i=0;i<4;i++)
	printf("%d ",*(p+i));
	return 0;
 } 
int *search(int (*a)[4],int n)
{
	int *p;
	p=*(a+n);
	return p;
}

