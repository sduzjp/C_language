#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
    int number=rand()%1000+1;
    int count=0;
    int a=0;
	printf("我已经想好了一个1到1000之间的数：");
	do{
		printf("请猜一猜这个数。");
		scanf("%d",&a);
		count++;
		if(a>number)
		{
			printf("你猜的数大了。");
		 } 
		 else if(a<number){
		 	printf("你猜的数小了。");
		 }
	}while(a!=number);
	printf("太棒了，你用了%d次就猜出了这个数%d",count,number);
	return 0;
 } 

