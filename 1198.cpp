#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m,n;
	int i,j,Array[11][11];
	int flag,flag2=0,t1,t2,k,h;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&Array[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		h = -1e7;
		for(j=0;j<n;j++)
		{
			if(Array[i][j]>h)
			{
				h = Array[i][j];
				t2=j;
			}
		}
		for(k=0,flag=0;k<m;k++)
		{
			if(Array[i][t2]>Array[k][t2]&&k!=i)
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			printf("Array[%d][%d]=%d\n",i,t2,Array[i][t2]);
			break;
		}
		flag2++;
		if(flag2==m)
			printf("None\n");
	}
	system("pause");
	return 0;
}