#include<stdio.h>
#include<string.h>
int main()
{
	struct student
	{
		char name[20];
		int score;
		int age;
	};
	struct student a[3],t;
	int i,j;
	for(i=0;i<3;i++)
	scanf("%d %s %d",&a[i].score,a[i].name,&a[i].age);
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(a[j].score>a[i].score)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<3;i++)
	printf("%s %d %d\n",a[i].name,a[i].score,a[i].age);
	return 0;
}
