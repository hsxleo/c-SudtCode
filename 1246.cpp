#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[50];
	int i,j,n;
	int flag,t;
	while(scanf("%d",&n)!=-1)
	{
		getchar();
		for(i=0;i<n;i++)
		{
			flag=0;
			gets(str);
			t=strlen(str);
			for(j=0;j<t;j++)
			{
				if(str[0]>='A'&&str[0]<='Z'||str[0]>='a'&&str[0]<='z'||str[0]=='_')
					if(str[j]>='A'&&str[j]<='Z'||str[j]>='a'&&str[j]<='z'||str[j]=='_'||str[j]>='0'&&str[j]<='9')
						continue;
					else
					{
						flag=1;
						printf("no\n");
						break;
					}
				else
				{
					flag=1;
					printf("no\n");
					break;
				}
			}
			if(t==0)
				printf("no\n");
			else if(flag==0)
				printf("yes\n");
		}
	}
	system("pause");
	return 0;
}