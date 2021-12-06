#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,m,t;
	int i,j,a[200];
	while(scanf("%d%d",&n,&m)!=-1)
	{
		if(n==0&&m==0)
			break;
		else
		{
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
			for(i=0;i<n-1;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(a[i]>a[j])
					{
						t=a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
			}
			if(m<=a[0])
			{
				for(j=n;j>=0;j--)
					a[j]=a[j-1];
				a[0]=m;
			}
			else if(m>=a[n-1])
				a[n]=m;
			else if(m>=a[i-1]&&m<=a[i])
			{
				for(j=n;j>i;j--)
				{
					a[j]=a[j-1];
				}
				a[j]=m;
			}
		}
		for(i=0;i<=n;i++)
		{
			printf("%d",a[i]);
			if(i<n)
				printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}