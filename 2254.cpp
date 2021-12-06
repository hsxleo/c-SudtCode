#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m,n,x,i,j,t;
	char a[1000][1000];
	scanf("%d%d",&m,&n);
	t=m;
	if(t%2!=0)
		t=t+1;
	t=t/2;
	x=0;
	a[0][0]='A';
	while(t--)
	{
		for(i=x,j=x;j<n-x;j++)
		{
			if(!(i==0&&j==0))
			{
               a[i][j]=a[i][j-1]+1;
			   if(a[i][j-1]=='Z')
				   a[i][j]='A';
			}
		}
		if(m%2!=0&&t==0)
			break;
	//	for(j=0;j<n;j++)
	//		printf("%c ",a[0][j]);
		for(j=n-1-x,i=1+x;i<m-x;i++)
		{
			a[i][j]=a[i-1][j]+1;
			if(a[i-1][j]=='Z')
				a[i][j]='A';
		}
	//	for(i=0;i<m;i++)
	//		printf("%c ",a[i][n-1]);
		for(i=m-1-x,j=n-2-x;j>=0+x;j--)
		{
			a[i][j]=a[i][j+1]+1;
			if(a[i][j+1]=='Z')
				a[i][j]='A';
		}
		for(j=x,i=m-2-x;i>=1+x;i--)
		{
			a[i][j]=a[i+1][j]+1;
			if(a[i+1][j]=='Z')
				a[i][j]='A';
		}
		x++;
	}
	for(i=0;i<m;i++)
	{
		printf(" ");
		for(j=0;j<n;j++)
		{
			printf("%c",a[i][j]);
            if(j<n-1)
				printf(" ");
			if(j==n-1)
				printf("\n");
		}
	}
	system("pause");
	return 0;
}