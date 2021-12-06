#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str1[8],str2[8];
	int a,b;
	gets(str1);
	gets(str2);
	a=strlen(str1);
	b=strlen(str2);
	printf("%d %d\n",a,b);
	if(a==b)
		printf("Equal\n");
	else if(a==4&&b==8||a==8&&b==5||a==5&&b==4)
		printf("Win\n");
	else if(a==4&&b==5||a==5&&b==8||a==8&&b==4)
		printf("Lose\n");
	system("pause");
	return 0;
}