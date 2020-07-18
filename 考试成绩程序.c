#include<stdio.h>
const int PASS=60;
int score;
int main()
{
	printf("请输入你的考试成绩：");
	scanf("%d",&score);
	if(score>PASS)
	{
		printf("恭喜您，及格了！"); 
	 } 
	 else{
	 	printf("很抱歉，您挂科了！");
	 }
	 printf("再见！");
	 return 0; 
	 
}
