#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	char str2[]="I LOVE YOU";
	//char str3[100];
	//strcpy(str1,str2);
	//strcpy(str3,"I LOVE YOU!");
	printf("%s\n%s\n",strcpy(str1,"I LOVE YOU!"),strcpy(str1,str2));
	printf("%s\n%s\n",strcpy(str1,str2),strcpy(str1,"I LOVE YOU!"));
	//�ַ���2�������ַ������������ַ����� 
	//Ϊʲô��һ��printf�е������������strcpy��������������ǰ����� 
	return 0;
}
