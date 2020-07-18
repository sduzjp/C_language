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
	//字符串2可以是字符数组名或者字符串。 
	//为什么第一个printf中的输出表列两个strcpy是先算后面的再算前面的吗？ 
	return 0;
}
