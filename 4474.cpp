#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str1[80],str2[80];
	gets(str1);
	gets(str2);
	if(strcmp(str1,str2)>0)
		puts(str1);
	else
		puts(str2);
	system("pause");
	return 0;
}

