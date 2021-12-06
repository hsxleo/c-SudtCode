#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,k;
	int n,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		for(j=1;j<=a;j++)
		{
			for(k=1;k<=j;k++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}