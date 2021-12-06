#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[10],str2[10];
	gets(str);
	gets(str2);
	if(str[0]=='R'&&str2[0]=='S'||str[0]=='S'&&str2[0]=='C'||str[0]=='C'&&str2[0]=='R')
		printf("Win\n");
	else if(str[0]=='S'&&str2[0]=='R'||str[0]=='C'&&str2[0]=='S'||str[0]=='R'&&str2[0]=='C')
		printf("Lose\n");
	else
		printf("Equal\n");
	system("pause");
	return 0;
}