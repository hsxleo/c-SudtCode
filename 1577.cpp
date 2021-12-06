#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	char str[101];
	int i,j;
	int m;
	int x=0,y=0;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(str);
		m=strlen(str);
		x+=m;
		for(j=0;j<m;j++)
		{
			if(str[j]=='*')
			{
				y++;
			}
		}
	}
	printf("%.2lf\n",1-(y*1.0/x));
}