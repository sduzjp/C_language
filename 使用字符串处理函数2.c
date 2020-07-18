/*#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100]="People's Republic of ";
	char str2[]="China"; 
	printf("%s\n%s\n",str1,str2);
	printf("%s\n",strcat(str1,str2));
	printf("%s\n",str1);//strcat(str1,str2)是把str2的字符串接到str1后面； 
	return 0;
 } */
/*#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100]="People's Republic of ";
	char str2[]="China"; 
	char str3[100];
	str3[100]=strcat(str1,str2);
	//字符数组不能赋值！！ 
	但是可以用赋值语句将一个字符赋给一个字符型变量或者字符型数组元素 。 
	printf("%s\n%s\n",str1,str2);
	printf("%s\n%s\n",strcat(str1,str2),str3);
	printf("%s\n",str1);//strcat(str1,str2)是把str2的字符串接到str1后面； 
	return 0;
 } */
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[6]="China";//字符数组1必须足够大！！ 
	char str2[]="People's Republic of"; 
	printf("%s\n%s\n",str1,str2);
	printf("%s\n",strcat(str1,str2));
	printf("%s\n",str1);//strcat(str1,str2)是把str2的字符串接到str1后面； 
	return 0;
 }
