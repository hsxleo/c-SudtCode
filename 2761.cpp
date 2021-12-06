#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[10001];
	int i,j,n;
	int count;
	while(scanf("%s",str)!=-1)
	{
		int a[10001]={0};
		count=0;
		n=strlen(str);
		for(i=0;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(str[i]==str[j])
				{
					a[i]=-10000;
					continue;
				}
			}
			for(j=i+1;j<n;j++)
			{
				if(str[i]==str[j])
				{
					a[i]++;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]>1)
				printf("%d%c",a[i],str[i]);
			else if(a[i]==1)
				printf("%c",str[i]);
		}
		printf("\n");
		
	}
	system("pause");
	return 0;
}