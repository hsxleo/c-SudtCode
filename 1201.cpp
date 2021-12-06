#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[3][101];
	char t[101];
	int i,j;
	for(i=0;i<3;i++)
		scanf("%s",str[i]);
	for(i=1;i<3;i++)
	{
		for(j=1;j<3;j++)
		{
			if(strcmp(str[j],str[j-1])<0)
			{
				strcpy(t,str[j]);
				strcpy(str[j],str[j-1]);
				strcpy(str[j-1],t);
			}
		}
	}
	for(i=0;i<3;i++)
	{
		if(i==2)
			printf("%s\n",str[i]);
		else
			printf("%s ",str[i]);
	}
	system("pause");
	return 0;
}