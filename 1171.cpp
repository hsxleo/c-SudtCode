#include <stdio.h>
#include <stdlib.h>
int main()
{
	char n;
	char str1[100];
	int i=0,j;
	str1[0]=0;
	while(str1[i]!='\n')
	{
		i++;
		scanf("%c",&str1[i]);
	}
	for(j=1;j<=i;j++)
	{
		if(str1[j]>='0'&&str1[j]<='9')
			printf("%c",str1[j]);
		else if(str1[j]=='\n')
			break;
		else
		{
			while(!(str1[j]>='0'&&str1[j]<='9')&&str1[j]!='\n')
			{
				j++;
			}
			if(str1[j]=='\n')
				printf("*");
			else
				printf("*%c",str1[j]);
		}
	}
	system("pause");
	return 0;
}