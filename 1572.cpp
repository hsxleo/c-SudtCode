#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t,m,n,x=1;
	int a[100][100],b[100][100];
	int i,j,i2,j2;
	scanf("%d",&t);
	while(x!=t+1)
	{
		scanf("%d%d",&m,&n);
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		for(i=0;i<n;i++)
			  for(j=0;j<m;j++)
				  b[i][j]=a[m-j-1][i]; 
		printf("Case #%d:\n",x);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d",b[i][j]);
				if(j<m-1)
					printf(" ");
			}
			printf("\n");
		}
		x++;
	}
	system("pause");
	return 0;
}