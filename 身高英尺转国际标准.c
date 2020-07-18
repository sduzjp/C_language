#include<stdio.h>

double foot;
double inch;
main(void)
{
	printf("请输入身高，英尺，寸\n");
    scanf("%lf %lf",&foot,&inch);
    printf("身高=%f",(foot+inch/12)*0.3048);
    return 0; 
}

