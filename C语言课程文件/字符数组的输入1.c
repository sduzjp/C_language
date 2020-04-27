/*#include<stdio.h>
int main()
{
	char c[100],c1[100],c2[100];
	scanf("%s%s%s",c,c1,c2);
	printf("%s %s %s!\n",c,c1,c2);
	return 0;
}*/
#include<stdio.h>
int main()
{
	char c[100],c1[100],c2[100];
	scanf("%s%s%s",&c,&c1,&c2);//这里输入项字符数组名，不要再加地址符&！！ 
	printf("%s %s %s!\n",c,c1,c2);
	return 0;
}
