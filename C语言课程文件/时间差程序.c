#include <stdio.h>

int main()
{
	int hour1, minute1;
    int hour2, minute2; 
    
	printf("�������һ��ʱ�䣺");
	scanf("%d %d", &hour1,&minute1);
	
	printf("������ڶ���ʱ�䣺");
	scanf("%d %d", &hour2,&minute2);
	
	int ih,im; 
	ih = hour2 - hour1;
    im = minute2 - minute1;
    
	if( im < 0 )
	{
		im=60+im;
		ih--;
	}
	
    printf("ʱ�����%dСʱ%d���ӡ�",ih,im);
    
	return 0;
}
