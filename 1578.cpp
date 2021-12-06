#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	int i,j;
	int m;
	int flag;
	char str[101][21];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		flag=0;
		gets(str[i]);
		m=strlen(str[i]);
		for(j=0;j<m;j++)
		{
			if(str[i][j]!=str[i][m-j-1])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	system("pause");
	return 0;
}