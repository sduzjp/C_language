#include<stdio.h>

double foot;
double inch;
main(void)
{
	printf("��������ߣ�Ӣ�ߣ���\n");
    scanf("%lf %lf",&foot,&inch);
    printf("���=%f",(foot+inch/12)*0.3048);
    return 0; 
}

