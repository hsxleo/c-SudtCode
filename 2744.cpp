#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int i,j,a[50][50],b[50][50];
	int flag,flag2,flag3,flag4;
	while(scanf("%d",&n)!=-1)
	{
		flag=0;
		flag2=0;
		flag3=0;
		flag4=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&b[i][j]);
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(b[i][j]!=a[n-j-1][i])
					flag=1;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(b[i][j]!=a[n-i-1][n-j-1])
					flag2=1;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(b[i][j]!=a[j][n-i-1])
					flag3=1;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(b[i][j]!=a[i][j])
					flag4=1;
		if(flag==0||flag2==0)
			printf("YES\n");
		else if(flag3==0||flag4==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	system("pause");
	return 0;
}