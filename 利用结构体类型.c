#include<stdio.h>
#include<string.h>
int main()
{
	void score(int (*p)[4]);
	struct student
	{
		char name[20];
		int number[12];
		int score[3][4];
		int age;
		char sex;
	};
	struct student student1;
	int i,j;
	strcpy(student1.name,"zjp");
	printf("请输入你的学号：");
	for(i=0;i<12;i++)
	scanf("%d",&student1.number[i]);
	printf("请输入你的成绩：");
	score(student1.score);
	printf("请输入你的年龄：");
	scanf("%d",&student1.age);
	//scanf("%c",&student1.sex);
	student1.sex=getchar();
	printf("\n%s\n",student1.name);
	for(i=0;i<12;i++)
	printf("%d ",student1.number[i]);
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d ",student1.score[i][j]);
		printf("\n");
	}
	printf("student1.age=%d\n",student1.age);
	printf("student1.sex=%c\n",student1.sex);
	return 0;
}
void score(int (*p)[4])
{
	int i;
	int (*pt)[4];
	for(pt=p;pt<p+3;pt++)
	{
		for(i=0;i<4;i++)
		scanf("%d",*pt+i);
	}
}
