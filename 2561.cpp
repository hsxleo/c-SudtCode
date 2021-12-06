#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,j,x;
	while(scanf("%d",&n)!=-1)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<i;j++)
			{
				x=i*j;
				printf("%d*%d=%d ",j,i,x);
			}
			printf("%d*%d=%d",i,i,i*i);
			printf("\n");
		}
	}
	system("pause");
	return 0;
}