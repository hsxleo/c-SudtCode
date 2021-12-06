#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[100];
	int i;
	while(gets(str)!=NULL)
	{
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]>='A' && str[i]<'Z')
				str[i]=str[i]+33;
			else if(str[i]=='Z')
				str[i]='a';
			else if(str[i]>='a'&&str[i]<='c')
				str[i]='2';
			else if(str[i]>='d'&&str[i]<='f')
				str[i]='3';
			else if(str[i]>='g'&&str[i]<='i')
				str[i]='4';
			else if(str[i]>='j'&&str[i]<='l')
				str[i]='5';
			else if(str[i]>='m'&&str[i]<='o')
				str[i]='6';
			else if(str[i]>='p'&&str[i]<='s')
				str[i]='7';
			else if(str[i]>='t'&&str[i]<='v')
				str[i]='8';
			else if(str[i]>='w'&&str[i]<='z')
				str[i]='9';
		}
		puts(str);
	}
	system("pause");
	return 0;
}