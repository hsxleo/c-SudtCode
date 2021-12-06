#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m,n;
	int i,j,k;
	int sum;
	while(scanf("%d%d",&m,&n)!=-1&&m||n)
	{
		k=0;
		int a[1000]={0};
		for(i=m;i<n;i++)
		{
			sum=0;
			for(j=1;j<i;j++)
			{
				if(i%j==0)
				{
					sum=sum+j;
				}
			}
			if(sum==i)
			{
				a[k]=i;
				k++;
			}
		}
		if(k==0)
			printf("No\n");
		else
		{
			for(i=0;i<k;i++)
			{
				if(i==k-1)
					printf("%d\n",a[i]);
				else
					printf("%d ",a[i]);
			}
		}
	}
	system("pause");
	return 0;
}
