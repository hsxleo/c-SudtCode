#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[100000],str2[100000];
	char c;
	int i,j,count=0;
	gets(str);
	scanf("%c",&c);
	for(i=0,j=0;str[i]!='\0';i++)
	{
		if(str[i]!=c)
		{
			str2[j]=str[i];
			count++;
			j++;
		}
	}
	for(i=0;i<count;i++)
	{
		printf("%c",str2[i]);
	}
	system("pause");
	return 0;
}