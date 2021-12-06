#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i)*2;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(i==1)
				break;
			else
                printf("%d ",j);
		}
		for(j=i-1;j>1;j--)
		{
			printf("%d ",j);
		}
		printf("1\n");
	}
	system("pause");
	return 0;
}