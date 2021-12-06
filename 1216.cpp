#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int i,j,a[30][30];
	while(scanf("%d",&n)!=-1&&n!=0)
	{
		for(i=0;i<n;i++)
		{
			a[i][0]=1;
			for(j=0;j<i+1;j++)
			{
				if(i==j)
					a[i][j]=1;
			}
		}
		for(i=2;i<n;i++)
		{
			for(j=1;j<i;j++)
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<i+1;j++)
			{
				printf("%d",a[i][j]);
				if(j<i)
					printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}