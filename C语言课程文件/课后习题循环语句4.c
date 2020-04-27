#include<stdio.h>
int main() 
{
	int i,count1=0,count2=0,count3=0,count4=0;
	char a[20];
	/*char a[5];
	a[0]=getchar();
	a[1]=getchar();
	a[2]=getchar();
	a[3]=getchar();
	a[4]=getchar();*/
	for(i=0;i<20;i++)
	a[i]=getchar();
	
	for(i=0;i<20;i++)
	{
		if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))count1++;
		else if(a[i]==32)count2++;
		else if(a[i]>='0'&&a[i]<='9')count3++;
		else count4++;
	}
	printf("count1=%d,count2=%d,count3=%d,count4=%d",count1,count2,count3,count4);
	return 0;
}
