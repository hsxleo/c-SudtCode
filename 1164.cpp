#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,a[100][100],b[100][100];
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][n-i-1]=a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",b[i][j]);
			if(j<n-1)
				printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}