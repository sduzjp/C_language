#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	char str[10][20];
	int i,j;
	for(i=0;i<10;i++)
	scanf("%s",str[i]);
	for(i=0;i<9;i++)
	{
		/*for(j=0;j<9-i;j++)
		{
			if(strcmp(str[j],str[j+1])<0)
			{
				strcpy(str1,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],str1);	
			}
		}*/
		/*for(j=9;j>i;j--)
		{
			if(strcmp(str[j],str[j-1])<0)
			{
				strcpy(str1,str[j]);
				strcpy(str[j],str[j-1]);
				strcpy(str[j-1],str1);	
			}
		}*/
		for(i=0;i<9;i++)
		{
			for(j=i+1;j<10;j++)
			{
				if(strcmp(str[i],str[j])<0)
				{
					strcpy(str1,str[j]);
					strcpy(str[j],str[i]);
					strcpy(str[i],str1);
				}
			}
		}
	}
	printf("the max is %s\n",str[0]);
	for(i=0;i<10;i++)
	printf("%s\n",str[i]);
	return 0;
}
