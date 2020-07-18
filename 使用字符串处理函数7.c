#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="zhoujianping";
	char str2[]="I LOVE YOU";
	printf("%s\n%s\n",strupr(str1),strlwr(str2));
	//strlwr将大写字母小写化，strupr将小写字母大写化！ 
	
	return 0;
 } 
