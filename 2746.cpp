#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[80];
	int i;
	while(gets(str)!=NULL)
	{
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]>='a'&&str[i]<='z')
				str[i]=str[i]-32;
			else if(str[i]>='A'&&str[i]<='Z')
				str[i]=str[i]+32;
		}
		printf("%s\n",str);
	}
	system("pause");
	return 0;
}