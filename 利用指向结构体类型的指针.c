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
	struct student *pa;
	pa=a;
	int i,j;
	for(i=0;i<3;i++)
	scanf("%d %s %d",&((*(pa+i)).score),(*(pa+i)).name,&((*(pa+i)).age));
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if((*(pa+j)).score>(*(pa+i)).score)
			{
				t=*(pa+j);
				*(pa+j)=*(pa+i);
				*(pa+i)=t;
			}
		}
	}
	for(i=0;i<3;i++)
	printf("%s %d %d\n",(*(pa+i)).name,(*(pa+i)).score,(*(pa+i)).age);
	return 0;
}
