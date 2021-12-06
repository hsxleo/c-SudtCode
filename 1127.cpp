#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i)*2;j++)
		{
			printf(" ");
		}
		if(i==1)
			printf("*");
		else
		{
			printf("*");
			for(j=1;j<=4*i-5;j++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=(n-i)*2;j++)
		{
			printf(" ");
		}
		if(i==1)
			printf("*");
		else
		{
			printf("*");
			for(j=1;j<=4*i-5;j++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}