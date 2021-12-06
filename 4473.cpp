#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void fun(char str1[])
{
	int i=0,j;
	char str2[80];
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	for(j=0;j<i;j++)
		str1[i-j-1]=str2[j];
}
void main()
{
	char str1[80];
	printf("Enter Str1: \n");
	gets(str1);
	fun(str1);
	printf("Result is: %s\n",str1);
	system("pause");
}
