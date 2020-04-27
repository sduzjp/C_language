#include<stdio.h>
int main()
{
	float average(int *p,int n);
	int search_n_score(int (*p)[4],int n);
	int score[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
	int n_sum;
	float aver;
	aver=average(*score,12);
	n_sum=search_n_score(score,2);
	printf("%5.2f\n%d\n",aver,n_sum);
	return 0;
}
float average(int *p,int n)
{
	int *p1;
	float sum=0;
	p1=p+n;
	for(;p<p1;p++)
	sum+=(*p);
	return (sum/12.0);
}
int search_n_score(int (*p)[4],int n)
{
	int i,sum=0;
	for(i=0;i<4;i++)
	sum=sum+(*(*(p+n)+i));
	return sum;
}
