#include<stdio.h>
#include<string.h>
int main()
{
	void sort(char *a[],int n);
	void print(char *a[],int n);
	char *a[]={"Follow me","BASIC","Great wall","FORTAIN","Computer design"};
	int n=5;
	sort(a,n);
	print(a,n);
	return 0;
 }
void sort(char *a[],int n)
{
	int i,j;
	char *p;
	p=NULL;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		if(strcmp(a[j],a[i])<0)
		{
			p=a[i];
			a[i]=a[j];
			a[j]=p;
		}
	}
}
void print(char *a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%s\n",a[i]);
}
