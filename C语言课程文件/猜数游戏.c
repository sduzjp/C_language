#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
    int number=rand()%1000+1;
    int count=0;
    int a=0;
	printf("���Ѿ������һ��1��1000֮�������");
	do{
		printf("���һ���������");
		scanf("%d",&a);
		count++;
		if(a>number)
		{
			printf("��µ������ˡ�");
		 } 
		 else if(a<number){
		 	printf("��µ���С�ˡ�");
		 }
	}while(a!=number);
	printf("̫���ˣ�������%d�ξͲ³��������%d",count,number);
	return 0;
 } 

