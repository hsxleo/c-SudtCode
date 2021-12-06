#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int i,j;
	int a[20][20];
	while(scanf("%d",&n)!=-1&&n!=0)
	{
		int flag=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		for(i=1;i<n;i++)
			for(j=0;j<i;j++)
			{
				if(a[i][j]!=a[j][i])
				{
					flag=1;
				}
			}
			if(flag==0)
				printf("yes\n");
			else
				printf("no\n");
	}
	system("pause");
	return 0;
}