#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str1[10000],str2[10000];
	int i,m,n;
	gets(str1);
	gets(str2);
	m=strlen(str1);
	n=strlen(str2);
	for(i=0;i<n;i++)
	{
		str1[m+i]=str2[i];
	}
//	str1[m+n]='\0';
	puts(str1);
	system("pause");
	return 0;
}