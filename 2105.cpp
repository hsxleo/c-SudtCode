#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m,n;
	int i,j,a[100],t;
	scanf("%d%d",&m,&n);
	while(m--)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
			if(i<n-1)
				printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}