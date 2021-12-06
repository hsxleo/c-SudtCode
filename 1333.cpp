#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str1[15],str2[15];
	int t;
	gets(str1);
	gets(str2);
	t=strcmp(str1,str2);
	if(t<0)
		printf("%s<%s",str1,str2);
	else if(t==0)
		printf("%s=%s",str1,str2);
	else if(t>0)
		printf("%s>%s",str1,str2);
	system("pause");
	return 0;
}